void teleportSt(bool st)
{
	if (st)
	{
		MemPatch(0x14037F0DC, "\x90\x90\x90", 3);//nop
		MemPatch(0x14037F0E2, "\x90\x90\x90", 3);//nop
		MemPatch(0x10437F108, "\x83\x7B\x78\x03", 4);
		MemPatch(0x14037F10C, "\xEB\x10", 2);//jmp
		MemPatch(0x140B2CBD5, "\x00", 1); // Teleport while in parachute
	}
	else
	{
		MemPatch(0x14037F0DC, "\x88\x43\x18", 3);//mov [rbx+18],al
		MemPatch(0x14037F0E2, "\x88\x43\x19", 3);// mov[rbx+19], al
		MemPatch(0x14037F108, "\x83\x7B\x78\x00", 4);
		MemPatch(0x14037F10C, "\x75\x10", 2);//jmp
	}
}
void Teleport()
{
	__try
	{
		MemPatch(0x140F8613E, "\xF3\x0F\x10\xC0\x90\x90\x90\x90", 8);//movss xmm0,xmm0

		MemPatch(0x140F86150, "\xEB\x1C", 2);        //jmp

		if (!IsValidPtr(pclientSoldier) || !IsValidPtr(pclientSoldier->m_pPredictedController))
			return;
		ClientSoldierWeapon* pCSW = pclientSoldier->m_soldierWeaponsComponent->GetActiveSoldierWeapon();
		if (!IsValidPtr(pCSW))
			return;
		WeaponFiring* pWF = pCSW->m_pPrimary;
		if (!IsValidPtr(pWF))
			return;
		pWF->ptr48->pSoldierAimingSimulation->pSoldierAimingSimulationData->m_AimingRange = 500.0f;
		D3DXVECTOR3 raycastresult = pCSW->m_authorativeAiming->m_rayPosition;
		D3DXVECTOR3 VrayPos = pCSW->m_authorativeAiming->m_rayPosition;
		D3DXVECTOR3 lSoldierPosition = pclientSoldier->m_pPredictedController->m_Position;


		if (bTeleport)
		{
			if (WorldToScreen(&raycastresult))
			{
				char tp[100];
				sprintf(tp, "Teleport to: %.2f %.2f %.2f", pCSW->m_authorativeAiming->m_rayPosition.x, pCSW->m_authorativeAiming->m_rayPosition.y, pCSW->m_authorativeAiming->m_rayPosition.z);
				if (bSHOT_STATS)
				{
					pDebugRenderer->drawText(raycastresult.x, raycastresult.y, Color32(white1, 255), tp, 1);
				}
			}
      
     #pragma region TELEPORT TO CROSSHAIR
      
			if (GetAsyncKeyState(teleporttocrosshairKey))// 
			{
				if (VrayPos.x != 0 && VrayPos.y != 0 && VrayPos.z != 0)
				{
					pclientSoldier->m_pClientVaultComponent->m_VaultVectors->m_vault_CachedPos = VrayPos;
					teleportSt(true);
					pclientSoldier->m_pClientVaultComponent->m_Teleport = true;					
				}
			}
			else if (!GetAsyncKeyState(teleportUPkey) && !GetAsyncKeyState(teleporttocrosshairKey) && !GetAsyncKeyState(0x6) && !GetAsyncKeyState(VK_SPACE))
			{
				pclientSoldier->m_pClientVaultComponent->m_Teleport = false;
				teleportSt(false);
			}
      
