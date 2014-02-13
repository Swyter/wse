#pragma once

namespace wb
{
	struct addresses
	{
		static unsigned int operation_Execute_jumptable;
		static unsigned int operation_Execute_entry;
		static unsigned int operation_Execute_exit_1;
		static unsigned int operation_Execute_exit_2;

		static unsigned int network_server_ReceiveTeamChatEvent_entry;
		static unsigned int network_server_ReceiveTeamChatEvent_exit;
	
		static unsigned int network_server_ReceiveChatEvent_entry;
		static unsigned int network_server_ReceiveChatEvent_exit;
	
		static unsigned int ReadModuleFiles_entry;

		static unsigned int game_ReadModuleFiles_entry;
	
		static unsigned int ParseConsoleCommand_entry;
		static unsigned int ParseConsoleCommand_exit_1;
		static unsigned int ParseConsoleCommand_exit_2;
	
		static unsigned int Save_entry;
	
		static unsigned int CheckUrlReplies_entry;
		static unsigned int CheckUrlReplies_exit;
	
		static unsigned int network_client_ReceiveMessage_entry;
		static unsigned int network_client_ReceiveMessage_exit_1;
		static unsigned int network_client_ReceiveMessage_exit_2;

		static unsigned int network_server_ReceiveMessage_entry;
		static unsigned int network_server_ReceiveMessage_exit_1;
		static unsigned int network_server_ReceiveMessage_exit_2;
		
		static unsigned int agent_ApplyAttackRecord_entry;
		static unsigned int agent_ApplyAttackRecord_exit;
		
		static unsigned int CreateMbnetHost_entry;
		static unsigned int DestroyMbnetHost_entry;
		
		static unsigned int mission_CheckCollision_entry;
		static unsigned int mission_CheckCollision_exit;
		
		static unsigned int agent_SetGroundQuad_entry;
		static unsigned int agent_SetGroundQuad_exit;
		
		static unsigned int agent_ReceiveShieldHit_entry;
		static unsigned int agent_ReceiveShieldHit_exit;
		
		static unsigned int mission_SpawnMissile_entry;
		static unsigned int mission_SpawnMissile_exit;
		
		static unsigned int missile_Dive_entry;
		static unsigned int missile_Dive_exit;
		
		static unsigned int network_manager_PopulatePlayerInfoServerEvent_entry;
		static unsigned int network_manager_PopulatePlayerInfoServerEvent_exit;
		
		static unsigned int network_manager_PopulateServerOptionsServerEvent_entry;
		
		static unsigned int config_manager_ChooseNumberOfEffectiveCorpses_entry;
		static unsigned int config_manager_ChooseNumberOfEffectiveCorpses_exit;
		
		static unsigned int UpdateHorseAgentEntityBody_entry;
		static unsigned int UpdateHorseAgentEntityBody_exit;

		static unsigned int tactical_window_ShowUseTooltip_entry;
		static unsigned int tactical_window_ShowUseTooltip_exit;

		static unsigned int tactical_window_ShowCrosshair_entry;
		
		static unsigned int mission_CheckHit_Human_entry;
		static unsigned int mission_CheckHit_Human_exit_1;
		static unsigned int mission_CheckHit_Human_exit_2;

		static unsigned int mission_CheckHit_Horse_entry;
		static unsigned int mission_CheckHit_Horse_exit_1;
		static unsigned int mission_CheckHit_Horse_exit_2;

		static unsigned int mission_CheckHit_Prop_entry;
		static unsigned int mission_CheckHit_Prop_exit_1;
		static unsigned int mission_CheckHit_Prop_exit_2;
		
		static unsigned int agent_HorseCharged_entry;
		static unsigned int agent_HorseCharged_exit;
		
		static unsigned int mission_ApplyBlow_entry;
		static unsigned int mission_ApplyBlow_exit;
		
		static unsigned int agent_GetScaleHuman_entry;
		static unsigned int agent_GetScaleHuman_exit;
		static unsigned int agent_GetScaleHorse_entry;
		static unsigned int agent_GetScaleHorse_exit;

		static unsigned int mission_object_Hit_entry;
		static unsigned int mission_object_Hit_exit;
		
		static unsigned int game_screen_OpenWindow_entry;
		
		static unsigned int item_kind_TransformHoldPosition_entry;
		
		static unsigned int agent_CancelSwing_entry;
		static unsigned int agent_CancelSwing_exit;

		static unsigned int UpdateAgentEntityBody;
		
		static unsigned int agent_DropItem_entry;
		static unsigned int agent_DropItem_exit;
		
		static unsigned int agent_StartReloading_entry;
		
		static unsigned int agent_EndReloading_entry_1;
		static unsigned int agent_EndReloading_entry_2;

		static unsigned int operation_Execute;

		static unsigned int operation_manager_Execute;

		static unsigned int basic_game_ParseString;
		
		static unsigned int particle_system_manager_Create;
		
		static unsigned int DXUtil_Timer;

		static unsigned int agent_SetAiBehavior;

		static unsigned int game_data_ptr;
	};
}
