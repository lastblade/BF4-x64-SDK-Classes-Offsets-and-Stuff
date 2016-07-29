

And for teleport, all they did was add a lame check to see if your player exceeds 11 meters in any direction, 
such function is at 0x140F86090, 48 89 5C 24 ? 57 48 83 EC 60 80 79 58 00


variables::dwTeleport[0] = 0x14037F255;//Tools::FindPattern(nullptr, reinterpret_cast<PBYTE>("\x48\x89\x79\x48\x89\x79\x50\x40\x88\x79\x54"), "xxxxxxxxxxx");
	memcpy(variables::dwTeleport0Bytes, reinterpret_cast<PBYTE>(variables::dwTeleport[0]), 4);

	variables::dwTeleport[1] = 0x14037F2C3;//Tools::FindPattern(nullptr, reinterpret_cast<PBYTE>("\x89\x43\x48\x8B\x44\x24\x38"), "xxxxxxx");
	memcpy(variables::dwTeleport1Bytes, reinterpret_cast<PBYTE>(variables::dwTeleport[1]), 3);

	variables::dwTeleport[2] = 0x14037F4B4; //Tools::FindPattern(nullptr, reinterpret_cast<PBYTE>("\x89\x73\x48\x89\xB3\x00\x00\x00\x0"), "xxxxx????");
	memcpy(variables::dwTeleport2Bytes, reinterpret_cast<PBYTE>(variables::dwTeleport[2]), 3);

	variables::dwTeleport[3] = 0x14037F584;//Tools::FindPattern(nullptr, reinterpret_cast<PBYTE>("\x89\x73\x48\xE9\x00\x00\x00\x00\xC7\x43\x00\x00\x00\x00\x00"), "xxxx????xx?????");
	memcpy(variables::dwTeleport3Bytes, reinterpret_cast<PBYTE>(variables::dwTeleport[3]), 3);

class Physics
	{
	public:
		char _0x0000[48];
		Vector4 m_VaultVector; //0x0030 
	};//Size=0x0040

	class ClientVaultComponent
	{
	public:
		char _0x0000[16];
		VaultComponentData* pVaultComponentData; //0x0010 VaultComponentData
		char _0x0018[8];
		DWORD_PTR* m_ClientPlayerEntryComponent; //0x0020 ClientPlayerEntryComponent
		char _0x0028[200];
		BYTE m_VaultState; //0x00F0 0 = Idle, 1 = adjust ragdoll movement, 2 = vault
		char _0x00F1[0x19];
		Physics* m_Physics; //0x110
		char _0x0118[0x68];
		Vector4 OldPosition; //0x0180 
		float height_vaulted; //0x0190 
		char _0x0194[12];
		Vector4 NewPosition; //0x01A0 
		char _0x01B0[160];
		Vector4 m_TeleportVector; //0x0250 
		char _0x0260[24];
	};//Size=0x0278

                fb::ClientVaultComponent* pVaultComponent = pLocalSoldier->m_pClientVaultComponent; // CSE + 0xD30
		if (!utilities::isValid(pVaultComponent))
			return;

		pSoldierAimingSimulationData->m_AimingRange = 500.f; //make max teleport distance to 500 meters

		if ((variables::m_Teleport->Checked() || variables::m_SuperJump->Checked()) && !variables::m_ChatFlag && (pRenderer->m_pScreen->m_TopWindow == 1 && pRenderer->m_pScreen->m_Minimized == 0 && pRenderer->m_pScreen->m_Resizing == 0))
		{
			utilities::WriteMemory(reinterpret_cast<PVOID>(0x140F86149), 4); //NOP, fix teleport patch			

			pLocalSoldier->m_pClientParachuteComponent->Tweak();

			if (GetAsyncKeyState(variables::m_TeleportKey->GetKey()) < 0 || GetAsyncKeyState(variables::m_SuperJumpKey->GetKey()) < 0)
			{
				utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwTeleport[0]), 4);
				utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwTeleport[1]), 3);
				utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwTeleport[2]), 3);
				utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwTeleport[3]), 3);

				utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwParachuteFix), 6);
				pLocalSoldier->m_pClientParachuteComponent->m_IsSpawned = 0;
				pLocalSoldier->m_pClientParachuteComponent->m_SoldierInParachute = 0;
				*reinterpret_cast<BYTE*>(pLocalSoldier->m_pClientParachuteComponent + 0xB4) = 1;
			}
			else
			{
				utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwTeleport[0]), 4, variables::dwTeleport0Bytes, false);
				utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwTeleport[1]), 3, variables::dwTeleport1Bytes, false);
				utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwTeleport[2]), 3, variables::dwTeleport2Bytes, false);
				utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwTeleport[3]), 3, variables::dwTeleport3Bytes, false);

				//utilities::WriteMemory(reinterpret_cast<PVOID>(variables::dwParachuteFix), 6, variables::dwParachuteFixBytes, false);
				pLocalSoldier->m_pClientParachuteComponent->m_IsSpawned = 1;
				pLocalSoldier->m_pClientParachuteComponent->m_SoldierInParachute = 1;
				*reinterpret_cast<BYTE*>(pLocalSoldier->m_pClientParachuteComponent + 0xB4) = 0;
			}

			if (variables::m_Teleport->Checked() && GetAsyncKeyState(variables::m_TeleportKey->GetKey()) < 0)
			{
				if (pClientSoldierAimingSimulation->m_RayEnd.Length() > 0.f)
				{
					Vector4 vNewTel = pClientSoldierAimingSimulation->m_RayEnd;
					pVaultComponent->m_VaultState = 2;
					pVaultComponent->m_Physics->m_VaultVector = vNewTel;
					pVaultComponent->m_VaultState = 1;
				}
			}

			if (variables::m_SuperJump->Checked() && GetAsyncKeyState(variables::m_SuperJumpKey->GetKey()) < 0 && variables::m_SuperJumpHeight->GetValue() > 0)
			{
				float fJumpHeight = static_cast<float>(variables::m_SuperJumpHeight->GetValue());

				Vector4 vNewTel = *reinterpret_cast<Vector4*>(&pLocalSoldier->m_pClientSoldierPrediction->m_Position);
				vNewTel.y += fJumpHeight;

				pVaultComponent->m_VaultState = 2;
				pVaultComponent->m_Physics->m_VaultVector = vNewTel;
				pVaultComponent->m_VaultState = 1;
			}
		}
