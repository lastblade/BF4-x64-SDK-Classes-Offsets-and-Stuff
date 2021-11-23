void Chams() // fixed issue of orange corpses
{
	if (!bChams)
		return;

		__try
		{
			if (!IsValidPtr(pGameContext))
				return;
			if (!IsValidPtr(pPlayerManager))
				return;
			if (!IsValidPtr(pLocalPlayer))
				return;			
			if (!(Players))
				return;

			for (int i = 0; i < Playercount; i++)
			{
				ClientPlayer* pPlayer = Players->at(i);

				if (!IsValidPtr(pPlayer))
					continue;
				if (pPlayer == pLocalPlayer)
					continue;
				if (pPlayer->m_TeamId == pLocalPlayer->m_TeamId)
					continue;

				ClientSoldierEntity* pSoldier = pPlayer->GetClientSoldier();
				if (IsValidPtr(pSoldier))
				{
					pSoldier->m_draw_behind_a_big_walls = 159;

					if (pPlayer->InVehicle())
					{
						ClientVehicleEntity* pCVE;
						pCVE = pPlayer->GetClientVehicleEntity();
						ClientControllableEntity* pCCE = (ClientControllableEntity*)pCVE;
						if (!IsValidPtr(pCCE))
							continue;

						if (PBSS || pPlayer->m_TeamId == pLocalPlayer->m_TeamId) { pCCE->m_EngineChams = 0; }

						else { pCCE->m_EngineChams = 1; }
					}
					else
					{
						ClientSoldierEntity* pSoldier = pPlayer->GetClientSoldier();
						if (IsValidPtr(pSoldier))
						{
							if (PBSS || pPlayer->m_TeamId == pLocalPlayer->m_TeamId) { pSoldier->m_RenderFlags = 0; }

							else { pSoldier->m_RenderFlags = 4; }
						}

					}
				}
				else
				{
					ClientSoldierEntity* pCorpse = pPlayer->GetCorpse();
					if (!IsValidPtr(pCorpse))
						continue;

					pCorpse->m_RenderFlags = 0;
				}
			}			

		}
		__except (1) {}
	
}
