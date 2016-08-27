namespace fb {

////////////////////////////////////////
// RuntimeId: 09810
// TypeInfo:  0x0000000142886A88
enum WeaponAnimType
{
    WeaponAnimType_NoAddon, //0x0000
    WeaponAnimType_Bipod, //0x0001
    WeaponAnimType_Foregrip, //0x0002
    WeaponAnimType_40mm_GL, //0x0003
    WeaponAnimType_40mm_GL_Fire, //0x0004
    WeaponAnimType_Underslung_Shotgun, //0x0005
    WeaponAnimType_Underslung_Shotgun_Fire, //0x0006
    WeaponAnimType_Straight_Pull_Bolt, //0x0007
    WeaponAnimType_Extended_Mag //0x0008
};

////////////////////////////////////////
// RuntimeId: 09802
// TypeInfo:  0x0000000142886AA8
enum GrenadeType
{
    GrenadeType_NotSet, //0x0000
    GrenadeType_Frag, //0x0001
    GrenadeType_Smoke, //0x0002
    GrenadeType_Flash //0x0003
};

////////////////////////////////////////
// RuntimeId: 09776
// TypeInfo:  0x0000000142886AC8
enum ZoomLevelActivateEventType
{
    ZoomLevelActivateEventType_Disable, //0x0000
    ZoomLevelActivateEventType_Enable, //0x0001
    ZoomLevelActivateEventType_ToggleOnLightSwitch //0x0002
};

////////////////////////////////////////
// RuntimeId: 09711
// TypeInfo:  0x0000000142886AE8
enum SightType
{
    SightType_None, //0x0000
    SightType_Canted, //0x0001
    SightType_Magnifier //0x0002
};

////////////////////////////////////////
// RuntimeId: 09705
// TypeInfo:  0x0000000142886B08
enum WeaponOverrideValueType
{
    OverrideValue_BulletEntity_DistributeDamageOverTime, //0x0000
    OverrideValue_BulletEntity_StartDamage, //0x0001
    OverrideValue_BulletEntity_EndDamage, //0x0002
    OverrideValue_BulletEntity_DamageFalloffStartDistance, //0x0003
    OverrideValue_BulletEntity_DamageFalloffEndDistance //0x0004
};

////////////////////////////////////////
// RuntimeId: 09703
// TypeInfo:  0x0000000142886B28
enum QuickThrowTypeEnum
{
    QttHand, //0x0000
    QttBag //0x0001
};

////////////////////////////////////////
// RuntimeId: 09695
// TypeInfo:  0x0000000142886B48
enum WeaponClassEnum
{
    wc12gauge, //0x0000
    wc338Magnum, //0x0001
    wc357Magnum, //0x0002
    wc44Magnum, //0x0003
    wc45cal, //0x0004
    wc46x30mm, //0x0005
    wc50cal, //0x0006
    wc545x45mmWP, //0x0007
    wc556x45mmNATO, //0x0008
    wc57x28mm, //0x0009
    wc58x42mm, //0x000A
    wc762x39mmWP, //0x000B
    wc762x51mmNATO, //0x000C
    wc762x54mmR, //0x000D
    wc9x19mm, //0x000E
    wc9x39mm, //0x000F
    wcAssault, //0x0010
    wcShotgun, //0x0011
    wcSmg, //0x0012
    wcLmg, //0x0013
    wcSniper, //0x0014
    wcUgl, //0x0015
    wcHgr, //0x0016
    wcAt, //0x0017
    wcATMine, //0x0018
    wcC4, //0x0019
    wcBallisticShield, //0x001A
    wcAutoInjector, //0x001B
    wcKnife, //0x001C
    wcLaserDesignator, //0x001D
    wcLaserPainter, //0x001E
    wcMedKit, //0x001F
    wcMortarStrike, //0x0020
    wcPowerTool, //0x0021
    wcTracerDart, //0x0022
    wcRadioBeacon, //0x0023
    wcEodBot, //0x0024
    wcReconMav, //0x0025
    wcUGS, //0x0026
    wcUnarmed, //0x0027
    wcCount, //0x0028
    wcNone //0x0029
};

////////////////////////////////////////
// RuntimeId: 09693
// TypeInfo:  0x0000000142886B68
enum WeaponAnimBaseSetEnum
{
    wabsRif, //0x0000
    wabsPstl, //0x0001
    wabsHgr, //0x0002
    wabsAT, //0x0003
    wabsShg, //0x0004
    wabsLMG, //0x0005
    wabsBag, //0x0006
    wabsSnp, //0x0007
    wabsCount, //0x0008
    wabsNone //0x0009
};

////////////////////////////////////////
// RuntimeId: 09685
// TypeInfo:  0x0000000142886B88
enum AnimatedAimingEnum
{
    AnimatedAimingTwoHanded, //0x0000
    AnimatedAimingRightHanded, //0x0001
    AnimatedAimingDisabled //0x0002
};

////////////////////////////////////////
// RuntimeId: 09683
// TypeInfo:  0x0000000142886BA8
enum AnimatedFireEnum
{
    AnimatedFireAutomatic, //0x0000
    AnimatedFireSingle, //0x0001
    AnimatedFireHoldAndRelease, //0x0002
    AnimatedFireDelayedSingleShot, //0x0003
    AnimatedFireSimple //0x0004
};

////////////////////////////////////////
// RuntimeId: 09633
// TypeInfo:  0x0000000142886BC8
enum WeaponSwitchingEnum
{
    wsSlot0, //0x0000
    wsSlot1, //0x0001
    wsSlot2, //0x0002
    wsSlot3, //0x0003
    wsSlot4, //0x0004
    wsSlot5, //0x0005
    wsSlot6, //0x0006
    wsSlot7, //0x0007
    wsSlot8, //0x0008
    wsSlot9, //0x0009
    wsMaxSlots, //0x000A
    wsLastPrimary, //0x000B
    wsOtherPrimary, //0x000C
    wsNotUsed, //0x000D
    wsMeleeWeapon //0x000E
};

////////////////////////////////////////
// RuntimeId: 09631
// TypeInfo:  0x0000000142886E88
enum SoldierBuffId
{
    SBImprovedBodyArmor, //0x0000
    SBCount //0x0001
};

////////////////////////////////////////
// RuntimeId: 09629
// TypeInfo:  0x0000000142886EA8
enum PlayerRole
{
    PRSquadLeader, //0x0000
    PRSquadMember, //0x0001
    PRUnknown //0x0002
};

////////////////////////////////////////
// RuntimeId: 09596
// TypeInfo:  0x0000000142886FA8
enum DeathAnimationOperation
{
    DALessThan, //0x0000
    DAGreaterThan, //0x0001
    DAEqualTo //0x0002
};

////////////////////////////////////////
// RuntimeId: 09561
// TypeInfo:  0x0000000142886BE8
enum PickupPlayerEnum
{
    PickupPlayerEnum_None, //0x0000
    PickupPlayerEnum_Both, //0x0001
    PickupPlayerEnum_HumanOnly, //0x0002
    PickupPlayerEnum_AIOnly //0x0003
};

////////////////////////////////////////
// RuntimeId: 09555
// TypeInfo:  0x0000000142886C08
enum EventGateState
{
    EGSInvalid, //0x0000
    EGSUpright, //0x0001
    EGSCrouched, //0x0002
    EGSProne, //0x0003
    EGSZoomed, //0x0004
    EGSCount //0x0005
};

////////////////////////////////////////
// RuntimeId: 09545
// TypeInfo:  0x0000000142887008
enum AIHitReactionAnimationType
{
    AIHitReactionAnimationType_1, //0x0000
    AIHitReactionAnimationType_2, //0x0001
    AIHitReactionAnimationType_3, //0x0002
    AIHitReactionAnimationType_4, //0x0003
    AIHitReactionAnimationType_5, //0x0004
    AIHitReactionAnimationType_Count //0x0005
};

////////////////////////////////////////
// RuntimeId: 09514
// TypeInfo:  0x0000000142886C28
enum SocketType
{
    SocketType_Undefined, //0x0000
    SocketType_Gameplay, //0x0001
    SocketType_Visual //0x0002
};

////////////////////////////////////////
// RuntimeId: 09482
// TypeInfo:  0x0000000142887108
enum AIDeathReactionAnimationType
{
    AIDeathReactionAnimationType_1, //0x0000
    AIDeathReactionAnimationType_2, //0x0001
    AIDeathReactionAnimationType_3, //0x0002
    AIDeathReactionAnimationType_4, //0x0003
    AIDeathReactionAnimationType_5, //0x0004
    AIDeathReactionAnimationType_Count //0x0005
};

////////////////////////////////////////
// RuntimeId: 09474
// TypeInfo:  0x0000000142887188
enum AIAltFireFromAntState
{
    AltFireFromAntState_NoForcedFire, //0x0000
    AltFireFromAntState_Prepare, //0x0001
    AltFireFromAntState_ForceFire //0x0002
};

////////////////////////////////////////
// RuntimeId: 09378
// TypeInfo:  0x000000014287EEF8
enum RailRideHeliPointToSide
{
    Front, //0x0000
    Left, //0x0001
    Right //0x0002
};

////////////////////////////////////////
// RuntimeId: 09369
// TypeInfo:  0x000000014287EB60
enum OriginTokenType
{
    OriginTokenType_Ticket, //0x0000
    OriginTokenType_AuthCode //0x0001
};

////////////////////////////////////////
// RuntimeId: 09325
// TypeInfo:  0x000000014287C240
enum BackendType
{
    Backend_Lan, //0x0000
    Backend_Blaze, //0x0001
    Backend_Peer, //0x0002
    Backend_Local, //0x0003
    Backend_Playground, //0x0004
    Backend_Count_ //0x0005
};

////////////////////////////////////////
// RuntimeId: 09289
// TypeInfo:  0x000000014287C260
enum OnlineEnvironment
{
    OnlineEnvironment_Development, //0x0000
    OnlineEnvironment_Test, //0x0001
    OnlineEnvironment_Certification, //0x0002
    OnlineEnvironment_Production, //0x0003
    OnlineEnvironment_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 09237
// TypeInfo:  0x000000014287C280
enum MatchmakingSessionMode
{
    MatchmakingSessionMode_FindDedicatedServer, //0x0000
    MatchmakingSessionMode_ResetDedicatedServer, //0x0001
    MatchmakingSessionMode_FindPeerGame, //0x0002
    MatchmakingSessionMode_CreatePeerGame, //0x0003
    MatchmakingSessionMode_Invalid //0x0004
};

////////////////////////////////////////
// RuntimeId: 09215
// TypeInfo:  0x000000014287C4C0
enum MatchmakingRankedMode
{
    MatchmakingRankedMode_Ranked, //0x0000
    MatchmakingRankedMode_Unranked, //0x0001
    MatchmakingRankedMode_Any //0x0002
};

////////////////////////////////////////
// RuntimeId: 09207
// TypeInfo:  0x000000014287C2A0
enum MatchmakingVirtualizationMode
{
    MatchmakingVirtualizationMode_Virtualized, //0x0000
    MatchmakingVirtualizationMode_Standard, //0x0001
    MatchmakingVirtualizationMode_Any //0x0002
};

////////////////////////////////////////
// RuntimeId: 09205
// TypeInfo:  0x000000014287C2C0
enum MatchmakingPlatform
{
    MatchmakingPlatform_PC, //0x0000
    MatchmakingPlatform_PCGen4, //0x0001
    MatchmakingPlatform_Gen4, //0x0002
    MatchmakingPlatform_Gen3, //0x0003
    MatchmakingPlatform_Console, //0x0004
    MatchmakingPlatform_360, //0x0005
    MatchmakingPlatform_PS3, //0x0006
    MatchmakingPlatform_Durango, //0x0007
    MatchmakingPlatform_Kettle, //0x0008
    MatchmakingPlatform_Any //0x0009
};

////////////////////////////////////////
// RuntimeId: 09173
// TypeInfo:  0x000000014287C860
enum InviteType
{
    InviteType_Invalid, //0x0000
    InviteType_Invite, //0x0001
    InviteType_JoinSession, //0x0002
    InviteType_JoinFriendSession, //0x0003
    InviteType_JoinFriendSessionIncomplete, //0x0004
    InviteType_JoinGameId, //0x0005
    InviteType_Count //0x0006
};

////////////////////////////////////////
// RuntimeId: 09171
// TypeInfo:  0x000000014287C880
enum InvitePlatform
{
    InvitePlatform_Invalid, //0x0000
    InvitePlatform_X360, //0x0001
    InvitePlatform_PS3, //0x0002
    InvitePlatform_PC, //0x0003
    InvitePlatform_CAFE, //0x0004
    InvitePlatform_Gen4a, //0x0005
    InvitePlatform_Gen4b, //0x0006
    InvitePlatform_Count //0x0007
};

////////////////////////////////////////
// RuntimeId: 09163
// TypeInfo:  0x000000014287C2E0
enum GamePeer2PeerMode
{
    GamePeer2PeerMode_FullMesh, //0x0000
    GamePeer2PeerMode_PartialMesh, //0x0001
    GamePeer2PeerMode_DirtyCastFailover //0x0002
};

////////////////////////////////////////
// RuntimeId: 09161
// TypeInfo:  0x000000014287C300
enum GameNetworkTopology
{
    GameNetworkTopology_Disabled, //0x0000
    GameNetworkTopology_Peer2Peer, //0x0001
    GameNetworkTopology_PeerHosted, //0x0002
    GameNetworkTopology_DedicatedServer //0x0003
};

////////////////////////////////////////
// RuntimeId: 09104
// TypeInfo:  0x0000000142878F60
enum ExecuteOnPropertyChangeType
{
    ExecuteOnPropertyChangeType_DontExecute, //0x0000
    ExecuteOnPropertyChangeType_Immediate, //0x0001
    ExecuteOnPropertyChangeType_Queued //0x0002
};

////////////////////////////////////////
// RuntimeId: 09082
// TypeInfo:  0x0000000142876FF8
enum PostProcessDofMode
{
    PostProcessDofMode_Gaussian, //0x0000
    PostProcessDofMode_Sprite //0x0001
};

////////////////////////////////////////
// RuntimeId: 09080
// TypeInfo:  0x0000000142876EB8
enum PostProcessAAMode
{
    PostProcessAAMode_None, //0x0000
    PostProcessAAMode_FxaaLow, //0x0001
    PostProcessAAMode_FxaaMedium, //0x0002
    PostProcessAAMode_FxaaHigh, //0x0003
    PostProcessAAMode_Smaa1x, //0x0004
    PostProcessAAMode_SmaaT2x //0x0005
};

////////////////////////////////////////
// RuntimeId: 09078
// TypeInfo:  0x0000000142876ED8
enum ScaleResampleMode
{
    ScaleResampleMode_Point, //0x0000
    ScaleResampleMode_Linear, //0x0001
    ScaleResampleMode_Bicubic, //0x0002
    ScaleResampleMode_Lanczos, //0x0003
    ScaleResampleMode_LanczosSeparable, //0x0004
    ScaleResampleMode_BicubicSharp //0x0005
};

////////////////////////////////////////
// RuntimeId: 09076
// TypeInfo:  0x0000000142876EF8
enum MipmapFilterMode
{
    MipmapFilterMode_Box, //0x0000
    MipmapFilterMode_Renormalize, //0x0001
    MipmapFilterMode_Poisson13, //0x0002
    MipmapFilterMode_Poisson13Clamped //0x0003
};

////////////////////////////////////////
// RuntimeId: 09074
// TypeInfo:  0x0000000142876F18
enum WorldViewMode
{
    WorldViewMode_Default, //0x0000
    WorldViewMode_RawLinear, //0x0001
    WorldViewMode_RawLinearAlpha, //0x0002
    WorldViewMode_Diffuse, //0x0003
    WorldViewMode_Specular, //0x0004
    WorldViewMode_Emissive, //0x0005
    WorldViewMode_Normal, //0x0006
    WorldViewMode_Smoothness, //0x0007
    WorldViewMode_Material, //0x0008
    WorldViewMode_SubSurfaceScattering, //0x0009
    WorldViewMode_Light, //0x000A
    WorldViewMode_LightDiffuse, //0x000B
    WorldViewMode_LightSpecular, //0x000C
    WorldViewMode_LightIndirect, //0x000D
    WorldViewMode_LightTranslucency, //0x000E
    WorldViewMode_LightOverdraw, //0x000F
    WorldViewMode_ShadowMask, //0x0010
    WorldViewMode_SkyVisibility, //0x0011
    WorldViewMode_SkyVisibilityRaw, //0x0012
    WorldViewMode_Overdraw, //0x0013
    WorldViewMode_OverdrawDepthTest, //0x0014
    WorldViewMode_DynamicAO, //0x0015
    WorldViewMode_Occluders, //0x0016
    WorldViewMode_RadiosityLightMaps, //0x0017
    WorldViewMode_RadiosityDiffuseColor, //0x0018
    WorldViewMode_RadiosityTargetUV, //0x0019
    WorldViewMode_VelocityVector, //0x001A
    WorldViewMode_DistortionVector, //0x001B
    WorldViewMode_HairAnisoDir, //0x001C
    WorldViewMode_HairSpecular, //0x001D
    WorldViewMode_HairAnisoShift, //0x001E
    WorldViewMode_HairSmoothness, //0x001F
    WorldViewMode_HairCoverageX, //0x0020
    WorldViewMode_HairCoverageY //0x0021
};

////////////////////////////////////////
// RuntimeId: 09058
// TypeInfo:  0x0000000142876F38
enum EmitterParamOverride
{
    EmitterParamOverride_EmitterParameter1, //0x0000
    EmitterParamOverride_EmitterParameter2, //0x0001
    EmitterParamOverride_EmitterParameter3, //0x0002
    EmitterParamOverride_Count //0x0003
};

////////////////////////////////////////
// RuntimeId: 09052
// TypeInfo:  0x0000000142876F58
enum VehicleLightingMode
{
    VehicleLightingMode_Add, //0x0000
    VehicleLightingMode_Blend //0x0001
};

////////////////////////////////////////
// RuntimeId: 09048
// TypeInfo:  0x0000000142876F78
enum CharacterLightingMode
{
    CharacterLightingMode_Add, //0x0000
    CharacterLightingMode_Blend //0x0001
};

////////////////////////////////////////
// RuntimeId: 09042
// TypeInfo:  0x0000000142876F98
enum ScreenEffectFrameType
{
    ScreenEffectFrameType_FullFrame, //0x0000
    ScreenEffectFrameType_SingleFramePart, //0x0001
    ScreenEffectFrameType_SingleSquareFramePart //0x0002
};

////////////////////////////////////////
// RuntimeId: 08996
// TypeInfo:  0x0000000142876FB8
enum EnlightenColorMode
{
    EnlightenColorMode_Multiply, //0x0000
    EnlightenColorMode_Override //0x0001
};

////////////////////////////////////////
// RuntimeId: 08964
// TypeInfo:  0x0000000142876FD8
enum RenderVolumeTransformType
{
    RenderVolumeTransformType_WorldSpaceInv, //0x0000
    RenderVolumeTransformType_WorldSpaceNoScale //0x0001
};

////////////////////////////////////////
// RuntimeId: 08900
// TypeInfo:  0x0000000142872068
enum SoldierChangeAction
{
    SCA_Done, //0x0000
    SCA_Altered, //0x0001
    SCA_None //0x0002
};

////////////////////////////////////////
// RuntimeId: 08842
// TypeInfo:  0x0000000142871DE8
enum UIGraphPriority
{
    UIGraphPriority_Low, //0x0000
    UIGraphPriority_Normal, //0x0001
    UIGraphPriority_High, //0x0002
    UIGraphPriority_OverlayScreens, //0x0003
    UIGraphPriority_Critical //0x0004
};

////////////////////////////////////////
// RuntimeId: 08796
// TypeInfo:  0x0000000142871E08
enum DataSetParamType
{
    DSPT_Default, //0x0000
    DSPT_String, //0x0001
    DSPT_Boolean, //0x0002
    DSPT_Int, //0x0003
    DSPT_Double //0x0004
};

////////////////////////////////////////
// RuntimeId: 08790
// TypeInfo:  0x0000000142871E28
enum WidgetVerticalAlignment
{
    WVA_Top, //0x0000
    WVA_Center, //0x0001
    WVA_Bottom //0x0002
};

////////////////////////////////////////
// RuntimeId: 08788
// TypeInfo:  0x0000000142871E48
enum WidgetHorisontalAlignment
{
    WHA_Left, //0x0000
    WHA_Center, //0x0001
    WHA_Right //0x0002
};

////////////////////////////////////////
// RuntimeId: 08746
// TypeInfo:  0x0000000142871E68
enum UIScreenPurpose
{
    UIScreenPurpose_Standard, //0x0000
    UIScreenPurpose_Overlay, //0x0001
    UIScreenPurpose_Listener, //0x0002
    UIScreenPurpose_Modal //0x0003
};

////////////////////////////////////////
// RuntimeId: 08744
// TypeInfo:  0x0000000142871E88
enum UILogicOperator
{
    UILogicOperator_None, //0x0000
    UILogicOperator_Equal, //0x0001
    UILogicOperator_GreaterThan, //0x0002
    UILogicOperator_GreaterThanOrEqual, //0x0003
    UILogicOperator_LessThan, //0x0004
    UILogicOperator_LessThanOrEqual //0x0005
};

////////////////////////////////////////
// RuntimeId: 08742
// TypeInfo:  0x0000000142872768
enum UIInputEvent
{
    UIInputEvent_None, //0x0000
    UIInputEvent_OnButtonA, //0x0001
    UIInputEvent_OnButtonB, //0x0002
    UIInputEvent_OnButtonBack, //0x0003
    UIInputEvent_OnButtonDPad_Down, //0x0004
    UIInputEvent_OnButtonDPad_Left, //0x0005
    UIInputEvent_OnButtonDPad_Right, //0x0006
    UIInputEvent_OnButtonDPad_Up, //0x0007
    UIInputEvent_OnButtonLB, //0x0008
    UIInputEvent_OnButtonRB, //0x0009
    UIInputEvent_OnButtonStart, //0x000A
    UIInputEvent_OnButtonX, //0x000B
    UIInputEvent_OnButtonY //0x000C
};

////////////////////////////////////////
// RuntimeId: 08740
// TypeInfo:  0x0000000142871EA8
enum UIWidgetEventID
{
    UIWidgetEventID_None, //0x0000
    UIWidgetEventID_OnItemSelected, //0x0001
    UIWidgetEventID_OnItemHighlighted, //0x0002
    UIWidgetEventID_OnItemReleased, //0x0003
    UIWidgetEventID_OnItemUnhighlighted, //0x0004
    UIWidgetEventID_OnItemPressed, //0x0005
    UIWidgetEventID_OnItemOver, //0x0006
    UIWidgetEventID_OnItemOut, //0x0007
    UIWidgetEventID_OnToggle, //0x0008
    UIWidgetEventID_OnChanged, //0x0009
    UIWidgetEventID_OnButtonBarChanged, //0x000A
    UIWidgetEventID_EnterTop, //0x000B
    UIWidgetEventID_EnterBottom, //0x000C
    UIWidgetEventID_EnterAny, //0x000D
    UIWidgetEventID_SetIndex, //0x000E
    UIWidgetEventID_SetPercentage, //0x000F
    UIWidgetEventID_OnReachedTop, //0x0010
    UIWidgetEventID_OnReachedBottom, //0x0011
    UIWidgetEventID_OnNavigateLeft, //0x0012
    UIWidgetEventID_OnNavigateRight, //0x0013
    UIWidgetEventID_Show, //0x0014
    UIWidgetEventID_Hide, //0x0015
    UIWidgetEventID_OnShow, //0x0016
    UIWidgetEventID_OnHide, //0x0017
    UIWidgetEventID_Toggle, //0x0018
    UIWidgetEventID_ToggleOn, //0x0019
    UIWidgetEventID_ToggleOff, //0x001A
    UIWidgetEventID_ToggledOn, //0x001B
    UIWidgetEventID_ToggledOff, //0x001C
    UIWidgetEventID_Update, //0x001D
    UIWidgetEventID_OnComplete, //0x001E
    UIWidgetEventID_Focus, //0x001F
    UIWidgetEventID_OnHeaderChanged, //0x0020
    UIWidgetEventID_OnDescriptionChanged, //0x0021
    UIWidgetEventID_OnMapChanged, //0x0022
    UIWidgetEventID_Clear, //0x0023
    UIWidgetEventID_Delete, //0x0024
    UIWidgetEventID_LThumb, //0x0025
    UIWidgetEventID_RThumb, //0x0026
    UIWidgetEventID_LTAB, //0x0027
    UIWidgetEventID_RTAB, //0x0028
    UIWidgetEventID_OnLarge, //0x0029
    UIWidgetEventID_OnSmall, //0x002A
    UIWidgetEventID_TextEntered, //0x002B
    UIWidgetEventID_PlaySoundNavigate, //0x002C
    UIWidgetEventID_PlaySoundSelect, //0x002D
    UIWidgetEventID_PlaySoundPageSwap, //0x002E
    UIWidgetEventID_PlaySoundPopup, //0x002F
    UIWidgetEventID_PlaySoundBack, //0x0030
    UIWidgetEventID_PlaySoundNotification, //0x0031
    UIWidgetEventID_PlaySoundDashOpen, //0x0032
    UIWidgetEventID_PlaySoundDashClose, //0x0033
    UIWidgetEventID_PlaySoundAcceptChallenge, //0x0034
    UIWidgetEventID_OnComPressed, //0x0035
    UIWidgetEventID_OnComReleased, //0x0036
    UIWidgetEventID_NumItems //0x0037
};

////////////////////////////////////////
// RuntimeId: 08734
// TypeInfo:  0x0000000142871EC8
enum UIInterruptID
{
    UIInterruptID_None, //0x0000
    UIInterruptID_ControllerPull //0x0001
};

////////////////////////////////////////
// RuntimeId: 08724
// TypeInfo:  0x0000000142871EE8
enum UIColorType
{
    UIColorType_Unselected, //0x0000
    UIColorType_Selected, //0x0001
    UIColorType_SelectInside, //0x0002
    UIColorType_UnselectedInside, //0x0003
    UIColorType_Locked, //0x0004
    UIColorType_IconBg, //0x0005
    UIColorType_FrameSoft, //0x0006
    UIColorType_FrameHard, //0x0007
    UIColorType_HudYellow, //0x0008
    UIColorType_CriticalColor, //0x0009
    UIColorType_Friendly, //0x000A
    UIColorType_Enemy, //0x000B
    UIColorType_SquadColor, //0x000C
    UIColorType_NormalTextColor, //0x000D
    UIColorType_HeaderTextColor, //0x000E
    UIColorType_StaticHUDColor, //0x000F
    UIColorType_DynamicHUDColor, //0x0010
    UIColorType_MouseOver, //0x0011
    UIColorType_MouseOut //0x0012
};

////////////////////////////////////////
// RuntimeId: 08702
// TypeInfo:  0x0000000142872788
enum UIConsoleKeyboardStatus
{
    UIConsoleKeyboardStatus_Success, //0x0000
    UIConsoleKeyboardStatus_Failed, //0x0001
    UIConsoleKeyboardStatus_Cancelled, //0x0002
    UIConsoleKeyboardStatus_Active, //0x0003
    UIConsoleKeyboardStatus_Inactive, //0x0004
    UIConsoleKeyboardStatus_Count //0x0005
};

////////////////////////////////////////
// RuntimeId: 08700
// TypeInfo:  0x00000001428727A8
enum UIAnalogInput
{
    UIAnalogInput_Size, //0x0000
    UIAnalogInput_None //0x0001
};

////////////////////////////////////////
// RuntimeId: 08698
// TypeInfo:  0x00000001428727C8
enum UIAnalogInputEventType
{
    UIAnalogInputEventType_Moved, //0x0000
    UIAnalogInputEventType_Released //0x0001
};

////////////////////////////////////////
// RuntimeId: 08696
// TypeInfo:  0x0000000142871F08
enum UIInputAction
{
    UIInputAction_NavigateUp, //0x0000
    UIInputAction_NavigateDown, //0x0001
    UIInputAction_NavigateLeft, //0x0002
    UIInputAction_NavigateRight, //0x0003
    UIInputAction_TabLeft, //0x0004
    UIInputAction_TabRight, //0x0005
    UIInputAction_Activate, //0x0006
    UIInputAction_Deactivate, //0x0007
    UIInputAction_Menu, //0x0008
    UIInputAction_Cancel, //0x0009
    UIInputAction_OK, //0x000A
    UIInputAction_Back, //0x000B
    UIInputAction_Tab, //0x000C
    UIInputAction_Edit, //0x000D
    UIInputAction_View, //0x000E
    UIInputAction_LThumb, //0x000F
    UIInputAction_RThumb, //0x0010
    UIInputAction_MapZoom, //0x0011
    UIInputAction_MapSize, //0x0012
    UIInputAction_SayAllChat, //0x0013
    UIInputAction_TeamChat, //0x0014
    UIInputAction_SquadChat, //0x0015
    UIInputAction_CommoRose, //0x0016
    UIInputAction_ToggleChat, //0x0017
    UIInputAction_ToggleMinimapType, //0x0018
    UIInputAction_DigitalUp, //0x0019
    UIInputAction_DigitalDown, //0x001A
    UIInputAction_DigitalLeft, //0x001B
    UIInputAction_DigitalRight, //0x001C
    UIInputAction_NavigateRUp, //0x001D
    UIInputAction_NavigateRDown, //0x001E
    UIInputAction_NavigateRLeft, //0x001F
    UIInputAction_NavigateRRight, //0x0020
    UIInputAction_MenuTriggerLeft, //0x0021
    UIInputAction_MenuTriggerRight, //0x0022
    UIInputAction_TacticalMenu, //0x0023
    UIInputAction_ConversationSelect, //0x0024
    UIInputAction_ConversationSkip, //0x0025
    UIInputAction_ConversationChangeSelection, //0x0026
    UIInputAction_BattledashToggle, //0x0027
    UIInputAction_VoipPushToTalk, //0x0028
    UIInputAction_MultipleSelect, //0x0029
    UIInputAction_SpectatorViewPrev, //0x002A
    UIInputAction_SpectatorViewNext, //0x002B
    UIInputAction_SpectatorTargetPrev, //0x002C
    UIInputAction_SpectatorTargetNext, //0x002D
    UIInputAction_SpectatorViewTableTop, //0x002E
    UIInputAction_SpectatorViewFirstPerson, //0x002F
    UIInputAction_SpectatorViewThirdPerson, //0x0030
    UIInputAction_SpectatorViewFreeCam, //0x0031
    UIInputAction_SpectatorViewPlayer1, //0x0032
    UIInputAction_SpectatorViewPlayer2, //0x0033
    UIInputAction_SpectatorViewPlayer3, //0x0034
    UIInputAction_SpectatorViewPlayer4, //0x0035
    UIInputAction_SpectatorViewPlayer5, //0x0036
    UIInputAction_SpectatorViewPlayer6, //0x0037
    UIInputAction_SpectatorViewPlayer7, //0x0038
    UIInputAction_SpectatorViewPlayer8, //0x0039
    UIInputAction_SpectatorViewPlayer9, //0x003A
    UIInputAction_SpectatorViewPlayer10, //0x003B
    UIInputAction_SpectatorViewPlayer11, //0x003C
    UIInputAction_SpectatorViewPlayer12, //0x003D
    UIInputAction_SpectatorViewPlayer13, //0x003E
    UIInputAction_SpectatorViewPlayer14, //0x003F
    UIInputAction_SpectatorViewPlayer15, //0x0040
    UIInputAction_SpectatorViewPlayer16, //0x0041
    UIInputAction_SpectatorViewOptions, //0x0042
    UIInputAction_SpectatorHudVisibility, //0x0043
    UIInputAction_SpectatorTargetPrevInSquad, //0x0044
    UIInputAction_SpectatorTargetNextInSquad, //0x0045
    UIInputAction_SpectatorTargetPrevOnTeam, //0x0046
    UIInputAction_SpectatorTargetNextOnTeam, //0x0047
    UIInputAction_SpectatorSquadLeft, //0x0048
    UIInputAction_SpectatorSquadRight, //0x0049
    UIInputAction_SpectatorSquadUp, //0x004A
    UIInputAction_SpectatorSquadDown, //0x004B
    UIInputAction_SpectatorSquadActivate, //0x004C
    UIInputAction_Start, //0x004D
    UIInputAction_Minimize, //0x004E
    UIInputAction_SelectAll, //0x004F
    UIInputAction_Size, //0x0050
    UIInputAction_None //0x0051
};

////////////////////////////////////////
// RuntimeId: 08694
// TypeInfo:  0x00000001428727E8
enum UIInputActionEventType
{
    UIInputActionEventType_Pressed, //0x0000
    UIInputActionEventType_Released, //0x0001
    UIInputActionEventType_Repeat //0x0002
};

////////////////////////////////////////
// RuntimeId: 08692
// TypeInfo:  0x0000000142872808
enum UIKeyboardEventType
{
    UIKeyboardEventType_KeyDown, //0x0000
    UIKeyboardEventType_KeyUp, //0x0001
    UIKeyboardEventType_Char //0x0002
};

////////////////////////////////////////
// RuntimeId: 08690
// TypeInfo:  0x0000000142872828
enum UIMouseEventType
{
    UIMouseEventType_MouseMove, //0x0000
    UIMouseEventType_MouseWheel, //0x0001
    UIMouseEventType_ButtonDown, //0x0002
    UIMouseEventType_ButtonUp //0x0003
};

////////////////////////////////////////
// RuntimeId: 08688
// TypeInfo:  0x0000000142872848
enum UIMouseButton
{
    UIMouseButton_Left, //0x0000
    UIMouseButton_Right, //0x0001
    UIMouseButton_Middle, //0x0002
    UIMouseButton_Button3, //0x0003
    UIMouseButton_Button4 //0x0004
};

////////////////////////////////////////
// RuntimeId: 08686
// TypeInfo:  0x0000000142872868
enum UISystemType
{
    UISystem_None, //0x0000
    UISystem_Standard //0x0001
};

////////////////////////////////////////
// RuntimeId: 08682
// TypeInfo:  0x0000000142871F28
enum UIState
{
    UIState_Menu, //0x0000
    UIState_LoadingSP, //0x0001
    UIState_LoadingMP, //0x0002
    UIState_Playing, //0x0003
    UIState_Unload, //0x0004
    UIState_Embedded, //0x0005
    UIState_Static, //0x0006
    UIState_StaticGenerated, //0x0007
    UIState_PreEndOfRound, //0x0008
    UIState_EndOfRound, //0x0009
    UIState_PlayingSP, //0x000A
    UIState_PlayingMP, //0x000B
    UIState_None //0x000C
};

////////////////////////////////////////
// RuntimeId: 08678
// TypeInfo:  0x0000000142871F48
enum UIUpdateType
{
    UIUpdateType_Always, //0x0000
    UIUpdateType_Odd, //0x0001
    UIUpdateType_Even, //0x0002
    UIUpdateType_Never //0x0003
};

////////////////////////////////////////
// RuntimeId: 08671
// TypeInfo:  0x000000014286F1B0
enum TerrainRenderMode
{
    TerrainRenderMode_Default, //0x0000
    TerrainRenderMode_DrawPassCount2d, //0x0001
    TerrainRenderMode_LayerCount2d, //0x0002
    TerrainRenderMode_LayerCount3d, //0x0003
    TerrainRenderMode_MaskedLayerCount2d, //0x0004
    TerrainRenderMode_MaskedLayerCount3d, //0x0005
    TerrainRenderMode_DensityMap //0x0006
};

////////////////////////////////////////
// RuntimeId: 08606
// TypeInfo:  0x000000014286DB00
enum RasterTreeBuildMode
{
    RasterTreeBuildMode_InlinePersistentStreamRest, //0x0000
    RasterTreeBuildMode_InlinePersistentRemoveRest, //0x0001
    RasterTreeBuildMode_InlineAll //0x0002
};

////////////////////////////////////////
// RuntimeId: 08592
// TypeInfo:  0x000000014286DB20
enum TerrainDrawPassType
{
    TerrainDrawPassType_SinglePass, //0x0000
    TerrainDrawPassType_MultipassFirst, //0x0001
    TerrainDrawPassType_MultipassConsecutive //0x0002
};

////////////////////////////////////////
// RuntimeId: 08586
// TypeInfo:  0x000000014286DB40
enum TerrainBrushDetailOperation
{
    Lerp, //0x0000
    Add, //0x0001
    Multiply //0x0002
};

////////////////////////////////////////
// RuntimeId: 08580
// TypeInfo:  0x000000014286DB60
enum TerrainLayerType
{
    TerrainLayerType_IgnoreMask, //0x0000
    TerrainLayerType_Masked, //0x0001
    TerrainLayerType_BinaryMasked //0x0002
};

////////////////////////////////////////
// RuntimeId: 08570
// TypeInfo:  0x000000014286DB80
enum MeshScatteringInstanceDataMode
{
    MeshScatteringInstanceDataMode_None, //0x0000
    MeshScatteringInstanceDataMode_Normal, //0x0001
    MeshScatteringInstanceDataMode_NormalAndAtlasIndex, //0x0002
    MeshScatteringInstanceDataMode_NormalAndColor, //0x0003
    MeshScatteringInstanceDataMode_WindAndAtlasIndex, //0x0004
    MeshScatteringInstanceDataMode_Wind //0x0005
};

////////////////////////////////////////
// RuntimeId: 08568
// TypeInfo:  0x000000014286DBA0
enum UndergrowthOrientationMode
{
    UndergrowthOrientationMode_Horizontal, //0x0000
    UndergrowthOrientationMode_LeanToTerrain, //0x0001
    UndergrowthOrientationMode_SkewToTerrain //0x0002
};

////////////////////////////////////////
// RuntimeId: 08566
// TypeInfo:  0x000000014286DBC0
enum MeshScatteringOrientationMode
{
    MeshScatteringOrientationMode_Horizontal, //0x0000
    MeshScatteringOrientationMode_LeanToTerrain, //0x0001
    MeshScatteringOrientationMode_SkewToTerrain //0x0002
};

////////////////////////////////////////
// RuntimeId: 08564
// TypeInfo:  0x000000014286DBE0
enum UndergrowthRotationMode
{
    UndergrowthRotationMode_Random, //0x0000
    UndergrowthRotationMode_TowardsSlope, //0x0001
    UndergrowthRotationMode_Fixed //0x0002
};

////////////////////////////////////////
// RuntimeId: 08562
// TypeInfo:  0x000000014286DC00
enum MeshScatteringRotationMode
{
    MeshScatteringRotationMode_Random, //0x0000
    MeshScatteringRotationMode_TowardsSlope, //0x0001
    MeshScatteringRotationMode_Fixed //0x0002
};

////////////////////////////////////////
// RuntimeId: 08560
// TypeInfo:  0x000000014286DC20
enum MeshScatteringElevationMode
{
    MeshScatteringElevationMode_SnapBoundingBox, //0x0000
    MeshScatteringElevationMode_SnapPivotPoint //0x0001
};

////////////////////////////////////////
// RuntimeId: 08544
// TypeInfo:  0x000000014286DC40
enum DensityMap_FilterType
{
    DensityMapFilter_SecondOrderDifference, //0x0000
    DensityMapFilter_GaussianCurvature, //0x0001
    DensityMapFilter_MeanCurvature, //0x0002
    DensityMapFilter_LaplaceBeltrami, //0x0003
    DensityMapFilter_LaplaceBeltramiNoVoronoi //0x0004
};

////////////////////////////////////////
// RuntimeId: 08538
// TypeInfo:  0x000000014286DC60
enum SampleCenter
{
    SampleCenter_Center, //0x0000
    SampleCenter_TopLeft //0x0001
};

////////////////////////////////////////
// RuntimeId: 08534
// TypeInfo:  0x000000014286DC80
enum RasterNodeUsage
{
    RasterNodeUsage_Default, //0x0000
    RasterNodeUsage_Disabled, //0x0001
    RasterNodeUsage_Persistent, //0x0002
    RasterNodeUsage_PersistentDedicatedServer, //0x0003
    RasterNodeUsage_Skipped //0x0004
};

////////////////////////////////////////
// RuntimeId: 08506
// TypeInfo:  0x000000014286A518
enum TextureCompressQualityMode
{
    TextureCompressQualityMode_Default, //0x0000
    TextureCompressQualityMode_Simple, //0x0001
    TextureCompressQualityMode_HighQuality //0x0002
};

////////////////////////////////////////
// RuntimeId: 08504
// TypeInfo:  0x000000014286A738
enum ShaderConstantSystemTexture
{
    ShaderConstantSystemTexture_DepthBufferTexture, //0x0000
    ShaderConstantSystemTextureCount //0x0001
};

////////////////////////////////////////
// RuntimeId: 08502
// TypeInfo:  0x000000014286A758
enum ShaderTimeType
{
    ShaderTimeType_Game, //0x0000
    ShaderTimeType_Real //0x0001
};

////////////////////////////////////////
// RuntimeId: 08500
// TypeInfo:  0x000000014286A778
enum ShaderInterpolationType
{
    ShaderInterpolationType_Linear, //0x0000
    ShaderInterpolationType_Centroid, //0x0001
    ShaderInterpolationType_NoInterpolation, //0x0002
    ShaderInterpolationType_NoPerspective, //0x0003
    ShaderInterpolationType_Sample, //0x0004
    ShaderInterpolationType_Count, //0x0005
    ShaderInterpolationType_DomainManual, //0x0006
    ShaderInterpolationType_VertexOnly, //0x0007
    ShaderInterpolationType_VertexHullOnly, //0x0008
    ShaderInterpolationType_VertexHullDomainOnly //0x0009
};

////////////////////////////////////////
// RuntimeId: 08498
// TypeInfo:  0x000000014286A798
enum ShaderDepthBiasGroup
{
    ShaderDepthBiasGroup_Default, //0x0000
    ShaderDepthBiasGroup_Decal, //0x0001
    ShaderDepthBiasGroup_EmitterOcclusion, //0x0002
    ShaderDepthBiasGroup_EdgeModel, //0x0003
    ShaderDepthBiasGroup_TerrainDecal, //0x0004
    ShaderDepthBiasGroup_TerrainDecalZPass, //0x0005
    ShaderDepthBiasGroup_Shadow16Bit, //0x0006
    ShaderDepthBiasGroup_Shadow24Bit, //0x0007
    ShaderDepthBiasGroup_Shadow32Bit, //0x0008
    ShaderDepthBiasGroup_ZPass, //0x0009
    ShaderDepthBiasGroup_Emissive, //0x000A
    ShaderDepthBiasGroup_VelocityVector, //0x000B
    ShaderDepthBiasGroupCount //0x000C
};

////////////////////////////////////////
// RuntimeId: 08496
// TypeInfo:  0x000000014286A7B8
enum ShaderTextureCoordType
{
    ShaderTextureCoordType_Unknown, //0x0000
    ShaderTextureCoordType_VertexElement, //0x0001
    ShaderTextureCoordType_WorldPos //0x0002
};

////////////////////////////////////////
// RuntimeId: 08494
// TypeInfo:  0x000000014286A7D8
enum ShaderValueFormat
{
    ShaderValueFormat_Half, //0x0000
    ShaderValueFormat_Float, //0x0001
    ShaderValueFormat_Int, //0x0002
    ShaderValueFormat_UInt, //0x0003
    ShaderValueFormat_Bool //0x0004
};

////////////////////////////////////////
// RuntimeId: 08492
// TypeInfo:  0x000000014286A7F8
enum ShaderValueType
{
    ShaderValueType_None, //0x0000
    ShaderValueType_Half1, //0x0001
    ShaderValueType_Half1x2, //0x0002
    ShaderValueType_Half1x3, //0x0003
    ShaderValueType_Half1x4, //0x0004
    ShaderValueType_Half2, //0x0005
    ShaderValueType_Half2x2, //0x0006
    ShaderValueType_Half2x3, //0x0007
    ShaderValueType_Half2x4, //0x0008
    ShaderValueType_Half3, //0x0009
    ShaderValueType_Half3x2, //0x000A
    ShaderValueType_Half3x3, //0x000B
    ShaderValueType_Half3x4, //0x000C
    ShaderValueType_Half4, //0x000D
    ShaderValueType_Half4x2, //0x000E
    ShaderValueType_Half4x3, //0x000F
    ShaderValueType_Half4x4, //0x0010
    ShaderValueType_Float1, //0x0011
    ShaderValueType_Float1x2, //0x0012
    ShaderValueType_Float1x3, //0x0013
    ShaderValueType_Float1x4, //0x0014
    ShaderValueType_Float2, //0x0015
    ShaderValueType_Float2x2, //0x0016
    ShaderValueType_Float2x3, //0x0017
    ShaderValueType_Float2x4, //0x0018
    ShaderValueType_Float3, //0x0019
    ShaderValueType_Float3x2, //0x001A
    ShaderValueType_Float3x3, //0x001B
    ShaderValueType_Float3x4, //0x001C
    ShaderValueType_Float4, //0x001D
    ShaderValueType_Float4x2, //0x001E
    ShaderValueType_Float4x3, //0x001F
    ShaderValueType_Float4x4, //0x0020
    ShaderValueType_Int1, //0x0021
    ShaderValueType_Int1x2, //0x0022
    ShaderValueType_Int1x3, //0x0023
    ShaderValueType_Int1x4, //0x0024
    ShaderValueType_Int2, //0x0025
    ShaderValueType_Int2x2, //0x0026
    ShaderValueType_Int2x3, //0x0027
    ShaderValueType_Int2x4, //0x0028
    ShaderValueType_Int3, //0x0029
    ShaderValueType_Int3x2, //0x002A
    ShaderValueType_Int3x3, //0x002B
    ShaderValueType_Int3x4, //0x002C
    ShaderValueType_Int4, //0x002D
    ShaderValueType_Int4x2, //0x002E
    ShaderValueType_Int4x3, //0x002F
    ShaderValueType_Int4x4, //0x0030
    ShaderValueType_UInt1, //0x0031
    ShaderValueType_UInt1x2, //0x0032
    ShaderValueType_UInt1x3, //0x0033
    ShaderValueType_UInt1x4, //0x0034
    ShaderValueType_UInt2, //0x0035
    ShaderValueType_UInt2x2, //0x0036
    ShaderValueType_UInt2x3, //0x0037
    ShaderValueType_UInt2x4, //0x0038
    ShaderValueType_UInt3, //0x0039
    ShaderValueType_UInt3x2, //0x003A
    ShaderValueType_UInt3x3, //0x003B
    ShaderValueType_UInt3x4, //0x003C
    ShaderValueType_UInt4, //0x003D
    ShaderValueType_UInt4x2, //0x003E
    ShaderValueType_UInt4x3, //0x003F
    ShaderValueType_UInt4x4, //0x0040
    ShaderValueType_Bool1, //0x0041
    ShaderValueType_Bool1x2, //0x0042
    ShaderValueType_Bool1x3, //0x0043
    ShaderValueType_Bool1x4, //0x0044
    ShaderValueType_Bool2, //0x0045
    ShaderValueType_Bool2x2, //0x0046
    ShaderValueType_Bool2x3, //0x0047
    ShaderValueType_Bool2x4, //0x0048
    ShaderValueType_Bool3, //0x0049
    ShaderValueType_Bool3x2, //0x004A
    ShaderValueType_Bool3x3, //0x004B
    ShaderValueType_Bool3x4, //0x004C
    ShaderValueType_Bool4, //0x004D
    ShaderValueType_Bool4x2, //0x004E
    ShaderValueType_Bool4x3, //0x004F
    ShaderValueType_Bool4x4, //0x0050
    ShaderValueType_Sampler1d, //0x0051
    ShaderValueType_Sampler1dArray, //0x0052
    ShaderValueType_Sampler2d, //0x0053
    ShaderValueType_Sampler2dArray, //0x0054
    ShaderValueType_Sampler3d, //0x0055
    ShaderValueType_SamplerCube //0x0056
};

////////////////////////////////////////
// RuntimeId: 08490
// TypeInfo:  0x000000014286A818
enum ShaderGeometrySpace
{
    ShaderGeometrySpace_Object, //0x0000
    ShaderGeometrySpace_ObjectScaled, //0x0001
    ShaderGeometrySpace_World, //0x0002
    ShaderGeometrySpace_Screen, //0x0003
    ShaderGeometrySpaceCount //0x0004
};

////////////////////////////////////////
// RuntimeId: 08488
// TypeInfo:  0x000000014286A838
enum XenonTessellationMode
{
    XenonTessellationMode_Discrete, //0x0000
    XenonTessellationMode_Continuous, //0x0001
    XenonTessellationMode_PerEdge //0x0002
};

////////////////////////////////////////
// RuntimeId: 08486
// TypeInfo:  0x000000014286A858
enum ShaderShadowmapMethod
{
    ShaderShadowmapMethod_None, //0x0000
    ShaderShadowmapMethod_Single, //0x0001
    ShaderShadowmapMethod_SingleDiscard, //0x0002
    ShaderShadowmapMethod_CascadedBox3, //0x0003
    ShaderShadowmapMethod_CascadedBox4 //0x0004
};

////////////////////////////////////////
// RuntimeId: 08484
// TypeInfo:  0x000000014286A878
enum ShaderShadowmapQuality
{
    ShaderShadowmapQuality_Pcf2x2, //0x0000
    ShaderShadowmapQuality_Pcf4x4, //0x0001
    ShaderShadowmapQuality_Gaussian //0x0002
};

////////////////////////////////////////
// RuntimeId: 08482
// TypeInfo:  0x000000014286A898
enum ShaderObjectLighting
{
    ShaderObjectLighting_None, //0x0000
    ShaderObjectLighting_LightProbe, //0x0001
    ShaderObjectLighting_LightMap, //0x0002
    ShaderObjectLightingCount //0x0003
};

////////////////////////////////////////
// RuntimeId: 08480
// TypeInfo:  0x000000014286A8B8
enum ShaderDebugRenderMode
{
    ShaderDebugRenderMode_None, //0x0000
    ShaderDebugRenderMode_Overdraw, //0x0001
    ShaderDebugRenderMode_OverdrawDepthTest, //0x0002
    ShaderDebugRenderMode_ShaderCost //0x0003
};

////////////////////////////////////////
// RuntimeId: 08478
// TypeInfo:  0x000000014286A8D8
enum ShaderRenderMode
{
    ShaderRenderMode_Default, //0x0000
    ShaderRenderMode_DynamicEnvmap, //0x0001
    ShaderRenderMode_ZOnly, //0x0002
    ShaderRenderMode_DeferredShadingGBufferLayout0, //0x0003
    ShaderRenderMode_DeferredShadingGBufferLayout1, //0x0004
    ShaderRenderMode_DeferredShadingGBufferLayout2, //0x0005
    ShaderRenderMode_DeferredShadingGBufferLayout3, //0x0006
    ShaderRenderMode_DeferredShadingEmissive, //0x0007
    ShaderRenderMode_DeferredShadingUnlit, //0x0008
    ShaderRenderMode_VelocityVector, //0x0009
    ShaderRenderMode_DistortionVector, //0x000A
    ShaderRenderMode_AmbientOcclusionVolume, //0x000B
    ShaderRenderMode_DebugMulti, //0x000C
    ShaderRenderModeCount //0x000D
};

////////////////////////////////////////
// RuntimeId: 08476
// TypeInfo:  0x000000014286A8F8
enum ShaderSkinningMethod
{
    ShaderSkinningMethod_None, //0x0000
    ShaderSkinningMethod_Linear1Bone, //0x0001
    ShaderSkinningMethod_Linear2Bone, //0x0002
    ShaderSkinningMethod_Linear4Bone, //0x0003
    ShaderSkinningMethod_Linear8Bone, //0x0004
    ShaderSkinningMethod_Null, //0x0005
    ShaderSkinningMethod_DualQuaternion4Bone, //0x0006
    ShaderSkinningMethodCount //0x0007
};

////////////////////////////////////////
// RuntimeId: 08474
// TypeInfo:  0x000000014286A918
enum ShaderInstancingMethod
{
    ShaderInstancingMethod_None, //0x0000
    ShaderInstancingMethod_ObjectTransform4x3Half, //0x0001
    ShaderInstancingMethod_ObjectTransform4x3InstanceData4x1Half, //0x0002
    ShaderInstancingMethod_ObjectTransform4x3InstanceData4x2Half, //0x0003
    ShaderInstancingMethod_WorldTransform4x3Float, //0x0004
    ShaderInstancingMethod_WorldTransform4x3FloatInstanceData4x2Half, //0x0005
    ShaderInstancingMethod_ObjectTranslationScaleHalf, //0x0006
    ShaderInstancingMethod_ObjectTranslationScaleHalfInstanceData4x1Half, //0x0007
    ShaderInstancingMethod_ObjectTranslationScaleHalfInstanceData4x2Half, //0x0008
    ShaderInstancingMethod_PositionStream, //0x0009
    ShaderInstancingMethod_DxBuffer, //0x000A
    ShaderInstancingMethod_DxBufferInstanceData4x1Float, //0x000B
    ShaderInstancingMethodCount //0x000C
};

////////////////////////////////////////
// RuntimeId: 08472
// TypeInfo:  0x000000014286A938
enum ShaderBlendMode
{
    ShaderBlendMode_Lerp, //0x0000
    ShaderBlendMode_Additive, //0x0001
    ShaderBlendMode_Multiply, //0x0002
    ShaderBlendMode_LerpPremultiplied, //0x0003
    ShaderBlendMode_DecalLerpNoSpec, //0x0004
    ShaderBlendMode_DecalLerpNormal, //0x0005
    ShaderBlendMode_DecalLerpNormalMultiplyDiffuse, //0x0006
    ShaderBlendMode_DecalLerpDiffuse, //0x0007
    ShaderBlendMode_DecalLerpDiffuseNoSpec //0x0008
};

////////////////////////////////////////
// RuntimeId: 08470
// TypeInfo:  0x000000014286A958
enum SurfaceShaderType
{
    SurfaceShaderType_Opaque, //0x0000
    SurfaceShaderType_OpaqueAlphaTest, //0x0001
    SurfaceShaderType_OpaqueAlphaTestSimple, //0x0002
    SurfaceShaderType_Transparent, //0x0003
    SurfaceShaderType_TransparentDecal, //0x0004
    SurfaceShaderType_TransparentDepth //0x0005
};

////////////////////////////////////////
// RuntimeId: 08462
// TypeInfo:  0x000000014286A538
enum TerrainShaderParameterDataType
{
    TerrainShaderParameterDataType_Bool, //0x0000
    TerrainShaderParameterDataType_Scalar, //0x0001
    TerrainShaderParameterDataType_Vector2, //0x0002
    TerrainShaderParameterDataType_Vector3, //0x0003
    TerrainShaderParameterDataType_Vector4 //0x0004
};

////////////////////////////////////////
// RuntimeId: 08458
// TypeInfo:  0x000000014286A978
enum ShaderParameterDataType
{
    ShaderParameterDataType_Vector //0x0000
};

////////////////////////////////////////
// RuntimeId: 08456
// TypeInfo:  0x000000014286A998
enum UnitType
{
    UnitType_Meter, //0x0000
    UnitType_Undefined //0x0001
};

////////////////////////////////////////
// RuntimeId: 08454
// TypeInfo:  0x000000014286A9B8
enum DistortionSpaceType
{
    DistortionSpaceType_CameraSpace, //0x0000
    DistortionSpaceType_ScreenSpace //0x0001
};

////////////////////////////////////////
// RuntimeId: 08452
// TypeInfo:  0x000000014286A9D8
enum XenonShaderBranchType
{
    XsbtDefault, //0x0000
    XsbtPredicate, //0x0001
    XsbtPredicateBlock, //0x0002
    XsbtBranch //0x0003
};

////////////////////////////////////////
// RuntimeId: 08450
// TypeInfo:  0x000000014286A9F8
enum ShaderBranchMethod
{
    SbmStatic, //0x0000
    SbmFlat, //0x0001
    SbmDynamicIfElse, //0x0002
    SbmDynamicIfTrue, //0x0003
    SbmDynamicIfFalse //0x0004
};

////////////////////////////////////////
// RuntimeId: 08448
// TypeInfo:  0x000000014286AA18
enum ShaderComparisonOperator
{
    ScoEquals, //0x0000
    ScoNotEquals, //0x0001
    ScoLess, //0x0002
    ScoLessEquals, //0x0003
    ScoGreater, //0x0004
    ScoGreaterEquals //0x0005
};

////////////////////////////////////////
// RuntimeId: 08446
// TypeInfo:  0x000000014286AA38
enum BlendShaderMode
{
    BsmLerp, //0x0000
    BsmAdd, //0x0001
    BsmSubtract, //0x0002
    BsmMultiply, //0x0003
    BsmMultiply2x, //0x0004
    BsmScreen, //0x0005
    BsmDifference, //0x0006
    BsmLighten, //0x0007
    BsmDarken, //0x0008
    BsmOverlay //0x0009
};

////////////////////////////////////////
// RuntimeId: 08444
// TypeInfo:  0x000000014286AA58
enum CurveShaderType
{
    CstSine, //0x0000
    CstSineNormalized, //0x0001
    CstSawtooth, //0x0002
    CstTriangle, //0x0003
    CstSquare //0x0004
};

////////////////////////////////////////
// RuntimeId: 08442
// TypeInfo:  0x000000014286AA78
enum EyeVectorSpace
{
    EyeVectorSpace_World, //0x0000
    EyeVectorSpace_Object, //0x0001
    EyeVectorSpace_Tangent //0x0002
};

////////////////////////////////////////
// RuntimeId: 08440
// TypeInfo:  0x000000014286AA98
enum PixelNormalSpace
{
    PnsTangent //0x0000
};

////////////////////////////////////////
// RuntimeId: 08438
// TypeInfo:  0x000000014286AAB8
enum VertexNormalSpace
{
    VnsObject, //0x0000
    VnsInstance, //0x0001
    VnsWorld //0x0002
};

////////////////////////////////////////
// RuntimeId: 08436
// TypeInfo:  0x000000014286AAD8
enum ShaderPositionSpace
{
    ShaderPositionSpace_Object, //0x0000
    ShaderPositionSpace_World //0x0001
};

////////////////////////////////////////
// RuntimeId: 08434
// TypeInfo:  0x000000014286AAF8
enum ShaderTextureDecompression
{
    ShaderTextureDecompression_None, //0x0000
    ShaderTextureDecompression_NormalAG, //0x0001
    ShaderTextureDecompression_NormalRG, //0x0002
    ShaderTextureDecompression_NormalRGA, //0x0003
    ShaderTextureDecompression_RGBE, //0x0004
    ShaderTextureDecompression_SrgbToLinear, //0x0005
    ShaderTextureDecompression_NormalRGorAG //0x0006
};

////////////////////////////////////////
// RuntimeId: 08432
// TypeInfo:  0x000000014286AB18
enum ShaderValueParameterType
{
    SvptLiteral, //0x0000
    SvptExternalStatic, //0x0001
    SvptExternalPermutation, //0x0002
    SvptExternalConstant, //0x0003
    SvptExternalSubMaterial //0x0004
};

////////////////////////////////////////
// RuntimeId: 08430
// TypeInfo:  0x000000014286AB38
enum ShaderLightingModel
{
    ShaderLightingModel_Standard, //0x0000
    ShaderLightingModel_Metallic, //0x0001
    ShaderLightingModel_Skin, //0x0002
    ShaderLightingModel_DynamicEnvmap, //0x0003
    ShaderLightingModel_Hair, //0x0004
    ShaderLightingModel_Translucent //0x0005
};

////////////////////////////////////////
// RuntimeId: 08428
// TypeInfo:  0x000000014286AB58
enum ShaderPortType
{
    SptBool, //0x0000
    SptInteger, //0x0001
    SptScalar, //0x0002
    SptVec2, //0x0003
    SptVec3, //0x0004
    SptVec4, //0x0005
    SptColor //0x0006
};

////////////////////////////////////////
// RuntimeId: 08410
// TypeInfo:  0x000000014286A558
enum ShaderTessellationType
{
    ShaderTessellationType_None, //0x0000
    ShaderTessellationType_Phong, //0x0001
    ShaderTessellationType_DisplacementMappingPhong, //0x0002
    ShaderTessellationType_DisplacementMapping //0x0003
};

////////////////////////////////////////
// RuntimeId: 08408
// TypeInfo:  0x000000014286A578
enum ShaderParameterType
{
    ShaderParameterType_Bool, //0x0000
    ShaderParameterType_Int, //0x0001
    ShaderParameterType_Scalar, //0x0002
    ShaderParameterType_Vec2, //0x0003
    ShaderParameterType_Vec3, //0x0004
    ShaderParameterType_Vec4, //0x0005
    ShaderParameterType_Color, //0x0006
    ShaderParameterType_TextureSlice, //0x0007
    ShaderParameterTypeCount //0x0008
};

////////////////////////////////////////
// RuntimeId: 08400
// TypeInfo:  0x000000014286AB98
enum ShaderConstantFunction
{
    ShaderConstantFunction_ViewMatrix, //0x0000
    ShaderConstantFunction_ViewProjMatrix, //0x0001
    ShaderConstantFunction_WorldViewMatrix, //0x0002
    ShaderConstantFunction_WorldViewProjMatrix, //0x0003
    ShaderConstantFunction_CrViewProjMatrix, //0x0004
    ShaderConstantFunction_CrWorldViewProjMatrix, //0x0005
    ShaderConstantFunction_CameraPos, //0x0006
    ShaderConstantFunction_PrevViewProjMatrix, //0x0007
    ShaderConstantFunction_PrevWorldViewProjMatrix, //0x0008
    ShaderConstantFunction_WorldMatrix, //0x0009
    ShaderConstantFunction_PrevWorldMatrix, //0x000A
    ShaderConstantFunction_BoneVectors, //0x000B
    ShaderConstantFunction_PrevBoneVectors, //0x000C
    ShaderConstantFunction_LightProbeShR, //0x000D
    ShaderConstantFunction_LightProbeShG, //0x000E
    ShaderConstantFunction_LightProbeShB, //0x000F
    ShaderConstantFunction_LightProbeShO, //0x0010
    ShaderConstantFunction_LightMapUvTransform, //0x0011
    ShaderConstantFunction_LightMapUvTranslation, //0x0012
    ShaderConstantFunction_LightMapIrradianceTexture, //0x0013
    ShaderConstantFunction_LightMapIrradianceChromaTexture, //0x0014
    ShaderConstantFunction_LightMapIrradianceLumaTexture, //0x0015
    ShaderConstantFunction_LightMapDirectionTexture, //0x0016
    ShaderConstantFunction_LightMapSkyVisibilityTexture, //0x0017
    ShaderConstantFunction_DepthBufferTexture, //0x0018
    ShaderConstantFunction_ProjectionKxKyKzKw, //0x0019
    ShaderConstantFunction_Time, //0x001A
    ShaderConstantFunction_ScreenSize, //0x001B
    ShaderConstantFunction_OutdoorLightDir, //0x001C
    ShaderConstantFunction_OutdoorLightHemisphereDir, //0x001D
    ShaderConstantFunction_OutdoorLightKeyColor, //0x001E
    ShaderConstantFunction_OutdoorLightKeySpecularColorAndHemisphereVisibility, //0x001F
    ShaderConstantFunction_OutdoorLightTopColor, //0x0020
    ShaderConstantFunction_OutdoorLightBottomColor, //0x0021
    ShaderConstantFunction_OutdoorLightShadowTransform, //0x0022
    ShaderConstantFunction_OutdoorLightShadowmapSizeAndInvSize, //0x0023
    ShaderConstantFunction_OutdoorLightShadowmapTexture, //0x0024
    ShaderConstantFunction_OutdoorLightTransparencyShadowmapTexture, //0x0025
    ShaderConstantFunction_OutdoorLightSkyEnvmap, //0x0026
    ShaderConstantFunction_OutdoorLightCustomEnvmap, //0x0027
    ShaderConstantFunction_OutdoorLightDynamicEnvmap, //0x0028
    ShaderConstantFunction_OutdoorLightTopColorEnvmap, //0x0029
    ShaderConstantFunction_OutdoorLightBottomColorEnvmap, //0x002A
    ShaderConstantFunction_OutdoorLightKeyColorEnvmap, //0x002B
    ShaderConstantFunction_OutdoorLightEnvmapsMipmapCount, //0x002C
    ShaderConstantFunction_OutdoorLightSkyEnvmap8BitTexInvScale, //0x002D
    ShaderConstantFunction_OutdoorLightCustomEnvmapScaleAmbient, //0x002E
    ShaderConstantFunction_TransparentStartAndSlopeAndClamp, //0x002F
    ShaderConstantFunction_TransparentCurve, //0x0030
    ShaderConstantFunction_BestFitNormalScaleTexture, //0x0031
    ShaderConstantFunction_SceneTexture, //0x0032
    ShaderConstantFunction_ColorScale, //0x0033
    ShaderConstantFunction_DebugNonFiniteColor, //0x0034
    ShaderConstantFunction_XenonInstancingIndexCount, //0x0035
    ShaderConstantFunction_Ps3ClipPlane, //0x0036
    ShaderConstantFunction_DxVectorBufferOffsets, //0x0037
    ShaderConstantFunction_DistortionMaxValue, //0x0038
    ShaderConstantFunction_SubSurfaceScatteringMaxWidth, //0x0039
    ShaderConstantFunction_ObjectScale, //0x003A
    ShaderConstantFunction_ObjectWorldPosition, //0x003B
    ShaderConstantFunction_UserData0, //0x003C
    ShaderConstantFunction_UserData1, //0x003D
    ShaderConstantFunctionCount //0x003E
};

////////////////////////////////////////
// RuntimeId: 08392
// TypeInfo:  0x000000014286A598
enum BlurFilter
{
    BfNone, //0x0000
    BfGaussian3Pixels, //0x0001
    BfGaussian5Pixels, //0x0002
    BfGaussian7Pixels, //0x0003
    BfGaussian9Pixels, //0x0004
    BfGaussian15Pixels, //0x0005
    BfGaussian31Pixels //0x0006
};

////////////////////////////////////////
// RuntimeId: 08388
// TypeInfo:  0x000000014286A5B8
enum BlurMethod
{
    BlurMethod_Gaussian, //0x0000
    BlurMethod_Sprite //0x0001
};

////////////////////////////////////////
// RuntimeId: 08386
// TypeInfo:  0x000000014286A5D8
enum DofMethod
{
    DofMethod_Gaussian, //0x0000
    DofMethod_Sprite //0x0001
};

////////////////////////////////////////
// RuntimeId: 08384
// TypeInfo:  0x000000014286A5F8
enum DynamicAOMethod
{
    DynamicAOMethod_SSAO, //0x0000
    DynamicAOMethod_HBAO //0x0001
};

////////////////////////////////////////
// RuntimeId: 08382
// TypeInfo:  0x000000014286A618
enum PostProcessDebugMode
{
    PpdmDefault, //0x0000
    PpdmBloom, //0x0001
    PpdmBloomStep, //0x0002
    PpdmDofBlur, //0x0003
    PpdmBlur, //0x0004
    PpdmBlurStep, //0x0005
    PpdmDepth //0x0006
};

////////////////////////////////////////
// RuntimeId: 08366
// TypeInfo:  0x000000014286A638
enum TonemapMethod
{
    TonemapMethod_None, //0x0000
    TonemapMethod_Linear, //0x0001
    TonemapMethod_Filmic, //0x0002
    TonemapMethod_FilmicNeutral, //0x0003
    TonemapMethodCount //0x0004
};

////////////////////////////////////////
// RuntimeId: 08364
// TypeInfo:  0x000000014286ABF8
enum EntropyCodecType
{
    EntropyCodecType_Arithmetic //0x0000
};

////////////////////////////////////////
// RuntimeId: 08362
// TypeInfo:  0x000000014286A658
enum PointCloudAttributeQuantization
{
    PointCloudAttributeQuantization_s5e5, //0x0000
    PointCloudAttributeQuantization_s7e5, //0x0001
    PointCloudAttributeQuantization_s10e5, //0x0002
    PointCloudAttributeQuantization_s16e7, //0x0003
    PointCloudAttributeQuantization_None, //0x0004
    PointCloudAttributeQuantization_Count //0x0005
};

////////////////////////////////////////
// RuntimeId: 08360
// TypeInfo:  0x000000014286A678
enum PointCloudAttributeUsage
{
    PointCloudAttributeUsage_Position, //0x0000
    PointCloudAttributeUsage_Normal, //0x0001
    PointCloudAttributeUsage_Tangent, //0x0002
    PointCloudAttributeUsage_Binormal, //0x0003
    PointCloudAttributeUsage_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 08358
// TypeInfo:  0x000000014286AC18
enum MeshSubsetCategoryFlags
{
    MeshSubsetCategoryFlags_Opaque, //0x0000
    MeshSubsetCategoryFlags_Transparent, //0x0001
    MeshSubsetCategoryFlags_TransparentDecal, //0x0002
    MeshSubsetCategoryFlags_ZOnly, //0x0003
    MeshSubsetCategoryFlags_DynamicEnvmap, //0x0004
    MeshSubsetCategoryFlags_PlanarReflection, //0x0005
    MeshSubsetCategoryFlags_Normal, //0x0006
    MeshSubsetCategoryFlags_All //0x0007
};

////////////////////////////////////////
// RuntimeId: 08356
// TypeInfo:  0x000000014286AC38
enum MeshSubsetCategory
{
    MeshSubsetCategory_Opaque, //0x0000
    MeshSubsetCategory_Transparent, //0x0001
    MeshSubsetCategory_TransparentDecal, //0x0002
    MeshSubsetCategory_ZOnly, //0x0003
    MeshSubsetCategoryCount //0x0004
};

////////////////////////////////////////
// RuntimeId: 08354
// TypeInfo:  0x000000014286AC58
enum MeshType
{
    MeshType_Rigid, //0x0000
    MeshType_Skinned, //0x0001
    MeshType_Composite //0x0002
};

////////////////////////////////////////
// RuntimeId: 08352
// TypeInfo:  0x000000014286AC78
enum MeshLimits
{
    MaxMeshLodCount //0x0000
};

////////////////////////////////////////
// RuntimeId: 08350
// TypeInfo:  0x000000014286AC98
enum MeshHandleFlags
{
    InvalidMeshHandle //0x0000
};

////////////////////////////////////////
// RuntimeId: 08312
// TypeInfo:  0x000000014286A698
enum ProceduralAnimationWindMethod
{
    Wind_Cloth, //0x0000
    Wind_Flag //0x0001
};

////////////////////////////////////////
// RuntimeId: 08308
// TypeInfo:  0x000000014286A6B8
enum ProceduralAnimationWiggleMethod
{
    Wiggle_Palmtree, //0x0000
    Wiggle_Tree, //0x0001
    Wiggle_Bush //0x0002
};

////////////////////////////////////////
// RuntimeId: 08304
// TypeInfo:  0x000000014286A6D8
enum EnlightenType
{
    EnlightenType_Dynamic, //0x0000
    EnlightenType_LightProbe, //0x0001
    EnlightenType_Static, //0x0002
    EnlightenType_Proxy //0x0003
};

////////////////////////////////////////
// RuntimeId: 08291
// TypeInfo:  0x00000001428671A8
enum SpotLightShape
{
    SpotLightShape_Cone, //0x0000
    SpotLightShape_Frustum, //0x0001
    SpotLightShape_OrthoFrustum //0x0002
};

////////////////////////////////////////
// RuntimeId: 08277
// TypeInfo:  0x00000001428671E8
enum VertexElementClassification
{
    VertexElementClassification_PerVertex, //0x0000
    VertexElementClassification_PerInstance, //0x0001
    VertexElementClassification_Index //0x0002
};

////////////////////////////////////////
// RuntimeId: 08275
// TypeInfo:  0x0000000142867208
enum VertexElementUsage
{
    VertexElementUsage_Unknown, //0x0000
    VertexElementUsage_Pos, //0x0001
    VertexElementUsage_BoneIndices, //0x0002
    VertexElementUsage_BoneIndices2, //0x0003
    VertexElementUsage_BoneWeights, //0x0004
    VertexElementUsage_BoneWeights2, //0x0005
    VertexElementUsage_Normal, //0x0006
    VertexElementUsage_Tangent, //0x0007
    VertexElementUsage_Binormal, //0x0008
    VertexElementUsage_BinormalSign, //0x0009
    VertexElementUsage_WorldTrans1, //0x000A
    VertexElementUsage_WorldTrans2, //0x000B
    VertexElementUsage_WorldTrans3, //0x000C
    VertexElementUsage_InstanceId, //0x000D
    VertexElementUsage_InstanceUserData0, //0x000E
    VertexElementUsage_InstanceUserData1, //0x000F
    VertexElementUsage_XenonIndex, //0x0010
    VertexElementUsage_XenonBarycentric, //0x0011
    VertexElementUsage_XenonQuadID, //0x0012
    VertexElementUsage_Index, //0x0013
    VertexElementUsage_ViewIndex, //0x0014
    VertexElementUsage_Color0, //0x0015
    VertexElementUsage_Color1, //0x0016
    VertexElementUsage_TexCoord0, //0x0017
    VertexElementUsage_TexCoord1, //0x0018
    VertexElementUsage_TexCoord2, //0x0019
    VertexElementUsage_TexCoord3, //0x001A
    VertexElementUsage_TexCoord4, //0x001B
    VertexElementUsage_TexCoord5, //0x001C
    VertexElementUsage_TexCoord6, //0x001D
    VertexElementUsage_TexCoord7, //0x001E
    VertexElementUsage_DisplacementMapTexCoord, //0x001F
    VertexElementUsage_RadiosityTexCoord, //0x0020
    VertexElementUsage_VisInfo, //0x0021
    VertexElementUsage_SpriteSize, //0x0022
    VertexElementUsage_PackedTexCoord0, //0x0023
    VertexElementUsage_PackedTexCoord1, //0x0024
    VertexElementUsage_PackedTexCoord2, //0x0025
    VertexElementUsage_PackedTexCoord3, //0x0026
    VertexElementUsage_ClipDistance0, //0x0027
    VertexElementUsage_ClipDistance1, //0x0028
    VertexElementUsage_SubMaterialIndex, //0x0029
    VertexElementUsage_BranchInfo, //0x002A
    VertexElementUsage_PosAndScale, //0x002B
    VertexElementUsage_Rotation, //0x002C
    VertexElementUsage_SpriteSizeAndUv, //0x002D
    VertexElementUsage_FadePos, //0x002E
    VertexElementUsage_SpawnTime, //0x002F
    VertexElementUsage_PosAndSoftMul, //0x0030
    VertexElementUsage_Alpha, //0x0031
    VertexElementUsage_Misc0, //0x0032
    VertexElementUsage_Misc1, //0x0033
    VertexElementUsage_LeftAndRotation, //0x0034
    VertexElementUsage_UpAndNormalBlend, //0x0035
    VertexElementUsage_SH_R, //0x0036
    VertexElementUsage_SH_G, //0x0037
    VertexElementUsage_SH_B, //0x0038
    VertexElementUsage_PosAndRejectCulling, //0x0039
    VertexElementUsage_Shadow, //0x003A
    VertexElementUsage_CustomParams01to04, //0x003B
    VertexElementUsage_CustomParams05to08, //0x003C
    VertexElementUsage_CustomParams09to12, //0x003D
    VertexElementUsage_PatchUv, //0x003E
    VertexElementUsage_Height, //0x003F
    VertexElementUsage_MaskUVs0, //0x0040
    VertexElementUsage_MaskUVs1, //0x0041
    VertexElementUsage_MaskUVs2, //0x0042
    VertexElementUsage_MaskUVs3, //0x0043
    VertexElementUsage_UserMasks, //0x0044
    VertexElementUsage_HeightfieldUv, //0x0045
    VertexElementUsage_MaskUv, //0x0046
    VertexElementUsage_GlobalColorUv, //0x0047
    VertexElementUsage_HeightfieldPixelSizeAndAspect, //0x0048
    VertexElementUsage_WorldPositionXz, //0x0049
    VertexElementUsage_TerrainTextureNodeUv, //0x004A
    VertexElementUsage_ParentTerrainTextureNodeUv, //0x004B
    VertexElementUsage_DeformationIndex, //0x004C
    VertexElementUsage_DeformationWeight, //0x004D
    VertexElementUsage_DeformationPosition, //0x004E
    VertexElementUsage_Uv01, //0x004F
    VertexElementUsage_WorldPos, //0x0050
    VertexElementUsage_EyeVector, //0x0051
    VertexElementUsage_LightParams1, //0x0052
    VertexElementUsage_LightParams2, //0x0053
    VertexElementUsage_LightSubParams, //0x0054
    VertexElementUsage_LightSideVector, //0x0055
    VertexElementUsage_LightInnerAndOuterAngle, //0x0056
    VertexElementUsage_LightDir, //0x0057
    VertexElementUsage_LightMatrix1, //0x0058
    VertexElementUsage_LightMatrix2, //0x0059
    VertexElementUsage_LightMatrix3, //0x005A
    VertexElementUsage_LightMatrix4, //0x005B
    VertexElementUsage_Custom, //0x005C
    VertexElementUsage_DestructionMaskDistance, //0x005D
    VertexElementUsage_DestructionMaskTexCoord //0x005E
};

////////////////////////////////////////
// RuntimeId: 08273
// TypeInfo:  0x0000000142867228
enum VertexElementFormat
{
    VertexElementFormat_None, //0x0000
    VertexElementFormat_Float, //0x0001
    VertexElementFormat_Float2, //0x0002
    VertexElementFormat_Float3, //0x0003
    VertexElementFormat_Float4, //0x0004
    VertexElementFormat_Half, //0x0005
    VertexElementFormat_Half2, //0x0006
    VertexElementFormat_Half3, //0x0007
    VertexElementFormat_Half4, //0x0008
    VertexElementFormat_UByteN, //0x0009
    VertexElementFormat_Byte4, //0x000A
    VertexElementFormat_Byte4N, //0x000B
    VertexElementFormat_UByte4, //0x000C
    VertexElementFormat_UByte4N, //0x000D
    VertexElementFormat_Short, //0x000E
    VertexElementFormat_Short2, //0x000F
    VertexElementFormat_Short3, //0x0010
    VertexElementFormat_Short4, //0x0011
    VertexElementFormat_ShortN, //0x0012
    VertexElementFormat_Short2N, //0x0013
    VertexElementFormat_Short3N, //0x0014
    VertexElementFormat_Short4N, //0x0015
    VertexElementFormat_UShort2, //0x0016
    VertexElementFormat_UShort4, //0x0017
    VertexElementFormat_UShort2N, //0x0018
    VertexElementFormat_UShort4N, //0x0019
    VertexElementFormat_Int, //0x001A
    VertexElementFormat_Int2, //0x001B
    VertexElementFormat_Int3, //0x001C
    VertexElementFormat_Int4, //0x001D
    VertexElementFormat_IntN, //0x001E
    VertexElementFormat_Int2N, //0x001F
    VertexElementFormat_Int4N, //0x0020
    VertexElementFormat_UInt, //0x0021
    VertexElementFormat_UInt2, //0x0022
    VertexElementFormat_UInt3, //0x0023
    VertexElementFormat_UInt4, //0x0024
    VertexElementFormat_UIntN, //0x0025
    VertexElementFormat_UInt2N, //0x0026
    VertexElementFormat_UInt4N, //0x0027
    VertexElementFormat_Comp3_10_10_10, //0x0028
    VertexElementFormat_Comp3N_10_10_10, //0x0029
    VertexElementFormat_UComp3_10_10_10, //0x002A
    VertexElementFormat_UComp3N_10_10_10, //0x002B
    VertexElementFormat_Comp3_11_11_10, //0x002C
    VertexElementFormat_Comp3N_11_11_10, //0x002D
    VertexElementFormat_UComp3_11_11_10, //0x002E
    VertexElementFormat_UComp3N_11_11_10, //0x002F
    VertexElementFormat_Comp4_10_10_10_2, //0x0030
    VertexElementFormat_Comp4N_10_10_10_2, //0x0031
    VertexElementFormat_UComp4_10_10_10_2, //0x0032
    VertexElementFormat_UComp4N_10_10_10_2 //0x0033
};

////////////////////////////////////////
// RuntimeId: 08259
// TypeInfo:  0x0000000142867248
enum ShaderProgram
{
    ShaderProgram_DebugRender_Font2d, //0x0000
    ShaderProgram_DebugRender_Color2d, //0x0001
    ShaderProgram_DebugRender_Color3d, //0x0002
    ShaderProgram_DebugRender_Lit3d, //0x0003
    ShaderProgram_DebugRender_LitGrid3d, //0x0004
    ShaderProgram_SimpleWhite, //0x0005
    ShaderProgram_MaterialID, //0x0006
    ShaderProgram_RenderTest, //0x0007
    ShaderProgram_HairAnisoShift, //0x0008
    ShaderProgram_HairCoverageX, //0x0009
    ShaderProgram_HairCoverageY, //0x000A
    ShaderProgram_HairCoverageBlur, //0x000B
    ShaderProgram_DownsampleQuarterWithZ, //0x000C
    ShaderProgram_DownsampleQuarter, //0x000D
    ShaderProgram_DownsampleQuarterZ, //0x000E
    ShaderProgram_DownsampleHalf, //0x000F
    ShaderProgram_DownsampleDepthHalfSingleSample, //0x0010
    ShaderProgram_DownsampleHalfGrayscaleLog, //0x0011
    ShaderProgram_DownsampleCubeHalfPoisson13, //0x0012
    ShaderProgram_DownsampleCubeHalfPoisson13Clamped, //0x0013
    ShaderProgram_SeperableFilter, //0x0014
    ShaderProgram_GaussianBlurRgb15HCube, //0x0015
    ShaderProgram_GaussianBlurRgb15VCube, //0x0016
    ShaderProgram_FastGaussian9H, //0x0017
    ShaderProgram_FastGaussian9V, //0x0018
    ShaderProgram_GreyscaleGaussian9H, //0x0019
    ShaderProgram_GreyscaleGaussian9V, //0x001A
    ShaderProgram_CosineBlurRgbHCube, //0x001B
    ShaderProgram_CosineBlurRgbVCube, //0x001C
    ShaderProgram_GaussianBlurRgba15HCube, //0x001D
    ShaderProgram_GaussianBlurRgba15VCube, //0x001E
    ShaderProgram_CosineBlurRgbaHCube, //0x001F
    ShaderProgram_CosineBlurRgbaVCube, //0x0020
    ShaderProgram_Tex1d, //0x0021
    ShaderProgram_Tex2d, //0x0022
    ShaderProgram_Tex2dConstantAlpha, //0x0023
    ShaderProgram_Tex2dSaturateAlpha, //0x0024
    ShaderProgram_Tex2dAlpha, //0x0025
    ShaderProgram_Tex2dAlphaOverlayAdd, //0x0026
    ShaderProgram_Tex2dAlphaOverlayLerp, //0x0027
    ShaderProgram_Tex2dPow, //0x0028
    ShaderProgram_Tex2dPowAlpha, //0x0029
    ShaderProgram_Tex2dMrt2, //0x002A
    ShaderProgram_Tex2dMrt3, //0x002B
    ShaderProgram_Tex2dMrt4, //0x002C
    ShaderProgram_Tex2dGrayscaleLog, //0x002D
    ShaderProgram_Tex3d, //0x002E
    ShaderProgram_Tex2dArray, //0x002F
    ShaderProgram_TexCube, //0x0030
    ShaderProgram_TexCubeAlpha, //0x0031
    ShaderProgram_TexCubeAlphaOverlayAdd, //0x0032
    ShaderProgram_TexCubeAlphaOverlayLerp, //0x0033
    ShaderProgram_Color, //0x0034
    ShaderProgram_Tonemap, //0x0035
    ShaderProgram_ColorGrade, //0x0036
    ShaderProgram_Dof, //0x0037
    ShaderProgram_DofDebug, //0x0038
    ShaderProgram_UnprojectDepthBuffer, //0x0039
    ShaderProgram_UnprojectDepthBufferHalf, //0x003A
    ShaderProgram_UnprojectDepthBufferMsaa, //0x003B
    ShaderProgram_SingleDepthSampleMsaa, //0x003C
    ShaderProgram_MaxDepthSampleMsaa, //0x003D
    ShaderProgram_TexYCrCb, //0x003E
    ShaderProgram_CombineTextures2, //0x003F
    ShaderProgram_CombineTextures3, //0x0040
    ShaderProgram_CombineTextures4, //0x0041
    ShaderProgram_CombineTextures5, //0x0042
    ShaderProgram_CombineTextures6, //0x0043
    ShaderProgram_CombineTextures2Bilinear, //0x0044
    ShaderProgram_CombineTextures3Bilinear, //0x0045
    ShaderProgram_CombineTextures4Bilinear, //0x0046
    ShaderProgram_CombineTextures5Bilinear, //0x0047
    ShaderProgram_CombineTextures6Bilinear, //0x0048
    ShaderProgram_CombineOpaqueAndTrans2d, //0x0049
    ShaderProgram_CombineOpaqueAndTransCube, //0x004A
    ShaderProgram_CombineOpaqueAndTrans2dSpecial, //0x004B
    ShaderProgram_CombineOpaqueAndTransCubeSpecial, //0x004C
    ShaderProgram_LerpCubesAndScale, //0x004D
    ShaderProgram_RadialBlur, //0x004E
    ShaderProgram_PoissonRadialBlur, //0x004F
    ShaderProgram_ChromaticAberrationWithRadialBlend, //0x0050
    ShaderProgram_FLIR, //0x0051
    ShaderProgram_ColorTint, //0x0052
    ShaderProgram_WriteZ, //0x0053
    ShaderProgram_WriteHalfResZ, //0x0054
    ShaderProgram_WriteHalfResZFat, //0x0055
    ShaderProgram_WriteHalfResZAverage, //0x0056
    ShaderProgram_LinearZ, //0x0057
    ShaderProgram_ParticleVertexShadows, //0x0058
    ShaderProgram_ParticleVertexShadowsAccum, //0x0059
    ShaderProgram_ParticleVertexShadowsAccumBlend, //0x005A
    ShaderProgram_SpotLightRadiosityVisibility, //0x005B
    ShaderProgram_HalfResUpsampleBilateral, //0x005C
    ShaderProgram_HalfResUpsampleBilateralTiled, //0x005D
    ShaderProgram_HalfResUpsampleBilinearTiled, //0x005E
    ShaderProgram_HalfResCategorize, //0x005F
    ShaderProgram_HalfResCategorizeDownsample, //0x0060
    ShaderProgram_DigitalDistortion, //0x0061
    ShaderProgram_MotionBlur, //0x0062
    ShaderProgram_CalcVelocityFromZBuffer, //0x0063
    ShaderProgram_CalcVelocityFromZBufferFastStable, //0x0064
    ShaderProgram_FXAA, //0x0065
    ShaderProgram_SMAAEdgeDetection, //0x0066
    ShaderProgram_SMAABlendingWeights, //0x0067
    ShaderProgram_SMAANeighborhoodBlending, //0x0068
    ShaderProgram_SMAATemporalReprojection, //0x0069
    ShaderProgram_RenderScaleResample, //0x006A
    ShaderProgram_RenderScaleResampleLanczos, //0x006B
    ShaderProgram_RenderScaleResampleLanczosHorizontal, //0x006C
    ShaderProgram_RenderScaleResampleLanczosVertical, //0x006D
    ShaderProgram_RenderScaleResampleBicubicSharp, //0x006E
    ShaderProgram_FinalIronsightsDof, //0x006F
    ShaderProgram_FinalIronsightsDofWithCircle, //0x0070
    ShaderProgram_CopyWithCoC, //0x0071
    ShaderProgram_HorizonBasedAO, //0x0072
    ShaderProgram_HorizonBasedAO_BlurPS, //0x0073
    ShaderProgram_HorizonBasedAO_BlurCS, //0x0074
    ShaderProgram_HorizonBasedAO_PackAODepth, //0x0075
    ShaderProgram_HorizonBasedAO_CompositeTemporal, //0x0076
    ShaderProgram_HorizonBasedAO_NoiseDetection, //0x0077
    ShaderProgram_SSAO, //0x0078
    ShaderProgram_SSAO_DilateDraw, //0x0079
    ShaderProgram_LightTileDownsampleHalf, //0x007A
    ShaderProgram_LightTileDownsampleHalfStage2, //0x007B
    ShaderProgram_LightTileDownsampleHalfStage3, //0x007C
    ShaderProgram_TiledLightVisibility_Point, //0x007D
    ShaderProgram_TiledLightVisibility_Spot, //0x007E
    ShaderProgram_TiledLightVisibility_Line, //0x007F
    ShaderProgram_TiledLightVisibility_CalcTileFrustaData, //0x0080
    ShaderProgram_DeferredGBufferSimpleFixup, //0x0081
    ShaderProgram_DeferredGBufferSimpleFixupStage1, //0x0082
    ShaderProgram_DeferredGBufferSimpleFixupStage2, //0x0083
    ShaderProgram_MsaaClassify, //0x0084
    ShaderProgram_DepthMinMaxCS, //0x0085
    ShaderProgram_DepthMinMaxHTileCS, //0x0086
    ShaderProgram_DeferredPointLightCullCS, //0x0087
    ShaderProgram_DeferredPointLightListCS, //0x0088
    ShaderProgram_DeferredPointLight, //0x0089
    ShaderProgram_DeferredPointLightCS, //0x008A
    ShaderProgram_DeferredPointLightTile, //0x008B
    ShaderProgram_DeferredPointLightZ, //0x008C
    ShaderProgram_DeferredLineLight, //0x008D
    ShaderProgram_DeferredLineLightTile, //0x008E
    ShaderProgram_DeferredSpotLight, //0x008F
    ShaderProgram_DeferredSpotLightZ, //0x0090
    ShaderProgram_DeferredConeLight, //0x0091
    ShaderProgram_DeferredConeLightTile, //0x0092
    ShaderProgram_DeferredOutdoorLightTile, //0x0093
    ShaderProgram_DeferredIndirectCubeMap, //0x0094
    ShaderProgram_DeferredShadow, //0x0095
    ShaderProgram_SimpleGeometryZ, //0x0096
    ShaderProgram_Sky, //0x0097
    ShaderProgram_ForwardScattering2d, //0x0098
    ShaderProgram_HeightfieldTessellation, //0x0099
    ShaderProgram_XenonMemCopy, //0x009A
    ShaderProgram_XenonMemClear, //0x009B
    ShaderProgram_XenonCopyAtlasTextures, //0x009C
    ShaderProgram_XenonFastUntile, //0x009D
    ShaderProgram_XenonFastDepthStencilFill, //0x009E
    ShaderProgram_XenonFastDepthStencilFill_ZOnly, //0x009F
    ShaderProgram_XenonJobEnable, //0x00A0
    ShaderProgram_Ui_Textured, //0x00A1
    ShaderProgram_Ui_Textured2, //0x00A2
    ShaderProgram_Ui_Textured3, //0x00A3
    ShaderProgram_Ui_TexturedBGRA, //0x00A4
    ShaderProgram_Ui_MaskedMonoTextured, //0x00A5
    ShaderProgram_Ui_TexturedColorized, //0x00A6
    ShaderProgram_Ui_AntialiasedCircle, //0x00A7
    ShaderProgram_Ui_AntialiasedLine, //0x00A8
    ShaderProgram_Ui_TexturedDistanceField, //0x00A9
    ShaderProgram_Ui_TexturedDistanceFieldClip, //0x00AA
    ShaderProgram_Ui_SolidTexturedClip, //0x00AB
    ShaderProgram_Ui_PostProcessing, //0x00AC
    ShaderProgram_Ui_SolidWriteMask, //0x00AD
    ShaderProgram_Ui_TexturedDistanceFieldWriteMask, //0x00AE
    ShaderProgram_Ui_TexYCrCb, //0x00AF
    ShaderProgram_Ui_Textured2GlobalColor, //0x00B0
    ShaderProgram_Ui_Solid, //0x00B1
    ShaderProgram_Ui_Blur, //0x00B2
    ShaderProgram_Ui_Scaleform_StripSolidColor, //0x00B3
    ShaderProgram_Ui_Scaleform_XY16iC32CxformGauraudNoAddAlpha, //0x00B4
    ShaderProgram_Ui_Scaleform_Strip, //0x00B5
    ShaderProgram_Ui_Scaleform_XY16iC32, //0x00B6
    ShaderProgram_Ui_Scaleform_XY16iCF32, //0x00B7
    ShaderProgram_Ui_Scaleform_XY16iCF32_T2, //0x00B8
    ShaderProgram_Ui_Scaleform_GlyphText, //0x00B9
    ShaderProgram_Ui_Minimap, //0x00BA
    ShaderProgram_Ui_MinimapIcon, //0x00BB
    ShaderProgram_Ui_CombatArea, //0x00BC
    ShaderProgram_TextureCompress_A, //0x00BD
    ShaderProgram_TextureCompress_DXT1, //0x00BE
    ShaderProgram_TextureCompress_DXT5, //0x00BF
    ShaderProgram_XenonEncodeDXT5MemExport, //0x00C0
    ShaderProgram_TerrainEncodeSurface_A, //0x00C1
    ShaderProgram_TerrainEncodeSurface_B, //0x00C2
    ShaderProgram_TerrainPatchVertexYFetch, //0x00C3
    ShaderProgram_TerrainMeshScatteringYFetch, //0x00C4
    ShaderProgram_TexYCrCbA, //0x00C5
    ShaderProgram_RgbSeparation, //0x00C6
    ShaderProgram_Distort, //0x00C7
    ShaderProgram_SpriteDofDetect, //0x00C8
    ShaderProgram_SpriteDofSplat, //0x00C9
    ShaderProgram_SpriteDofCombine, //0x00CA
    ShaderProgram_SpriteDofComputeEnergy, //0x00CB
    ShaderProgram_SpriteDofCopyCount, //0x00CC
    ShaderProgram_Clear, //0x00CD
    ShaderProgram_ClearCs, //0x00CE
    ShaderProgram_FastClearCs, //0x00CF
    ShaderProgram_CopyBufferCs, //0x00D0
    ShaderProgram_CopyTexture1dCs, //0x00D1
    ShaderProgram_CopyTexture2dCs, //0x00D2
    ShaderProgram_CopyTexture3dCs, //0x00D3
    ShaderProgram_CopyRawTexture1dCs, //0x00D4
    ShaderProgram_CopyRawTexture2dCs, //0x00D5
    ShaderProgram_CopyRawTexture3dCs, //0x00D6
    ShaderProgram_CopyScalingTexture2dCs, //0x00D7
    ShaderProgram_SubSurfaceScatteringBlur, //0x00D8
    ShaderProgram_SubSurfaceScatteringDebug, //0x00D9
    ShaderProgram_Ui_DetailTexturedMinimap, //0x00DA
    ShaderProgram_Ui_CCTV, //0x00DB
    ShaderProgram_Ui_TVNoise, //0x00DC
    ShaderProgram_WaterVertex, //0x00DD
    ShaderProgram_WaterFoam, //0x00DE
    ShaderProgram_ConvolveCubeMap, //0x00DF
    ShaderProgram_KinectCameraTrackingView, //0x00E0
    ShaderProgram_ScreenScan, //0x00E1
    ShaderProgram_Camo, //0x00E2
    ShaderProgram_CopyRToA, //0x00E3
    ShaderProgramCount //0x00E4
};

////////////////////////////////////////
// RuntimeId: 08249
// TypeInfo:  0x0000000142867268
enum ShaderRenderPath
{
    ShaderRenderPath_Dx10, //0x0000
    ShaderRenderPath_Dx10Plus, //0x0001
    ShaderRenderPath_Dx10_1, //0x0002
    ShaderRenderPath_Dx11, //0x0003
    ShaderRenderPath_Dx11_1, //0x0004
    ShaderRenderPath_Xenon, //0x0005
    ShaderRenderPath_Ps3, //0x0006
    ShaderRenderPath_Gl, //0x0007
    ShaderRenderPath_Gen4a, //0x0008
    ShaderRenderPath_Gen4b, //0x0009
    ShaderRenderPathCount //0x000A
};

////////////////////////////////////////
// RuntimeId: 08247
// TypeInfo:  0x0000000142867288
enum ShaderStageType
{
    ShaderStageType_Vertex, //0x0000
    ShaderStageType_Pixel, //0x0001
    ShaderStageType_Hull, //0x0002
    ShaderStageType_Domain, //0x0003
    ShaderStageType_Geometry, //0x0004
    ShaderStageType_Compute, //0x0005
    ShaderStageTypeCount //0x0006
};

////////////////////////////////////////
// RuntimeId: 08245
// TypeInfo:  0x00000001428672A8
enum StencilOperation
{
    StencilOperation_Keep, //0x0000
    StencilOperation_Zero, //0x0001
    StencilOperation_Replace, //0x0002
    StencilOperation_IncrementSaturate, //0x0003
    StencilOperation_DecrementSaturate, //0x0004
    StencilOperation_Invert, //0x0005
    StencilOperation_IncrementWrap, //0x0006
    StencilOperation_DecrementWrap //0x0007
};

////////////////////////////////////////
// RuntimeId: 08243
// TypeInfo:  0x00000001428672C8
enum DepthStencilCompareFunc
{
    DepthStencilCompareFunc_Never, //0x0000
    DepthStencilCompareFunc_Less, //0x0001
    DepthStencilCompareFunc_Equal, //0x0002
    DepthStencilCompareFunc_LessEqual, //0x0003
    DepthStencilCompareFunc_Greater, //0x0004
    DepthStencilCompareFunc_NotEqual, //0x0005
    DepthStencilCompareFunc_GreaterEqual, //0x0006
    DepthStencilCompareFunc_Always //0x0007
};

////////////////////////////////////////
// RuntimeId: 08241
// TypeInfo:  0x00000001428672E8
enum RenderFillMode
{
    RenderFillMode_Solid, //0x0000
    RenderFillMode_Wireframe //0x0001
};

////////////////////////////////////////
// RuntimeId: 08239
// TypeInfo:  0x0000000142867308
enum RenderDepthMode
{
    RenderDepthMode_Disabled, //0x0000
    RenderDepthMode_ReadOnly, //0x0001
    RenderDepthMode_ReadAndWrite, //0x0002
    RenderDepthMode_WriteOnly //0x0003
};

////////////////////////////////////////
// RuntimeId: 08237
// TypeInfo:  0x0000000142867328
enum RenderClearMask
{
    RenderClearMask_Color0, //0x0000
    RenderClearMask_Color1, //0x0001
    RenderClearMask_Color2, //0x0002
    RenderClearMask_Color3, //0x0003
    RenderClearMask_Color4, //0x0004
    RenderClearMask_Color5, //0x0005
    RenderClearMask_Color6, //0x0006
    RenderClearMask_Color7, //0x0007
    RenderClearMask_Depth, //0x0008
    RenderClearMask_Stencil, //0x0009
    RenderClearMask_Color, //0x000A
    RenderClearMask_All //0x000B
};

////////////////////////////////////////
// RuntimeId: 08235
// TypeInfo:  0x0000000142867348
enum RenderWriteMask
{
    RenderWriteMask_Red, //0x0000
    RenderWriteMask_Green, //0x0001
    RenderWriteMask_Blue, //0x0002
    RenderWriteMask_Alpha, //0x0003
    RenderWriteMask_None, //0x0004
    RenderWriteMask_Color, //0x0005
    RenderWriteMask_All //0x0006
};

////////////////////////////////////////
// RuntimeId: 08233
// TypeInfo:  0x0000000142867368
enum RenderBlendOp
{
    RenderBlendOp_Add, //0x0000
    RenderBlendOp_Subtract, //0x0001
    RenderBlendOp_RevSubtract, //0x0002
    RenderBlendOp_Min, //0x0003
    RenderBlendOp_Max //0x0004
};

////////////////////////////////////////
// RuntimeId: 08231
// TypeInfo:  0x0000000142867388
enum RenderBlendMode
{
    RenderBlendMode_Zero, //0x0000
    RenderBlendMode_One, //0x0001
    RenderBlendMode_SourceColor, //0x0002
    RenderBlendMode_InvSourceColor, //0x0003
    RenderBlendMode_SourceAlpha, //0x0004
    RenderBlendMode_InvSourceAlpha, //0x0005
    RenderBlendMode_DestColor, //0x0006
    RenderBlendMode_InvDestColor, //0x0007
    RenderBlendMode_DestAlpha, //0x0008
    RenderBlendMode_InvDestAlpha, //0x0009
    RenderBlendMode_SourceAlphaSaturate, //0x000A
    RenderBlendMode_Constant, //0x000B
    RenderBlendMode_InvConstant //0x000C
};

////////////////////////////////////////
// RuntimeId: 08229
// TypeInfo:  0x00000001428673A8
enum RenderCullMode
{
    RenderCullMode_None, //0x0000
    RenderCullMode_Front, //0x0001
    RenderCullMode_Back //0x0002
};

////////////////////////////////////////
// RuntimeId: 08227
// TypeInfo:  0x00000001428673C8
enum IndexBufferFormat
{
    IndexBufferFormat_16Bit, //0x0000
    IndexBufferFormat_32Bit //0x0001
};

////////////////////////////////////////
// RuntimeId: 08225
// TypeInfo:  0x00000001428673E8
enum PrimitiveType
{
    PrimitiveType_PointList, //0x0000
    PrimitiveType_LineList, //0x0001
    PrimitiveType_LineStrip, //0x0002
    PrimitiveType_TriangleList, //0x0003
    PrimitiveType_TriangleStrip, //0x0004
    PrimitiveType_QuadList, //0x0005
    PrimitiveType_RectList //0x0006
};

////////////////////////////////////////
// RuntimeId: 08223
// TypeInfo:  0x0000000142867408
enum TextureFilter
{
    TfNone, //0x0000
    TfPoint, //0x0001
    TfLinear, //0x0002
    TfAnisotropic, //0x0003
    TfDefault //0x0004
};

////////////////////////////////////////
// RuntimeId: 08221
// TypeInfo:  0x0000000142867428
enum TextureAddress
{
    TaWrap, //0x0000
    TaMirror, //0x0001
    TaClamp, //0x0002
    TaBorder, //0x0003
    TaMirrorOnce //0x0004
};

////////////////////////////////////////
// RuntimeId: 08219
// TypeInfo:  0x0000000142867448
enum TextureType
{
    TextureType_1d, //0x0000
    TextureType_1dArray, //0x0001
    TextureType_2d, //0x0002
    TextureType_2dArray, //0x0003
    TextureType_Cube, //0x0004
    TextureType_3d, //0x0005
    TextureTypeCount //0x0006
};

////////////////////////////////////////
// RuntimeId: 08217
// TypeInfo:  0x0000000142867468
enum RenderBufferFormat
{
    RenderBufferFormat_Unknown, //0x0000
    RenderBufferFormat_Float1, //0x0001
    RenderBufferFormat_Float2, //0x0002
    RenderBufferFormat_Float3, //0x0003
    RenderBufferFormat_Float4, //0x0004
    RenderBufferFormat_Half1, //0x0005
    RenderBufferFormat_Half2, //0x0006
    RenderBufferFormat_Half4, //0x0007
    RenderBufferFormat_Int1, //0x0008
    RenderBufferFormat_Int2, //0x0009
    RenderBufferFormat_Int3, //0x000A
    RenderBufferFormat_Int4, //0x000B
    RenderBufferFormat_UInt1, //0x000C
    RenderBufferFormat_UInt2, //0x000D
    RenderBufferFormat_UInt3, //0x000E
    RenderBufferFormat_UInt4, //0x000F
    RenderBufferFormat_UInt16_1, //0x0010
    RenderBufferFormat_UInt16_2, //0x0011
    RenderBufferFormat_UInt16_4 //0x0012
};

////////////////////////////////////////
// RuntimeId: 08215
// TypeInfo:  0x0000000142867488
enum TextureFormat
{
    TextureFormat_DXT1, //0x0000
    TextureFormat_DXT1A, //0x0001
    TextureFormat_DXT3, //0x0002
    TextureFormat_DXT5, //0x0003
    TextureFormat_DXT5A, //0x0004
    TextureFormat_DXN, //0x0005
    TextureFormat_BC7, //0x0006
    TextureFormat_RGB565, //0x0007
    TextureFormat_RGB888, //0x0008
    TextureFormat_ARGB1555, //0x0009
    TextureFormat_ARGB4444, //0x000A
    TextureFormat_ARGB8888, //0x000B
    TextureFormat_L8, //0x000C
    TextureFormat_L16, //0x000D
    TextureFormat_ABGR16, //0x000E
    TextureFormat_ABGR16F, //0x000F
    TextureFormat_ABGR32F, //0x0010
    TextureFormat_R16F, //0x0011
    TextureFormat_R32F, //0x0012
    TextureFormat_NormalDXN, //0x0013
    TextureFormat_NormalDXT1, //0x0014
    TextureFormat_NormalDXT5, //0x0015
    TextureFormat_NormalDXT5RGA, //0x0016
    TextureFormat_RG8, //0x0017
    TextureFormat_GR16, //0x0018
    TextureFormat_GR16F, //0x0019
    TextureFormat_D16, //0x001A
    TextureFormat_D24S8, //0x001B
    TextureFormat_D24FS8, //0x001C
    TextureFormat_D32F, //0x001D
    TextureFormat_D32FS8, //0x001E
    TextureFormat_S8, //0x001F
    TextureFormat_ABGR32, //0x0020
    TextureFormat_GR32F, //0x0021
    TextureFormat_A2R10G10B10, //0x0022
    TextureFormat_R11G11B10F, //0x0023
    TextureFormat_ABGR16_SNORM, //0x0024
    TextureFormat_ABGR16_UINT, //0x0025
    TextureFormat_L16_UINT, //0x0026
    TextureFormat_L32, //0x0027
    TextureFormat_GR16_UINT, //0x0028
    TextureFormat_GR32_UINT, //0x0029
    TextureFormat_R9G9B9E5F, //0x002A
    TextureFormat_Unknown //0x002B
};

////////////////////////////////////////
// RuntimeId: 08152
// TypeInfo:  0x0000000142863208
enum RigidBodyCollisionLayer
{
    RigidBodyCollisionLayer_Invalid, //0x0000
    RigidBodyCollisionLayer_StaticLayer, //0x0001
    RigidBodyCollisionLayer_DynamicLayer, //0x0002
    RigidBodyCollisionLayer_KeyframeLayer, //0x0003
    RigidBodyCollisionLayer_DebrisLayer, //0x0004
    RigidBodyCollisionLayer_FastDebrisLayer, //0x0005
    RigidBodyCollisionLayer_OnlyStaticCollisionLayer, //0x0006
    RigidBodyCollisionLayer_RagdollLayer, //0x0007
    RigidBodyCollisionLayer_NoCollisionLayer, //0x0008
    RigidBodyCollisionLayer_WaterLayer, //0x0009
    RigidBodyCollisionLayer_TerrainLayer, //0x000A
    RigidBodyCollisionLayer_OnlyTerrainCollionLayer, //0x000B
    RigidBodyCollisionLayer_CharacterCollisionGeometryLayer, //0x000C
    RigidBodyCollisionLayer_AiCollisionBodyLayer, //0x000D
    RigidBodyCollisionLayer_KeyframedCollisionBodyLayer, //0x000E
    RigidBodyCollisionLayer_CameraCollisionLayer, //0x000F
    RigidBodyCollisionLayer_VehicleLayer, //0x0010
    RigidBodyCollisionLayer_VehicleAndCharacterCollisionLayer, //0x0011
    RigidBodyCollisionLayer_Size //0x0012
};

////////////////////////////////////////
// RuntimeId: 08150
// TypeInfo:  0x0000000142863228
enum RigidBodyQualityType
{
    RigidBodyQualityType_Invalid, //0x0000
    RigidBodyQualityType_Fixed, //0x0001
    RigidBodyQualityType_Debris, //0x0002
    RigidBodyQualityType_DebrisSimpleToi, //0x0003
    RigidBodyQualityType_Moving, //0x0004
    RigidBodyQualityType_Critical, //0x0005
    RigidBodyQualityType_Size //0x0006
};

////////////////////////////////////////
// RuntimeId: 08148
// TypeInfo:  0x0000000142863248
enum RigidBodyMotionType
{
    RigidBodyMotionType_Invalid, //0x0000
    RigidBodyMotionType_Fixed, //0x0001
    RigidBodyMotionType_Keyframed, //0x0002
    RigidBodyMotionType_Dynamic, //0x0003
    RigidBodyMotionType_Size //0x0004
};

////////////////////////////////////////
// RuntimeId: 08146
// TypeInfo:  0x0000000142863268
enum RigidBodyType
{
    RBTypeCollision, //0x0000
    RBTypeDetail, //0x0001
    RBTypeCharacter, //0x0002
    RBTypeRaycast, //0x0003
    RBTypeGroup, //0x0004
    RBTypeSize //0x0005
};

////////////////////////////////////////
// RuntimeId: 08140
// TypeInfo:  0x0000000142863408
enum PhysicsWorldType
{
    PhysicsWorldType_Client, //0x0000
    PhysicsWorldType_ClientEffect, //0x0001
    PhysicsWorldType_Server, //0x0002
    PhysicsWorldType_Max //0x0003
};

////////////////////////////////////////
// RuntimeId: 08120
// TypeInfo:  0x0000000142863288
enum ProximityObjectType
{
    PotProximityDisabled, //0x0000
    PotVaultableLow, //0x0001
    PotVaultableHigh, //0x0002
    PotSupportedShooting, //0x0003
    PotInteractWith, //0x0004
    PotBashable //0x0005
};

////////////////////////////////////////
// RuntimeId: 08076
// TypeInfo:  0x00000001428632A8
enum ForceMagnitudeInputType
{
    FMITYaw, //0x0000
    FMITPitch, //0x0001
    FMITRoll, //0x0002
    FMITThrottle, //0x0003
    FMITStrafe //0x0004
};

////////////////////////////////////////
// RuntimeId: 08074
// TypeInfo:  0x00000001428632C8
enum PropellerType
{
    PropellerType_Regular, //0x0000
    PropellerType_Rotor //0x0001
};

////////////////////////////////////////
// RuntimeId: 08062
// TypeInfo:  0x00000001428632E8
enum VehicleInputTweakType
{
    CombinedTimedSpeedTweakType, //0x0000
    CombinedSpeedTweakType, //0x0001
    SpeedTweakType, //0x0002
    ScaledSpeedTweakType //0x0003
};

////////////////////////////////////////
// RuntimeId: 08058
// TypeInfo:  0x0000000142863308
enum StabilizerProperty
{
    SPPitchAngle, //0x0000
    SPYawAngle, //0x0001
    SPRollAngle, //0x0002
    SPVerticalPosition, //0x0003
    SPVerticalVelocity, //0x0004
    SPXPosition, //0x0005
    SPYPosition, //0x0006
    SPZPosition //0x0007
};

////////////////////////////////////////
// RuntimeId: 08032
// TypeInfo:  0x0000000142863328
enum SpaceType
{
    STBody, //0x0000
    STWorld //0x0001
};

////////////////////////////////////////
// RuntimeId: 08030
// TypeInfo:  0x0000000142863348
enum ForceType
{
    FTForce, //0x0000
    FTTorque //0x0001
};

////////////////////////////////////////
// RuntimeId: 08028
// TypeInfo:  0x0000000142863368
enum ForceCondition
{
    FCNever, //0x0000
    FCNotCriticalDamaged, //0x0001
    FCCriticalDamaged, //0x0002
    FCNotOccupied, //0x0003
    FCOccupied, //0x0004
    FCAlways //0x0005
};

////////////////////////////////////////
// RuntimeId: 08018
// TypeInfo:  0x0000000142863388
enum VehicleMode
{
    VmIdle, //0x0000
    VmEntering, //0x0001
    VmEntered, //0x0002
    VmStarting, //0x0003
    VmStarted, //0x0004
    VmStopping, //0x0005
    VmLeaving //0x0006
};

////////////////////////////////////////
// RuntimeId: 07994
// TypeInfo:  0x00000001428633A8
enum CharacterStateType
{
    CharacterStateType_OnGround, //0x0000
    CharacterStateType_Jumping, //0x0001
    CharacterStateType_InAir, //0x0002
    CharacterStateType_Climbing, //0x0003
    CharacterStateType_Falling, //0x0004
    CharacterStateType_User_0, //0x0005
    CharacterStateType_User_1, //0x0006
    CharacterStateType_User_2, //0x0007
    CharacterStateType_User_3, //0x0008
    CharacterStateType_User_4, //0x0009
    CharacterStateType_User_5, //0x000A
    CharacterStateType_StateCount, //0x000B
    CharacterStateType_Parachute, //0x000C
    CharacterStateType_Swimming, //0x000D
    CharacterStateType_AnimationControlled, //0x000E
    CharacterStateType_Sliding //0x000F
};

////////////////////////////////////////
// RuntimeId: 07982
// TypeInfo:  0x00000001428633C8
enum CharacterPoseCollisionType
{
    CharacterPoseCollisionType_Capsule, //0x0000
    CharacterPoseCollisionType_Pencil //0x0001
};

////////////////////////////////////////
// RuntimeId: 07980
// TypeInfo:  0x00000001428633E8
enum CharacterPoseType
{
    CharacterPoseType_Stand, //0x0000
    CharacterPoseType_Crouch, //0x0001
    CharacterPoseType_Prone, //0x0002
    CharacterPoseTypeCount //0x0003
};

////////////////////////////////////////
// RuntimeId: 07936
// TypeInfo:  0x00000001428602A0
enum PathfindingChoice
{
    PathfindingChoice_Off, //0x0000
    PathfindingChoice_OnlyToStartPoint, //0x0001
    PathfindingChoice_On //0x0002
};

////////////////////////////////////////
// RuntimeId: 07928
// TypeInfo:  0x000000014285FF90
enum SecureReason
{
    SecureReason_Ok, //0x0000
    SecureReason_WrongProtocolVersion, //0x0001
    SecureReason_WrongTitleVersion, //0x0002
    SecureReason_ServerFull, //0x0003
    SecureReason_KickedOut, //0x0004
    SecureReason_Banned, //0x0005
    SecureReason_GenericError, //0x0006
    SecureReason_WrongPassword, //0x0007
    SecureReason_KickedOutDemoOver, //0x0008
    SecureReason_RankRestricted, //0x0009
    SecureReason_ConfigurationNotAllowed, //0x000A
    SecureReason_ServerReclaimed, //0x000B
    SecureReason_MissingContent, //0x000C
    SecureReason_NotVerified, //0x000D
    SecureReason_TimedOut, //0x000E
    SecureReason_ConnectFailed, //0x000F
    SecureReason_NoReply, //0x0010
    SecureReason_AcceptFailed, //0x0011
    SecureReason_MismatchingContent, //0x0012
    SecureReason_KickedOutRankTooHigh, //0x0013
    SecureReason_InteractivityTimeout, //0x0014
    SecureReason_KickedFromQueue, //0x0015
    SecureReason_TeamKills, //0x0016
    SecureReason_KickedByAdmin, //0x0017
    SecureReason_KickedViaPunkBuster, //0x0018
    SecureReason_KickedOutServerFull, //0x0019
    SecureReason_ESportsMatchStarting, //0x001A
    SecureReason_NotInESportsRosters, //0x001B
    SecureReason_ESportsMatchEnding, //0x001C
    SecureReason_VirtualServerExpired, //0x001D
    SecureReason_VirtualServerRecreate, //0x001E
    SecureReason_ESportsTeamFull, //0x001F
    SecureReason_ESportsMatchAborted, //0x0020
    SecureReason_ESportsMatchWalkover, //0x0021
    SecureReason_ESportsMatchWarmupTimedOut, //0x0022
    SecureReason_NotAllowedToSpectate, //0x0023
    SecureReason_NoSpectateSlotAvailable, //0x0024
    SecureReason_InvalidSpectateJoin, //0x0025
    SecureReason_KickedViaFairFight, //0x0026
    SecureReason_KickedCommanderOnLeave, //0x0027
    SecureReason_KickedCommanderAfterMutiny, //0x0028
    SecureReason_ServerMaintenance, //0x0029
    SecureReason_KickedGameTimeAccountOnUnofficial //0x002A
};

////////////////////////////////////////
// RuntimeId: 07916
// TypeInfo:  0x000000014285F1A0
enum AnimationControlModeEnum
{
    AnimationControlModeEnum_PlaceTrajectoryAtObject, //0x0000
    AnimationControlModeEnum_PlaceObjectAtTrajectory, //0x0001
    AnimationControlModeEnum_DisconnectTrajectoryAndObject //0x0002
};

////////////////////////////////////////
// RuntimeId: 07914
// TypeInfo:  0x000000014285F1C0
enum JointOutputModeEnum
{
    JointOutputModeEnum_NoOutput, //0x0000
    JointOutputModeEnum_AllJoints, //0x0001
    JointOutputModeEnum_GameplayBones //0x0002
};

////////////////////////////////////////
// RuntimeId: 07912
// TypeInfo:  0x000000014285F1E0
enum AntAnimatableComponentMeshRenderContext
{
    AntAnimatableComponentMeshRenderContext_World, //0x0000
    AntAnimatableComponentMeshRenderContext_Foreground, //0x0001
    AntAnimatableComponentMeshRenderContext_CameraRelative //0x0002
};

////////////////////////////////////////
// RuntimeId: 07910
// TypeInfo:  0x000000014285F200
enum AntAnimatableComponentMeshRenderType
{
    AntAnimatableComponentMeshRenderType_Default, //0x0000
    AntAnimatableComponentMeshRenderType_ShadowOnly, //0x0001
    AntAnimatableComponentMeshRenderType_NoShadow //0x0002
};

////////////////////////////////////////
// RuntimeId: 07908
// TypeInfo:  0x000000014285F220
enum AntControllerComplexity
{
    AntControllerComplexity_High, //0x0000
    AntControllerComplexity_Medium, //0x0001
    AntControllerComplexity_Low //0x0002
};

////////////////////////////////////////
// RuntimeId: 07886
// TypeInfo:  0x000000014285F2C0
enum RecordEntryInputType
{
    RecordEntryInputType_FireInput, //0x0000
    RecordEntryInputType_PitchInput, //0x0001
    RecordEntryInputType_YawInput, //0x0002
    RecordEntryInputType_RollInput, //0x0003
    RecordEntryInputType_ThrottleInput, //0x0004
    RecordEntryInputType_DigitalBitFlagsInput, //0x0005
    RecordEntryInputType_AimingYaw, //0x0006
    RecordEntryInputType_AimingPitch, //0x0007
    RecordEntryInputTypeCount //0x0008
};

////////////////////////////////////////
// RuntimeId: 07862
// TypeInfo:  0x000000014285F240
enum GroundAttachMethod
{
    GroundAttachMethod_SyncRaycast, //0x0000
    GroundAttachMethod_AsyncRaycast //0x0001
};

////////////////////////////////////////
// RuntimeId: 07856
// TypeInfo:  0x000000014285F260
enum FadeTrackKeyframeType
{
    FadeTrackKeyframeType_FadeOut, //0x0000
    FadeTrackKeyframeType_FadeIn, //0x0001
    FadeTrackKeyframeTypeCount //0x0002
};

////////////////////////////////////////
// RuntimeId: 07840
// TypeInfo:  0x000000014285F2E0
enum CompareOperation
{
    Equal, //0x0000
    NotEqual, //0x0001
    LesserEqual, //0x0002
    GreaterEqual, //0x0003
    Lesser, //0x0004
    Greater //0x0005
};

////////////////////////////////////////
// RuntimeId: 07836
// TypeInfo:  0x000000014285D0A0
enum WeaponUnlocks
{
    WeaponUnlocks_MaxAmount //0x0000
};

////////////////////////////////////////
// RuntimeId: 07834
// TypeInfo:  0x000000014285D0C0
enum WeaponSlot
{
    WeaponSlot_0, //0x0000
    WeaponSlot_1, //0x0001
    WeaponSlot_2, //0x0002
    WeaponSlot_3, //0x0003
    WeaponSlot_4, //0x0004
    WeaponSlot_5, //0x0005
    WeaponSlot_6, //0x0006
    WeaponSlot_7, //0x0007
    WeaponSlot_8, //0x0008
    WeaponSlot_9, //0x0009
    WeaponSlot_NumSlots, //0x000A
    WeaponSlot_NotDefined //0x000B
};

////////////////////////////////////////
// RuntimeId: 07832
// TypeInfo:  0x000000014285D0E0
enum GearSlot
{
    GearSlot_Melee, //0x0000
    GearSlot_Sidearm, //0x0001
    GearSlot_Primary, //0x0002
    GearSlot_Auxiliary, //0x0003
    GearSlot_Secondary, //0x0004
    GearSlot_Gadget1, //0x0005
    GearSlot_Gadget2, //0x0006
    GearSlot_Gadget3, //0x0007
    GearSlot_Gadget4, //0x0008
    GearSlot_Gadget5, //0x0009
    GearSlot_Gadget6, //0x000A
    GearSlot_Gadget7, //0x000B
    GearSlot_GearSlotCount, //0x000C
    GearSlot_NotEquipped //0x000D
};

////////////////////////////////////////
// RuntimeId: 07828
// TypeInfo:  0x000000014285CFA0
enum FOVTransitionType
{
    FOVTransitionType_Linear, //0x0000
    FOVTransitionType_Smooth, //0x0001
    FOVTransitionType_Count //0x0002
};

////////////////////////////////////////
// RuntimeId: 07784
// TypeInfo:  0x000000014285CFC0
enum LockType
{
    LockAlways, //0x0000
    LockOnRadar, //0x0001
    LockOnHeat, //0x0002
    LockOnLaserPainted, //0x0003
    LockNever, //0x0004
    LockTypeCount //0x0005
};

////////////////////////////////////////
// RuntimeId: 07778
// TypeInfo:  0x000000014285D120
enum WeaponFiringEvent
{
    WeaponFiringEvent_Push, //0x0000
    WeaponFiringEvent_Pop, //0x0001
    WeaponFiringEvent_PrimaryStartedFiringCallback, //0x0002
    WeaponFiringEvent_PrimaryFireCallback, //0x0003
    WeaponFiringEvent_PrimaryFireReleaseCallback, //0x0004
    WeaponFiringEvent_PrimaryFireShotSpawnedCallback, //0x0005
    WeaponFiringEvent_PrimaryFireAutomaticBeginCallback, //0x0006
    WeaponFiringEvent_PrimaryFireAutomaticEndCallback, //0x0007
    WeaponFiringEvent_PrimaryStoppedFiringCallback, //0x0008
    WeaponFiringEvent_ReloadPrimaryCallback, //0x0009
    WeaponFiringEvent_ReloadPrimaryEndCallback, //0x000A
    WeaponFiringEvent_BoltActionCallback, //0x000B
    WeaponFiringEvent_BoltActionEndCallback, //0x000C
    WeaponFiringEvent_DetonationSwitchCallback, //0x000D
    WeaponFiringEvent_HoldAndReleaseReleaseCallback, //0x000E
    WeaponFiringEvent_UpdateRequired //0x000F
};

////////////////////////////////////////
// RuntimeId: 07758
// TypeInfo:  0x000000014285CFE0
enum ReloadLogic
{
    rlWeaponSwitchCancelsUnfinishedReload, //0x0000
    rlReloadUnaffectedByWeaponSwitch //0x0001
};

////////////////////////////////////////
// RuntimeId: 07756
// TypeInfo:  0x000000014285D000
enum ReloadType
{
    rtSingleBullet, //0x0000
    rtMagazine, //0x0001
    rtMagazineWithPossibleShorterReload //0x0002
};

////////////////////////////////////////
// RuntimeId: 07754
// TypeInfo:  0x000000014285D020
enum FireLogicType
{
    fltSingleFire, //0x0000
    fltSingleFireWithBoltAction, //0x0001
    fltAutomaticFire, //0x0002
    fltBurstFire, //0x0003
    fltHoldAndRelease, //0x0004
    fltDetonatedFiring, //0x0005
    fltCount //0x0006
};

////////////////////////////////////////
// RuntimeId: 07726
// TypeInfo:  0x000000014285D040
enum WarnTarget
{
    wtWarnSoldierAndVehicle, //0x0000
    wtWarnSoldier, //0x0001
    wtWarnVehicle, //0x0002
    wtWarnNone //0x0003
};

////////////////////////////////////////
// RuntimeId: 07714
// TypeInfo:  0x000000014285D060
enum AntHitReactionWeaponType
{
    AntHitReactionWeaponType_Pistol, //0x0000
    AntHitReactionWeaponType_SMG, //0x0001
    AntHitReactionWeaponType_AssaultRifle, //0x0002
    AntHitReactionWeaponType_LMG, //0x0003
    AntHitReactionWeaponType_Shotgun, //0x0004
    AntHitReactionWeaponType_SniperRifle, //0x0005
    AntHitReactionWeaponType_Explosion, //0x0006
    AntHitReactionWeaponType_Flashbang, //0x0007
    AntHitReactionWeaponType_Melee //0x0008
};

////////////////////////////////////////
// RuntimeId: 07704
// TypeInfo:  0x000000014285D320
enum RouteType
{
    RouteStop, //0x0000
    RouteCircular //0x0001
};

////////////////////////////////////////
// RuntimeId: 07702
// TypeInfo:  0x000000014285D340
enum WaypointsSnappingSettings
{
    UseShapeSettings, //0x0000
    SnapToTerrain, //0x0001
    NoSnap //0x0002
};

////////////////////////////////////////
// RuntimeId: 07688
// TypeInfo:  0x000000014285D080
enum WarningPlayerType
{
    WPTInflictor, //0x0000
    WPTVictim //0x0001
};

////////////////////////////////////////
// RuntimeId: 07624
// TypeInfo:  0x0000000142857170
enum CameraRelativeControlEnum
{
    UseProfileOptions, //0x0000
    ForceCameraRelative //0x0001
};

////////////////////////////////////////
// RuntimeId: 07606
// TypeInfo:  0x0000000142857190
enum RotationChannel
{
    RotationChannel_Pitch, //0x0000
    RotationChannel_Yaw, //0x0001
    RotationChannel_Roll //0x0002
};

////////////////////////////////////////
// RuntimeId: 07588
// TypeInfo:  0x00000001428571B0
enum RotationAxisEnum
{
    RALeft, //0x0000
    RAUp, //0x0001
    RADof //0x0002
};

////////////////////////////////////////
// RuntimeId: 07544
// TypeInfo:  0x00000001428571D0
enum UnlockAvailability
{
    UnlockAvailability_All, //0x0000
    UnlockAvailability_HumanPlayerOnly, //0x0001
    UnlockAvailability_AIOnly //0x0002
};

////////////////////////////////////////
// RuntimeId: 07540
// TypeInfo:  0x00000001428574F0
enum UIMessageType
{
    UIMessageType_Text, //0x0000
    UIMessageType_EnemyTank, //0x0001
    UIMessageType_EnemyCar, //0x0002
    UIMessageType_EnemyBoat, //0x0003
    UIMessageType_EnemyHelicopter, //0x0004
    UIMessageType_EnemyInfantry, //0x0005
    UIMessageType_EnemyActivity, //0x0006
    UIMessageType_EnemyC4, //0x0007
    UIMessageType_EnemyATMine, //0x0008
    UIMessageType_ChatGo, //0x0009
    UIMessageType_ChatFollowMe, //0x000A
    UIMessageType_ChatNeedBackup, //0x000B
    UIMessageType_ChatNeedPickup, //0x000C
    UIMessageType_ChatNeedAmmo, //0x000D
    UIMessageType_ChatNeedMedic, //0x000E
    UIMessageType_ChatYes, //0x000F
    UIMessageType_ChatNo, //0x0010
    UIMessageType_ChatThanks, //0x0011
    UIMessageType_ChatSorry, //0x0012
    UIMessageType_ChatNeedRepair, //0x0013
    UIMessageType_ChatGetIn, //0x0014
    UIMessageType_ChatGetOut, //0x0015
    UIMessageType_ChatDropMeOff, //0x0016
    UIMessageType_OrderDefendBase, //0x0017
    UIMessageType_OrderAttackBase, //0x0018
    UIMessageType_OrderMoveToPos, //0x0019
    UIMessageType_JoinedSquad, //0x001A
    UIMessageType_LeftSquad, //0x001B
    UIMessageType_RequestSquad, //0x001C
    UIMessageType_InviteSquad, //0x001D
    UIMessageType_KickSquad, //0x001E
    UIMessageType_LeaderPromoted, //0x001F
    UIMessageType_Connected, //0x0020
    UIMessageType_Disconnected, //0x0021
    UIMessageType_Killed, //0x0022
    UIMessageType_Died //0x0023
};

////////////////////////////////////////
// RuntimeId: 07524
// TypeInfo:  0x00000001428571F0
enum UIScreenRenderingPass
{
    UIScreenRenderingPass_RenderTarget, //0x0000
    UIScreenRenderingPass_AboveFlash, //0x0001
    UIScreenRenderingPass_BelowFlash, //0x0002
    UIScreenRenderingPass_Dialog //0x0003
};

////////////////////////////////////////
// RuntimeId: 07522
// TypeInfo:  0x0000000142857210
enum UIScreenProjectionMode
{
    UIScreenProjectionMode_Default, //0x0000
    UIScreenProjectionMode_Billboard, //0x0001
    UIScreenProjectionMode_BillboardCylindrical, //0x0002
    UIScreenProjectionMode_BillboardFixedSize //0x0003
};

////////////////////////////////////////
// RuntimeId: 07464
// TypeInfo:  0x0000000142857230
enum UIElementBlendType
{
    UIElementBlendType_Solid, //0x0000
    UIElementBlendType_AlphaBlend, //0x0001
    UIElementBlendType_Additive, //0x0002
    UIElementBlendType_Subtract, //0x0003
    UIElementBlendType_Multiply, //0x0004
    UIElementBlendType_Lighten, //0x0005
    UIElementBlendType_Darken, //0x0006
    UIElementBlendType_Difference, //0x0007
    UIElementBlendType_Erase, //0x0008
    UIElementBlendType_PreMultiply, //0x0009
    UIElementBlendType_AlphaBlendNonAdditive, //0x000A
    UIElementBlendType_Count //0x000B
};

////////////////////////////////////////
// RuntimeId: 07446
// TypeInfo:  0x0000000142857250
enum UIElementAlignment
{
    UIElementAlignment_Left, //0x0000
    UIElementAlignment_Right, //0x0001
    UIElementAlignment_Center, //0x0002
    UIElementAlignment_Top, //0x0003
    UIElementAlignment_Bottom, //0x0004
    UIElementAlignment_Justify, //0x0005
    UIElementAlignment_Count //0x0006
};

////////////////////////////////////////
// RuntimeId: 07442
// TypeInfo:  0x0000000142857270
enum UITextEntryType
{
    UITextEntryType_Passthrough, //0x0000
    UITextEntryType_DataKey, //0x0001
    UITextEntryType_PropertyInt, //0x0002
    UITextEntryType_PropertyFloat, //0x0003
    UITextEntryType_PropertyBool, //0x0004
    UITextEntryType_PropertyString, //0x0005
    UITextEntryType_PropertyTransform, //0x0006
    UITextEntryType_PropertyVec3, //0x0007
    UITextEntryType_PropertyVec4 //0x0008
};

////////////////////////////////////////
// RuntimeId: 07414
// TypeInfo:  0x0000000142857290
enum UILayoutMode
{
    UILayoutMode_AnchorOffset, //0x0000
    UILayoutMode_PositionExpansion //0x0001
};

////////////////////////////////////////
// RuntimeId: 07412
// TypeInfo:  0x00000001428572B0
enum UITextureMappingCompartment
{
    UITextureMappingCompartment_Default, //0x0000
    UITextureMappingCompartment_Static //0x0001
};

////////////////////////////////////////
// RuntimeId: 07382
// TypeInfo:  0x0000000142857710
enum CharacterPoseAction
{
    CPTNoAction, //0x0000
    CPTForceToStand, //0x0001
    CPTForceToCroch, //0x0002
    CPTForceToProne //0x0003
};

////////////////////////////////////////
// RuntimeId: 07368
// TypeInfo:  0x00000001428572D0
enum AreaTriggerInclude
{
    ATNone, //0x0000
    ATAll, //0x0001
    ATPlayers, //0x0002
    ATAI, //0x0003
    ATAI_Allies, //0x0004
    ATAI_Enemies //0x0005
};

////////////////////////////////////////
// RuntimeId: 07338
// TypeInfo:  0x00000001428572F0
enum CameraMovementActionMode
{
    CameraMovementActionMode_Start, //0x0000
    CameraMovementActionMode_Stop, //0x0001
    CameraMovementActionMode_StartAndStop //0x0002
};

////////////////////////////////////////
// RuntimeId: 07314
// TypeInfo:  0x0000000142857310
enum DebugMenuItemType
{
    DmitItem, //0x0000
    DmitToggle //0x0001
};

////////////////////////////////////////
// RuntimeId: 07253
// TypeInfo:  0x0000000142857330
enum EntryEnterRestriction
{
    EntryEnterRestriction_NoRestriction, //0x0000
    EntryEnterRestriction_OnlyPrimaryEntry //0x0001
};

////////////////////////////////////////
// RuntimeId: 07251
// TypeInfo:  0x00000001428577B0
enum PlayerSpawnType
{
    PlayerSpawnType_HumanPlayer, //0x0000
    PlayerSpawnType_AiPlayer, //0x0001
    PlayerSpawnType_Actor, //0x0002
    PlayerSpawnType_BrainAI, //0x0003
    PlayerSpawnType_Ai2Player //0x0004
};

////////////////////////////////////////
// RuntimeId: 07231
// TypeInfo:  0x000000014284F060
enum Difficulty
{
    Difficulty_Easy, //0x0000
    Difficulty_Medium, //0x0001
    Difficulty_Hard, //0x0002
    Difficulty_Hardcore, //0x0003
    Difficulty_None //0x0004
};

////////////////////////////////////////
// RuntimeId: 07227
// TypeInfo:  0x000000014284F220
enum VoiceChannel
{
    VoiceChannel_Off, //0x0000
    VoiceChannel_Team, //0x0001
    VoiceChannel_Squad, //0x0002
    VoiceChannel_Loopback, //0x0003
    VoiceChannel_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 07225
// TypeInfo:  0x000000014284F240
enum SquadId
{
    SquadNone, //0x0000
    Squad1, //0x0001
    Squad2, //0x0002
    Squad3, //0x0003
    Squad4, //0x0004
    Squad5, //0x0005
    Squad6, //0x0006
    Squad7, //0x0007
    Squad8, //0x0008
    Squad9, //0x0009
    Squad10, //0x000A
    Squad11, //0x000B
    Squad12, //0x000C
    Squad13, //0x000D
    Squad14, //0x000E
    Squad15, //0x000F
    Squad16, //0x0010
    Squad17, //0x0011
    Squad18, //0x0012
    Squad19, //0x0013
    Squad20, //0x0014
    Squad21, //0x0015
    Squad22, //0x0016
    Squad23, //0x0017
    Squad24, //0x0018
    Squad25, //0x0019
    Squad26, //0x001A
    Squad27, //0x001B
    Squad28, //0x001C
    Squad29, //0x001D
    Squad30, //0x001E
    Squad31, //0x001F
    Squad32, //0x0020
    SquadIdCount //0x0021
};

////////////////////////////////////////
// RuntimeId: 07223
// TypeInfo:  0x000000014284F260
enum FactionId
{
    FactionNeutral, //0x0000
    FactionUS, //0x0001
    FactionRUS, //0x0002
    FactionMEC, //0x0003
    FactionIdCount, //0x0004
    FactionInvalid //0x0005
};

////////////////////////////////////////
// RuntimeId: 07221
// TypeInfo:  0x000000014284F280
enum TeamId
{
    TeamNeutral, //0x0000
    Team1, //0x0001
    Team2, //0x0002
    Team3, //0x0003
    Team4, //0x0004
    Team5, //0x0005
    Team6, //0x0006
    Team7, //0x0007
    Team8, //0x0008
    Team9, //0x0009
    Team10, //0x000A
    Team11, //0x000B
    Team12, //0x000C
    Team13, //0x000D
    Team14, //0x000E
    Team15, //0x000F
    Team16, //0x0010
    TeamIdCount //0x0011
};

////////////////////////////////////////
// RuntimeId: 07172
// TypeInfo:  0x000000014284F2C0
enum IKEffectorEnum
{
    IKLeftHand, //0x0000
    IKRightHand //0x0001
};

////////////////////////////////////////
// RuntimeId: 07170
// TypeInfo:  0x000000014284F2E0
enum RotationAxis
{
    raX, //0x0000
    raY, //0x0001
    raZ //0x0002
};

////////////////////////////////////////
// RuntimeId: 07168
// TypeInfo:  0x000000014284F300
enum WheelPhysicsType
{
    wptNormal, //0x0000
    wptFollow, //0x0001
    wptStatic //0x0002
};

////////////////////////////////////////
// RuntimeId: 07166
// TypeInfo:  0x000000014284F080
enum EntryClass
{
    ecPrimary, //0x0000
    ecSecondary //0x0001
};

////////////////////////////////////////
// RuntimeId: 07131
// TypeInfo:  0x000000014284F380
enum CustomizationConstants
{
    MaxVisualSockets, //0x0000
    MaxAttachedSockets //0x0001
};

////////////////////////////////////////
// RuntimeId: 07113
// TypeInfo:  0x000000014284F3C0
enum WeaponClassification
{
    WCNone, //0x0000
    WCPrimary, //0x0001
    WCSecondary //0x0002
};

////////////////////////////////////////
// RuntimeId: 07107
// TypeInfo:  0x000000014284F0A0
enum BuoyantParts
{
    BuoyantPart_Hips, //0x0000
    BuoyantPart_Spine, //0x0001
    BuoyantPart_Spine1, //0x0002
    BuoyantPart_Spine2, //0x0003
    BuoyantPart_Head, //0x0004
    BuoyantPart_LeftArm, //0x0005
    BuoyantPart_LeftArmRoll, //0x0006
    BuoyantPart_LeftForeArm, //0x0007
    BuoyantPart_RightArm, //0x0008
    BuoyantPart_RightArmRoll, //0x0009
    BuoyantPart_RightForeArm, //0x000A
    BuoyantPart_RightUpLeg, //0x000B
    BuoyantPart_RightLeg, //0x000C
    BuoyantPart_LeftUpLeg, //0x000D
    BuoyantPart_LeftLeg //0x000E
};

////////////////////////////////////////
// RuntimeId: 07095
// TypeInfo:  0x000000014284F0C0
enum HitReactionType
{
    HRT_Body, //0x0000
    HRT_Head, //0x0001
    HRT_RightArm, //0x0002
    HRT_LeftArm, //0x0003
    HRT_RightLeg, //0x0004
    HRT_LeftLeg, //0x0005
    HRT_Special1, //0x0006
    HRT_Special2, //0x0007
    HRT_Special3, //0x0008
    HRT_Special4, //0x0009
    HRT_Special5, //0x000A
    HRT_Special6, //0x000B
    HRT_Special7, //0x000C
    HRT_Special8, //0x000D
    HRT_Count //0x000E
};

////////////////////////////////////////
// RuntimeId: 07077
// TypeInfo:  0x000000014284F0E0
enum AntEntryIdEnum
{
    AntEntryIdEnum_Humvee_Driver, //0x0000
    AntEntryIdEnum_Humvee_Gunner, //0x0001
    AntEntryIdEnum_Humvee_PassengerRearLeft, //0x0002
    AntEntryIdEnum_Humvee_PassengerRearRight, //0x0003
    AntEntryIdEnum_F16_Pilot, //0x0004
    AntEntryIdEnum_SU37_Pilot, //0x0005
    AntEntryIdEnum_AH6_Pilot, //0x0006
    AntEntryIdEnum_AH64_Pilot, //0x0007
    AntEntryIdEnum_AH64_Gunner, //0x0008
    AntEntryIdEnum_Vodnik_Driver, //0x0009
    AntEntryIdEnum_Vodnik_Gunner, //0x000A
    AntEntryIdEnum_Humvee_PassengerFrontRight, //0x000B
    AntEntryIdEnum_Vodnik_PassengerFrontRight, //0x000C
    AntEntryIdEnum_Vodnik_PassengerRearRight, //0x000D
    AntEntryIdEnum_Vodnik_PassengerRearLeft, //0x000E
    AntEntryIdEnum_VadsGunner, //0x000F
    AntEntryIdEnum_F18F_Pilot, //0x0010
    AntEntryIdEnum_F18F_Navigator, //0x0011
    AntEntryIdEnum_M1A2_Gunner, //0x0012
    AntEntryIdEnum_M1A2_Driver //0x0013
};

////////////////////////////////////////
// RuntimeId: 07068
// TypeInfo:  0x000000014284F100
enum EntrySpottingSettings
{
    ESSDefault, //0x0000
    ESSSendAndReceive, //0x0001
    ESSReceive, //0x0002
    ESSCount //0x0003
};

////////////////////////////////////////
// RuntimeId: 07064
// TypeInfo:  0x000000014284F120
enum EntrySeatType
{
    EST_Driver, //0x0000
    EST_Gunner, //0x0001
    EST_Passenger //0x0002
};

////////////////////////////////////////
// RuntimeId: 07052
// TypeInfo:  0x000000014284F4A0
enum PartComponentConstants
{
    MaxHealthStateCount //0x0000
};

////////////////////////////////////////
// RuntimeId: 07035
// TypeInfo:  0x000000014284F140
enum PersonViewMode
{
    PersonViewMode_FirstPerson, //0x0000
    PersonViewMode_ThirdPerson //0x0001
};

////////////////////////////////////////
// RuntimeId: 07018
// TypeInfo:  0x000000014284F160
enum CharacterCameraForwardAxis
{
    CharacterCameraForwardAxis_XAxis, //0x0000
    CharacterCameraForwardAxis_YAxis, //0x0001
    CharacterCameraForwardAxis_ZAxis //0x0002
};

////////////////////////////////////////
// RuntimeId: 07012
// TypeInfo:  0x000000014284F180
enum TargetMode
{
    TargetMode_FirstPerson, //0x0000
    TargetMode_ThirdPerson, //0x0001
    TargetMode_Index //0x0002
};

////////////////////////////////////////
// RuntimeId: 06920
// TypeInfo:  0x000000014284F1A0
enum ANTLayerBlendType
{
    ANTLayerBlendType_OverrideBlend, //0x0000
    ANTLayerBlendType_AdditiveBlend, //0x0001
    ANTLayerBlendType_SubtractiveBlend //0x0002
};

////////////////////////////////////////
// RuntimeId: 06918
// TypeInfo:  0x000000014284F1C0
enum ANTClipEndRule
{
    ANTClipEndRule_None, //0x0000
    ANTClipEndRule_CarryIntoNextTimeline, //0x0001
    ANTClipEndRule_LoopIndefinitely, //0x0002
    ANTClipEndRule_PlayIndefinitely, //0x0003
    ANTClipEndRule_MatchBarLengthToRuntimeLength //0x0004
};

////////////////////////////////////////
// RuntimeId: 06916
// TypeInfo:  0x000000014284F580
enum ANTBlendAttachment
{
    ANTBlendAttachment_Both, //0x0000
    ANTBlendAttachment_Left, //0x0001
    ANTBlendAttachment_Right //0x0002
};

////////////////////////////////////////
// RuntimeId: 06914
// TypeInfo:  0x000000014284F1E0
enum ANTBlendCurveType
{
    ANTBlendCurveType_SnapIn, //0x0000
    ANTBlendCurveType_SnapOut, //0x0001
    ANTBlendCurveType_LinearIn, //0x0002
    ANTBlendCurveType_LinearOut, //0x0003
    ANTBlendCurveType_EaseIn, //0x0004
    ANTBlendCurveType_EaseOut //0x0005
};

////////////////////////////////////////
// RuntimeId: 06865
// TypeInfo:  0x0000000142849090
enum InputDeviceMessageEvent
{
    IDME_ThrowGrenade, //0x0000
    IDME_Sidearm, //0x0001
    IDME_Reload, //0x0002
    IDME_Countermeasures, //0x0003
    IDME_Undefined //0x0004
};

////////////////////////////////////////
// RuntimeId: 06863
// TypeInfo:  0x00000001428490B0
enum InputDeviceKeys
{
    IDK_None, //0x0000
    IDK_Escape, //0x0001
    IDK_1, //0x0002
    IDK_2, //0x0003
    IDK_3, //0x0004
    IDK_4, //0x0005
    IDK_5, //0x0006
    IDK_6, //0x0007
    IDK_7, //0x0008
    IDK_8, //0x0009
    IDK_9, //0x000A
    IDK_0, //0x000B
    IDK_Minus, //0x000C
    IDK_Equals, //0x000D
    IDK_Backspace, //0x000E
    IDK_Tab, //0x000F
    IDK_Q, //0x0010
    IDK_W, //0x0011
    IDK_E, //0x0012
    IDK_R, //0x0013
    IDK_T, //0x0014
    IDK_Y, //0x0015
    IDK_U, //0x0016
    IDK_I, //0x0017
    IDK_O, //0x0018
    IDK_P, //0x0019
    IDK_LeftBracket, //0x001A
    IDK_RightBracket, //0x001B
    IDK_Enter, //0x001C
    IDK_LeftCtrl, //0x001D
    IDK_A, //0x001E
    IDK_S, //0x001F
    IDK_D, //0x0020
    IDK_F, //0x0021
    IDK_G, //0x0022
    IDK_H, //0x0023
    IDK_J, //0x0024
    IDK_K, //0x0025
    IDK_L, //0x0026
    IDK_Semicolon, //0x0027
    IDK_Apostrophe, //0x0028
    IDK_Grave, //0x0029
    IDK_LeftShift, //0x002A
    IDK_Backslash, //0x002B
    IDK_Z, //0x002C
    IDK_X, //0x002D
    IDK_C, //0x002E
    IDK_V, //0x002F
    IDK_B, //0x0030
    IDK_N, //0x0031
    IDK_M, //0x0032
    IDK_Comma, //0x0033
    IDK_Period, //0x0034
    IDK_Slash, //0x0035
    IDK_RightShift, //0x0036
    IDK_Multiply, //0x0037
    IDK_LeftAlt, //0x0038
    IDK_Space, //0x0039
    IDK_Capital, //0x003A
    IDK_F1, //0x003B
    IDK_F2, //0x003C
    IDK_F3, //0x003D
    IDK_F4, //0x003E
    IDK_F5, //0x003F
    IDK_F6, //0x0040
    IDK_F7, //0x0041
    IDK_F8, //0x0042
    IDK_F9, //0x0043
    IDK_F10, //0x0044
    IDK_Numlock, //0x0045
    IDK_ScrollLock, //0x0046
    IDK_Numpad7, //0x0047
    IDK_Numpad8, //0x0048
    IDK_Numpad9, //0x0049
    IDK_Subtract, //0x004A
    IDK_Numpad4, //0x004B
    IDK_Numpad5, //0x004C
    IDK_Numpad6, //0x004D
    IDK_Add, //0x004E
    IDK_Numpad1, //0x004F
    IDK_Numpad2, //0x0050
    IDK_Numpad3, //0x0051
    IDK_Numpad0, //0x0052
    IDK_Decimal, //0x0053
    IDK_OEM_102, //0x0054
    IDK_F11, //0x0055
    IDK_F12, //0x0056
    IDK_F13, //0x0057
    IDK_F14, //0x0058
    IDK_F15, //0x0059
    IDK_Kana, //0x005A
    IDK_PTBRSlash, //0x005B
    IDK_Convert, //0x005C
    IDK_NoConvert, //0x005D
    IDK_Yen, //0x005E
    IDK_PTBRNUMPADPOINT, //0x005F
    IDK_NumpadEquals, //0x0060
    IDK_PrevTrack, //0x0061
    IDK_At, //0x0062
    IDK_Colon, //0x0063
    IDK_Underline, //0x0064
    IDK_Kanji, //0x0065
    IDK_Stop, //0x0066
    IDK_Ax, //0x0067
    IDK_Unlabeled, //0x0068
    IDK_NextTrack, //0x0069
    IDK_NumpadEnter, //0x006A
    IDK_RightCtrl, //0x006B
    IDK_Mute, //0x006C
    IDK_Calculator, //0x006D
    IDK_PlayPause, //0x006E
    IDK_MediaStop, //0x006F
    IDK_VolumeDown, //0x0070
    IDK_VolumeUp, //0x0071
    IDK_WebHome, //0x0072
    IDK_NumpadComma, //0x0073
    IDK_Divide, //0x0074
    IDK_PrintScreen, //0x0075
    IDK_RightAlt, //0x0076
    IDK_Home, //0x0077
    IDK_ArrowUp, //0x0078
    IDK_PageUp, //0x0079
    IDK_ArrowLeft, //0x007A
    IDK_ArrowRight, //0x007B
    IDK_End, //0x007C
    IDK_ArrowDown, //0x007D
    IDK_PageDown, //0x007E
    IDK_Insert, //0x007F
    IDK_Delete, //0x0080
    IDK_LeftWin, //0x0081
    IDK_RightWin, //0x0082
    IDK_AppMenu, //0x0083
    IDK_Power, //0x0084
    IDK_Sleep, //0x0085
    IDK_Wake, //0x0086
    IDK_WebSearch, //0x0087
    IDK_WebFavorites, //0x0088
    IDK_WebRefresh, //0x0089
    IDK_WebStop, //0x008A
    IDK_WebForward, //0x008B
    IDK_WebBack, //0x008C
    IDK_MyComputer, //0x008D
    IDK_Mail, //0x008E
    IDK_MediaSelect, //0x008F
    IDK_Pause, //0x0090
    IDK_Undefined //0x0091
};

////////////////////////////////////////
// RuntimeId: 06861
// TypeInfo:  0x00000001428490D0
enum InputDevicePOVs
{
    IDP_POV_0, //0x0000
    IDP_POV_1, //0x0001
    IDP_POV_2, //0x0002
    IDP_POV_Undefined //0x0003
};

////////////////////////////////////////
// RuntimeId: 06859
// TypeInfo:  0x00000001428490F0
enum InputDeviceMouseButtons
{
    IDB_Button_0, //0x0000
    IDB_Button_1, //0x0001
    IDB_Button_2, //0x0002
    IDB_Button_3, //0x0003
    IDB_Button_4, //0x0004
    IDB_Button_5, //0x0005
    IDB_Button_6, //0x0006
    IDB_Button_7, //0x0007
    IDB_Button_Undefined //0x0008
};

////////////////////////////////////////
// RuntimeId: 06857
// TypeInfo:  0x0000000142849110
enum InputDeviceMotionControllerButtons
{
    IDMCB_Rup, //0x0000
    IDMCB_Rdown, //0x0001
    IDMCB_Rleft, //0x0002
    IDMCB_Rright, //0x0003
    IDMCB_start, //0x0004
    IDMCB_alt, //0x0005
    IDMCB_center, //0x0006
    IDMCB_trigger, //0x0007
    IDMCB_reload, //0x0008
    IDMCB_pumpaction, //0x0009
    IDMCB_Gstab, //0x000A
    IDMCB_Grotleft, //0x000B
    IDMCB_Grotright, //0x000C
    IDMCB_Undefined //0x000D
};

////////////////////////////////////////
// RuntimeId: 06855
// TypeInfo:  0x0000000142849130
enum InputDevicePadButtons
{
    IDB_Lup, //0x0000
    IDB_Ldown, //0x0001
    IDB_Lleft, //0x0002
    IDB_Lright, //0x0003
    IDB_Rup, //0x0004
    IDB_Rdown, //0x0005
    IDB_Rleft, //0x0006
    IDB_Rright, //0x0007
    IDB_Rtopleft, //0x0008
    IDB_Rtopright, //0x0009
    IDB_Lthumb, //0x000A
    IDB_Rthumb, //0x000B
    IDB_start, //0x000C
    IDB_alt, //0x000D
    IDB_Ltrigger, //0x000E
    IDB_Rtrigger, //0x000F
    IDB_Ltrigger2, //0x0010
    IDB_Rtrigger2, //0x0011
    IDB_XButton1, //0x0012
    IDB_XButton2, //0x0013
    IDB_XButton3, //0x0014
    IDB_XButton4, //0x0015
    IDB_XButton5, //0x0016
    IDB_XButton6, //0x0017
    IDB_XButton7, //0x0018
    IDB_XButton8, //0x0019
    IDB_XButton9, //0x001A
    IDB_XButton10, //0x001B
    IDB_XButton11, //0x001C
    IDB_XButton12, //0x001D
    IDB_XButton13, //0x001E
    IDB_XButton14, //0x001F
    IDB_XButton15, //0x0020
    IDB_XButton16, //0x0021
    IDB_XButton17, //0x0022
    IDB_XButton18, //0x0023
    IDB_PosZAxis, //0x0024
    IDB_NegZAxis, //0x0025
    IDB_XRotationPos, //0x0026
    IDB_XRotationNeg, //0x0027
    IDB_YRotationPos, //0x0028
    IDB_YRotationNeg, //0x0029
    IDB_ZRotationPos, //0x002A
    IDB_ZRotationNeg, //0x002B
    IDB_Pov1North, //0x002C
    IDB_Pov1South, //0x002D
    IDB_Pov1West, //0x002E
    IDB_Pov1East, //0x002F
    IDB_Pov2North, //0x0030
    IDB_Pov2South, //0x0031
    IDB_Pov2West, //0x0032
    IDB_Pov2East, //0x0033
    IDB_Pov3North, //0x0034
    IDB_Pov3South, //0x0035
    IDB_Pov3West, //0x0036
    IDB_Pov3East, //0x0037
    IDB_Pov4North, //0x0038
    IDB_Pov4South, //0x0039
    IDB_Pov4West, //0x003A
    IDB_Pov4East, //0x003B
    IDB_Undefined, //0x003C
    IDB_NumPadButtons //0x003D
};

////////////////////////////////////////
// RuntimeId: 06853
// TypeInfo:  0x0000000142849150
enum InputDeviceAxes
{
    IDA_Axis0X, //0x0000
    IDA_Axis0Y, //0x0001
    IDA_Axis0XPos, //0x0002
    IDA_Axis0YPos, //0x0003
    IDA_Axis0XNeg, //0x0004
    IDA_Axis0YNeg, //0x0005
    IDA_Axis1X, //0x0006
    IDA_Axis1Y, //0x0007
    IDA_Axis1XPos, //0x0008
    IDA_Axis1YPos, //0x0009
    IDA_Axis1XNeg, //0x000A
    IDA_Axis1YNeg, //0x000B
    IDA_Axis2X, //0x000C
    IDA_Axis2Y, //0x000D
    IDA_Axis3X, //0x000E
    IDA_Axis3Y, //0x000F
    IDA_Axis4X, //0x0010
    IDA_Axis4Y, //0x0011
    IDA_Axis5X, //0x0012
    IDA_Axis5Y, //0x0013
    IDA_Axis6X, //0x0014
    IDA_Axis6Y, //0x0015
    IDA_Axis7X, //0x0016
    IDA_Axis7Y, //0x0017
    IDA_Undefined //0x0018
};

////////////////////////////////////////
// RuntimeId: 06851
// TypeInfo:  0x0000000142849170
enum InputConceptIdentifiers
{
    ConceptMoveFB, //0x0000
    ConceptMoveLR, //0x0001
    ConceptMoveForward, //0x0002
    ConceptMoveBackward, //0x0003
    ConceptMoveLeft, //0x0004
    ConceptMoveRight, //0x0005
    ConceptYaw, //0x0006
    ConceptPitch, //0x0007
    ConceptRoll, //0x0008
    ConceptRecenterCamera, //0x0009
    ConceptFire, //0x000A
    ConceptAltFire, //0x000B
    ConceptFireCountermeasure, //0x000C
    ConceptReload, //0x000D
    ConceptZoom, //0x000E
    ConceptToggleCamera, //0x000F
    ConceptSprint, //0x0010
    ConceptCrawl, //0x0011
    ConceptToggleWeaponLight, //0x0012
    ConceptSelectPartyMember0, //0x0013
    ConceptSelectPartyMember1, //0x0014
    ConceptSelectPartyMember2, //0x0015
    ConceptSelectPartyMember3, //0x0016
    ConceptLockTarget, //0x0017
    ConceptCrosshairMoveX, //0x0018
    ConceptCrosshairMoveY, //0x0019
    ConceptTacticalMenu, //0x001A
    ConceptConversationSelect, //0x001B
    ConceptConversationSkip, //0x001C
    ConceptConversationChangeSelection, //0x001D
    ConceptJump, //0x001E
    ConceptCrouch, //0x001F
    ConceptCrouchOnHold, //0x0020
    ConceptProne, //0x0021
    ConceptInteract, //0x0022
    ConceptPickUp, //0x0023
    ConceptDrop, //0x0024
    ConceptBreathControl, //0x0025
    ConceptParachute, //0x0026
    ConceptSwitchInventoryItem, //0x0027
    ConceptSelectInventoryItem1, //0x0028
    ConceptSelectInventoryItem2, //0x0029
    ConceptSelectInventoryItem3, //0x002A
    ConceptSelectInventoryItem4, //0x002B
    ConceptSelectInventoryItem5, //0x002C
    ConceptSelectInventoryItem6, //0x002D
    ConceptSelectInventoryItem7, //0x002E
    ConceptSelectInventoryItem8, //0x002F
    ConceptSelectInventoryItem9, //0x0030
    ConceptSwitchToPrimaryWeapon, //0x0031
    ConceptSwitchToGrenadeLauncher, //0x0032
    ConceptSwitchToStaticGadget, //0x0033
    ConceptSwitchToDynamicGadget1, //0x0034
    ConceptSwitchToDynamicGadget2, //0x0035
    ConceptMeleeAttack, //0x0036
    ConceptThrowGrenade, //0x0037
    ConceptCycleFireMode, //0x0038
    ConceptChangeVehicle, //0x0039
    ConceptBrake, //0x003A
    ConceptHandBrake, //0x003B
    ConceptClutch, //0x003C
    ConceptGearUp, //0x003D
    ConceptGearDown, //0x003E
    ConceptGearSwitch, //0x003F
    ConceptNextPosition, //0x0040
    ConceptSelectPosition1, //0x0041
    ConceptSelectPosition2, //0x0042
    ConceptSelectPosition3, //0x0043
    ConceptSelectPosition4, //0x0044
    ConceptSelectPosition5, //0x0045
    ConceptSelectPosition6, //0x0046
    ConceptSelectPosition7, //0x0047
    ConceptSelectPosition8, //0x0048
    ConceptCameraPitch, //0x0049
    ConceptCameraYaw, //0x004A
    ConceptMapZoom, //0x004B
    ConceptMapInnerZoom, //0x004C
    ConceptMapSize, //0x004D
    ConceptMapThreeDimensional, //0x004E
    ConceptScoreboard, //0x004F
    ConceptScoreboardAndMenuCombo, //0x0050
    ConceptMenu, //0x0051
    ConceptSpawnMenu, //0x0052
    ConceptCancel, //0x0053
    ConceptCommMenu1, //0x0054
    ConceptCommMenu2, //0x0055
    ConceptCommMenu3, //0x0056
    ConceptAccept, //0x0057
    ConceptDecline, //0x0058
    ConceptSelect, //0x0059
    ConceptBack, //0x005A
    ConceptActivate, //0x005B
    ConceptDeactivate, //0x005C
    ConceptEdit, //0x005D
    ConceptView, //0x005E
    ConceptParentNavigateLeft, //0x005F
    ConceptParentNavigateRight, //0x0060
    ConceptMenuZoomIn, //0x0061
    ConceptMenuZoomOut, //0x0062
    ConceptPanX, //0x0063
    ConceptPanY, //0x0064
    ConceptBattledashToggle, //0x0065
    ConceptVoiceFunction1, //0x0066
    ConceptSquadVoice, //0x0067
    ConceptSayAllChat, //0x0068
    ConceptTeamChat, //0x0069
    ConceptSquadChat, //0x006A
    ConceptSquadLeaderChat, //0x006B
    ConceptToggleChat, //0x006C
    ConceptQuicktimeInteractDrag, //0x006D
    ConceptQuicktimeFire, //0x006E
    ConceptQuicktimeBlock, //0x006F
    ConceptQuicktimeFastMelee, //0x0070
    ConceptQuicktimeJumpClimb, //0x0071
    ConceptQuicktimeCrouchDuck, //0x0072
    ConceptFreeCameraMoveUp, //0x0073
    ConceptFreeCameraMoveDown, //0x0074
    ConceptFreeCameraMoveLR, //0x0075
    ConceptFreeCameraMoveFB, //0x0076
    ConceptFreeCameraMoveUD, //0x0077
    ConceptFreeCameraRotateX, //0x0078
    ConceptFreeCameraRotateY, //0x0079
    ConceptFreeCameraRotateZ, //0x007A
    ConceptFreeCameraIncreaseSpeed, //0x007B
    ConceptFreeCameraDecreaseSpeed, //0x007C
    ConceptFreeCameraFOVModifier, //0x007D
    ConceptFreeCameraChangeFOV, //0x007E
    ConceptFreeCameraSwitchSpeed, //0x007F
    ConceptFreeCameraTurboSpeed, //0x0080
    ConceptFreeCameraActivator1, //0x0081
    ConceptFreeCameraActivator2, //0x0082
    ConceptFreeCameraActivator3, //0x0083
    ConceptFreeCameraMayaInputActivator, //0x0084
    ConceptTargetedCameraDistance, //0x0085
    ConceptTargetedCameraRotateX, //0x0086
    ConceptTargetedCameraRotateY, //0x0087
    ConceptTargetedCameraChangeSpeed, //0x0088
    ConceptLThumb, //0x0089
    ConceptRThumb, //0x008A
    ConceptLeftStickX, //0x008B
    ConceptLeftStickY, //0x008C
    ConceptRightStickX, //0x008D
    ConceptRightStickY, //0x008E
    ConceptButtonDPadLeft, //0x008F
    ConceptButtonDPadRight, //0x0090
    ConceptButtonDPadUp, //0x0091
    ConceptButtonDPadDown, //0x0092
    ConceptButtonA, //0x0093
    ConceptButtonB, //0x0094
    ConceptButtonX, //0x0095
    ConceptButtonY, //0x0096
    ConceptButtonSelect, //0x0097
    ConceptButtonStart, //0x0098
    ConceptButtonL1, //0x0099
    ConceptButtonL2, //0x009A
    ConceptButtonR1, //0x009B
    ConceptButtonR2, //0x009C
    ConceptButtonLeftThumb, //0x009D
    ConceptButtonRightThumb, //0x009E
    ConceptToggleMinimapType, //0x009F
    ConceptDeployZoom, //0x00A0
    ConceptMenuDigitalUp, //0x00A1
    ConceptMenuDigitalDown, //0x00A2
    ConceptMenuDigitalLeft, //0x00A3
    ConceptMenuDigitalRight, //0x00A4
    ConceptRightStickUp, //0x00A5
    ConceptRightStickDown, //0x00A6
    ConceptRightStickLeft, //0x00A7
    ConceptRightStickRight, //0x00A8
    ConceptMultipleSelect, //0x00A9
    ConceptSelectAll, //0x00AA
    ConceptMinimize, //0x00AB
    ConceptMoveCameraUp, //0x00AC
    ConceptMoveCameraDown, //0x00AD
    ConceptMoveCameraLeft, //0x00AE
    ConceptMoveCameraRight, //0x00AF
    ConceptSelectSquad1, //0x00B0
    ConceptSelectSquad2, //0x00B1
    ConceptSelectSquad3, //0x00B2
    ConceptSelectSquad4, //0x00B3
    ConceptSelectSquad5, //0x00B4
    ConceptSelectSquad6, //0x00B5
    ConceptSelectSquad7, //0x00B6
    ConceptSelectSquad8, //0x00B7
    ConceptSelectSquad9, //0x00B8
    ConceptSpectatorViewPrev, //0x00B9
    ConceptSpectatorViewNext, //0x00BA
    ConceptSpectatorTargetPrev, //0x00BB
    ConceptSpectatorTargetNext, //0x00BC
    ConceptSpectatorViewTableTop, //0x00BD
    ConceptSpectatorViewFirstPerson, //0x00BE
    ConceptSpectatorViewThirdPerson, //0x00BF
    ConceptSpectatorViewFreeCam, //0x00C0
    ConceptSpectatorViewPlayer1, //0x00C1
    ConceptSpectatorViewPlayer2, //0x00C2
    ConceptSpectatorViewPlayer3, //0x00C3
    ConceptSpectatorViewPlayer4, //0x00C4
    ConceptSpectatorViewPlayer5, //0x00C5
    ConceptSpectatorViewPlayer6, //0x00C6
    ConceptSpectatorViewPlayer7, //0x00C7
    ConceptSpectatorViewPlayer8, //0x00C8
    ConceptSpectatorViewPlayer9, //0x00C9
    ConceptSpectatorViewPlayer10, //0x00CA
    ConceptSpectatorViewPlayer11, //0x00CB
    ConceptSpectatorViewPlayer12, //0x00CC
    ConceptSpectatorViewPlayer13, //0x00CD
    ConceptSpectatorViewPlayer14, //0x00CE
    ConceptSpectatorViewPlayer15, //0x00CF
    ConceptSpectatorViewPlayer16, //0x00D0
    ConceptSpectatorViewOptions, //0x00D1
    ConceptSpectatorHudVisibility, //0x00D2
    ConceptAnalogZoom, //0x00D3
    ConceptSpectatorTargetPrevInSquad, //0x00D4
    ConceptSpectatorTargetNextInSquad, //0x00D5
    ConceptSpectatorTargetPrevOnTeam, //0x00D6
    ConceptSpectatorTargetNextOnTeam, //0x00D7
    ConceptSpectatorFreeCameraIncreaseSpeed, //0x00D8
    ConceptSpectatorFreeCameraDecreaseSpeed, //0x00D9
    ConceptSpectatorFreeCameraSwitchSpeed, //0x00DA
    ConceptSpectatorFreeCameraMoveLR, //0x00DB
    ConceptSpectatorFreeCameraMoveUD, //0x00DC
    ConceptSpectatorFreeCameraMoveFB, //0x00DD
    ConceptSpectatorFreeCameraRotateX, //0x00DE
    ConceptSpectatorFreeCameraRotateY, //0x00DF
    ConceptSpectatorFreeCameraRotateZ, //0x00E0
    ConceptSpectatorFreeCameraTurboSpeed, //0x00E1
    ConceptSpectatorFreeCameraFOVModifier, //0x00E2
    ConceptSpectatorFreeCameraChangeFOV, //0x00E3
    ConceptSpectatorSquadLeft, //0x00E4
    ConceptSpectatorSquadRight, //0x00E5
    ConceptSpectatorSquadUp, //0x00E6
    ConceptSpectatorSquadDown, //0x00E7
    ConceptSpectatorSquadActivate, //0x00E8
    ConceptUndefined, //0x00E9
    ConceptSize //0x00EA
};

////////////////////////////////////////
// RuntimeId: 06817
// TypeInfo:  0x0000000142849330
enum PoseTransition
{
    PTStandToProne, //0x0000
    PTStandToCrouch, //0x0001
    PTCrouchToStand, //0x0002
    PTCrouchToProne, //0x0003
    PTProneToStand, //0x0004
    PTProneToCrouch //0x0005
};

////////////////////////////////////////
// RuntimeId: 06809
// TypeInfo:  0x0000000142849190
enum EntryInputActionType
{
    EntryInputActionTypeAnalog, //0x0000
    EntryInputActionTypeAnalogSigned, //0x0001
    EntryInputActionTypeDigital //0x0002
};

////////////////////////////////////////
// RuntimeId: 06799
// TypeInfo:  0x00000001428491B0
enum InputActionMapSlot
{
    InputActionMapSlot_Undefined, //0x0000
    InputActionMapSlot_Root1, //0x0001
    InputActionMapSlot_Root2, //0x0002
    InputActionMapSlot_Root3, //0x0003
    InputActionMapSlot_Root4, //0x0004
    InputActionMapSlot_Root5, //0x0005
    InputActionMapSlot_Root6, //0x0006
    InputActionMapSlot_Root7, //0x0007
    InputActionMapSlot_Root8, //0x0008
    InputActionMapSlot_Root9, //0x0009
    InputActionMapSlot_Root10, //0x000A
    InputActionMapSlot_Root11, //0x000B
    InputActionMapSlot_Root12, //0x000C
    InputActionMapSlot_Root13, //0x000D
    InputActionMapSlot_Root14, //0x000E
    InputActionMapSlot_Root15, //0x000F
    InputActionMapSlot_Root16, //0x0010
    InputActionMapSlot_Sticks1, //0x0011
    InputActionMapSlot_Sticks2, //0x0012
    InputActionMapSlot_Sticks3, //0x0013
    InputActionMapSlot_Sticks4, //0x0014
    InputActionMapSlot_Buttons1, //0x0015
    InputActionMapSlot_Buttons2, //0x0016
    InputActionMapSlot_Buttons3, //0x0017
    InputActionMapSlot_Buttons4, //0x0018
    InputActionMapSlot_Sticks1Buttons1, //0x0019
    InputActionMapSlot_Sticks1Buttons2, //0x001A
    InputActionMapSlot_Sticks1Buttons3, //0x001B
    InputActionMapSlot_Sticks1Buttons4, //0x001C
    InputActionMapSlot_Sticks2Buttons1, //0x001D
    InputActionMapSlot_Sticks2Buttons2, //0x001E
    InputActionMapSlot_Sticks2Buttons3, //0x001F
    InputActionMapSlot_Sticks2Buttons4, //0x0020
    InputActionMapSlot_Sticks3Buttons1, //0x0021
    InputActionMapSlot_Sticks3Buttons2, //0x0022
    InputActionMapSlot_Sticks3Buttons3, //0x0023
    InputActionMapSlot_Sticks3Buttons4, //0x0024
    InputActionMapSlot_Sticks4Buttons1, //0x0025
    InputActionMapSlot_Sticks4Buttons2, //0x0026
    InputActionMapSlot_Sticks4Buttons3, //0x0027
    InputActionMapSlot_Sticks4Buttons4, //0x0028
    InputActionMapSlot_Count //0x0029
};

////////////////////////////////////////
// RuntimeId: 06797
// TypeInfo:  0x00000001428491D0
enum InputActionMapPlatform
{
    IAMPWin32, //0x0000
    IAMPXenon, //0x0001
    IAMPPs3, //0x0002
    IAMPAllPlatforms //0x0003
};

////////////////////////////////////////
// RuntimeId: 06791
// TypeInfo:  0x0000000142849350
enum SpottingType
{
    STGunner, //0x0000
    STSquadLeader, //0x0001
    STDefault, //0x0002
    STPersonal, //0x0003
    STSnapshot, //0x0004
    STSquadUav, //0x0005
    STTypesCount //0x0006
};

////////////////////////////////////////
// RuntimeId: 06777
// TypeInfo:  0x0000000142849370
enum UIHudIcon
{
    UIHudIcon_Unused, //0x0000
    UIHudIcon_LocalPlayer, //0x0001
    UIHudIcon_LocalDirection, //0x0002
    UIHudIcon_FriendlyPlayer, //0x0003
    UIHudIcon_EnemyPlayer, //0x0004
    UIHudIcon_NeutralPlayer, //0x0005
    UIHudIcon_SquadMember, //0x0006
    UIHudIcon_SquadLeader, //0x0007
    UIHudIcon_SquadLeaderTargeted, //0x0008
    UIHudIcon_Vehicle, //0x0009
    UIHudIcon_PrimaryObjective, //0x000A
    UIHudIcon_PrimaryObjectiveBlink, //0x000B
    UIHudIcon_SecondaryObjective, //0x000C
    UIHudIcon_AreaMapMarker, //0x000D
    UIHudIcon_ObjectiveDestroy, //0x000E
    UIHudIcon_ObjectiveScout, //0x000F
    UIHudIcon_ObjectiveDefend, //0x0010
    UIHudIcon_ObjectiveMoveTo, //0x0011
    UIHudIcon_ObjectiveAttack, //0x0012
    UIHudIcon_ObjectiveFollow, //0x0013
    UIHudIcon_ObjectiveGeneral, //0x0014
    UIHudICon_UAV, //0x0015
    UIHudIcon_AmmoCrate, //0x0016
    UIHudIcon_MedicBag, //0x0017
    UIHudIcon_C4, //0x0018
    UIHudIcon_ATMine, //0x0019
    UIHudIcon_StationaryWeapon, //0x001A
    UIHudIcon_North, //0x001B
    UIHudIcon_South, //0x001C
    UIHudIcon_West, //0x001D
    UIHudIcon_East, //0x001E
    UIHudIcon_NeutralFlag, //0x001F
    UIHudIcon_FriendlyFlag, //0x0020
    UIHudIcon_EnemyFlag, //0x0021
    UIHudIcon_FriendlyBase, //0x0022
    UIHudIcon_EnemyBase, //0x0023
    UIHudIcon_Team1Flag, //0x0024
    UIHudIcon_Team2Flag, //0x0025
    UIHudIcon_NeutralFlagLit, //0x0026
    UIHudIcon_FriendlyFlagLit, //0x0027
    UIHudIcon_EnemyFlagLit, //0x0028
    UIHudIcon_SelectableSpawnPoint, //0x0029
    UIHudIcon_SelectedSpawnPoint, //0x002A
    UIHudIcon_NonSelectableSpawnPoint, //0x002B
    UIHudIcon_FriendlyFlagUnderAttack, //0x002C
    UIHudIcon_EnemyFlagUnderAttack, //0x002D
    UIHudIcon_OrderAttack, //0x002E
    UIHudIcon_OrderDefend, //0x002F
    UIHudIcon_OrderAttackObserved, //0x0030
    UIHudIcon_OrderDefendObserved, //0x0031
    UIHudIcon_Boat, //0x0032
    UIHudIcon_Car, //0x0033
    UIHudIcon_Jeep, //0x0034
    UIHudIcon_HeliAttack, //0x0035
    UIHudIcon_HeliScout, //0x0036
    UIHudIcon_Tank, //0x0037
    UIHudIcon_TankIFV, //0x0038
    UIHudIcon_TankArty, //0x0039
    UIHudIcon_TankAA, //0x003A
    UIHudIcon_TankAT, //0x003B
    UIHudIcon_Jet, //0x003C
    UIHudIcon_JetBomber, //0x003D
    UIHudIcon_Stationary, //0x003E
    UIHudIcon_Strategic, //0x003F
    UIHudIcon_MotionRadarSweep, //0x0040
    UIHudIcon_NeedBackup, //0x0041
    UIHudIcon_NeedAmmo, //0x0042
    UIHudIcon_NeedMedic, //0x0043
    UIHudIcon_NeedPickup, //0x0044
    UIHudIcon_NeedRepair, //0x0045
    UIHudIcon_KitAssault, //0x0046
    UIHudIcon_KitDemolition, //0x0047
    UIHudIcon_KitRecon, //0x0048
    UIHudIcon_KitSpecialist, //0x0049
    UIHudIcon_KitSupport, //0x004A
    UIHudIcon_KitMedic, //0x004B
    UIHudIcon_KitEngineer, //0x004C
    UIHudIcon_KitPickupAssault, //0x004D
    UIHudIcon_KitPickupDemolition, //0x004E
    UIHudIcon_KitPickupRecon, //0x004F
    UIHudIcon_KitPickupSpecialist, //0x0050
    UIHudIcon_KitPickupSupport, //0x0051
    UIHudIcon_KitPickupMedic, //0x0052
    UIHudIcon_KitPickupEngineer, //0x0053
    UIHudIcon_Pickup, //0x0054
    UIHudIcon_TaggedVehicle, //0x0055
    UIHudIcon_LaserPaintedVehicle, //0x0056
    UIHudIcon_HeliTargetEnemy, //0x0057
    UIHudIcon_HeliTargetFriendly, //0x0058
    UIHudIcon_ArtilleryTarget, //0x0059
    UIHudIcon_NeutralFlagAttacker, //0x005A
    UIHudIcon_FriendlyFlagAttacker, //0x005B
    UIHudIcon_EnemyFlagAttacker, //0x005C
    UIHudIcon_LaserTarget, //0x005D
    UIHudIcon_ObjectiveAttacker, //0x005E
    UIHudIcon_ObjectiveDefender, //0x005F
    UIHudIcon_HealthbarBackground, //0x0060
    UIHudIcon_Healthbar, //0x0061
    UIHudIcon_RadarSweepComponent, //0x0062
    UIHudIcon_Blank, //0x0063
    UIHudIcon_LocalPlayerBigIcon, //0x0064
    UIHudIcon_LocalPlayerOutOfMap, //0x0065
    UIHudIcon_PrimaryObjectiveLarge, //0x0066
    UIHudIcon_TargetUnlocked, //0x0067
    UIHudIcon_TargetLocked, //0x0068
    UIHudIcon_TargetLocking, //0x0069
    UIHudIcon_ArtilleryStrikeNametag, //0x006A
    UIHudIcon_ArtilleryStrikeMinimap, //0x006B
    UIHudIcon_CapturePointContested, //0x006C
    UIHudIcon_CapturePointDefended, //0x006D
    UIHudIcon_RoundBar, //0x006E
    UIHudIcon_RoundBarBg, //0x006F
    UIHudIcon_RoundBarBgPlate, //0x0070
    UIHudIcon_SnapOvalArrow, //0x0071
    UIHudIcon_SquadleaderBg, //0x0072
    UIHudIcon_VehicleBg, //0x0073
    UIHudIcon_NonTakeableControlPoint, //0x0074
    UIHudIcon_SpottedPosition, //0x0075
    UIHudIcon_Grenade, //0x0076
    UIHudIcon_Revive, //0x0077
    UIHudIcon_Repair, //0x0078
    UIHudIcon_Interact, //0x0079
    UIHudIcon_Voip, //0x007A
    UIHudIcon_Claymore, //0x007B
    UIHudIcon_EodBot, //0x007C
    UIHudIcon_Explosive, //0x007D
    UIHudIcon_LaserDesignator, //0x007E
    UIHudIcon_Mav, //0x007F
    UIHudIcon_Mortar, //0x0080
    UIHudIcon_RadioBeacon, //0x0081
    UIHudIcon_Ugs, //0x0082
    UIHudIcon_PercetageBarMiddle, //0x0083
    UIHudIcon_PercetageBarEdge, //0x0084
    UIHudIcon_PercentageBarBackground, //0x0085
    UIHudIcon_TankLC, //0x0086
    UIHudIcon_HeliTrans, //0x0087
    UIHudIcon_StaticAT, //0x0088
    UIHudIcon_StaticAA, //0x0089
    UIHudIcon_SprintBoost, //0x008A
    UIHudIcon_AmmoBoost, //0x008B
    UIHudIcon_ExplosiveBoost, //0x008C
    UIHudIcon_ExplosiveResistBoost, //0x008D
    UIHudIcon_SuppressionBoost, //0x008E
    UIHudIcon_SuppressionResistBoost, //0x008F
    UIHudIcon_GrenadeBoost, //0x0090
    UIHudIcon_HealSpeedBoost, //0x0091
    UIHudIcon_NeedAmmoHighlight, //0x0092
    UIHudIcon_NeedMedicHighlight, //0x0093
    UIHudIcon_NeedRepairHighlight, //0x0094
    UIHudIcon_NeedPickupHighlight, //0x0095
    UIHudIcon_PlayerDead, //0x0096
    UIHudIcon_Player, //0x0097
    UIHudIcon_Flag, //0x0098
    UIHudIcon_Base, //0x0099
    UIHudIcon_ObjectiveNeutralBomb, //0x009A
    UIHudIcon_ObjectiveFriendlyBomb, //0x009B
    UIHudIcon_ObjectiveEnemyBomb, //0x009C
    UIHudIcon_ObjectiveEnemyHVT, //0x009D
    UIHudIcon_ObjectiveFriendlyHVT, //0x009E
    UIHudIcon_CanSupplyAmmo, //0x009F
    UIHudIcon_CanSupplyMedic, //0x00A0
    UIHudIcon_CanSupplyRepair, //0x00A1
    UIHudIcon_Count //0x00A2
};

////////////////////////////////////////
// RuntimeId: 06775
// TypeInfo:  0x00000001428491F0
enum UIPartIdentifier
{
    HCI_None, //0x0000
    HCI_RangeMeter, //0x0001
    HCI_PredictedSight, //0x0002
    HCI_VelocityVector, //0x0003
    HCI_RadioAltitude //0x0004
};

////////////////////////////////////////
// RuntimeId: 06773
// TypeInfo:  0x0000000142849390
enum CollisionMethodEnum
{
    CMESimple, //0x0000
    CMEDetailed //0x0001
};

////////////////////////////////////////
// RuntimeId: 06743
// TypeInfo:  0x00000001428493B0
enum ServerFpsState
{
    ServerFpsState_Disabled, //0x0000
    ServerFpsState_AboveThreshold, //0x0001
    ServerFpsState_BelowThreshold, //0x0002
    ServerFpsState_BelowCriticalThreshold, //0x0003
    ServerFpsState_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 06741
// TypeInfo:  0x0000000142849210
enum LogFileCollisionMode
{
    LFCM_Overwrite, //0x0000
    LFCM_Rotate, //0x0001
    LFCM_TimeStamp //0x0002
};

////////////////////////////////////////
// RuntimeId: 06739
// TypeInfo:  0x0000000142849230
enum SKU
{
    WW, //0x0000
    EU, //0x0001
    US, //0x0002
    JPN, //0x0003
    ROA, //0x0004
    RU, //0x0005
    EN //0x0006
};

////////////////////////////////////////
// RuntimeId: 06725
// TypeInfo:  0x0000000142849250
enum DamageIndicationType
{
    DamageIndicationType_GiverPlayer, //0x0000
    DamageIndicationType_ExplosionCenter //0x0001
};

////////////////////////////////////////
// RuntimeId: 06697
// TypeInfo:  0x0000000142849470
enum ExitToMenuReason
{
    ExitToMenuReason_None, //0x0000
    ExitToMenuReason_UserDisconnected, //0x0001
    ExitToMenuReason_DisconnectedFromServer, //0x0002
    ExitToMenuReason_UnableToConnectToServer, //0x0003
    ExitToMenuReason_ClientDisconnected, //0x0004
    ExitToMenuReason_FirstPartyConnectionFailed, //0x0005
    ExitToMenuReason_MissingContent, //0x0006
    ExitToMenuReason_TeamKills, //0x0007
    ExitToMenuReason_KickedByAdmin, //0x0008
    ExitToMenuReason_Banned, //0x0009
    ExitToMenuReason_InteractivityTimeout, //0x000A
    ExitToMenuReason_KickedOutServerFull, //0x000B
    ExitToMenuReason_ESportsMatchStarting, //0x000C
    ExitToMenuReason_NotInESportsRosters, //0x000D
    ExitToMenuReason_ESportsMatchEnding, //0x000E
    ExitToMenuReason_VirtualServerExpired, //0x000F
    ExitToMenuReason_VirtualServerRecreate, //0x0010
    ExitToMenuReason_ESportsTeamFull, //0x0011
    ExitToMenuReason_ESportsMatchAborted, //0x0012
    ExitToMenuReason_ESportsMatchWalkover, //0x0013
    ExitToMenuReason_ESportsMatchWarmupTimedOut, //0x0014
    ExitToMenuReason_WantToConnectToOnline, //0x0015
    ExitToMenuReason_KickedOutRankTooHigh //0x0016
};

////////////////////////////////////////
// RuntimeId: 06684
// TypeInfo:  0x0000000142849270
enum EntitlementType
{
    EntitlementType_Ignored, //0x0000
    EntitlementType_Write, //0x0001
    EntitlementType_Read //0x0002
};

////////////////////////////////////////
// RuntimeId: 06668
// TypeInfo:  0x0000000142849290
enum DynamicAvoidanceMode
{
    DynamicAvoidanceMode_Never, //0x0000
    DynamicAvoidanceMode_WhenScripted, //0x0001
    DynamicAvoidanceMode_WhenNotScripted, //0x0002
    DynamicAvoidanceMode_Always //0x0003
};

////////////////////////////////////////
// RuntimeId: 06656
// TypeInfo:  0x0000000142843438
enum ModelAnimationTransformType
{
    ModelAnimationTransformType_World, //0x0000
    ModelAnimationTransformType_Model, //0x0001
    ModelAnimationTransformType_Local //0x0002
};

////////////////////////////////////////
// RuntimeId: 06654
// TypeInfo:  0x0000000142843458
enum ModelAnimationUpdateOrder
{
    ModelAnimationUpdateOrder_PostAnimation, //0x0000
    ModelAnimationUpdateOrder_PreInput, //0x0001
    ModelAnimationUpdateOrder_PreFrame //0x0002
};

////////////////////////////////////////
// RuntimeId: 06640
// TypeInfo:  0x0000000142843658
enum ScoringVisibilityType
{
    ScoringVisibilityType_Major, //0x0000
    ScoringVisibilityType_Minor, //0x0001
    ScoringVisibilityType_Hidden //0x0002
};

////////////////////////////////////////
// RuntimeId: 06606
// TypeInfo:  0x0000000142843478
enum ProfileOptionsType
{
    GstAudio, //0x0000
    GstRender, //0x0001
    GstInput, //0x0002
    GstAI, //0x0003
    GstGameplay, //0x0004
    GstPlayerProfile, //0x0005
    GstPersistence, //0x0006
    GstBinary, //0x0007
    GstKeyBinding, //0x0008
    GstCount //0x0009
};

////////////////////////////////////////
// RuntimeId: 06580
// TypeInfo:  0x0000000142843498
enum PersistentValueHistoryType
{
    PersistentValueHistoryType_None, //0x0000
    PersistentValueHistoryType_Delta, //0x0001
    PersistentValueHistoryType_DeltaAndAbsolute, //0x0002
    PersistentValueHistoryType_HistoryOnly //0x0003
};

////////////////////////////////////////
// RuntimeId: 06570
// TypeInfo:  0x00000001428434B8
enum RichPresencePropertyType
{
    RichPresencePropertyType_Float, //0x0000
    RichPresencePropertyType_Integer, //0x0001
    RichPresencePropertyType_LongFloat, //0x0002
    RichPresencePropertyType_LongInteger //0x0003
};

////////////////////////////////////////
// RuntimeId: 06554
// TypeInfo:  0x00000001428436B8
enum PersistenceGameType
{
    PersistenceGameType_Singleplayer, //0x0000
    PersistenceGameType_Cooperative, //0x0001
    PersistenceGameType_Multiplayer, //0x0002
    PersistenceGameType_Count //0x0003
};

////////////////////////////////////////
// RuntimeId: 06550
// TypeInfo:  0x00000001428436D8
enum StatPeriod
{
    StatPeriod_AllTime, //0x0000
    StatPeriod_Monthly, //0x0001
    StatPeriod_Weekly, //0x0002
    StatPeriod_Daily, //0x0003
    StatPeriod_Size, //0x0004
    StatPeriod_Error //0x0005
};

////////////////////////////////////////
// RuntimeId: 06540
// TypeInfo:  0x0000000142843718
enum PersistentValueDataKind
{
    PersistentValueDataKind_Raw, //0x0000
    PersistentValueDataKind_Seconds, //0x0001
    PersistentValueDataKind_Minutes, //0x0002
    PersistentValueDataKind_Hours, //0x0003
    PersistentValueDataKind_Percent //0x0004
};

////////////////////////////////////////
// RuntimeId: 06538
// TypeInfo:  0x00000001428434D8
enum PersistentValueDataType
{
    PersistentValueDataType_Decimal, //0x0000
    PersistentValueDataType_Integer, //0x0001
    PersistentValueDataType_String //0x0002
};

////////////////////////////////////////
// RuntimeId: 06536
// TypeInfo:  0x00000001428434F8
enum PersistentValueType
{
    PersistentValueType_Set, //0x0000
    PersistentValueType_High, //0x0001
    PersistentValueType_Low, //0x0002
    PersistentValueType_Increment, //0x0003
    PersistentValueType_Decrement //0x0004
};

////////////////////////////////////////
// RuntimeId: 06534
// TypeInfo:  0x0000000142843518
enum ConsumableGroup
{
    ConsumableGroup_0, //0x0000
    ConsumableGroup_1, //0x0001
    ConsumableGroup_2, //0x0002
    ConsumableGroup_3, //0x0003
    ConsumableGroup_4, //0x0004
    ConsumableGroup_5, //0x0005
    ConsumableGroup_6, //0x0006
    ConsumableGroup_7, //0x0007
    ConsumableGroup_Count //0x0008
};

////////////////////////////////////////
// RuntimeId: 06530
// TypeInfo:  0x0000000142843538
enum PathfindingReplayMode
{
    PathfindingReplayMode_Disabled, //0x0000
    PathfindingReplayMode_Binary, //0x0001
    PathfindingReplayMode_Text //0x0002
};

////////////////////////////////////////
// RuntimeId: 06440
// TypeInfo:  0x0000000142843558
enum EventCompareGateType
{
    EventCompareGate_Equals, //0x0000
    EventCompareGate_NotEquals, //0x0001
    EventCompareGate_Less, //0x0002
    EventCompareGate_LessEquals, //0x0003
    EventCompareGate_Greater, //0x0004
    EventCompareGate_GreaterEquals //0x0005
};

////////////////////////////////////////
// RuntimeId: 06426
// TypeInfo:  0x0000000142843738
enum MapMarkerColorType
{
    MMCTRed, //0x0000
    MMCTBlue, //0x0001
    MMCTGreen //0x0002
};

////////////////////////////////////////
// RuntimeId: 06424
// TypeInfo:  0x0000000142843578
enum MapMarkerType
{
    MMTMissionObjective, //0x0000
    MMTSecondaryMissionObjective, //0x0001
    MMTSoldier, //0x0002
    MMTVehicle, //0x0003
    MMTAmmoCrate, //0x0004
    MMTGeneric, //0x0005
    MMTFlag, //0x0006
    MMTTactical, //0x0007
    MMTWarning //0x0008
};

////////////////////////////////////////
// RuntimeId: 06412
// TypeInfo:  0x0000000142843598
enum MessageReciever
{
    MrAll, //0x0000
    MrTeam, //0x0001
    MrTeamAndSquad, //0x0002
    MrPlayer //0x0003
};

////////////////////////////////////////
// RuntimeId: 06408
// TypeInfo:  0x00000001428435B8
enum ObjectiveType
{
    OTPrimary, //0x0000
    OTTactical, //0x0001
    OTChildMisson //0x0002
};

////////////////////////////////////////
// RuntimeId: 06398
// TypeInfo:  0x00000001428435D8
enum BlinkType
{
    BTHold, //0x0000
    BTBlink, //0x0001
    BTCount //0x0002
};

////////////////////////////////////////
// RuntimeId: 06396
// TypeInfo:  0x00000001428435F8
enum InteractionEntityType
{
    IET_None, //0x0000
    IET_RushCrateArm, //0x0001
    IET_RushCrateDisarm, //0x0002
    IET_ObliterationDropOffArm, //0x0003
    IET_CTFFlag //0x0004
};

////////////////////////////////////////
// RuntimeId: 06394
// TypeInfo:  0x0000000142843758
enum DisableTeamType
{
    DttDisable, //0x0000
    DttUnspawn //0x0001
};

////////////////////////////////////////
// RuntimeId: 06390
// TypeInfo:  0x0000000142843618
enum KillAllPlayerEnum
{
    KillAllPlayer_Both, //0x0000
    KillAllPlayer_HumanOnly, //0x0001
    KillAllPlayer_AIOnly //0x0002
};

////////////////////////////////////////
// RuntimeId: 06168
// TypeInfo:  0x0000000142839840
enum PickupAction
{
    PickupAction_Pickup, //0x0000
    PickupAction_Drop, //0x0001
    PickupAction_Created, //0x0002
    PickupAction_Destroyed, //0x0003
    PickupAction_DestroyedByPickup //0x0004
};

////////////////////////////////////////
// RuntimeId: 06138
// TypeInfo:  0x0000000142839BE0
enum PickupItemType
{
    PITWeapon, //0x0000
    PITAmmo //0x0001
};

////////////////////////////////////////
// RuntimeId: 06032
// TypeInfo:  0x0000000142834A88
enum GunMasterNotificationType
{
    GunMasterNotificationType_LevelUp, //0x0000
    GunMasterNotificationType_Demoted, //0x0001
    GunMasterNotificationType_ReachedLevel, //0x0002
    GunMasterNotificationType_TookLead, //0x0003
    GunMasterNotificationType_LostLead //0x0004
};

////////////////////////////////////////
// RuntimeId: 06028
// TypeInfo:  0x0000000142834AE8
enum CoopPlayerEvent
{
    CoopPlayerEvent_Connecting, //0x0000
    CoopPlayerEvent_Connected, //0x0001
    CoopPlayerEvent_Disconnected, //0x0002
    CoopPlayerEvent_Stats, //0x0003
    CoopPlayerEvent_StatsFailed //0x0004
};

////////////////////////////////////////
// RuntimeId: 06018
// TypeInfo:  0x0000000142834C08
enum PlayerKilledWeaponType
{
    PlayerKilledWeaponType_Unknown, //0x0000
    PlayerKilledWeaponType_HandheldWeapon, //0x0001
    PlayerKilledWeaponType_Vehicle, //0x0002
    PlayerKilledWeaponType_Count //0x0003
};

////////////////////////////////////////
// RuntimeId: 05989
// TypeInfo:  0x0000000142834F48
enum CameraIds
{
    NoCameraId, //0x0000
    FreeCameraId, //0x0001
    EntryCameraId, //0x0002
    CameraIdCount //0x0003
};

////////////////////////////////////////
// RuntimeId: 05987
// TypeInfo:  0x0000000142834F68
enum MenuResponse
{
    ResponseOk, //0x0000
    ResponseCancel, //0x0001
    ResponseSquare, //0x0002
    ResponseCount //0x0003
};

////////////////////////////////////////
// RuntimeId: 05985
// TypeInfo:  0x0000000142834F88
enum HudTextReceiver
{
    HudTextReceiver_Team, //0x0000
    HudTextReceiver_Squad, //0x0001
    HudTextReceiver_All, //0x0002
    HudTextReceiver_Count //0x0003
};

////////////////////////////////////////
// RuntimeId: 05949
// TypeInfo:  0x00000001428353A8
enum ChangeGameSettingType
{
    CGSNone, //0x0000
    CGSInvertVerticalLookAxis, //0x0001
    CGSCount //0x0002
};

////////////////////////////////////////
// RuntimeId: 05902
// TypeInfo:  0x0000000142832C08
enum ProfileOptionsLoadStatus
{
    ProfileOptionsLoadStatus_Empty, //0x0000
    ProfileOptionsLoadStatus_Succeeded, //0x0001
    ProfileOptionsLoadStatus_Corrupt //0x0002
};

////////////////////////////////////////
// RuntimeId: 05896
// TypeInfo:  0x0000000142832CA8
enum TinyEvent
{
    TinyEvent_AckTimeSyncDone, //0x0000
    TinyEvent_AckLevelLinked, //0x0001
    TinyEvent_AckLevelRestarted, //0x0002
    TinyEvent_AckEnterPatchRecvState, //0x0003
    TinyEvent_AckAuthentication, //0x0004
    TinyEvent_NackAuthentication, //0x0005
    TinyEvent_AckExitLevel, //0x0006
    TinyEvent_CmdLinkLevel, //0x0007
    TinyEvent_CmdEnterPatchRecvState, //0x0008
    TinyEvent_CmdExitLevel, //0x0009
    TinyEvent_CmdContinueLevel, //0x000A
    TinyEvent_StatControllableRubberbanding, //0x000B
    TinyEvent_StatWorldRubberbanding //0x000C
};

////////////////////////////////////////
// RuntimeId: 05877
// TypeInfo:  0x0000000142832E68
enum AdministrationRestrictionLevel
{
    AdministrationRestrictionLevel_Zero, //0x0000
    AdministrationRestrictionLevel_One, //0x0001
    AdministrationRestrictionLevel_Two, //0x0002
    AdministrationRestrictionLevel_Three, //0x0003
    AdministrationRestrictionLevel_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 05875
// TypeInfo:  0x0000000142832E88
enum AdministrationEventType
{
    AdministrationEventType_Add, //0x0000
    AdministrationEventType_Remove, //0x0001
    AdministrationEventType_Clear, //0x0002
    AdministrationEventType_List, //0x0003
    AdministrationEventType_Load, //0x0004
    AdministrationEventType_Save //0x0005
};

////////////////////////////////////////
// RuntimeId: 05772
// TypeInfo:  0x000000014282E0A0
enum ClientGameType
{
    ClientGameType_SinglePlayer, //0x0000
    ClientGameType_Hosted, //0x0001
    ClientGameType_MpTutorial, //0x0002
    ClientGameType_Joined //0x0003
};

////////////////////////////////////////
// RuntimeId: 05770
// TypeInfo:  0x000000014282E0C0
enum ClientState
{
    ClientState_WaitingForStaticBundleLoad, //0x0000
    ClientState_LoadProfileOptions, //0x0001
    ClientState_LostConnection, //0x0002
    ClientState_WaitingForUnload, //0x0003
    ClientState_Startup, //0x0004
    ClientState_StartServer, //0x0005
    ClientState_WaitingForLevel, //0x0006
    ClientState_StartLoadingLevel, //0x0007
    ClientState_WaitingForLevelLoaded, //0x0008
    ClientState_WaitingForLevelLink, //0x0009
    ClientState_LevelLinked, //0x000A
    ClientState_WaitingForGhosts, //0x000B
    ClientState_Ingame, //0x000C
    ClientState_LeaveIngame, //0x000D
    ClientState_ConnectToServer, //0x000E
    ClientState_ShuttingDown, //0x000F
    ClientState_Shutdown, //0x0010
    ClientState_None //0x0011
};

////////////////////////////////////////
// RuntimeId: 05601
// TypeInfo:  0x0000000142827370
enum UIBundleType
{
    UIBundleType_Static, //0x0000
    UIBundleType_Loading, //0x0001
    UIBundleType_Ingame //0x0002
};

////////////////////////////////////////
// RuntimeId: 05464
// TypeInfo:  0x00000001428248F8
enum CurveType
{
    CurveType_Basic_Linear, //0x0000
    CurveType_Basic_Step, //0x0001
    CurveType_Basic_StepNext, //0x0002
    CurveType_Complex //0x0003
};

////////////////////////////////////////
// RuntimeId: 05462
// TypeInfo:  0x0000000142824918
enum InfinityType
{
    InfinityType_Constant, //0x0000
    InfinityType_Linear, //0x0001
    InfinityType_Cycle, //0x0002
    InfinityType_CycleWithOffset, //0x0003
    InfinityType_Oscillate //0x0004
};

////////////////////////////////////////
// RuntimeId: 05450
// TypeInfo:  0x0000000142824938
enum LayeredTransform_BlendType
{
    LayeredTransform_BlendType_WorldOverride, //0x0000
    LayeredTransform_BlendType_WorldAdditive, //0x0001
    LayeredTransform_BlendType_WorldTranslationLocalRotationAdditive, //0x0002
    LayeredTransform_BlendType_LocalAdditive, //0x0003
    LayeredTransform_BlendType_Special //0x0004
};

////////////////////////////////////////
// RuntimeId: 05368
// TypeInfo:  0x0000000142820788
enum AnimTangentType
{
    kTangentFixed, //0x0000
    kTangentLinear, //0x0001
    kTangentFlat, //0x0002
    kTangentStep, //0x0003
    kTangentStepNext, //0x0004
    kTangentSlow, //0x0005
    kTangentFast, //0x0006
    kTangentSmooth, //0x0007
    kTangentClamped //0x0008
};

////////////////////////////////////////
// RuntimeId: 05366
// TypeInfo:  0x00000001428207A8
enum CurveInfinityType
{
    CurveInfinityType_Constant, //0x0000
    CurveInfinityType_Linear, //0x0001
    CurveInfinityType_Cycle, //0x0002
    CurveInfinityType_CycleWithOffset, //0x0003
    CurveInfinityType_Oscillate //0x0004
};

////////////////////////////////////////
// RuntimeId: 05364
// TypeInfo:  0x00000001428207C8
enum TransformPart
{
    TransformPart_TranslationX, //0x0000
    TransformPart_TranslationY, //0x0001
    TransformPart_TranslationZ, //0x0002
    TransformPart_RotationX, //0x0003
    TransformPart_RotationY, //0x0004
    TransformPart_RotationZ //0x0005
};

////////////////////////////////////////
// RuntimeId: 05330
// TypeInfo:  0x00000001428207E8
enum InterpolationType
{
    InterpolationType_None, //0x0000
    InterpolationType_Linear, //0x0001
    InterpolationType_CatmullRom, //0x0002
    InterpolationType_Curves //0x0003
};

////////////////////////////////////////
// RuntimeId: 05246
// TypeInfo:  0x000000014281C108
enum GameplayBones
{
    GameplayBones_UndefinedBone, //0x0000
    GameplayBones_RootBone, //0x0001
    GameplayBones_RootMeshBone, //0x0002
    GameplayBones_ConnectBone, //0x0003
    GameplayBones_HeadBone, //0x0004
    GameplayBones_CameraBone, //0x0005
    GameplayBones_AimBone, //0x0006
    GameplayBones_WeaponBone, //0x0007
    GameplayBones_WeaponAux1Bone, //0x0008
    GameplayBones_LeftArmBone, //0x0009
    GameplayBones_Count //0x000A
};

////////////////////////////////////////
// RuntimeId: 05210
// TypeInfo:  0x000000014281C128
enum CompareOp
{
    CompareOp_Equal, //0x0000
    CompareOp_NotEqual, //0x0001
    CompareOp_Greater, //0x0002
    CompareOp_Less, //0x0003
    CompareOp_GreaterOrEqual, //0x0004
    CompareOp_LessOrEqual //0x0005
};

////////////////////////////////////////
// RuntimeId: 05202
// TypeInfo:  0x000000014281C148
enum VectorMathOp
{
    VectorMathOp_Add, //0x0000
    VectorMathOp_Subtract, //0x0001
    VectorMathOp_MultiplyByFloat, //0x0002
    VectorMathOp_DivideByFloat, //0x0003
    VectorMathOp_Cross, //0x0004
    VectorMathOp_Dot, //0x0005
    VectorMathOp_Length, //0x0006
    VectorMathOp_Transform, //0x0007
    VectorMathOp_InverseTransform, //0x0008
    VectorMathOp_Rotate, //0x0009
    VectorMathOp_InverseRotate //0x000A
};

////////////////////////////////////////
// RuntimeId: 05198
// TypeInfo:  0x000000014281C308
enum MathOp
{
    MathOp_Add, //0x0000
    MathOp_Subtract, //0x0001
    MathOp_Multiply, //0x0002
    MathOp_Divide, //0x0003
    MathOp_Min, //0x0004
    MathOp_Max, //0x0005
    MathOp_Modulo, //0x0006
    MathOp_Exponent //0x0007
};

////////////////////////////////////////
// RuntimeId: 05180
// TypeInfo:  0x000000014281C168
enum ModifierAxis
{
    maLeft, //0x0000
    maUp, //0x0001
    maForward //0x0002
};

////////////////////////////////////////
// RuntimeId: 05166
// TypeInfo:  0x000000014281C188
enum ModifierEuler
{
    Roll, //0x0000
    Pitch, //0x0001
    Yaw, //0x0002
    Trans //0x0003
};

////////////////////////////////////////
// RuntimeId: 05098
// TypeInfo:  0x000000014281C1A8
enum ExecutionModeType
{
    ExecutionMode_Play, //0x0000
    ExecutionMode_GameView, //0x0001
    ExecutionMode_PlayFromHere //0x0002
};

////////////////////////////////////////
// RuntimeId: 05096
// TypeInfo:  0x000000014281C1C8
enum EntityUpdateOrder
{
    EntityUpdateOrder_Async, //0x0000
    EntityUpdateOrder_Sync, //0x0001
    EntityUpdateOrder_Both //0x0002
};

////////////////////////////////////////
// RuntimeId: 05094
// TypeInfo:  0x000000014281C1E8
enum UpdatePass
{
    UpdatePass_PreSim, //0x0000
    UpdatePass_PostSim, //0x0001
    UpdatePass_PostFrame, //0x0002
    UpdatePass_FrameInterpolation, //0x0003
    UpdatePass_PreInput, //0x0004
    UpdatePass_PreFrame, //0x0005
    UpdatePass_PreAnimation, //0x0006
    UpdatePass_AnimationAttach, //0x0007
    UpdatePass_PostAnimation, //0x0008
    UpdatePass_Count //0x0009
};

////////////////////////////////////////
// RuntimeId: 05070
// TypeInfo:  0x000000014281C328
enum EntityInitPass
{
    EntityInitPass_Early, //0x0000
    EntityInitPass_Normal, //0x0001
    EntityInitPass_Count //0x0002
};

////////////////////////////////////////
// RuntimeId: 05068
// TypeInfo:  0x000000014281C348
enum EntityCreatorType
{
    EntityCreatorType_Unknown, //0x0000
    EntityCreatorType_Level, //0x0001
    EntityCreatorType_Spawner, //0x0002
    EntityCreatorType_Owner, //0x0003
    EntityCreatorType_Ghost //0x0004
};

////////////////////////////////////////
// RuntimeId: 05064
// TypeInfo:  0x000000014281C208
enum SubRealm
{
    SubRealm_All, //0x0000
    SubRealm_LocalPlayer, //0x0001
    SubRealm_RemotePlayer //0x0002
};

////////////////////////////////////////
// RuntimeId: 05046
// TypeInfo:  0x000000014281C228
enum StreamRealm
{
    StreamRealm_None, //0x0000
    StreamRealm_Client, //0x0001
    StreamRealm_Both //0x0002
};

////////////////////////////////////////
// RuntimeId: 05044
// TypeInfo:  0x000000014281C248
enum RadiosityTypeOverride
{
    RadiosityTypeOverride_None, //0x0000
    RadiosityTypeOverride_Dynamic, //0x0001
    RadiosityTypeOverride_LightProbe, //0x0002
    RadiosityTypeOverride_TerrainProjected //0x0003
};

////////////////////////////////////////
// RuntimeId: 05018
// TypeInfo:  0x000000014281C268
enum EventConnectionTargetType
{
    EventConnectionTargetType_Invalid, //0x0000
    EventConnectionTargetType_ClientAndServer, //0x0001
    EventConnectionTargetType_Client, //0x0002
    EventConnectionTargetType_Server, //0x0003
    EventConnectionTargetType_NetworkedClient, //0x0004
    EventConnectionTargetType_NetworkedClientAndServer //0x0005
};

////////////////////////////////////////
// RuntimeId: 05010
// TypeInfo:  0x000000014281C388
enum EmitterParameter
{
    EmitterParameterNone, //0x0000
    EmitterParameter1, //0x0001
    EmitterParameter2, //0x0002
    EmitterParameter3, //0x0003
    EmitterParameterVec, //0x0004
    EmitterParameterVecAverage, //0x0005
    EmitterParameterDistance, //0x0006
    EmitterParameterCount, //0x0007
    EmitterParameter4 //0x0008
};

////////////////////////////////////////
// RuntimeId: 05002
// TypeInfo:  0x000000014281C288
enum EffectParameterType
{
    EffectParameterType_Float, //0x0000
    EffectParameterType_Vec3, //0x0001
    EffectParameterType_Bool, //0x0002
    EffectParameterType_Int //0x0003
};

////////////////////////////////////////
// RuntimeId: 04974
// TypeInfo:  0x000000014281C2A8
enum BundleHeapType
{
    BundleHeapType_OwnWithParentSmallblock, //0x0000
    BundleHeapType_OwnWithSmallblock, //0x0001
    BundleHeapType_OwnWithoutSmallblock, //0x0002
    BundleHeapType_Parent, //0x0003
    BundleHeapType_Level, //0x0004
    BundleHeapType_Global, //0x0005
    BundleHeapType_Null //0x0006
};

////////////////////////////////////////
// RuntimeId: 04889
// TypeInfo:  0x0000000142813650
enum PerParticleParams
{
    FloatCount //0x0000
};

////////////////////////////////////////
// RuntimeId: 04883
// TypeInfo:  0x0000000142813550
enum EmitterDrawOrder
{
    EmitterDrawOrder_Default, //0x0000
    EmitterDrawOrder_Foreground, //0x0001
    EmitterDrawOrder_Background //0x0002
};

////////////////////////////////////////
// RuntimeId: 04881
// TypeInfo:  0x0000000142813670
enum ProcessorType
{
    PtBaseEmitter, //0x0000
    PtPreRoll, //0x0001
    PtSpawnRate, //0x0002
    PtSpawnRibbonRate, //0x0003
    PtSpawnPointCloud, //0x0004
    PtSpawnSpeed, //0x0005
    PtSpawnPosition, //0x0006
    PtSpawnDirection, //0x0007
    PtSpawnSize, //0x0008
    PtSpawnAnimation, //0x0009
    PtSpawnAnimationFrame, //0x000A
    PtSpawnRotation, //0x000B
    PtSpawnOrientation, //0x000C
    PtSpawnRotationSpeed, //0x000D
    PtSpawnColorRandom, //0x000E
    PtUpdatePosition, //0x000F
    PtUpdateAge, //0x0010
    PtTurbulance, //0x0011
    PtGravity, //0x0012
    PtLocalForce, //0x0013
    PtAirResistance, //0x0014
    PtUpdateLinearVelocity, //0x0015
    PtUpdateOrientation, //0x0016
    PtEmitter, //0x0017
    PtUpdateColor, //0x0018
    PtUpdateColorLeaf, //0x0019
    PtUpdateTransparency, //0x001A
    PtUpdateTextureCoords, //0x001B
    PtUpdateRotation, //0x001C
    PtUpdateSizeX, //0x001D
    PtUpdateSizeY, //0x001E
    PtUpdateSizeZ, //0x001F
    PtUpdateSize, //0x0020
    PtUpdateAlphaLevelMin, //0x0021
    PtUpdateAlphaLevelMax, //0x0022
    PtUpdateAlphaLevelScale, //0x0023
    PtUpdateClipScale, //0x0024
    PtUpdateCameraProximity, //0x0025
    PtUpdateRibbonFade, //0x0026
    PtUpdateRibbonTexture, //0x0027
    PtWorldWind, //0x0028
    PtWorldForces, //0x0029
    PtUpdateCollision, //0x002A
    PtUpdateQuadBendingAngle, //0x002B
    PtUpdateShaderParam01, //0x002C
    PtUpdateShaderParam02, //0x002D
    PtUpdateShaderParam03, //0x002E
    PtUpdateShaderParam04, //0x002F
    PtUpdateShaderParam05, //0x0030
    PtUpdateShaderParam06, //0x0031
    PtUpdateShaderParam07, //0x0032
    PtUpdateShaderParam08, //0x0033
    PtUpdateShaderParam09, //0x0034
    PtUpdateShaderParam10, //0x0035
    PtUpdateShaderParam11, //0x0036
    PtUpdateShaderParam12, //0x0037
    ProcessorTypeCount //0x0038
};

////////////////////////////////////////
// RuntimeId: 04879
// TypeInfo:  0x0000000142813690
enum EvaluatorType
{
    EtNone, //0x0000
    EtDefault, //0x0001
    EtBox, //0x0002
    EtPolynomial, //0x0003
    EtPolynomialOperator, //0x0004
    EtSpline, //0x0005
    EtRandom, //0x0006
    EtRandomXYZ, //0x0007
    EtRotateVector, //0x0008
    EtSampleTexture, //0x0009
    EtSphere, //0x000A
    EtSuperSphere, //0x000B
    EtConstant, //0x000C
    EtPolynomialColorInterp, //0x000D
    EtCamProx, //0x000E
    EvaluatorTypeCount //0x000F
};

////////////////////////////////////////
// RuntimeId: 04877
// TypeInfo:  0x0000000142813570
enum EmittableAlignment
{
    EmittableAlignment_Screen, //0x0000
    EmittableAlignment_Emitter, //0x0001
    EmittableAlignment_Emittable, //0x0002
    EmittableAlignment_Direction, //0x0003
    EmittableAlignment_WorldFixedRotation, //0x0004
    EmittableAlignment_World, //0x0005
    EmittableAlignment_MotionStretch //0x0006
};

////////////////////////////////////////
// RuntimeId: 04875
// TypeInfo:  0x0000000142813590
enum EmittableType
{
    EmittableType_Point, //0x0000
    EmittableType_Quad, //0x0001
    EmittableType_Mesh, //0x0002
    EmittableType_Ribbon, //0x0003
    Point, //0x0004
    Quad, //0x0005
    ScreenAlignedQuad, //0x0006
    DirectionAlignedQuad, //0x0007
    WorldAlignedQuad, //0x0008
    ParticleMesh, //0x0009
    Ribbon, //0x000A
    Trail //0x000B
};

////////////////////////////////////////
// RuntimeId: 04873
// TypeInfo:  0x00000001428135B0
enum EmittableField
{
    EfZero, //0x0000
    EfOne, //0x0001
    EfNormTime, //0x0002
    EfNormSpeed, //0x0003
    EfNormWindSpeed, //0x0004
    EfNormMicroVariation, //0x0005
    EfEmitterNormTime, //0x0006
    EfEmitterNormWindSpeed, //0x0007
    EfEmitterNormMicroVariation, //0x0008
    EfNone, //0x0009
    EfCount, //0x000A
    EfSpawnAnimationSpeed, //0x000B
    EfSpawnAnimationFrameIndex, //0x000C
    EfVelocity, //0x000D
    EfParameters, //0x000E
    EfRotation, //0x000F
    EfSpeed, //0x0010
    EfUserDefined, //0x0011
    EfConstantFloat, //0x0012
    EfConstantVec //0x0013
};

////////////////////////////////////////
// RuntimeId: 04827
// TypeInfo:  0x00000001428135D0
enum EmitterCollisionPriority
{
    EmitterCollisionPriority_Low, //0x0000
    EmitterCollisionPriority_Medium, //0x0001
    EmitterCollisionPriority_High //0x0002
};

////////////////////////////////////////
// RuntimeId: 04825
// TypeInfo:  0x00000001428135F0
enum EmitterCollisionMethod
{
    EmitterCollisionMethod_RayCast, //0x0000
    EmitterCollisionMethod_RayCastDetailed //0x0001
};

////////////////////////////////////////
// RuntimeId: 04791
// TypeInfo:  0x0000000142813610
enum TurbulenceNoiseType
{
    TurbulenceNoiseType_Random, //0x0000
    TurbulenceNoiseType_Perlin, //0x0001
    TurbulenceNoiseType_PerlinSimplex, //0x0002
    TurbulenceNoiseType_PerlinCurl //0x0003
};

////////////////////////////////////////
// RuntimeId: 04723
// TypeInfo:  0x0000000142813630
enum PolynomialOperation
{
    Multiplication, //0x0000
    Addition, //0x0001
    Subtraction //0x0002
};

////////////////////////////////////////
// RuntimeId: 04694
// TypeInfo:  0x0000000142810FE0
enum BreakableControllerComponentNetworkIdMultiplier
{
    BreakableControllerComponentNetworkIdMultiplier_HidePartObjects, //0x0000
    BreakableControllerComponentNetworkIdMultiplier_DisablePart, //0x0001
    BreakableControllerComponentNetworkIdMultiplier_PartCount //0x0002
};

////////////////////////////////////////
// RuntimeId: 04692
// TypeInfo:  0x0000000142811000
enum BreakableControllerComponentNetworkId
{
    BreakableControllerComponentNetworkId_Collapsed, //0x0000
    BreakableControllerComponentNetworkId_SpawnPartObjectsOnCollapse, //0x0001
    BreakableControllerComponentNetworkId_ExtraPartCount //0x0002
};

////////////////////////////////////////
// RuntimeId: 04615
// TypeInfo:  0x00000001428076B0
enum SoundTestTransformBehavior
{
    SoundTestTransformBehavior_Static //0x0000
};

////////////////////////////////////////
// RuntimeId: 04609
// TypeInfo:  0x00000001428076D0
enum SoundTestParamBehavior
{
    SoundTestParamBehavior_Constant, //0x0000
    SoundTestParamBehavior_LinearRamp, //0x0001
    SoundTestParamBehavior_Random //0x0002
};

////////////////////////////////////////
// RuntimeId: 04587
// TypeInfo:  0x0000000142807DB0
enum SoundPatchDefaultEvent
{
    SoundPatchDefaultEvent_Start, //0x0000
    SoundPatchDefaultEvent_Stop, //0x0001
    SoundPatchDefaultEvent_EnterScope, //0x0002
    SoundPatchDefaultEvent_ForceInit //0x0003
};

////////////////////////////////////////
// RuntimeId: 04573
// TypeInfo:  0x00000001428076F0
enum StreamStarveMode
{
    StreamStarveMode_Off, //0x0000
    StreamStarveMode_On, //0x0001
    StreamStarveMode_Dynamic //0x0002
};

////////////////////////////////////////
// RuntimeId: 04569
// TypeInfo:  0x0000000142807DD0
enum SoundWaveStreamingMode
{
    SoundWaveStreamingMode_Normal, //0x0000
    SoundWaveStreamingMode_ZeroLatency, //0x0001
    SoundWaveStreamingMode_LowLatency //0x0002
};

////////////////////////////////////////
// RuntimeId: 04559
// TypeInfo:  0x0000000142807710
enum LoopType
{
    LtNone, //0x0000
    LtForward, //0x0001
    LtRelease, //0x0002
    LtInstantRelease //0x0003
};

////////////////////////////////////////
// RuntimeId: 04547
// TypeInfo:  0x0000000142807730
enum MixerValueAccumulateMode
{
    MixerValueAccumulateMode_None, //0x0000
    MixerValueAccumulateMode_Min, //0x0001
    MixerValueAccumulateMode_Max //0x0002
};

////////////////////////////////////////
// RuntimeId: 04537
// TypeInfo:  0x0000000142807DF0
enum MixGroupPropertyType
{
    MixGroupPropertyType_Gain, //0x0000
    MixGroupPropertyType_Pitch, //0x0001
    MixGroupPropertyType_Lfe, //0x0002
    MixGroupPropertyType_Reverb, //0x0003
    MixGroupPropertyType_Lpf, //0x0004
    MixGroupPropertyTypeCount //0x0005
};

////////////////////////////////////////
// RuntimeId: 04531
// TypeInfo:  0x0000000142807750
enum MixGroupState
{
    MixGroupState_Normal, //0x0000
    MixGroupState_Mute, //0x0001
    MixGroupState_Solo, //0x0002
    MixGroupStateBitCount //0x0003
};

////////////////////////////////////////
// RuntimeId: 04527
// TypeInfo:  0x0000000142807E10
enum MixerValueUIScale
{
    MixerValueUIScale_Linear, //0x0000
    MixerValueUIScale_Logarithmic //0x0001
};

////////////////////////////////////////
// RuntimeId: 04525
// TypeInfo:  0x0000000142807E30
enum MixerValueUIOrientation
{
    MixerValueUIOrientation_Horizontal, //0x0000
    MixerValueUIOrientation_Vertical //0x0001
};

////////////////////////////////////////
// RuntimeId: 04523
// TypeInfo:  0x0000000142807E50
enum MixerValueUI
{
    MixerValueUI_None, //0x0000
    MixerValueUI_Fader, //0x0001
    MixerValueUI_Knob, //0x0002
    MixerValueUI_EditBox //0x0003
};

////////////////////////////////////////
// RuntimeId: 04461
// TypeInfo:  0x0000000142807770
enum EventSequencerPlayback
{
    EventSequencerPlayback_Sequential, //0x0000
    EventSequencerPlayback_Simultaneous, //0x0001
    EventSequencerPlayback_Random //0x0002
};

////////////////////////////////////////
// RuntimeId: 04453
// TypeInfo:  0x0000000142807790
enum TimerMode
{
    TimerMode_Repeating, //0x0000
    TimerMode_SingleShot //0x0001
};

////////////////////////////////////////
// RuntimeId: 04439
// TypeInfo:  0x00000001428077B0
enum AngleUnit
{
    AngleUnit_Radians, //0x0000
    AngleUnit_Degrees //0x0001
};

////////////////////////////////////////
// RuntimeId: 04437
// TypeInfo:  0x00000001428077D0
enum SimpleTransformOperation
{
    SimpleTransformOperation_Add, //0x0000
    SimpleTransformOperation_Subtract, //0x0001
    SimpleTransformOperation_Multiply, //0x0002
    SimpleTransformOperation_Divide, //0x0003
    SimpleTransformOperation_Sine, //0x0004
    SimpleTransformOperation_Cosine, //0x0005
    SimpleTransformOperation_ArcSine, //0x0006
    SimpleTransformOperation_ArcCosine, //0x0007
    SimpleTransformOperation_Modulus, //0x0008
    SimpleTransformOperation_Round, //0x0009
    SimpleTransformOperation_Floor, //0x000A
    SimpleTransformOperation_Ceiling, //0x000B
    SimpleTransformOperation_Power, //0x000C
    SimpleTransformOperation_SquareRoot, //0x000D
    SimpleTransformOperation_Absolute, //0x000E
    SimpleTransformOperation_Exp, //0x000F
    SimpleTransformOperation_Log, //0x0010
    SimpleTransformOperation_Log10, //0x0011
    SimpleTransformOperation_Tangent, //0x0012
    SimpleTransformOperation_ArcTangent //0x0013
};

////////////////////////////////////////
// RuntimeId: 04417
// TypeInfo:  0x00000001428077F0
enum ParameterFilterLinearNodeVersion
{
    ParameterFilterLinearNodeVersion_2010_2, //0x0000
    ParameterFilterLinearNodeVersion_2012_5 //0x0001
};

////////////////////////////////////////
// RuntimeId: 04413
// TypeInfo:  0x0000000142807810
enum ParameterFilterLpNodeVersion
{
    ParameterFilterLpNodeVersion_2010_2, //0x0000
    ParameterFilterLpNodeVersion_2012_5 //0x0001
};

////////////////////////////////////////
// RuntimeId: 04409
// TypeInfo:  0x0000000142807830
enum NumberGeneratorMode
{
    NumberGeneratorMode_RandomUniform //0x0000
};

////////////////////////////////////////
// RuntimeId: 04407
// TypeInfo:  0x0000000142807850
enum NumberGeneratorNodeVersion
{
    NumberGeneratorNodeVersion_2010_2, //0x0000
    NumberGeneratorNodeVersion_2013_1 //0x0001
};

////////////////////////////////////////
// RuntimeId: 04401
// TypeInfo:  0x0000000142807870
enum FaderType
{
    FaderType_Linear, //0x0000
    FaderType_Cosine //0x0001
};

////////////////////////////////////////
// RuntimeId: 04391
// TypeInfo:  0x0000000142807890
enum LogicalExpressionOperator
{
    LogicalExpressionOperator_And, //0x0000
    LogicalExpressionOperator_Or, //0x0001
    LogicalExpressionOperator_Nand, //0x0002
    LogicalExpressionOperator_Nor //0x0003
};

////////////////////////////////////////
// RuntimeId: 04351
// TypeInfo:  0x00000001428078B0
enum DebugRenderType
{
    DebugRenderType_Text, //0x0000
    DebugRenderType_Plot, //0x0001
    DebugRenderType_Bar //0x0002
};

////////////////////////////////////////
// RuntimeId: 04343
// TypeInfo:  0x00000001428078D0
enum ConditionType
{
    ConditionType_And, //0x0000
    ConditionType_Or, //0x0001
    ConditionType_XOr, //0x0002
    ConditionType_Equal, //0x0003
    ConditionType_NotEqual, //0x0004
    ConditionType_Less, //0x0005
    ConditionType_Greater, //0x0006
    ConditionType_LessOrEqual, //0x0007
    ConditionType_GreaterOrEqual //0x0008
};

////////////////////////////////////////
// RuntimeId: 04335
// TypeInfo:  0x00000001428078F0
enum VoiceOverPronunciationFallback
{
    VoiceOverPronunciationFallback_None, //0x0000
    VoiceOverPronunciationFallback_Master //0x0001
};

////////////////////////////////////////
// RuntimeId: 04331
// TypeInfo:  0x0000000142807910
enum VoiceOverConversationQueueGroupPolyphony
{
    VoiceOverConversationQueueGroupPolyphony_Sources, //0x0000
    VoiceOverConversationQueueGroupPolyphony_GlobalSources, //0x0001
    VoiceOverConversationQueueGroupPolyphony_Conversations //0x0002
};

////////////////////////////////////////
// RuntimeId: 04321
// TypeInfo:  0x0000000142807930
enum VoiceOverWaveNameTranslation
{
    VoiceOverWaveNameTranslation_FullName, //0x0000
    VoiceOverWaveNameTranslation_PathOnly, //0x0001
    VoiceOverWaveNameTranslation_NameOnly //0x0002
};

////////////////////////////////////////
// RuntimeId: 04293
// TypeInfo:  0x0000000142807950
enum VoiceOverConversationQueueMode
{
    VoiceOverConversationQueueMode_Always, //0x0000
    VoiceOverConversationQueueMode_Never, //0x0001
    VoiceOverConversationQueueMode_SamePriority //0x0002
};

////////////////////////////////////////
// RuntimeId: 04291
// TypeInfo:  0x0000000142807970
enum VoiceOverConversationInterruptMode
{
    VoiceOverConversationInterruptMode_Disallow, //0x0000
    VoiceOverConversationInterruptMode_Allow, //0x0001
    VoiceOverConversationInterruptMode_AllowSame //0x0002
};

////////////////////////////////////////
// RuntimeId: 04285
// TypeInfo:  0x0000000142807990
enum VoiceOverDialogTakeBehavior
{
    VoiceOverDialogTakeBehavior_Start, //0x0000
    VoiceOverDialogTakeBehavior_Clip, //0x0001
    VoiceOverDialogTakeBehavior_Continuous //0x0002
};

////////////////////////////////////////
// RuntimeId: 04271
// TypeInfo:  0x00000001428079B0
enum VoiceOverContainerConditionMode
{
    VoiceOverContainerConditionMode_All, //0x0000
    VoiceOverContainerConditionMode_Any //0x0001
};

////////////////////////////////////////
// RuntimeId: 04267
// TypeInfo:  0x00000001428079D0
enum VoiceOverLogicFlowMode
{
    VoiceOverLogicFlowMode_All, //0x0000
    VoiceOverLogicFlowMode_One //0x0001
};

////////////////////////////////////////
// RuntimeId: 04251
// TypeInfo:  0x00000001428079F0
enum VoiceOverLabelCompareMode
{
    VoiceOverLabelCompareMode_Any, //0x0000
    VoiceOverLabelCompareMode_All, //0x0001
    VoiceOverLabelCompareMode_One //0x0002
};

////////////////////////////////////////
// RuntimeId: 04249
// TypeInfo:  0x0000000142807A10
enum VoiceOverLabelSourceMode
{
    VoiceOverLabelSourceMode_Combined, //0x0000
    VoiceOverLabelSourceMode_Shared //0x0001
};

////////////////////////////////////////
// RuntimeId: 04209
// TypeInfo:  0x0000000142807A30
enum VoiceOverCompareExpressionType
{
    VoiceOverCompareExpressionType_Equals, //0x0000
    VoiceOverCompareExpressionType_Differs, //0x0001
    VoiceOverCompareExpressionType_Greater, //0x0002
    VoiceOverCompareExpressionType_Less, //0x0003
    VoiceOverCompareExpressionType_GreaterOrEquals, //0x0004
    VoiceOverCompareExpressionType_LessOrEquals //0x0005
};

////////////////////////////////////////
// RuntimeId: 04203
// TypeInfo:  0x0000000142807A50
enum VoiceOverArithmeticExpressionType
{
    VoiceOverArithmeticExpressionType_Addition, //0x0000
    VoiceOverArithmeticExpressionType_Subtraction, //0x0001
    VoiceOverArithmeticExpressionType_Multiplication, //0x0002
    VoiceOverArithmeticExpressionType_Division, //0x0003
    VoiceOverArithmeticExpressionType_Difference //0x0004
};

////////////////////////////////////////
// RuntimeId: 04173
// TypeInfo:  0x0000000142807A70
enum VoiceOverValueType
{
    VoiceOverValueType_Boolean, //0x0000
    VoiceOverValueType_Integer, //0x0001
    VoiceOverValueType_Float, //0x0002
    VoiceOverValueType_Vector, //0x0003
    VoiceOverValueType_Object, //0x0004
    VoiceOverValueTypeCount //0x0005
};

////////////////////////////////////////
// RuntimeId: 04165
// TypeInfo:  0x0000000142807ED0
enum MusicMarkerType
{
    MusicMarkerType_None, //0x0000
    MusicMarkerType_Beat, //0x0001
    MusicMarkerType_Bar //0x0002
};

////////////////////////////////////////
// RuntimeId: 04161
// TypeInfo:  0x0000000142807A90
enum MusicFadeType
{
    MusicFadeType_Seconds, //0x0000
    MusicFadeType_Milliseconds, //0x0001
    MusicFadeType_Beats, //0x0002
    MusicFadeType_Bars //0x0003
};

////////////////////////////////////////
// RuntimeId: 04155
// TypeInfo:  0x0000000142807AB0
enum MusicPlaylistType
{
    MusicPlaylistType_PlayFirstAndShuffle, //0x0000
    MusicPlaylistType_Random, //0x0001
    MusicPlaylistType_Shuffle, //0x0002
    MusicPlaylistType_Sequential //0x0003
};

////////////////////////////////////////
// RuntimeId: 04143
// TypeInfo:  0x0000000142807AD0
enum MusicSyncType
{
    MusicSyncType_Beat, //0x0000
    MusicSyncType_Bar, //0x0001
    MusicSyncType_Immediate //0x0002
};

////////////////////////////////////////
// RuntimeId: 04141
// TypeInfo:  0x0000000142807AF0
enum MusicSelectorTriggerType
{
    MusicSelectorTriggerType_Interrupt, //0x0000
    MusicSelectorTriggerType_Queue, //0x0001
    MusicSelectorTriggerType_Fade //0x0002
};

////////////////////////////////////////
// RuntimeId: 04119
// TypeInfo:  0x0000000142807B10
enum MusicPhraseSelectionType
{
    MusicPhraseSelectionType_PlayFirstAndShuffle, //0x0000
    MusicPhraseSelectionType_PlayAllAndShuffle, //0x0001
    MusicPhraseSelectionType_Random, //0x0002
    MusicPhraseSelectionType_Range, //0x0003
    MusicPhraseSelectionType_Sequential, //0x0004
    MusicPhraseSelectionType_Shuffle, //0x0005
    MusicPhraseSelectionType_Weighted //0x0006
};

////////////////////////////////////////
// RuntimeId: 04093
// TypeInfo:  0x0000000142807B30
enum PropertySortScopeStageOrder
{
    PropertySortScopeStageOrder_Ascending, //0x0000
    PropertySortScopeStageOrder_Descending //0x0001
};

////////////////////////////////////////
// RuntimeId: 04091
// TypeInfo:  0x0000000142807B50
enum ScopeStageSortProperty
{
    ScopeStageSortProperty_DistanceToListener, //0x0000
    ScopeStageSortProperty_Loudness //0x0001
};

////////////////////////////////////////
// RuntimeId: 04067
// TypeInfo:  0x0000000142807B70
enum SoundWaveVariationSelection
{
    SoundWaveVariationSelection_Sequential, //0x0000
    SoundWaveVariationSelection_Random //0x0001
};

////////////////////////////////////////
// RuntimeId: 04065
// TypeInfo:  0x0000000142807EF0
enum SoundWaveVoicePriority
{
    SoundWaveVoicePriority_Low, //0x0000
    SoundWaveVoicePriority_Medium, //0x0001
    SoundWaveVoicePriority_Normal, //0x0002
    SoundWaveVoicePriority_High, //0x0003
    SoundWaveVoicePriority_Permanent //0x0004
};

////////////////////////////////////////
// RuntimeId: 04061
// TypeInfo:  0x0000000142807B90
enum SoundDataReadTarget
{
    SoundDataReadTarget_Primary, //0x0000
    SoundDataReadTarget_Secondary //0x0001
};

////////////////////////////////////////
// RuntimeId: 04059
// TypeInfo:  0x0000000142807BB0
enum SoundDataReleaseBehavior
{
    SoundDataReleaseBehavior_Explicit, //0x0000
    SoundDataReleaseBehavior_Bundle, //0x0001
    SoundDataReleaseBehavior_Inactive //0x0002
};

////////////////////////////////////////
// RuntimeId: 04057
// TypeInfo:  0x0000000142807BD0
enum SoundDataRequestBehavior
{
    SoundDataRequestBehavior_Explicit, //0x0000
    SoundDataRequestBehavior_Bundle //0x0001
};

////////////////////////////////////////
// RuntimeId: 04053
// TypeInfo:  0x0000000142807F10
enum SoundDataState
{
    SoundDataState_Pending, //0x0000
    SoundDataState_Cancelled, //0x0001
    SoundDataState_Lost, //0x0002
    SoundDataState_Valid //0x0003
};

////////////////////////////////////////
// RuntimeId: 04051
// TypeInfo:  0x0000000142807F30
enum SoundDataRequestResult
{
    SoundDataRequestResult_NotRequested, //0x0000
    SoundDataRequestResult_Requested, //0x0001
    SoundDataRequestResult_Available //0x0002
};

////////////////////////////////////////
// RuntimeId: 04049
// TypeInfo:  0x0000000142807F50
enum SoundDataReadPriority
{
    SoundDataReadPriority_Low, //0x0000
    SoundDataReadPriority_Medium, //0x0001
    SoundDataReadPriority_Normal, //0x0002
    SoundDataReadPriority_High //0x0003
};

////////////////////////////////////////
// RuntimeId: 04021
// TypeInfo:  0x0000000142807BF0
enum SoundGraphPluginConnectionType
{
    SoundGraphPluginConnectionType_Unconnected, //0x0000
    SoundGraphPluginConnectionType_Signal, //0x0001
    SoundGraphPluginConnectionType_Bus //0x0002
};

////////////////////////////////////////
// RuntimeId: 04017
// TypeInfo:  0x0000000142807C10
enum FadeCurveType
{
    FadeCurveType_LinearAmplitude, //0x0000
    FadeCurveType_SineAmplitude, //0x0001
    FadeCurveType_LinearDecibel //0x0002
};

////////////////////////////////////////
// RuntimeId: 04009
// TypeInfo:  0x0000000142807FB0
enum AudioSystemSpeakerSetup
{
    FiveDotOne, //0x0000
    SevenDotOne //0x0001
};

////////////////////////////////////////
// RuntimeId: 04005
// TypeInfo:  0x0000000142807C30
enum VuMeterMode
{
    VuMeterMode_Rms, //0x0000
    VuMeterMode_Peak, //0x0001
    VuMeterMode_LargestPeak //0x0002
};

////////////////////////////////////////
// RuntimeId: 03991
// TypeInfo:  0x0000000142807C50
enum TimeStretchEfficiency
{
    TimeStretchEfficiency_1, //0x0000
    TimeStretchEfficiency_2, //0x0001
    TimeStretchEfficiency_3, //0x0002
    TimeStretchEfficiency_4, //0x0003
    TimeStretchEfficiency_5, //0x0004
    TimeStretchEfficiency_6, //0x0005
    TimeStretchEfficiency_7, //0x0006
    TimeStretchEfficiency_8, //0x0007
    TimeStretchEfficiency_9, //0x0008
    TimeStretchEfficiency_10 //0x0009
};

////////////////////////////////////////
// RuntimeId: 03989
// TypeInfo:  0x0000000142807C70
enum TimeStretchMultiChannelMode
{
    TimeStretchMultiChannelMode_IndependentChannels, //0x0000
    TimeStretchMultiChannelMode_CombinedChannels //0x0001
};

////////////////////////////////////////
// RuntimeId: 03983
// TypeInfo:  0x0000000142807C90
enum SamplerNodeVersion
{
    SamplerNodeVersion_2010_2, //0x0000
    SamplerNodeVersion_2013_2 //0x0001
};

////////////////////////////////////////
// RuntimeId: 03977
// TypeInfo:  0x0000000142807FD0
enum RouteChannel
{
    RouteChannel_0, //0x0000
    RouteChannel_1, //0x0001
    RouteChannel_2, //0x0002
    RouteChannel_3, //0x0003
    RouteChannel_4, //0x0004
    RouteChannel_5, //0x0005
    RouteChannel_6, //0x0006
    RouteChannel_7, //0x0007
    RouteChannel_8, //0x0008
    RouteChannel_9, //0x0009
    RouteChannel_10, //0x000A
    RouteChannel_11, //0x000B
    RouteChannel_12, //0x000C
    RouteChannel_13, //0x000D
    RouteChannel_14, //0x000E
    RouteChannel_15, //0x000F
    RouteChannel_16, //0x0010
    RouteChannel_17, //0x0011
    RouteChannel_18, //0x0012
    RouteChannel_19, //0x0013
    RouteChannel_21, //0x0014
    RouteChannel_22, //0x0015
    RouteChannel_23, //0x0016
    RouteChannel_24, //0x0017
    RouteChannel_25, //0x0018
    RouteChannel_26, //0x0019
    RouteChannel_27, //0x001A
    RouteChannel_28, //0x001B
    RouteChannel_29, //0x001C
    RouteChannel_30, //0x001D
    RouteChannel_31, //0x001E
    RouteChannel_32, //0x001F
    RouteChannel_33, //0x0020
    RouteChannel_34, //0x0021
    RouteChannel_35, //0x0022
    RouteChannel_36, //0x0023
    RouteChannel_37, //0x0024
    RouteChannel_38, //0x0025
    RouteChannel_39, //0x0026
    RouteChannel_40, //0x0027
    RouteChannel_41, //0x0028
    RouteChannel_42, //0x0029
    RouteChannel_43, //0x002A
    RouteChannel_44, //0x002B
    RouteChannel_45, //0x002C
    RouteChannel_46, //0x002D
    RouteChannel_47, //0x002E
    RouteChannel_48, //0x002F
    RouteChannel_49, //0x0030
    RouteChannel_50, //0x0031
    RouteChannel_51, //0x0032
    RouteChannel_52, //0x0033
    RouteChannel_53, //0x0034
    RouteChannel_54, //0x0035
    RouteChannel_55, //0x0036
    RouteChannel_56, //0x0037
    RouteChannel_57, //0x0038
    RouteChannel_58, //0x0039
    RouteChannel_59, //0x003A
    RouteChannel_60, //0x003B
    RouteChannel_61, //0x003C
    RouteChannel_62, //0x003D
    RouteChannel_63 //0x003E
};

////////////////////////////////////////
// RuntimeId: 03967
// TypeInfo:  0x0000000142807CB0
enum Pan2dOutputChannelCount
{
    Pan2dOutputChannelCount_Two, //0x0000
    Pan2dOutputChannelCount_Four, //0x0001
    Pan2dOutputChannelCount_Six, //0x0002
    Pan2dOutputChannelCount_Eight //0x0003
};

////////////////////////////////////////
// RuntimeId: 03951
// TypeInfo:  0x0000000142807CD0
enum OutputReverbMode
{
    OutputReverbMode_PostGain, //0x0000
    OutputReverbMode_PreGain //0x0001
};

////////////////////////////////////////
// RuntimeId: 03943
// TypeInfo:  0x0000000142807CF0
enum OutputTransformSource
{
    OutputTransformSource_Sound, //0x0000
    OutputTransformSource_Listener, //0x0001
    OutputTransformSource_Output //0x0002
};

////////////////////////////////////////
// RuntimeId: 03923
// TypeInfo:  0x0000000142807D10
enum LimiterChannelMode
{
    LimiterChannelMode_Independent, //0x0000
    LimiterChannelMode_Grouped //0x0001
};

////////////////////////////////////////
// RuntimeId: 03911
// TypeInfo:  0x0000000142807D30
enum GainFaderFadeType
{
    GainFaderFadeType_LinearAmplitude, //0x0000
    GainFaderFadeType_LinearPower, //0x0001
    GainFaderFadeType_SineAmplitude //0x0002
};

////////////////////////////////////////
// RuntimeId: 03905
// TypeInfo:  0x0000000142807D50
enum FrequencyShiftSsbFilter
{
    FrequencyShiftSsbFilter_None, //0x0000
    FrequencyShiftSsbFilter_Fir64 //0x0001
};

////////////////////////////////////////
// RuntimeId: 03895
// TypeInfo:  0x0000000142807D70
enum ExpanderChannelMode
{
    ExpanderChannelMode_Independent, //0x0000
    ExpanderChannelMode_Grouped //0x0001
};

////////////////////////////////////////
// RuntimeId: 03881
// TypeInfo:  0x0000000142807D90
enum CompressorChannelMode
{
    CompressorChannelMode_Independent, //0x0000
    CompressorChannelMode_Grouped //0x0001
};

////////////////////////////////////////
// RuntimeId: 03867
// TypeInfo:  0x00000001427FE940
enum WaypointVaultType
{
    WaypointVaultType_VaultOverHigh, //0x0000
    WaypointVaultType_VaultOntoLow, //0x0001
    WaypointVaultType_VaultDownLow, //0x0002
    WaypointVaultType_VaultDownHigh, //0x0003
    WaypointVaultType_ClimbUpHigh, //0x0004
    WaypointVaultType_ClimbOverHigh, //0x0005
    WaypointVaultType_JumpAcross, //0x0006
    WaypointVaultType_Count //0x0007
};

////////////////////////////////////////
// RuntimeId: 03847
// TypeInfo:  0x00000001427FE960
enum AntPackagingType
{
    AntPackagingType_Chunk, //0x0000
    AntPackagingType_Bundle, //0x0001
    AntPackagingType_AnimationSet, //0x0002
    AntPackagingType_Static //0x0003
};

////////////////////////////////////////
// RuntimeId: 03843
// TypeInfo:  0x00000001427FE9A0
enum AntRuntimeType
{
    AntRuntimeType_Traditional, //0x0000
    AntRuntimeType_RootController, //0x0001
    AntRuntimeType_Max //0x0002
};

////////////////////////////////////////
// RuntimeId: 03841
// TypeInfo:  0x00000001427FE9C0
enum AntRefType
{
    AntRefType_None, //0x0000
    AntRefType_Chunk, //0x0001
    AntRefType_3PChunk //0x0002
};

////////////////////////////////////////
// RuntimeId: 03838
// TypeInfo:  0x00000001427FDB68
enum GamePlatform
{
    GamePlatform_Ps3, //0x0000
    GamePlatform_Win32, //0x0001
    GamePlatform_Xenon, //0x0002
    GamePlatform_Gen4a, //0x0003
    GamePlatform_Gen4b, //0x0004
    GamePlatform_Any, //0x0005
    GamePlatform_Invalid, //0x0006
    GamePlatformCount //0x0007
};

////////////////////////////////////////
// RuntimeId: 03834
// TypeInfo:  0x00000001427FDB88
enum HardwareProfile
{
    Hardware_Autodetect, //0x0000
    Hardware_LowEnd, //0x0001
    Hardware_Medium, //0x0002
    Hardware_HighEnd, //0x0003
    Hardware_Maximum //0x0004
};

////////////////////////////////////////
// RuntimeId: 03832
// TypeInfo:  0x00000001427FDBA8
enum CoreLogLevel
{
    CllNone, //0x0000
    CllEventRecord, //0x0001
    CllCrash, //0x0002
    CllError, //0x0003
    CllAssert, //0x0004
    CllFatalAssert, //0x0005
    CllValidate, //0x0006
    CllWarning, //0x0007
    CllInfo, //0x0008
    CllOutput, //0x0009
    CllDebug //0x000A
};

////////////////////////////////////////
// RuntimeId: 03822
// TypeInfo:  0x00000001427FDBE8
enum QualityScalableEnabled
{
    QualityScalableEnabled_Low, //0x0000
    QualityScalableEnabled_Medium, //0x0001
    QualityScalableEnabled_High, //0x0002
    QualityScalableEnabled_Ultra, //0x0003
    QualityScalableEnabled_Disabled //0x0004
};

////////////////////////////////////////
// RuntimeId: 03814
// TypeInfo:  0x00000001427FDC08
enum QualityLevel
{
    QualityLevel_Low, //0x0000
    QualityLevel_Medium, //0x0001
    QualityLevel_High, //0x0002
    QualityLevel_Ultra, //0x0003
    QualityLevel_All, //0x0004
    QualityLevel_Invalid //0x0005
};

////////////////////////////////////////
// RuntimeId: 03804
// TypeInfo:  0x00000001427FDBC8
enum FieldAccessType
{
    FieldAccessType_Source, //0x0000
    FieldAccessType_Target, //0x0001
    FieldAccessType_SourceAndTarget //0x0002
};

////////////////////////////////////////
// RuntimeId: 03790
// TypeInfo:  0x00000001427FDC28
enum Realm
{
    Realm_Client, //0x0000
    Realm_Server, //0x0001
    Realm_ClientAndServer, //0x0002
    Realm_None, //0x0003
    Realm_Pipeline //0x0004
};

////////////////////////////////////////
// RuntimeId: 03788
// TypeInfo:  0x00000001427FDC48
enum LanguageFormat
{
    LanguageFormat_English, //0x0000
    LanguageFormat_French, //0x0001
    LanguageFormat_German, //0x0002
    LanguageFormat_Spanish, //0x0003
    LanguageFormat_Italian, //0x0004
    LanguageFormat_Japanese, //0x0005
    LanguageFormat_Russian, //0x0006
    LanguageFormat_Polish, //0x0007
    LanguageFormat_Dutch, //0x0008
    LanguageFormat_Portuguese, //0x0009
    LanguageFormat_TraditionalChinese, //0x000A
    LanguageFormat_Korean, //0x000B
    LanguageFormat_Czech, //0x000C
    LanguageFormat_BrazilianPortuguese, //0x000D
    LanguageFormat_Count, //0x000E
    LanguageFormat_Undefined //0x000F
};

////////////////////////////////////////
// RuntimeId: 03755
// TypeInfo:  0x00000001427FCAC8
enum SplineType
{
    SplineType_5ControlPoints, //0x0000
    SplineType_9ControlPoints, //0x0001
    SplineType_13ControlPoints //0x0002
};

////////////////////////////////////////
// RuntimeId: 03751
// TypeInfo:  0x00000001427FCAE8
enum AudioCurveType
{
    AudioCurveType_Spline, //0x0000
    AudioCurveType_Smooth, //0x0001
    AudioCurveType_Linear, //0x0002
    AudioCurveType_NearestValue //0x0003
};

////////////////////////////////////////
// RuntimeId: 03681
// TypeInfo:  0x00000001427F8FE8
enum PLMGameState
{
    PLMGameState_MenuMain, //0x0000
    PLMGameState_MenuOptions, //0x0001
    PLMGameState_MenuCredits, //0x0002
    PLMGameState_MenuPremium, //0x0003
    PLMGameState_MenuSoldier, //0x0004
    PLMGameState_MenuStore, //0x0005
    PLMGameState_MenuSingleplayer, //0x0006
    PLMGameState_MenuMultiplayer, //0x0007
    PLMGameState_IngameSingleplayer, //0x0008
    PLMGameState_Count //0x0009
};

////////////////////////////////////////
// RuntimeId: 03679
// TypeInfo:  0x00000001427F90C8
enum UIServerFilterType
{
    UIServerFilterType_Slots, //0x0000
    UIServerFilterType_Mode, //0x0001
    UIServerFilterType_Level, //0x0002
    UIServerFilterType_GameType, //0x0003
    UIServerFilterType_ServerType, //0x0004
    UIServerFilterType_Region, //0x0005
    UIServerFilterType_Extra, //0x0006
    UIServerFilterType_Count //0x0007
};

////////////////////////////////////////
// RuntimeId: 03655
// TypeInfo:  0x00000001427F9008
enum UIInputActionAxisDisplay
{
    UIInputActionAxisDisplay_Positive, //0x0000
    UIInputActionAxisDisplay_Negative, //0x0001
    UIInputActionAxisDisplay_PositiveNegative, //0x0002
    UIInputActionAxisDisplay_NegativePositive //0x0003
};

////////////////////////////////////////
// RuntimeId: 03629
// TypeInfo:  0x00000001427F9028
enum UICreditsTextType
{
    UICreditsTextType_Header, //0x0000
    UICreditsTextType_Title, //0x0001
    UICreditsTextType_Name, //0x0002
    UICreditsTextType_LeadsName, //0x0003
    UICreditsTextType_Image //0x0004
};

////////////////////////////////////////
// RuntimeId: 03613
// TypeInfo:  0x00000001427F9048
enum UIIconMode
{
    UIIconMode_Default, //0x0000
    UIIconMode_Map, //0x0001
    UIIconMode_Hud, //0x0002
    UIIconMode_Deploy, //0x0003
    UIIconMode_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 03611
// TypeInfo:  0x00000001427F9068
enum UIIconState
{
    UIIconState_Default, //0x0000
    UIIconState_Enemy, //0x0001
    UIIconState_Friendly, //0x0002
    UIIconState_Neutral, //0x0003
    UIIconState_Squad, //0x0004
    UIIconState_Self, //0x0005
    UIIconState_Team1, //0x0006
    UIIconState_Team2, //0x0007
    UIIconState_Team3, //0x0008
    UIIconState_Team4, //0x0009
    UIIconState_Commander, //0x000A
    UIIconState_Spectator, //0x000B
    UIIconState_Count //0x000C
};

////////////////////////////////////////
// RuntimeId: 03549
// TypeInfo:  0x00000001427F9128
enum VehicleStateType
{
    VehicleStateType_Normal, //0x0000
    VehicleStateType_LowHealth, //0x0001
    VehicleStateType_CriticalState, //0x0002
    VehicleStateType_LAST_ITEM //0x0003
};

////////////////////////////////////////
// RuntimeId: 03543
// TypeInfo:  0x00000001427F9148
enum ScoreboardPosition
{
    ScoreboardPosition_FirstPlace, //0x0000
    ScoreboardPosition_SecondPlace, //0x0001
    ScoreboardPosition_ThirdPlace, //0x0002
    ScoreboardPosition_FourthPlace, //0x0003
    ScoreboardPosition_FifthPlace, //0x0004
    ScoreboardPosition_LAST_ITEM //0x0005
};

////////////////////////////////////////
// RuntimeId: 03503
// TypeInfo:  0x00000001427F9168
enum OrderType
{
    OrderType_None, //0x0000
    OrderType_RequestHeal, //0x0001
    OrderType_LetMeHeal, //0x0002
    OrderType_RequestAmmo, //0x0003
    OrderType_LetMeGiveAmmo, //0x0004
    OrderType_LetMeRepair, //0x0005
    OrderType_RequestRepair, //0x0006
    OrderType_RequestRide, //0x0007
    OrderType_GoGoGo, //0x0008
    OrderType_FollowMe, //0x0009
    OrderType_Negative, //0x000A
    OrderType_Sorry, //0x000B
    OrderType_ThankYou, //0x000C
    OrderType_RogerThat, //0x000D
    OrderType_NeedBackup, //0x000E
    OrderType_GetIn, //0x000F
    OrderType_GetOut, //0x0010
    OrderType_Attack, //0x0011
    OrderType_RequestSquadOrder, //0x0012
    OrderType_RequestCommanderOrder, //0x0013
    OrderType_RequestSupply, //0x0014
    OrderType_RequestVehicle, //0x0015
    OrderType_RequestScan, //0x0016
    OrderType_AcceptOrder, //0x0017
    OrderType_DenyOrder, //0x0018
    OrderType_RequestComm, //0x0019
    OrderType_Count //0x001A
};

////////////////////////////////////////
// RuntimeId: 03501
// TypeInfo:  0x00000001427F9188
enum SpotType
{
    SpotType_None, //0x0000
    SpotType_Active, //0x0001
    SpotType_Passive, //0x0002
    SpotType_Radar, //0x0003
    SpotType_Unspottable, //0x0004
    SpotType_Auto, //0x0005
    SpotType_Count //0x0006
};

////////////////////////////////////////
// RuntimeId: 03493
// TypeInfo:  0x00000001427F91A8
enum SpectatorMode
{
    SpectatorMode_TableTop, //0x0000
    SpectatorMode_FirstPerson, //0x0001
    SpectatorMode_ThirdPerson, //0x0002
    SpectatorMode_FreeCamera, //0x0003
    SpectatorMode_NoCameraControl //0x0004
};

////////////////////////////////////////
// RuntimeId: 03435
// TypeInfo:  0x00000001427F9088
enum ScoringBucketType
{
    ScoringBucketType_Disabled, //0x0000
    ScoringBucketType_Normal, //0x0001
    ScoringBucketType_Vehicle, //0x0002
    ScoringBucketType_Kit, //0x0003
    ScoringBucketType_WeaponClass, //0x0004
    ScoringBucketType_Count //0x0005
};

////////////////////////////////////////
// RuntimeId: 03433
// TypeInfo:  0x00000001427F90A8
enum ScoringBucket
{
    ScoringBucket_General, //0x0000
    ScoringBucket_Rank, //0x0001
    ScoringBucket_Teamwork, //0x0002
    ScoringBucket_Bonus, //0x0003
    ScoringBucket_Squad, //0x0004
    ScoringBucket_Conquest, //0x0005
    ScoringBucket_Rush, //0x0006
    ScoringBucket_Deathmatch, //0x0007
    ScoringBucket_Obliteration, //0x0008
    ScoringBucket_Domination, //0x0009
    ScoringBucket_Elimination, //0x000A
    ScoringBucket_AirSuperiority, //0x000B
    ScoringBucket_CarrierAssault, //0x000C
    ScoringBucket_Award, //0x000D
    ScoringBucket_VehicleMBT, //0x000E
    ScoringBucket_VehicleIFV, //0x000F
    ScoringBucket_VehicleAA, //0x0010
    ScoringBucket_VehicleAttackHeli, //0x0011
    ScoringBucket_VehicleScoutHeli, //0x0012
    ScoringBucket_VehicleAttackJet, //0x0013
    ScoringBucket_VehicleStealthJet, //0x0014
    ScoringBucket_VehicleAttackBoat, //0x0015
    ScoringBucket_VehicleDrone, //0x0016
    ScoringBucket_VehicleBomber, //0x0017
    ScoringBucket_KitAssault, //0x0018
    ScoringBucket_KitEngineer, //0x0019
    ScoringBucket_KitRecon, //0x001A
    ScoringBucket_KitSupport, //0x001B
    ScoringBucket_SinglePlayer, //0x001C
    ScoringBucket_Cooperation, //0x001D
    ScoringBucket_CoopIndivid, //0x001E
    ScoringBucket_Unlock, //0x001F
    ScoringBucket_AssaultRifles, //0x0020
    ScoringBucket_Carbines, //0x0021
    ScoringBucket_SniperRifles, //0x0022
    ScoringBucket_LMGs, //0x0023
    ScoringBucket_Shotguns, //0x0024
    ScoringBucket_PDWs, //0x0025
    ScoringBucket_DMRs, //0x0026
    ScoringBucket_Handguns, //0x0027
    ScoringBucket_RocketLaunchers, //0x0028
    ScoringBucket_HandGranades, //0x0029
    ScoringBucket_UnderslungLaunchers, //0x002A
    ScoringBucket_Commander, //0x002B
    ScoringBucket_CaptureTheFlag, //0x002C
    ScoringBucket_Chainlink, //0x002D
    ScoringBucket_Gunmaster, //0x002E
    ScoringBucket_LastScoringBucketItem //0x002F
};

////////////////////////////////////////
// RuntimeId: 03405
// TypeInfo:  0x00000001427F91C8
enum PremiumCategory
{
    ExpansionPackCategory, //0x0000
    InGameContentCategory, //0x0001
    BattlepackCategory, //0x0002
    EventCategory //0x0003
};

////////////////////////////////////////
// RuntimeId: 03327
// TypeInfo:  0x00000001427ED808
enum UIPerformanceMetric
{
    UIPerformanceMetric_FramesPerSecond, //0x0000
    UIPerformanceMetric_PacketLossIn, //0x0001
    UIPerformanceMetric_PacketLossOut, //0x0002
    UIPerformanceMetric_Latency, //0x0003
    UIPerformanceMetric_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 03189
// TypeInfo:  0x00000001427ED828
enum UIOptionsConsoleControlsShown
{
    UIOptionsConsoleControlsShown_None, //0x0000
    UIOptionsConsoleControlsShown_Soldier, //0x0001
    UIOptionsConsoleControlsShown_Vehicle, //0x0002
    UIOptionsConsoleControlsShown_Heli, //0x0003
    UIOptionsConsoleControlsShown_Jet, //0x0004
    UIOptionsConsoleControlsShown_Default //0x0005
};

////////////////////////////////////////
// RuntimeId: 03167
// TypeInfo:  0x00000001427ED848
enum SquadDeployMapPack
{
    SquadDeployMapPack_Base, //0x0000
    SquadDeployMapPack_Xp1, //0x0001
    SquadDeployMapPack_Xp0, //0x0002
    SquadDeployMapPack_Xp2, //0x0003
    SquadDeployMapPack_Xp3, //0x0004
    SquadDeployMapPack_Xp4, //0x0005
    SquadDeployMapPack_Xp5, //0x0006
    SquadDeployMapPack_Xp6, //0x0007
    SquadDeployMapPack_Xp7, //0x0008
    SquadDeployMapPack_Count //0x0009
};

////////////////////////////////////////
// RuntimeId: 03165
// TypeInfo:  0x00000001427ED868
enum SquadDeployGameMode
{
    SquadDeployGameMode_Conquest, //0x0000
    SquadDeployGameMode_Tdm, //0x0001
    SquadDeployGameMode_Obliteration, //0x0002
    SquadDeployGameMode_Rush, //0x0003
    SquadDeployGameMode_Sqdm, //0x0004
    SquadDeployGameMode_Domination, //0x0005
    SquadDeployGameMode_Elimination, //0x0006
    SquadDeployGameMode_Ctf, //0x0007
    SquadDeployGameMode_AirSuperiority, //0x0008
    SquadDeployGameMode_Titan, //0x0009
    SquadDeployGameMode_Chainlink, //0x000A
    SquadDeployGameMode_Gunmaster, //0x000B
    SquadDeployGameMode_SqObliteration, //0x000C
    SquadDeployGameMode_NightOpsSmall, //0x000D
    SquadDeployGameMode_NightOps, //0x000E
    SquadDeployGameMode_NightOpsInf, //0x000F
    SquadDeployGameMode_XP6Small, //0x0010
    SquadDeployGameMode_XP6Large, //0x0011
    SquadDeployGameMode_XP6Inf, //0x0012
    SquadDeployGameMode_XP7Small, //0x0013
    SquadDeployGameMode_XP7Large, //0x0014
    SquadDeployGameMode_XP7Inf, //0x0015
    SquadDeployGameMode_Count //0x0016
};

////////////////////////////////////////
// RuntimeId: 03161
// TypeInfo:  0x00000001427ED888
enum UIOptionsSliderDisplay
{
    UIOptionsSliderDisplay_PercentOfMax, //0x0000
    UIOptionsSliderDisplay_Integer, //0x0001
    UIOptionsSliderDisplay_ToPercent, //0x0002
    UIOptionsSliderDisplay_NoText, //0x0003
    UIOptionsSliderDisplay_FOV, //0x0004
    UIOptionsSliderDisplay_ToColorComponent //0x0005
};

////////////////////////////////////////
// RuntimeId: 03159
// TypeInfo:  0x00000001427ED8A8
enum UIOptionsSpecialCase
{
    UIOptionsSpecialCase_Normal, //0x0000
    UIOptionsSpecialCase_Voiceover_Language, //0x0001
    UIOptionsSpecialCase_FullscreenScreen, //0x0002
    UIOptionsSpecialCase_Resolution, //0x0003
    UIOptionsSpecialCase_OverallGraphicsQuality, //0x0004
    UIOptionsSpecialCase_AdvancedVideo, //0x0005
    UIOptionsSpecialCase_ConsoleVideo, //0x0006
    UIOptionsSpecialCase_VerticalLook, //0x0007
    UIOptionsSpecialCase_VerticalFlight, //0x0008
    UIOptionsSpecialCase_Brightess, //0x0009
    UIOptionsSpecialCase_ConsoleBrightess, //0x000A
    UIOptionsSpecialCase_SpeechRecognitionDialect, //0x000B
    UIOptionsSpecialCase_ColorBlind, //0x000C
    UIOptionsSpecialCase_SpeechRecognitionEnabled, //0x000D
    UIOptionsSpecialCase_OptionalTelemetry, //0x000E
    UIOptionsSpecialCase_SquadDeploy, //0x000F
    UIOptionsSpecialCase_SquadDeployDisabled, //0x0010
    UIOptionsSpecialCase_SquadDeployQuickMatchGameMode, //0x0011
    UIOptionsSpecialCase_SquadDeployQuickMatchMapPack, //0x0012
    UIOptionsSpecialCase_SeparatorText, //0x0013
    UIOptionsSpecialCase_AimAssistServerOverride, //0x0014
    UIOptionsSpecialCase_AimAssistSlowdownServerOverride, //0x0015
    UIOptionsSpecialCase_AutoLean, //0x0016
    UIOptionsSpecialCase_AllowNetworkGraphGen4b //0x0017
};

////////////////////////////////////////
// RuntimeId: 03125
// TypeInfo:  0x00000001427ED8C8
enum BFUIColorizationMode
{
    BFUIColorizationMode_ElementColor, //0x0000
    BFUIColorizationMode_IconState, //0x0001
    BFUIColorizationMode_Count //0x0002
};

////////////////////////////////////////
// RuntimeId: 03103
// TypeInfo:  0x00000001427ED8E8
enum UIWorldZoneType
{
    UIWorldZoneType_Interaction, //0x0000
    UIWorldZoneType_Critical, //0x0001
    UIWorldZoneType_Close, //0x0002
    UIWorldZoneType_Far, //0x0003
    UIWorldZoneType_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 02997
// TypeInfo:  0x00000001427ED908
enum UIHitIndicatorIconType
{
    UIHitIndicatorIconType_Low, //0x0000
    UIHitIndicatorIconType_Medium, //0x0001
    UIHitIndicatorIconType_High, //0x0002
    UIHitIndicatorIconType_Count //0x0003
};

////////////////////////////////////////
// RuntimeId: 02957
// TypeInfo:  0x00000001427ED928
enum UIBattlelogDataSource
{
    BattlelogDataSource_ChallengeTypes, //0x0000
    BattlelogDataSource_MapOptions, //0x0001
    BattlelogDataSource_UseFrostEd, //0x0002
    BattlelogDataSource_FakeFromCode //0x0003
};

////////////////////////////////////////
// RuntimeId: 02949
// TypeInfo:  0x00000001427ED948
enum UIAutoListType
{
    FriendsAll, //0x0000
    FriendsPlayingSameTitle, //0x0001
    FriendsOnline, //0x0002
    FriendsParty, //0x0003
    FriendsOffline, //0x0004
    FriendsListSelf, //0x0005
    FriendsListEmpty, //0x0006
    FakeListData, //0x0007
    ChallengesPending, //0x0008
    ChallengesActive, //0x0009
    ChallengesCompleted, //0x000A
    Standings, //0x000B
    FriendsHavePlayedSameTitle //0x000C
};

////////////////////////////////////////
// RuntimeId: 02873
// TypeInfo:  0x00000001427ED968
enum UICommoRoseTextAlignment
{
    UICommoRoseTextAlignment_Left, //0x0000
    UICommoRoseTextAlignment_Right, //0x0001
    UICommoRoseTextAlignment_Center //0x0002
};

////////////////////////////////////////
// RuntimeId: 02825
// TypeInfo:  0x00000001427ED988
enum UIVisualWidgetType
{
    UIVisualWidgetType_Default, //0x0000
    UIVisualWidgetType_DeployMap, //0x0001
    UIVisualWidgetType_MenuBackground, //0x0002
    UIVisualWidgetType_Minimap, //0x0003
    UIVisualWidgetType_IndirectFire, //0x0004
    UIVisualWidgetType_BigMap, //0x0005
    UIVisualWidgetType_AirRadar, //0x0006
    UIVisualWidgetType_Count //0x0007
};

////////////////////////////////////////
// RuntimeId: 02823
// TypeInfo:  0x00000001427ED9A8
enum UIPlayerFilter
{
    UIPlayerFilter_All, //0x0000
    UIPlayerFilter_LocalTeam, //0x0001
    UIPlayerFilter_EnemyTeam, //0x0002
    UIPlayerFilter_LocalPlayer, //0x0003
    UIPlayerFilter_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 02795
// TypeInfo:  0x00000001427ED9C8
enum ServerTypeValues
{
    ServerType_OFFICIAL, //0x0000
    ServerType_RANKED, //0x0001
    ServerType_UNRANKED, //0x0002
    ServerType_PRIVATE //0x0003
};

////////////////////////////////////////
// RuntimeId: 02739
// TypeInfo:  0x00000001427EDF08
enum VirtualGameState
{
    VirtualGameState_Inactive, //0x0000
    VirtualGameState_Active, //0x0001
    VirtualGameState_Expired, //0x0002
    VirtualGameState_Recreate, //0x0003
    VirtualGameState_Updated //0x0004
};

////////////////////////////////////////
// RuntimeId: 02725
// TypeInfo:  0x00000001427ED9E8
enum NucleusEnvironment
{
    NucleusEnv_1Box, //0x0000
    NucleusEnv_Integration, //0x0001
    NucleusEnv_Production, //0x0002
    NucleusEnv_Count_ //0x0003
};

////////////////////////////////////////
// RuntimeId: 02711
// TypeInfo:  0x00000001427EDA08
enum BFModMask
{
    BFModMaskMapPack_Base, //0x0000
    BFModMaskMapPack_XP1, //0x0001
    BFModMaskMapPack_XP2, //0x0002
    BFModMaskMapPack_XP3, //0x0003
    BFModMaskMapPack_XP4, //0x0004
    BFModMaskMapPack_XP5, //0x0005
    BFModMaskMapPack_XP6, //0x0006
    BFModMaskMapPack_XP0, //0x0007
    BFModMaskMapPack_XP7, //0x0008
    BFModMask_Count //0x0009
};

////////////////////////////////////////
// RuntimeId: 02701
// TypeInfo:  0x00000001427EDA28
enum BattlepackItemType
{
    BattlepackItemType_Accessory, //0x0000
    BattlepackItemType_Boost, //0x0001
    BattlepackItemType_Camo, //0x0002
    BattlepackItemType_Dogtag, //0x0003
    BattlepackItemType_Emblem, //0x0004
    BattlepackItemType_Icon, //0x0005
    BattlepackItemType_Paint, //0x0006
    BattlepackItemType_Knife, //0x0007
    BattlepackItemType_Battlelog, //0x0008
    BattlepackItemType_Mixed //0x0009
};

////////////////////////////////////////
// RuntimeId: 02699
// TypeInfo:  0x00000001427EDA48
enum RarenessLevel
{
    RarenessLevel_Standard, //0x0000
    RarenessLevel_Advanced, //0x0001
    RarenessLevel_Superior, //0x0002
    RarenessLevel_Distinguished, //0x0003
    RarenessLevel_Special, //0x0004
    RarenessLevel_Premium, //0x0005
    RarenessLevel_Mixed //0x0006
};

////////////////////////////////////////
// RuntimeId: 02641
// TypeInfo:  0x00000001427EDA68
enum AwardKitAssociation
{
    AwardKitAssociation_Undefined, //0x0000
    AwardKitAssociation_Assault, //0x0001
    AwardKitAssociation_Engineer, //0x0002
    AwardKitAssociation_Recon, //0x0003
    AwardKitAssociation_Support, //0x0004
    AwardKitAssociation_Commander, //0x0005
    AwardKitAssociation_All, //0x0006
    AwardKitAssociation_LAST_ITEM //0x0007
};

////////////////////////////////////////
// RuntimeId: 02639
// TypeInfo:  0x00000001427EDA88
enum StatsMultiplicity
{
    StatsMultiplicity_Invalid, //0x0000
    StatsMultiplicity_Solo, //0x0001
    StatsMultiplicity_Club, //0x0002
    StatsMultiplicity_LAST_ITEM //0x0003
};

////////////////////////////////////////
// RuntimeId: 02637
// TypeInfo:  0x00000001427EDAA8
enum AwardGroup
{
    AwardGroup_Undefined, //0x0000
    AwardGroup_Ribbons, //0x0001
    AwardGroup_DogTags, //0x0002
    AwardGroup_Medals, //0x0003
    AwardGroup_Star, //0x0004
    AwardGroup_Mission, //0x0005
    AwardGroup_LevelComplete, //0x0006
    AwardGroup_Achievements, //0x0007
    AwardGroup_Ranks, //0x0008
    AwardGroup_LastAwardGroup //0x0009
};

////////////////////////////////////////
// RuntimeId: 02635
// TypeInfo:  0x00000001427EDAC8
enum AwardType
{
    AwardType_OnceGlobally, //0x0000
    AwardType_OncePerRound, //0x0001
    AwardType_Unlimited, //0x0002
    AwardType_Limited, //0x0003
    AwardType_GateList //0x0004
};

////////////////////////////////////////
// RuntimeId: 02633
// TypeInfo:  0x00000001427EDF68
enum AIGlobalEngageState
{
    AIGlobalEngageState_Unavailable, //0x0000
    AIGlobalEngageState_Ready, //0x0001
    AIGlobalEngageState_Active, //0x0002
    AIGlobalEngageState_Cooldown //0x0003
};

////////////////////////////////////////
// RuntimeId: 02629
// TypeInfo:  0x00000001427EDF88
enum AICombatIntensity
{
    AICombatIntensity_None, //0x0000
    AICombatIntensity_Low, //0x0001
    AICombatIntensity_Medium, //0x0002
    AICombatIntensity_High //0x0003
};

////////////////////////////////////////
// RuntimeId: 02627
// TypeInfo:  0x00000001427EDFA8
enum AISuppressionState
{
    AISuppressionState_None, //0x0000
    AISuppressionState_Active, //0x0001
    AISuppressionState_Potential, //0x0002
    AISuppressionState_CoolDown, //0x0003
    AISuppressionState_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 02623
// TypeInfo:  0x00000001427EDFC8
enum AIStunReactionAnimationType
{
    AIStunReactionAnimationType_1, //0x0000
    AIStunReactionAnimationType_2, //0x0001
    AIStunReactionAnimationType_3, //0x0002
    AIStunReactionAnimationType_4, //0x0003
    AIStunReactionAnimationType_5, //0x0004
    AIStunReactionAnimationType_Count //0x0005
};

////////////////////////////////////////
// RuntimeId: 02603
// TypeInfo:  0x00000001427EDAE8
enum CoverExitStyle
{
    CoverExitStyle_ExitCover, //0x0000
    CoverExitStyle_VaultFromCrouchCover, //0x0001
    CoverExitStyle_StrafeFire, //0x0002
    CoverExitStyle_Surprised, //0x0003
    CoverExitStyle_Sprint //0x0004
};

////////////////////////////////////////
// RuntimeId: 02601
// TypeInfo:  0x00000001427EDB08
enum CoverEnterStrategy
{
    CoverEnterStrategy_EnterNormally, //0x0000
    CoverEnterStrategy_SkipEnterButAlign, //0x0001
    CoverEnterStrategy_SkipEnterDontAlign //0x0002
};

////////////////////////////////////////
// RuntimeId: 02599
// TypeInfo:  0x00000001427EDB28
enum CoverIdleType
{
    CoverIdleType_Calm, //0x0000
    CoverIdleType_SearchForEnemy, //0x0001
    CoverIdleType_PeekOut, //0x0002
    CoverIdleType_PeekOver, //0x0003
    CoverIdleType_UnderFire, //0x0004
    CoverIdleType_Suppressed //0x0005
};

////////////////////////////////////////
// RuntimeId: 02597
// TypeInfo:  0x00000001427EDB48
enum CoverPeekType
{
    CoverPeekType_Out, //0x0000
    CoverPeekType_Over, //0x0001
    CoverPeekType_None //0x0002
};

////////////////////////////////////////
// RuntimeId: 02595
// TypeInfo:  0x00000001427EE028
enum AntCoverFireType
{
    AntCoverFireType_PeekFire, //0x0000
    AntCoverFireType_FireStepOut, //0x0001
    AntCoverFireType_FireOver, //0x0002
    AntCoverFireType_BlindFireAround, //0x0003
    AntCoverFireType_BlindFireOver, //0x0004
    AntCoverFireType_FlankedWhileFiring, //0x0005
    AntCoverFireType_FireStepOutSlow, //0x0006
    AntCoverFireType_FireStepOutUrgent, //0x0007
    AntCoverFireType_FireStepOut_Crouched, //0x0008
    AntCoverFireType_FireLmg, //0x0009
    AntCoverFireType_FireFromHipStepOut //0x000A
};

////////////////////////////////////////
// RuntimeId: 02593
// TypeInfo:  0x00000001427EDB68
enum CoverFireType
{
    CoverFireType_NoFire, //0x0000
    CoverFireType_Peek, //0x0001
    CoverFireType_Out, //0x0002
    CoverFireType_Over, //0x0003
    CoverFireType_BlindOut, //0x0004
    CoverFireType_BlindOver, //0x0005
    CoverFireType_GrenadeOut, //0x0006
    CoverFireType_GrenadeBlindOver, //0x0007
    CoverFireType_Flanked, //0x0008
    CoverFireType_OutSlow, //0x0009
    CoverFireType_OutUrgent, //0x000A
    CoverFireType_OutStandToCrouch, //0x000B
    CoverFireType_Lmg, //0x000C
    CoverFireType_OutFireFromHip, //0x000D
    CoverFireType_FlankedSurprised //0x000E
};

////////////////////////////////////////
// RuntimeId: 02585
// TypeInfo:  0x00000001427EDB88
enum AntSpeedLevel
{
    AntSpeedLevel_Still, //0x0000
    AntSpeedLevel_Walk, //0x0001
    AntSpeedLevel_Jog, //0x0002
    AntSpeedLevel_Sneak, //0x0003
    AntSpeedLevel_Run, //0x0004
    AntSpeedLevel_Sprint, //0x0005
    AntSpeedLevel_Stairs_Walk_Up, //0x0006
    AntSpeedLevel_Stairs_Walk_Down, //0x0007
    AntSpeedLevel_Stairs_Run_Up, //0x0008
    AntSpeedLevel_Stairs_Run_Down, //0x0009
    AntSpeedLevel_Stairs_Sprint_Up, //0x000A
    AntSpeedLevel_Stairs_Sprint_Down, //0x000B
    AntSpeedLevel_AntEnumCount, //0x000C
    AntSpeedLevel_NoChange, //0x000D
    AntSpeedLevel_Count //0x000E
};

////////////////////////////////////////
// RuntimeId: 02583
// TypeInfo:  0x00000001427EDBA8
enum AntAttentionStateEnum
{
    AntAttentionStateEnum_Relaxed, //0x0000
    AntAttentionStateEnum_Ready, //0x0001
    AntAttentionStateEnum_Combat, //0x0002
    AntAttentionStateEnum_Evasive, //0x0003
    AntAttentionStateEnum_AntEnumCount, //0x0004
    AntAttentionStateEnum_NoChange, //0x0005
    AntAttentionStateEnum_Count, //0x0006
    AntAttentionStateEnum_Dummy1 //0x0007
};

////////////////////////////////////////
// RuntimeId: 02581
// TypeInfo:  0x00000001427EDBC8
enum AntCoverEnum
{
    AntCoverEnum_RightCover, //0x0000
    AntCoverEnum_LeftCover, //0x0001
    AntCoverEnum_MiddleCover, //0x0002
    AntCoverEnum_MediumLeftCover, //0x0003
    AntCoverEnum_MediumRightCover, //0x0004
    AntCoverEnum_Prone, //0x0005
    AntCoverEnum_OpenCover, //0x0006
    AntCoverEnum_Count //0x0007
};

////////////////////////////////////////
// RuntimeId: 02579
// TypeInfo:  0x00000001427EDBE8
enum AntPoseEnum
{
    AntPoseEnum_Stand, //0x0000
    AntPoseEnum_Crouch, //0x0001
    AntPoseEnum_AntEnumCount, //0x0002
    AntPoseEnum_NoChange, //0x0003
    AntPoseEnum_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 02543
// TypeInfo:  0x00000001427E00B8
enum InventoryType
{
    IT_None, //0x0000
    IT_LightIndicator, //0x0001
    IT_LaserIndicator, //0x0002
    IT_Magnifier, //0x0003
    IT_CantedSight, //0x0004
    IT_LaserLightCombo, //0x0005
    IT_ZoomToggle //0x0006
};

////////////////////////////////////////
// RuntimeId: 02443
// TypeInfo:  0x00000001427E00D8
enum IngameMenuCategoryType
{
    IngameMenuCategoryType_Singleplayer, //0x0000
    IngameMenuCategoryType_Multiplayer //0x0001
};

////////////////////////////////////////
// RuntimeId: 02431
// TypeInfo:  0x00000001427E00F8
enum UISettingSymbols
{
    UISettingSymbols_Pluses, //0x0000
    UISettingSymbols_Values, //0x0001
    UISettingSymbols_None //0x0002
};

////////////////////////////////////////
// RuntimeId: 02429
// TypeInfo:  0x00000001427E02D8
enum UISettingType
{
    UISettingType_Slider, //0x0000
    UISettingType_TickerUpDown, //0x0001
    UISettingType_Droplist, //0x0002
    UISettingType_Checkbox, //0x0003
    UISettingType_Text, //0x0004
    UISettingType_NotSet //0x0005
};

////////////////////////////////////////
// RuntimeId: 02363
// TypeInfo:  0x00000001427E02F8
enum UIWidgetEventQuery
{
    UIWidgetEventQuery_FireEvent //0x0000
};

////////////////////////////////////////
// RuntimeId: 02345
// TypeInfo:  0x00000001427E0318
enum UIStreamInstallGroupType
{
    UIStreamInstallGroupType_Campaign, //0x0000
    UIStreamInstallGroupType_FullGame, //0x0001
    UIStreamInstallGroupType_Count //0x0002
};

////////////////////////////////////////
// RuntimeId: 02300
// TypeInfo:  0x00000001427E0118
enum DTagUploadPolicy
{
    DTUP_FirstTimeSeenAndEndOfRound, //0x0000
    DTUP_Always //0x0001
};

////////////////////////////////////////
// RuntimeId: 02255
// TypeInfo:  0x00000001427E0138
enum CapturePointUIType
{
    CapturePointUIType_Default, //0x0000
    CapturePointUIType_ShowOnlyForOwningTeam, //0x0001
    CapturePointUIType_ShowOnlyForOpposingTeam //0x0002
};

////////////////////////////////////////
// RuntimeId: 02253
// TypeInfo:  0x00000001427E0158
enum CapturableType
{
    CTDefault, //0x0000
    CTUnableToChangeTeam, //0x0001
    CTCaptureEnablable //0x0002
};

////////////////////////////////////////
// RuntimeId: 02245
// TypeInfo:  0x00000001427E0098
enum TicketDecreaseType
{
    TDTOnKilled, //0x0000
    TDTOnRespawned, //0x0001
    TDTNoDecreaseOnSoldierDeath //0x0002
};

////////////////////////////////////////
// RuntimeId: 02239
// TypeInfo:  0x00000001427E0178
enum StatEventCast
{
    SendToSingle, //0x0000
    SendToTeamExcludeSingle, //0x0001
    SendToTeam, //0x0002
    SendToAll //0x0003
};

////////////////////////////////////////
// RuntimeId: 02229
// TypeInfo:  0x00000001427E0198
enum TeamAssignMode
{
    TamEqualTeams, //0x0000
    TamFullTeams, //0x0001
    TamOneTeam //0x0002
};

////////////////////////////////////////
// RuntimeId: 02215
// TypeInfo:  0x00000001427E01B8
enum VehicleCategory
{
    VehicleCategory_Land, //0x0000
    VehicleCategory_Air //0x0001
};

////////////////////////////////////////
// RuntimeId: 02205
// TypeInfo:  0x00000001427E01D8
enum PlayerDefaultLogoType
{
    PlayerDefaultLogoType_Land, //0x0000
    PlayerDefaultLogoType_Air //0x0001
};

////////////////////////////////////////
// RuntimeId: 02199
// TypeInfo:  0x00000001427E01F8
enum SoldierEmote
{
    SoldierEmote_Spot, //0x0000
    SoldierEmote_Ok, //0x0001
    SoldierEmote_NeedARide, //0x0002
    SoldierEmote_GoGoGo, //0x0003
    SoldierEmote_NeedBackup, //0x0004
    SoldierEmote_Thanks, //0x0005
    SoldierEmote_NeedMedic, //0x0006
    SoldierEmote_FollowMe, //0x0007
    SoldierEmote_NeedAmmo, //0x0008
    SoldierEmote_Sorry, //0x0009
    SoldierEmote_No, //0x000A
    SoldierEmote_DefendCapturePoint, //0x000B
    SoldierEmote_AttackCapturePoint, //0x000C
    SoldierEmote_MoveToPosition, //0x000D
    SoldierEmote_Count //0x000E
};

////////////////////////////////////////
// RuntimeId: 02178
// TypeInfo:  0x00000001427E0458
enum UIPopupType
{
    PopupType_MemCard, //0x0000
    PopupType_ControllerDisconnected, //0x0001
    PopupType_Login, //0x0002
    PopupType_TermsOfService, //0x0003
    PopupType_PrivacyPolicy, //0x0004
    PopupType_RevivePrompt, //0x0005
    PopupType_Generic, //0x0006
    PopupType_ServerReminder, //0x0007
    PopupType_Error, //0x0008
    PopupType_ManagePlayer, //0x0009
    PopupType_Invalid, //0x000A
    PopupType_IngamePlayer, //0x000B
    PopupType_Origin, //0x000C
    PopupType_UpdateAvailable, //0x000D
    PopupType_Dynamic, //0x000E
    PopupType_GameQueue, //0x000F
    PopupType_COOPMatchmaking, //0x0010
    PopupType_PromoInfo, //0x0011
    PopupType_Store, //0x0012
    PopupType_ItemRedeemed, //0x0013
    PopupType_BattlelogNotification, //0x0014
    PopupType_LicenseAdded, //0x0015
    PopupType_StatsMigrationPrompt, //0x0016
    PopupType_StatsMigrationConfirmAccept, //0x0017
    PopupType_StatsMigrationConfirmDecline, //0x0018
    PopupType_StatsMigrationEndFlow, //0x0019
    PopupType_PlayStationPlus //0x001A
};

////////////////////////////////////////
// RuntimeId: 02174
// TypeInfo:  0x00000001427E0218
enum UIScaleMode
{
    noScaling, //0x0000
    stretch, //0x0001
    stretchWidth, //0x0002
    stretchHeight, //0x0003
    fit, //0x0004
    fill //0x0005
};

////////////////////////////////////////
// RuntimeId: 02172
// TypeInfo:  0x00000001427E0238
enum UIAlignMode
{
    topLeft, //0x0000
    top, //0x0001
    left, //0x0002
    center //0x0003
};

////////////////////////////////////////
// RuntimeId: 02138
// TypeInfo:  0x00000001427E0258
enum UIListEmptyRowType
{
    emptyRow_28px, //0x0000
    emptyRow_20px, //0x0001
    emptyRowNone //0x0002
};

////////////////////////////////////////
// RuntimeId: 02136
// TypeInfo:  0x00000001427E0278
enum UIListUnFocusMode
{
    DeSelect, //0x0000
    ChangeState, //0x0001
    None //0x0002
};

////////////////////////////////////////
// RuntimeId: 02134
// TypeInfo:  0x00000001427E0298
enum UIListRowType
{
    MixedRows, //0x0000
    basicRow, //0x0001
    baseSpawn, //0x0002
    squadSpawn, //0x0003
    MenuRow_34px, //0x0004
    MenuRow_64px, //0x0005
    ScoreboardRow, //0x0006
    ScoreboardRow64Players, //0x0007
    TextSelectorRow, //0x0008
    TextSelectorRow_28px, //0x0009
    BarSelectorRow, //0x000A
    SquadRow, //0x000B
    ServerListRow, //0x000C
    StoreRow, //0x000D
    ComCenterStandardDelimiter, //0x000E
    ComCenterSquadDelimiter, //0x000F
    ComCenterStandardFriendRow, //0x0010
    ComCenterSquadFriendRow, //0x0011
    ComCenterSquadButtonRow, //0x0012
    ComCenterLivePartyDelimiter, //0x0013
    ComCenterLivePartyFriendRow, //0x0014
    SquadDetailedRow, //0x0015
    ComCenterLivePartyButtonRow, //0x0016
    CoopMissionTeamRow, //0x0017
    LeaderBoardRow, //0x0018
    CoopLeaderBoardRow, //0x0019
    BattleLogStandardRow, //0x001A
    BattleLogNewsRow, //0x001B
    ServerLocationsRow, //0x001C
    ServerExtendRow, //0x001D
    ServerInfoSettingsRow, //0x001E
    ServerInfoPlayersRow, //0x001F
    CheckBoxRow, //0x0020
    BarSelectorRow_28px, //0x0021
    BasicRow_34px, //0x0022
    KeyBindingRow, //0x0023
    SquadListRow, //0x0024
    teamSpawn, //0x0025
    MatchListRow, //0x0026
    MatchPlayerListRow, //0x0027
    ManageServerPlayerRow, //0x0028
    ServerSettingsRow, //0x0029
    ServerPlayersRow, //0x002A
    MenuRow_large, //0x002B
    PremiumAboutRow //0x002C
};

////////////////////////////////////////
// RuntimeId: 02132
// TypeInfo:  0x00000001427E02B8
enum UIListNavigationType
{
    loop, //0x0000
    noLoop, //0x0001
    sendEventTopBottom, //0x0002
    sendEventTop, //0x0003
    sendEventBottom, //0x0004
    none //0x0005
};

////////////////////////////////////////
// RuntimeId: 02127
// TypeInfo:  0x00000001427D7FA8
enum ScreenActionInputEventType
{
    ScreenActionInputEventType_RuleRecognition, //0x0000
    ScreenActionInputEventType_CommoroseActivation, //0x0001
    ScreenActionInputEventType_CommoroseIndication, //0x0002
    ScreenActionInputEventType_Deploy, //0x0003
    ScreenActionInputEventType_CommanderSquad, //0x0004
    ScreenActionInputEventType_CommanderAction, //0x0005
    ScreenActionInputEventType_CommanderTarget, //0x0006
    ScreenActionInputEventType_CommanderOther, //0x0007
    ScreenActionInputEventType_SystemSpeechCommand_OpenMenu, //0x0008
    ScreenActionInputEventType_SystemSpeechCommand_Play, //0x0009
    ScreenActionInputEventType_SystemSpeechCommand_Pause, //0x000A
    ScreenActionInputEventType_SystemSpeechCommand_ShowView, //0x000B
    ScreenActionInputEventType_SystemSpeechCommand_Back, //0x000C
    ScreenActionInputEventType_Count //0x000D
};

////////////////////////////////////////
// RuntimeId: 02123
// TypeInfo:  0x00000001427D7FC8
enum XBoneSystemPhrase
{
    XBoneSystemPhrase_OpenMenu, //0x0000
    XBoneSystemPhrase_Play, //0x0001
    XBoneSystemPhrase_Pause, //0x0002
    XBoneSystemPhrase_Back, //0x0003
    XBoneSystemPhrase_ShowView, //0x0004
    XBoneSystemPhrase_Count //0x0005
};

////////////////////////////////////////
// RuntimeId: 02097
// TypeInfo:  0x00000001427D7FE8
enum NuiSpeechTargetDataType
{
    NuiSpeechTargetDataType_String, //0x0000
    NuiSpeechTargetDataType_Int, //0x0001
    NuiSpeechTargetDataType_Float //0x0002
};

////////////////////////////////////////
// RuntimeId: 02087
// TypeInfo:  0x00000001427D8008
enum NuiSpeechFocusPointAction
{
    NuiSpeechFocusPointAction_Attack, //0x0000
    NuiSpeechFocusPointAction_Count //0x0001
};

////////////////////////////////////////
// RuntimeId: 02083
// TypeInfo:  0x00000001427D8028
enum NuiSpeechCommoroseApplicabilityCondition
{
    NuiSpeechCommoroseApplicabilityCondition_Always, //0x0000
    NuiSpeechCommoroseApplicabilityCondition_OnFoot, //0x0001
    NuiSpeechCommoroseApplicabilityCondition_InVehicle, //0x0002
    NuiSpeechCommoroseApplicabilityCondition_Squadleader, //0x0003
    NuiSpeechCommoroseApplicabilityCondition_AttackCommand, //0x0004
    NuiSpeechCommoroseApplicabilityCondition_OrderRequested, //0x0005
    NuiSpeechCommoroseApplicabilityCondition_SquadleaderResponseOrder, //0x0006
    NuiSpeechCommoroseApplicabilityCondition_SquadleaderRequestSupply //0x0007
};

////////////////////////////////////////
// RuntimeId: 02079
// TypeInfo:  0x00000001427D8048
enum NuiSpeechPhraseHintMode
{
    NuiSpeechPhraseType_Always, //0x0000
    NuiSpeechPhraseType_FirstOnly, //0x0001
    NuiSpeechPhraseType_Never //0x0002
};

////////////////////////////////////////
// RuntimeId: 02077
// TypeInfo:  0x00000001427D8068
enum NuiSpeechPhraseType
{
    NuiSpeechPhraseType_InputAction, //0x0000
    NuiSpeechPhraseType_Commorose, //0x0001
    NuiSpeechPhraseType_FocusPoint, //0x0002
    NuiSpeechPhraseType_Entity, //0x0003
    NuiSpeechPhraseType_Direct, //0x0004
    NuiSpeechPhraseType_DataSet, //0x0005
    NuiSpeechPhraseType_CommanderComplex, //0x0006
    NuiSpeechPhraseType_Count //0x0007
};

////////////////////////////////////////
// RuntimeId: 02045
// TypeInfo:  0x00000001427D8088
enum Dialect
{
    Dialect_DE, //0x0000
    Dialect_EN_AU, //0x0001
    Dialect_EN_GB, //0x0002
    Dialect_EN_US, //0x0003
    Dialect_ES_ES, //0x0004
    Dialect_ES_MX, //0x0005
    Dialect_FR_CA, //0x0006
    Dialect_FR_FR, //0x0007
    Dialect_IT, //0x0008
    Dialect_JA, //0x0009
    Dialect_PT_BR, //0x000A
    Dialect_Undefined //0x000B
};

////////////////////////////////////////
// RuntimeId: 01945
// TypeInfo:  0x00000001427D80A8
enum DogTagCategory
{
    DTC_Invalid, //0x0000
    DTC_Ribbons, //0x0001
    DTC_Medals, //0x0002
    DTC_Ranks, //0x0003
    DTC_ServiceStars, //0x0004
    DTC_Weapons, //0x0005
    DTC_Misc, //0x0006
    DTC_Vehicles, //0x0007
    DTC_MPAssignments, //0x0008
    DTC_SPAssignments, //0x0009
    DTC_Premium, //0x000A
    DTC_Promotion, //0x000B
    DTC_Battlepacks, //0x000C
    DTC_Flags, //0x000D
    DTC_Kits, //0x000E
    DTC_Mission, //0x000F
    DTC_Excusive //0x0010
};

////////////////////////////////////////
// RuntimeId: 01939
// TypeInfo:  0x00000001427D8208
enum CriteriaType
{
    CriteriaType_IAR_InARound, //0x0000
    CriteriaType_IAR_InARoundResetIfValueNotChanged, //0x0001
    CriteriaType_IAS_InASpawn, //0x0002
    CriteriaType_IAS_InASpawnNotResetable, //0x0003
    CriteriaType_IAS_InASpawnWithoutTakingDamage, //0x0004
    CriteriaType_LEVEL_HighestValue, //0x0005
    CriteriaType_GLOBAL_AllTimeTotal, //0x0006
    CriteriaType_GLOBAL_HighestValue, //0x0007
    CriteriaType_GLOBAL_HighestValueAlways, //0x0008
    CriteriaType_GLOBAL_HighestValueInASpawn, //0x0009
    CriteriaType_GLOBAL_LowestValueAlways, //0x000A
    CriteriaType_IfNotTrue, //0x000B
    CriteriaType_IAD_InADeathStreak, //0x000C
    CriteriaType_LAST_ITEM //0x000D
};

////////////////////////////////////////
// RuntimeId: 01937
// TypeInfo:  0x00000001427D8228
enum StatEvent
{
    StatEvent_Kill, //0x0000
    StatEvent_Kill_In_X, //0x0001
    StatEvent_Kill_As_X, //0x0002
    StatEvent_Kill_As_HVT_Bonus, //0x0003
    StatEvent_Kill_On_X, //0x0004
    StatEvent_KillWith_X, //0x0005
    StatEvent_KillWith_X_As_Y, //0x0006
    StatEvent_KillWith_X_On_Y, //0x0007
    StatEvent_KillDistance, //0x0008
    StatEvent_KillOf_X_As_Y, //0x0009
    StatEvent_KillOf_X_In_Y, //0x000A
    StatEvent_TeamKill, //0x000B
    StatEvent_PaybackKill, //0x000C
    StatEvent_AvengerKill, //0x000D
    StatEvent_TeamAvengerKill, //0x000E
    StatEvent_SquadAvengerKill, //0x000F
    StatEvent_SaviorKill, //0x0010
    StatEvent_TeamSaviorKill, //0x0011
    StatEvent_SquadSaviorKill, //0x0012
    StatEvent_DriverAssist, //0x0013
    StatEvent_PassengerAssist, //0x0014
    StatEvent_SquadPassengerAssist, //0x0015
    StatEvent_RoadKill, //0x0016
    StatEvent_Death, //0x0017
    StatEvent_MultiKill, //0x0018
    StatEvent_MultiKill_On_X, //0x0019
    StatEvent_PostMortemKill, //0x001A
    StatEvent_AdrenalineKill, //0x001B
    StatEvent_AdrenalineKill_On_X, //0x001C
    StatEvent_KillStreak, //0x001D
    StatEvent_KillStreakX, //0x001E
    StatEvent_TimedKillStreak, //0x001F
    StatEvent_TimedKillStreak_On_X, //0x0020
    StatEvent_CancelKillStreak, //0x0021
    StatEvent_Comeback, //0x0022
    StatEvent_SquadWipe, //0x0023
    StatEvent_NemesisKill, //0x0024
    StatEvent_NemesisKillX, //0x0025
    StatEvent_CancelNemesisKill, //0x0026
    StatEvent_SecondsAs_X, //0x0027
    StatEvent_SecondsWith_X, //0x0028
    StatEvent_SecondsIn_X, //0x0029
    StatEvent_SecondsOn_X, //0x002A
    StatEvent_VehicleDamage_X, //0x002B
    StatEvent_MobilityCriticalHit_X, //0x002C
    StatEvent_MobilityKill_X, //0x002D
    StatEvent_FirepowerCriticalHit_X, //0x002E
    StatEvent_FirepowerKill_X, //0x002F
    StatEvent_Destroy_X, //0x0030
    StatEvent_Destroy_X_As_Y, //0x0031
    StatEvent_Destroy_X_In_Y, //0x0032
    StatEvent_Destroy_X_On_Y, //0x0033
    StatEvent_DestroyWith_X_As_Y, //0x0034
    StatEvent_Destroy_X_With_Y, //0x0035
    StatEvent_DestroyExplosives, //0x0036
    StatEvent_Disabled_X, //0x0037
    StatEvent_KillOfWith_X_As_Y, //0x0038
    StatEvent_TaggedDamageAssist_X, //0x0039
    StatEvent_SquadTaggedDamageAssist_X, //0x003A
    StatEvent_TaggedDestroy_X, //0x003B
    StatEvent_SquadTaggedDestroy_X, //0x003C
    StatEvent_Tagged_X, //0x003D
    StatEvent_SuppressWith_X_As_Y, //0x003E
    StatEvent_Level_X_Completed_Y_Difficulty, //0x003F
    StatEvent_Level_X_Completed_Y_Difficulty_WithTimeValue, //0x0040
    StatEvent_CleanLevel_X_Completed, //0x0041
    StatEvent_RoundOverOutcome_X_On_Y, //0x0042
    StatEvent_Rounds, //0x0043
    StatEvent_Headshot_X_With_Y, //0x0044
    StatEvent_HeadshotAs_X_With_Y, //0x0045
    StatEvent_HeadshotDistance_With_X, //0x0046
    StatEvent_Headshot_On_X, //0x0047
    StatEvent_SelfHeal, //0x0048
    StatEvent_BestSquad, //0x0049
    StatEvent_ShotsFired_With_X, //0x004A
    StatEvent_ShotsHit_With_X, //0x004B
    StatEvent_SpotAssist, //0x004C
    StatEvent_TeamSpotAssist, //0x004D
    StatEvent_SquadSpotAssist, //0x004E
    StatEvent_RadarAssist, //0x004F
    StatEvent_TeamRadarAssist, //0x0050
    StatEvent_SquadRadarAssist, //0x0051
    StatEvent_SuppressionAssist, //0x0052
    StatEvent_SquadSuppressionAssist, //0x0053
    StatEvent_Heal, //0x0054
    StatEvent_TeamHeal, //0x0055
    StatEvent_SquadHeal, //0x0056
    StatEvent_Revive, //0x0057
    StatEvent_TeamRevive, //0x0058
    StatEvent_SquadRevive, //0x0059
    StatEvent_ReviveAccepted, //0x005A
    StatEvent_TeamReviveAccepted, //0x005B
    StatEvent_SquadReviveAccepted, //0x005C
    StatEvent_ManDownRevive, //0x005D
    StatEvent_Resupply, //0x005E
    StatEvent_TeamResupply, //0x005F
    StatEvent_SquadResupply, //0x0060
    StatEvent_KillAssist, //0x0061
    StatEvent_KillAssistAsKill, //0x0062
    StatEvent_SquadKillAssistAsKill, //0x0063
    StatEvent_Repair, //0x0064
    StatEvent_TeamRepair, //0x0065
    StatEvent_SquadRepair, //0x0066
    StatEvent_VehicleDestroyAssist, //0x0067
    StatEvent_TreeDestroyed, //0x0068
    StatEvent_WallDestroyed, //0x0069
    StatEvent_CapturingCapturePoint, //0x006A
    StatEvent_CaptureCapturePoint, //0x006B
    StatEvent_NeutralizeCapturePoint, //0x006C
    StatEvent_CapturePointDefense, //0x006D
    StatEvent_CapturePointAttack, //0x006E
    StatEvent_CapturePointLeaderBonus, //0x006F
    StatEvent_CapturePointDominationBonus, //0x0070
    StatEvent_CrateInteraction, //0x0071
    StatEvent_CrateArmed, //0x0072
    StatEvent_CrateDisarmed, //0x0073
    StatEvent_CrateDestroyed, //0x0074
    StatEvent_CrateDefendKill, //0x0075
    StatEvent_CrateAttackKill, //0x0076
    StatEvent_BombPickedUp, //0x0077
    StatEvent_BombDelivered, //0x0078
    StatEvent_BombDeliveredAssist, //0x0079
    StatEvent_BombCarrierKilled, //0x007A
    StatEvent_BombPossession, //0x007B
    StatEvent_OrderBonus, //0x007C
    StatEvent_OrderFollowed, //0x007D
    StatEvent_CommanderOrderAccepted, //0x007E
    StatEvent_CommanderTomahawkLaunched, //0x007F
    StatEvent_CommanderTomahawkDamaged, //0x0080
    StatEvent_CommanderTomahawkDestroyed, //0x0081
    StatEvent_CommanderScanAssist, //0x0082
    StatEvent_CommanderHVTMarked, //0x0083
    StatEvent_CommanderHVTKilled, //0x0084
    StatEvent_CommanderHVTEliminated, //0x0085
    StatEvent_CommanderEarlyWarningIssued, //0x0086
    StatEvent_CommanderSquadPromoted, //0x0087
    StatEvent_CommanderSquadReinforced, //0x0088
    StatEvent_CommanderGunshipDeployed, //0x0089
    StatEvent_CommanderGunshipKillAssist, //0x008A
    StatEvent_CommanderUnanimousSupport, //0x008B
    StatEvent_CommanderVehicleDropUsed, //0x008C
    StatEvent_CommanderSupplyDropUsed, //0x008D
    StatEvent_CommanderEMPBonus, //0x008E
    StatEvent_UniqueAward, //0x008F
    StatEvent_DogTag, //0x0090
    StatEvent_DogTag_On_X, //0x0091
    StatEvent_DogTagSavior, //0x0092
    StatEvent_DogTagPayback, //0x0093
    StatEvent_SquadSpawn, //0x0094
    StatEvent_SquadSpawnOnRemoteVehicle_X, //0x0095
    StatEvent_SquadSpawnOnEquipment, //0x0096
    StatEvent_DriverSpawnBonus, //0x0097
    StatEvent_SquadSpawnLastAlive, //0x0098
    StatEvent_Suicide, //0x0099
    StatEvent_AISquadKill, //0x009A
    StatEvent_AISquadKill_On_X, //0x009B
    StatEvent_GainAward_X, //0x009C
    StatEvent_PlayerScoreboardPosition_X, //0x009D
    StatEvent_GainedHighestRank, //0x009E
    StatEvent_Rank_X, //0x009F
    StatEvent_GainedHighestUnlockInBucket_X, //0x00A0
    StatEvent_ConsumableUnlocked, //0x00A1
    StatEvent_Misc_X_and_Y, //0x00A2
    StatEvent_TotalScoreOn_X_Difficulty_Y, //0x00A3
    StatEvent_Score_On_X, //0x00A4
    StatEvent_CTF_Capture, //0x00A5
    StatEvent_CTF_CaptureStreak, //0x00A6
    StatEvent_CTF_CaptureAssist, //0x00A7
    StatEvent_CTF_PickUp, //0x00A8
    StatEvent_CTF_PickUpAssist, //0x00A9
    StatEvent_CTF_Return, //0x00AA
    StatEvent_CTF_CarrierAssist, //0x00AB
    StatEvent_CTF_CarrierAssistStreak, //0x00AC
    StatEvent_CTF_FlagTransporter_In_X, //0x00AD
    StatEvent_CTF_CarrierSavior, //0x00AE
    StatEvent_CTF_CarrierSuppression, //0x00AF
    StatEvent_CTF_CarrierKiller, //0x00B0
    StatEvent_CTF_CarrierKillAssist, //0x00B1
    StatEvent_CTF_CarrierHeal, //0x00B2
    StatEvent_StartedFire, //0x00B3
    StatEvent_StartedFire_With_X, //0x00B4
    StatEvent_DamageAreaKill, //0x00B5
    StatEvent_DamageAreaKill_On_X, //0x00B6
    StatEvent_Kill_In_X_On_Y, //0x00B7
    StatEvent_CHLK_NewLink, //0x00B8
    StatEvent_CHLK_DoubleLink, //0x00B9
    StatEvent_CHLK_BreakLink, //0x00BA
    StatEvent_CHLK_IncreaseLinkCount, //0x00BB
    StatEvent_CHLK_DecreaseLinkCount, //0x00BC
    StatEvent_CHLK_BreakTwoLink, //0x00BD
    StatEvent_CHLK_LinkAttack, //0x00BE
    StatEvent_CHLK_LinkDefense, //0x00BF
    StatEvent_Gunmaster_Level, //0x00C0
    StatEvent_Gunmaster_Winner, //0x00C1
    StatEvent_ActiveSpot_In_X, //0x00C2
    StatEvent_KillWith_X_While_Swimming, //0x00C3
    StatEvent_RoundOverOutcome_X_On_Level_Y, //0x00C4
    StatEvent_SecondsIn_X_Airborne, //0x00C5
    StatEvent_DistanceAs_X, //0x00C6
    StatEvent_DistanceIn_X, //0x00C7
    StatEvent_ExplosiveDamageEnemyWith_X, //0x00C8
    StatEvent_DestroyDecoyPack, //0x00C9
    StatEvent_ConsumableUnlocked_X, //0x00CA
    StatEvent_Invalid, //0x00CB
    StatEvent_Damage, //0x00CC
    StatEvent_LAST_ITEM //0x00CD
};

////////////////////////////////////////
// RuntimeId: 01907
// TypeInfo:  0x00000001427D80C8
enum RadarScanMode
{
    RSM_LeftToRight, //0x0000
    RSM_RightToLeft, //0x0001
    RSM_TopToBottom, //0x0002
    RSM_BottomToTop //0x0003
};

////////////////////////////////////////
// RuntimeId: 01887
// TypeInfo:  0x00000001427D8248
enum CommanderActionState
{
    CommanderActionState_Disabled, //0x0000
    CommanderActionState_Idle, //0x0001
    CommanderActionState_WarmUp, //0x0002
    CommanderActionState_Running, //0x0003
    CommanderActionState_CoolDown, //0x0004
    CommanderActionState_Frozen, //0x0005
    CommanderActionState_Count //0x0006
};

////////////////////////////////////////
// RuntimeId: 01885
// TypeInfo:  0x00000001427D80E8
enum CommanderActionType
{
    CommanderActionType_SectorScan, //0x0000
    CommanderActionType_SectorJam, //0x0001
    CommanderActionType_Order, //0x0002
    CommanderActionType_SupplyDrop, //0x0003
    CommanderActionType_VehicleSpawn, //0x0004
    CommanderActionType_DefenseDrop, //0x0005
    CommanderActionType_PromoteSquad, //0x0006
    CommanderActionType_LaunchTomahawk, //0x0007
    CommanderActionType_RadarScan, //0x0008
    CommanderActionType_EarlyWarning, //0x0009
    CommanderActionType_InfantryScan, //0x000A
    CommanderActionType_VehicleScan, //0x000B
    CommanderActionType_SatelliteEMP, //0x000C
    CommanderActionType_GunshipDeploy, //0x000D
    CommanderActionType_HighValueTarget, //0x000E
    CommanderActionType_ReinforceSquad, //0x000F
    CommanderActionType_SquadWipeProtection, //0x0010
    CommanderActionType_ProxyAttack, //0x0011
    CommanderActionType_Communication, //0x0012
    CommanderActionType_ParaDrop, //0x0013
    CommanderActionType_Count, //0x0014
    CommanderActionType_None //0x0015
};

////////////////////////////////////////
// RuntimeId: 01883
// TypeInfo:  0x00000001427D8268
enum CommanderCameraType
{
    CommanderCameraType_NoCamera, //0x0000
    CommanderCameraType_TopDownCamera, //0x0001
    CommanderCameraType_FirstPersonCamera, //0x0002
    CommanderCameraType_BaseCamera, //0x0003
    CommanderCameraType_TargetCamera, //0x0004
    CommanderCameraType_Count //0x0005
};

////////////////////////////////////////
// RuntimeId: 01881
// TypeInfo:  0x00000001427D8288
enum CommanderOrderReplyType
{
    CommanderOrderReplyType_Pending, //0x0000
    CommanderOrderReplyType_Accepted, //0x0001
    CommanderOrderReplyType_Denied, //0x0002
    CommanderOrderReplyType_Count //0x0003
};

////////////////////////////////////////
// RuntimeId: 01879
// TypeInfo:  0x00000001427D82A8
enum CommanderOrderType
{
    CommanderOrderType_None, //0x0000
    CommanderOrderType_Attack, //0x0001
    CommanderOrderType_Defend, //0x0002
    CommanderOrderType_Count //0x0003
};

////////////////////////////////////////
// RuntimeId: 01877
// TypeInfo:  0x00000001427D82C8
enum EMPType
{
    EMPType_Local, //0x0000
    EMPType_Global, //0x0001
    EMPType_Count //0x0002
};

////////////////////////////////////////
// RuntimeId: 01875
// TypeInfo:  0x00000001427D82E8
enum CommanderRating
{
    CommanderRating_Positive, //0x0000
    CommanderRating_Negative, //0x0001
    CommanderRating_Count //0x0002
};

////////////////////////////////////////
// RuntimeId: 01871
// TypeInfo:  0x00000001427D8308
enum ChatChannelType
{
    CctSayAll, //0x0000
    CctTeam, //0x0001
    CctSquad, //0x0002
    CctSquadLeader, //0x0003
    CctAdmin, //0x0004
    CctGame, //0x0005
    CctSize //0x0006
};

////////////////////////////////////////
// RuntimeId: 01719
// TypeInfo:  0x00000001427D0A80
enum IntensityClass
{
    IntensityClass_Low, //0x0000
    IntensityClass_Medium, //0x0001
    IntensityClass_High, //0x0002
    IntensityClass_Engaging //0x0003
};

////////////////////////////////////////
// RuntimeId: 01717
// TypeInfo:  0x00000001427D0B00
enum FiringWeaponClass
{
    WeaponClass_AssaultRifle, //0x0000
    WeaponClass_MachineGun, //0x0001
    WeaponClass_Pistol, //0x0002
    WeaponClass_SniperRifle, //0x0003
    WeaponClass_SMG //0x0004
};

////////////////////////////////////////
// RuntimeId: 01663
// TypeInfo:  0x00000001427D0A20
enum Pose
{
    Pose_Stand, //0x0000
    Pose_Crouch //0x0001
};

////////////////////////////////////////
// RuntimeId: 01661
// TypeInfo:  0x00000001427D0B40
enum MoveSpeed
{
    MoveSpeed_Walk, //0x0000
    MoveSpeed_Run, //0x0001
    MoveSpeed_Sprint //0x0002
};

////////////////////////////////////////
// RuntimeId: 01657
// TypeInfo:  0x00000001427D0E40
enum BFReadinessLevel
{
    RLPatrol, //0x0000
    RLReady, //0x0001
    RLCombat, //0x0002
    RLNone //0x0003
};

////////////////////////////////////////
// RuntimeId: 01613
// TypeInfo:  0x00000001427D0B20
enum TacticsEnumeration
{
    TacticsEnumeration_None, //0x0000
    TacticsEnumeration_Vehicle, //0x0001
    TacticsEnumeration_Charge, //0x0002
    TacticsEnumeration_Attack, //0x0003
    TacticsEnumeration_Hide, //0x0004
    TacticsEnumeration_Flee, //0x0005
    TacticsEnumeration_CloseCombat, //0x0006
    TacticsEnumeration_SquadMovement, //0x0007
    TacticsEnumeration_SquadEngage //0x0008
};

////////////////////////////////////////
// RuntimeId: 01611
// TypeInfo:  0x00000001427D0B80
enum ExecutionPriority
{
    ExecutionPriority_All, //0x0000
    ExecutionPriority_Idle, //0x0001
    ExecutionPriority_Combat //0x0002
};

////////////////////////////////////////
// RuntimeId: 01609
// TypeInfo:  0x00000001427D0AC0
enum AI2ShootType
{
    AI2ShootType_OneBurstPerTarget, //0x0000
    AI2ShootType_Continuous //0x0001
};

////////////////////////////////////////
// RuntimeId: 01607
// TypeInfo:  0x00000001427D0A00
enum IdleReadiness
{
    IdleReadiness_Relaxed, //0x0000
    IdleReadiness_Ready //0x0001
};

////////////////////////////////////////
// RuntimeId: 01599
// TypeInfo:  0x00000001427D0CA0
enum BFCoverType
{
    BFCoverType_Stand, //0x0000
    BFCoverType_Medium, //0x0001
    BFCoverType_Crouch, //0x0002
    BFCoverType_Prone, //0x0003
    BFCoverType_Open, //0x0004
    BFCoverType_OpenDirectional //0x0005
};

////////////////////////////////////////
// RuntimeId: 01589
// TypeInfo:  0x00000001427D0DE0
enum CoverQueryScoreRuntimeFlags
{
    CoverQueryScoreRuntimeFlags_NeedTarget, //0x0000
    CoverQueryScoreRuntimeFlags_NeedSquad //0x0001
};

////////////////////////////////////////
// RuntimeId: 01575
// TypeInfo:  0x00000001427D0AA0
enum CoverQueryStyle
{
    CoverQueryStyle_Distance, //0x0000
    CoverQueryStyle_ProjectedDistance, //0x0001
    CoverQueryStyle_Angle //0x0002
};

////////////////////////////////////////
// RuntimeId: 01573
// TypeInfo:  0x00000001427D0A40
enum CoverQueryCurveXSource
{
    CoverQueryCurveXSource_Custom, //0x0000
    CoverQueryCurveXSource_WeaponPreferredRange //0x0001
};

////////////////////////////////////////
// RuntimeId: 01571
// TypeInfo:  0x00000001427D0AE0
enum CoverQueryDirection
{
    CoverQueryDirection_CoverDirection, //0x0000
    CoverQueryDirection_WorldUpDirection, //0x0001
    CoverQueryDirection_ActorToHumanDirection, //0x0002
    CoverQueryDirection_HumanToActorDirection, //0x0003
    CoverQueryDirection_SquadToHumanDirection, //0x0004
    CoverQueryDirection_HumanToSquadDirection, //0x0005
    CoverQueryDirection_ActorToTargetDirection, //0x0006
    CoverQueryDirection_TargetToActorDirection //0x0007
};

////////////////////////////////////////
// RuntimeId: 01569
// TypeInfo:  0x00000001427D0A60
enum CoverQueryPosition
{
    CoverQueryPosition_ActorPosition, //0x0000
    CoverQueryPosition_CoverPosition, //0x0001
    CoverQueryPosition_SquadPosition, //0x0002
    CoverQueryPosition_HumanPosition, //0x0003
    CoverQueryPosition_TargetPosition //0x0004
};

////////////////////////////////////////
// RuntimeId: 01559
// TypeInfo:  0x00000001427D0B60
enum BFCoverSelectionMethod
{
    CSMAgainstThreatPosition, //0x0000
    CSMAgainstHighestThreat, //0x0001
    CSMAgainstSelectedTarget, //0x0002
    CSMAgainstAllEnemies, //0x0003
    CSMAgainstAllEnemiesWithFallback //0x0004
};

////////////////////////////////////////
// RuntimeId: 01515
// TypeInfo:  0x00000001427CD3D8
enum VoPrimaryFireType
{
    VoPrimaryFireType_AssaultRifle, //0x0000
    VoPrimaryFireType_MachineGun, //0x0001
    VoPrimaryFireType_Pistol, //0x0002
    VoPrimaryFireType_SniperRifle, //0x0003
    VoPrimaryFireType_SMG //0x0004
};

////////////////////////////////////////
// RuntimeId: 01513
// TypeInfo:  0x00000001427CD478
enum CombatEnvironment
{
    CombatEnvironment_Default, //0x0000
    CombatEnvironment_Indoor, //0x0001
    CombatEnvironment_Outdoor //0x0002
};

////////////////////////////////////////
// RuntimeId: 01511
// TypeInfo:  0x00000001427CD3B8
enum ValidAgainst
{
    ValidAgainst_Nothing, //0x0000
    ValidAgainst_Soldiers, //0x0001
    ValidAgainst_SoldiersAndUnshieldedVehicles, //0x0002
    ValidAgainst_UnshieldedVehicles, //0x0003
    ValidAgainst_ShieldedVehicles, //0x0004
    ValidAgainst_AllVehicles, //0x0005
    ValidAgainst_All //0x0006
};

////////////////////////////////////////
// RuntimeId: 01497
// TypeInfo:  0x00000001427CD398
enum BFAIProjectileCurveType
{
    BFAIProjectileType_Straight, //0x0000
    BFAIProjectileType_Parabolic //0x0001
};

////////////////////////////////////////
// RuntimeId: 01491
// TypeInfo:  0x00000001427CD3F8
enum Action
{
    Action_Revive //0x0000
};

////////////////////////////////////////
// RuntimeId: 00879
// TypeInfo:  0x00000001427B38F0
enum LevolutionType
{
    LevolutionType_Setpiece, //0x0000
    LevolutionType_TacticalDestruction, //0x0001
    LevolutionType_Interaction, //0x0002
    LevolutionType_Environmental, //0x0003
    LevolutionType_Backdrop //0x0004
};

////////////////////////////////////////
// RuntimeId: 00855
// TypeInfo:  0x00000001427B3F30
enum FriendJoinEventType
{
    FriendJoinEventType_None, //0x0000
    FriendJoinEventType_TargetLeft, //0x0001
    FriendJoinEventType_TargetIsJoiningFriend, //0x0002
    FriendJoinEventType_TargetWithFriend, //0x0003
    FriendJoinEventType_TargetTeam, //0x0004
    FriendJoinEventType_TeamFull, //0x0005
    FriendJoinEventType_JoinedSquad, //0x0006
    FriendJoinEventType_CreatedSquad, //0x0007
    FriendJoinEventType_MaxSquads, //0x0008
    FriendJoinEventType_SquadFull, //0x0009
    FriendJoinEventType_NoSquad, //0x000A
    FriendJoinEventType_Aborted, //0x000B
    FriendJoinEventType_LeftGame //0x000C
};

////////////////////////////////////////
// RuntimeId: 00819
// TypeInfo:  0x00000001427B4290
enum SwitchTeamsResult
{
    SwitchTeamsResult_Success, //0x0000
    SwitchTeamsResult_FailedUnbalanced, //0x0001
    SwitchTeamsResult_FailedTooSoon, //0x0002
    SwitchTeamsResult_FailedTooFewTickets, //0x0003
    SwitchTeamsResult_FailedMustBeDead, //0x0004
    SwitchTeamsResult_FailedTeamFull, //0x0005
    SwitchTeamsResult_FailedDisabled //0x0006
};

////////////////////////////////////////
// RuntimeId: 00787
// TypeInfo:  0x00000001427B45B0
enum BoostState
{
    BoostState_None, //0x0000
    BoostState_Activated, //0x0001
    BoostState_Started, //0x0002
    BoostState_Stopped, //0x0003
    BoostState_Depleted //0x0004
};

////////////////////////////////////////
// RuntimeId: 00784
// TypeInfo:  0x00000001427B45F0
enum VeniceNetworkUnlockGainedType
{
    VeniceNetworkUnlockGainedType_Bucket, //0x0000
    VeniceNetworkUnlockGainedType_Rank, //0x0001
    VeniceNetworkUnlockGainedType_Weapon, //0x0002
    VeniceNetworkUnlockGainedType_Award, //0x0003
    VeniceNetworkUnlockGainedType_Consumable //0x0004
};

////////////////////////////////////////
// RuntimeId: 00691
// TypeInfo:  0x00000001427A9720
enum PushNotificationPresentStyle
{
    PushNotificationPresentStyle_Silent, //0x0000
    PushNotificationPresentStyle_Subtle, //0x0001
    PushNotificationPresentStyle_Explicit //0x0002
};

////////////////////////////////////////
// RuntimeId: 00684
// TypeInfo:  0x00000001427A97E0
enum ServerUnlockSystemType
{
    ServerUnlockSystemType_All, //0x0000
    ServerUnlockSystemType_Common, //0x0001
    ServerUnlockSystemType_None, //0x0002
    ServerUnlockSystemType_FromStats, //0x0003
    ServerUnlockSystemType_FromWhiteList, //0x0004
    ServerUnlockSystemType_FromBlackList, //0x0005
    ServerUnlockSystemType_Count //0x0006
};

////////////////////////////////////////
// RuntimeId: 00677
// TypeInfo:  0x00000001427A98A0
enum ServerMapSequencerEventType
{
    ServerMapSequencerEventType_Add, //0x0000
    ServerMapSequencerEventType_Remove, //0x0001
    ServerMapSequencerEventType_Clear, //0x0002
    ServerMapSequencerEventType_List, //0x0003
    ServerMapSequencerEventType_Load, //0x0004
    ServerMapSequencerEventType_Save, //0x0005
    ServerMapSequencerEventType_SetNextMapIndex, //0x0006
    ServerMapSequencerEventType_GetMapIndices, //0x0007
    ServerMapSequencerEventType_GetRounds, //0x0008
    ServerMapSequencerEventType_RunNextRound, //0x0009
    ServerMapSequencerEventType_RestartRound, //0x000A
    ServerMapSequencerEventType_AvailableMaps, //0x000B
    ServerMapSequencerEventType_GetCurrentMapInfo, //0x000C
    ServerMapSequencerEventType_GetNextMapInfo //0x000D
};

////////////////////////////////////////
// RuntimeId: 00664
// TypeInfo:  0x00000001427A9A20
enum UIIOStatus
{
    UIIOStatus_LoadStart, //0x0000
    UIIOStatus_LoadComplete, //0x0001
    UIIOStatus_SaveStart, //0x0002
    UIIOStatus_SaveComplete //0x0003
};

////////////////////////////////////////
// RuntimeId: 00660
// TypeInfo:  0x00000001427A9A80
enum UITooltipMessageType
{
    UITooltipMessageType_Show, //0x0000
    UITooltipMessageType_Hide, //0x0001
    UITooltipMessageType_Destroyed //0x0002
};

////////////////////////////////////////
// RuntimeId: 00629
// TypeInfo:  0x00000001427A9E40
enum UIObjectiveEventType
{
    UIObjectiveEventType_Show, //0x0000
    UIObjectiveEventType_Hide, //0x0001
    UIObjectiveEventType_Complete, //0x0002
    UIObjectiveEventType_Update //0x0003
};

////////////////////////////////////////
// RuntimeId: 00526
// TypeInfo:  0x00000001427A9440
enum PropertyInterpolationMode
{
    PropertyInterpolationMode_In, //0x0000
    PropertyInterpolationMode_Out, //0x0001
    PropertyInterpolationMode_InOut, //0x0002
    PropertyInterpolationMode_OutIn, //0x0003
    PropertyInterpolationMode_Count //0x0004
};

////////////////////////////////////////
// RuntimeId: 00524
// TypeInfo:  0x00000001427A9460
enum PropertyInterpolationType
{
    PropertyInterpolationType_Linear, //0x0000
    PropertyInterpolationType_Quad, //0x0001
    PropertyInterpolationType_Cubic, //0x0002
    PropertyInterpolationType_Quart, //0x0003
    PropertyInterpolationType_Quint, //0x0004
    PropertyInterpolationType_Expo, //0x0005
    PropertyInterpolationType_Sine, //0x0006
    PropertyInterpolationType_Circ, //0x0007
    PropertyInterpolationType_Back, //0x0008
    PropertyInterpolationType_Elastic, //0x0009
    PropertyInterpolationType_Bounce, //0x000A
    PropertyInterpolationType_Count //0x000B
};

////////////////////////////////////////
// RuntimeId: 00514
// TypeInfo:  0x00000001427A9480
enum StackedSpawningBehaviour
{
    StackedSpawningBehaviour_Fill, //0x0000
    StackedSpawningBehaviour_Cycle, //0x0001
    StackedSpawningBehaviour_None //0x0002
};

////////////////////////////////////////
// RuntimeId: 00510
// TypeInfo:  0x00000001427AA940
enum DeathExperienceSmoothing
{
    DeathExperienceSmoothing_EaseInAndOut, //0x0000
    DeathExperienceSmoothing_EaseIn, //0x0001
    DeathExperienceSmoothing_EaseOut, //0x0002
    DeathExperienceSmoothing_Linear, //0x0003
    DeathExperienceSmoothing_Size //0x0004
};

////////////////////////////////////////
// RuntimeId: 00506
// TypeInfo:  0x00000001427A94A0
enum UnlockEntityPlayerQueryType
{
    UnlockEntityPlayerQueryType_ActiveWeaponUnlocks, //0x0000
    UnlockEntityPlayerQueryType_AllWeaponUnlocks, //0x0001
    UnlockEntityPlayerQueryType_PlayerUnlocks, //0x0002
    UnlockEntityPlayerQueryType_EquippedDogtagUnlocks, //0x0003
    UnlockEntityPlayerQueryType_VisualUnlocks //0x0004
};

////////////////////////////////////////
// RuntimeId: 00504
// TypeInfo:  0x00000001427A94C0
enum UnlockEntityLogic
{
    UnlockEntityLogic_AND, //0x0000
    UnlockEntityLogic_OR //0x0001
};

////////////////////////////////////////
// RuntimeId: 00438
// TypeInfo:  0x00000001427A94E0
enum TrackPlayerEntityType
{
    TrackPlayerEntityType_None, //0x0000
    TrackPlayerEntityType_ObliterationBomb, //0x0001
    TrackPlayerEntityType_EliminationBomb //0x0002
};

////////////////////////////////////////
// RuntimeId: 00316
// TypeInfo:  0x00000001427A9500
enum SpecialMovesPoseType
{
    SpecialMovesPoseType_None, //0x0000
    SpecialMovesPoseType_Stand, //0x0001
    SpecialMovesPoseType_Crouch, //0x0002
    SpecialMovesPoseType_Prone //0x0003
};

////////////////////////////////////////
// RuntimeId: 00290
// TypeInfo:  0x00000001427A9520
enum AwarenessTargetType
{
    AwarenessTargetType_LookAt, //0x0000
    AwarenessTargetType_AmbientThreat, //0x0001
    AwarenessTargetType_Count //0x0002
};

////////////////////////////////////////
// RuntimeId: 00160
// TypeInfo:  0x00000001427A9540
enum TabletCommanderPlatform
{
    TabletCommanderPlatform_Unknown, //0x0000
    TabletCommanderPlatform_IOS, //0x0001
    TabletCommanderPlatform_Android //0x0002
};

////////////////////////////////////////
// RuntimeId: 00158
// TypeInfo:  0x00000001427A9560
enum TabletCommanderChatChannel
{
    TabletCommanderChatChannel_All, //0x0000
    TabletCommanderChatChannel_Team, //0x0001
    TabletCommanderChatChannel_Squad, //0x0002
    TabletCommanderChatChannel_Count //0x0003
};

////////////////////////////////////////
// RuntimeId: 00156
// TypeInfo:  0x00000001427AAC60
enum TabletCommanderMessageType
{
    TabletCommanderMessageType_TryConnect, //0x0000
    TabletCommanderMessageType_ConnectionApproved, //0x0001
    TabletCommanderMessageType_ConnectionDenied, //0x0002
    TabletCommanderMessageType_Ping, //0x0003
    TabletCommanderMessageType_Pong, //0x0004
    TabletCommanderMessageType_JoinServer, //0x0005
    TabletCommanderMessageType_LeaveServer, //0x0006
    TabletCommanderMessageType_LoadLevel, //0x0007
    TabletCommanderMessageType_LoadLevelPlayerData, //0x0008
    TabletCommanderMessageType_LoadLevelActionStates, //0x0009
    TabletCommanderMessageType_LoadLevelLevolutionStates, //0x000A
    TabletCommanderMessageType_LoadLevelSquadBarData, //0x000B
    TabletCommanderMessageType_LoadLevelRushData, //0x000C
    TabletCommanderMessageType_StartMatch, //0x000D
    TabletCommanderMessageType_EndMatch, //0x000E
    TabletCommanderMessageType_ActionEnteredState, //0x000F
    TabletCommanderMessageType_TriggerAction, //0x0010
    TabletCommanderMessageType_AbortAction, //0x0011
    TabletCommanderMessageType_AcknowledgedAction, //0x0012
    TabletCommanderMessageType_DeniedAction, //0x0013
    TabletCommanderMessageType_PlayerKilled, //0x0014
    TabletCommanderMessageType_LevolutionTriggered, //0x0015
    TabletCommanderMessageType_PlayerJoined, //0x0016
    TabletCommanderMessageType_PlayerLeft, //0x0017
    TabletCommanderMessageType_ScoringEvent, //0x0018
    TabletCommanderMessageType_RoundOver, //0x0019
    TabletCommanderMessageType_ScoreBoard, //0x001A
    TabletCommanderMessageType_GainAward, //0x001B
    TabletCommanderMessageType_GainRank, //0x001C
    TabletCommanderMessageType_MutinyCompleted, //0x001D
    TabletCommanderMessageType_ChangedSelectedSquad, //0x001E
    TabletCommanderMessageType_CombatAreaUpdated, //0x001F
    TabletCommanderMessageType_EnemyCommanderChanged, //0x0020
    TabletCommanderMessageType_ChatMessage, //0x0021
    TabletCommanderMessageType_CommanderSwitchedTeam, //0x0022
    TabletCommanderMessageType_ClientHasLoadedLevel, //0x0023
    TabletCommanderMessageType_CarrierState, //0x0024
    TabletCommanderMessageType_Assignment, //0x0025
    TabletCommanderMessageType_Count //0x0026
};

////////////////////////////////////////
// RuntimeId: 00154
// TypeInfo:  0x00000001427A9580
enum TabletCommanderPacketType
{
    TabletCommanderPacketType_HighFrequency, //0x0000
    TabletCommanderPacketType_LowFrequency, //0x0001
    TabletCommanderPacketType_MessageList, //0x0002
    TabletCommanderPacketType_Count //0x0003
};

////////////////////////////////////////
// RuntimeId: 00152
// TypeInfo:  0x00000001427A95A0
enum TabletCommanderConnectionDeniedReason
{
    TabletCommanderConnectionDeniedReason_None, //0x0000
    TabletCommanderConnectionDeniedReason_ProtocolMismatch, //0x0001
    TabletCommanderConnectionDeniedReason_CommanderSlotTaken, //0x0002
    TabletCommanderConnectionDeniedReason_ServerFull, //0x0003
    TabletCommanderConnectionDeniedReason_RankRequirement, //0x0004
    TabletCommanderConnectionDeniedReason_UnknownError //0x0005
};

////////////////////////////////////////
// RuntimeId: 00150
// TypeInfo:  0x00000001427A95C0
enum TabletCommanderGameMode
{
    TabletCommanderGameMode_None, //0x0000
    TabletCommanderGameMode_Conquest, //0x0001
    TabletCommanderGameMode_Obliteration, //0x0002
    TabletCommanderGameMode_Rush, //0x0003
    TabletCommanderGameMode_Titan //0x0004
};

////////////////////////////////////////
// RuntimeId: 00148
// TypeInfo:  0x00000001427A95E0
enum TabletCommanderObjectiveType
{
    TabletCommanderObjectiveType_HomeBase, //0x0000
    TabletCommanderObjectiveType_BombSite, //0x0001
    TabletCommanderObjectiveType_RushCrate, //0x0002
    TabletCommanderObjectiveType_CapturePoint, //0x0003
    TabletCommanderObjectiveType_ForwardBase, //0x0004
    TabletCommanderObjectiveType_Count //0x0005
};

////////////////////////////////////////
// RuntimeId: 00146
// TypeInfo:  0x00000001427AAC80
enum TabletCommanderProtocol
{
    TabletCommanderProtocol_Version //0x0000
};

////////////////////////////////////////
// RuntimeId: 00134
// TypeInfo:  0x00000001427AAD40
enum ServerUnlockListEventType
{
    ServerUnlockListEventType_Add, //0x0000
    ServerUnlockListEventType_Remove, //0x0001
    ServerUnlockListEventType_Clear, //0x0002
    ServerUnlockListEventType_List, //0x0003
    ServerUnlockListEventType_Load, //0x0004
    ServerUnlockListEventType_Save, //0x0005
    ServerUnlockListEventType_GetMode, //0x0006
    ServerUnlockListEventType_SetMode, //0x0007
    ServerUnlockListEventType_SetFromBitmap //0x0008
};

////////////////////////////////////////
// RuntimeId: 00128
// TypeInfo:  0x00000001427AADE0
enum AddGameBanResponseType
{
    AddGameBanResponseType_Success, //0x0000
    AddGameBanResponseType_Failure, //0x0001
    AddGameBanResponseType_UserNotFound, //0x0002
    AddGameBanResponseType_UserCannotBeBanned //0x0003
};

////////////////////////////////////////
// RuntimeId: 00040
// TypeInfo:  0x00000001427AB8C0
enum JoinGameType
{
    JoinGameType_ViaServerBrowser, //0x0000
    JoinGameType_ViaQuickMatch, //0x0001
    JoinGameType_ViaInvite //0x0002
};

////////////////////////////////////////
// RuntimeId: 00010
// TypeInfo:  0x00000001427A14C0
enum Moments
{
    Moment_RankUp, //0x0000
    Moment_DogTagPayback, //0x0001
    Moment_DefibKill, //0x0002
    Moment_Marksman500Plus, //0x0003
    Moment_ScoringChain1000Plus, //0x0004
    Moment_VehicleHeadshot, //0x0005
    Moment_Undefined //0x0006
};

}

