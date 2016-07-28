typedef void(__fastcall *tSendDamageData)(fb::ClientConnection *m_pClientConnection, fb::DamageData *m_pDamageData);
tSendDamageData oSendDamageData = nullptr;

//48 8B 89 ? ? ? ? 48 83 C1 08
variables::oSendDamageData = reinterpret_cast<variables::tSendDamageData>(0x140885DA0); 

enum HitReactionType
	{
		HRT_Body,
		HRT_Head,
		HRT_RightArm,
		HRT_LeftArm,
		HRT_RightLeg,
		HRT_LeftLeg,
		HRT_Count,
	};

	class DamageData
	{
	public:
		__int64 vtable1; //0x0000 
		__int64 vtable2; //0x0008 
		__int64 vtable3; //0x0010 
		char pad_0x0018[0x70]; //0x0018
		__int32 m_VictimPlayerId; //0x0088 
		__int32 m_VictimInstanceId; //0x008C 
		__int32 m_InflictorPlayerId; //0x0090 
		HitReactionType m_HitType; //0x0094 
		WeaponUnlockAsset* m_pWeaponUnlockAsset; //0x0098 
		Vector4 m_Direction; //0x00A0 
		float m_Damage; //0x00B0 
		unsigned char m_ClientAIKilled; //0x00B4 
		char pad_0x00B5[0x3]; //0x00B5
		__int32 m_ID; //0x00B8 
		__int32 m_CompressionConstants; //0x00BC 
		__int64 vtable4; //0x00C0 
		char pad_0x00C8[0x8]; //0x00C8
		__int64 vtable5; //0x00D0 
		char pad_0x00D8[0x68];
	};//Size=0x0440

	class ClientDamageStream
	{
	public:
		virtual bool OnWriteDamageEvents(PVOID StreamWrite);
		virtual bool OnReadDamageEvents(PVOID StreamRead);  
		virtual void OnProcessDamageEvents(); 
		virtual bool OnEventsToSend(); 

		char _0x0008[8];
		DamageData* m_pDamageData; //0x0010  
		__int32 N009AA4D2; //0x0018 
		__int32 m_OnDamageRead; //0x001C 
		__int32 m_OnDamageWrite; //0x0020 
		char _0x0024[220];

	}; //Size = 0x0100  

class ClientConnection
	{
	public:
		char _0x0000[9120];
		ClientDamageStream* m_pClientDamageStream; //0x23A0 
	};//Size=0x23A8

	class OnlineManager
	{
	public:
		char pad_0x0000[0x30];
		ClientPeer* m_pClientPeer; //0x0030
		ClientConnection* m_pClientConnection; //0x0038
	};

inline void SendDamageData(fb::ClientPlayer *m_pTargetPlayer, float m_Damage, fb::HitReactionType m_HitType, fb::WeaponUnlockAsset *m_pWeaponUnlockAsset = nullptr)
	{
		__try
		{
			if (!utilities::isValid(m_pTargetPlayer))
				return;

			fb::ClientGameContext* pGameContext = fb::ClientGameContext::GetInstance();
			if (!utilities::isValid(pGameContext))
				return;

			fb::ClientPlayerManager* pPlayerManager = pGameContext->m_pPlayerManager;
			if (!utilities::isValid(pPlayerManager))
				return;

			fb::ClientPlayer* m_pLocalPlayer = pPlayerManager->m_pLocalPlayer;
			if (!utilities::isValid(m_pLocalPlayer))
				return;

			fb::OnlineManager* pOnlineManager = pGameContext->m_pOnlineManager;
			if (!utilities::isValid(pOnlineManager))
				return;

			fb::ClientConnection* pClientConnection = pOnlineManager->m_pClientConnection;
			if (!utilities::isValid(pClientConnection))
				return;

			fb::ClientDamageStream* pDamageStream = pClientConnection->m_pClientDamageStream;
			if (!utilities::isValid(pDamageStream))
				return;

			fb::DamageData* pDamageData = pDamageStream->m_pDamageData;
			if (!utilities::isValid(pDamageData))
				return;

			pDamageData->m_VictimPlayerId = m_pTargetPlayer->getId();
			pDamageData->m_VictimInstanceId = 0;
			pDamageData->m_InflictorPlayerId = m_pLocalPlayer->getId();
			pDamageData->m_HitType = m_HitType;
			pDamageData->m_pWeaponUnlockAsset = m_pWeaponUnlockAsset;
			pDamageData->m_Damage = m_Damage;
			pDamageData->m_ClientAIKilled = m_pTargetPlayer->m_isAIPlayer;

			variables::oSendDamageData(pClientConnection, pDamageData);
		}
		__except (true) { }
	}

if (variables::m_AutoHeal->Checked() && pHealthComponent->m_health < 100.f)
			SendDamageData(pLocalPlayer, -pHealthComponent->m_maxhealth, fb::HRT_Body);
