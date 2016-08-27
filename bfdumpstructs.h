namespace fb {

////////////////////////////////////////
// RuntimeId: 09926
// TypeInfo:  0x000000014288BCE0
struct WaterEntityClipInfo
{
    Boolean m_Enable; //0x0000
    Boolean m_ClipFaceNorth; //0x0001
    Boolean m_ClipFaceSouth; //0x0002
    Boolean m_ClipFaceEast; //0x0003
    Boolean m_ClipFaceWest; //0x0004
};//Size=0x0005

////////////////////////////////////////
// RuntimeId: 09922
// TypeInfo:  0x000000014288BD20
struct WaterAmbientFoamEffectSpawner
{
    EffectBlueprint* m_Effect; //0x0000
    Float32 m_Threshold; //0x0008
    Float32 m_Randomness; //0x000C
    Float32 m_CoolDownTime; //0x0010
    Float32 m_NearDistance; //0x0014
    Float32 m_FarDistance; //0x0018
    Float32 m_VerticalVelocityScale; //0x001C
    Float32 m_HorizontalVelocityScale; //0x0020
    char _0x0024[4];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03697
// TypeInfo:  0x00000001421490E0
struct Vec4
{
    Float32 m_x; //0x0000
    Float32 m_y; //0x0004
    Float32 m_z; //0x0008
    Float32 m_w; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09911
// TypeInfo:  0x000000014288B3C8
struct VoipInboundTalkersMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09901
// TypeInfo:  0x000000014288AE88
struct TireTrailConfiguration
{
    Float32 m_SectionWidth; //0x0000
    Float32 m_TrailOffset; //0x0004
    TireTrailVehicleSkidMarkConfigData* m_SkidMarkData; //0x0008
    WheelComponentData* m_LeftWheelComponent; //0x0010
    WheelComponentData* m_RightWheelComponent; //0x0018
    Boolean m_MirrorUVs; //0x0020
    Boolean m_FadeBasedOnSlip; //0x0021
    char _0x0022[6];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09897
// TypeInfo:  0x000000014288AEA8
struct VehicleEffectSet
{
    EffectBlueprint* m_WheelEffect; //0x0000
    RibbonVolumeTemplateData* m_ContactTrail; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09880
// TypeInfo:  0x000000014288A7E8
struct WeaponZeroingEntry
{
    Float32 m_Distance; //0x0000
    Float32 m_Angle; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09876
// TypeInfo:  0x000000014288A808
struct GunSwayModifierUnlock
{
    Guid m_UnlockAssetGuid; //0x0000
    GunSwayModifierData* m_Modifier; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09852
// TypeInfo:  0x000000014288A7A8
struct GunSwayDispersionModData
{
    Float32 m_MinAngleModifier; //0x0000
    Float32 m_MaxAngleModifier; //0x0004
    Float32 m_IncreasePerShotModifier; //0x0008
    Float32 m_DecreasePerSecondModifier; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09850
// TypeInfo:  0x000000014288A7C8
struct GunSwayDispersionData
{
    Float32 m_MinAngle; //0x0000
    Float32 m_MaxAngle; //0x0004
    Float32 m_IncreasePerShot; //0x0008
    Float32 m_DecreasePerSecond; //0x000C
    Float32 m_NoFireDecreasePerSecond; //0x0010
    Float32 m_NoFireTimeThreshold; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09858
// TypeInfo:  0x000000014288A768
struct GunSwayRecoilData
{
    Float32 m_RecoilAmplitudeMax; //0x0000
    Float32 m_RecoilAmplitudeIncPerShot; //0x0004
    Float32 m_HorizontalRecoilAmplitudeIncPerShotMin; //0x0008
    Float32 m_HorizontalRecoilAmplitudeIncPerShotMax; //0x000C
    Float32 m_HorizontalRecoilAmplitudeMax; //0x0010
    Float32 m_RecoilAmplitudeDecreaseFactor; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09854
// TypeInfo:  0x000000014288A788
struct GunSwayLagData
{
    Float32 m_MoveStrafeModifier; //0x0000
    Float32 m_MoveForwardModifier; //0x0004
    Float32 m_RotateYawModifier; //0x0008
    Float32 m_RotatePitchModifier; //0x000C
    Float32 m_ReleaseModifier; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 09864
// TypeInfo:  0x000000014288A728
struct GunSwayBaseMoveData
{
    GunSwayDispersionData m_BaseValue; //0x0000
    GunSwayDispersionData m_Moving; //0x0018
    GunSwayRecoilData m_Recoil; //0x0030
    GunSwayLagData m_GunSwayLag; //0x0048
};//Size=0x005C

////////////////////////////////////////
// RuntimeId: 09862
// TypeInfo:  0x000000014288A828
struct GunSwayBaseData
{
    GunSwayDispersionData m_BaseValue; //0x0000
    GunSwayRecoilData m_Recoil; //0x0018
    GunSwayLagData m_GunSwayLag; //0x0030
};//Size=0x0044

////////////////////////////////////////
// RuntimeId: 09860
// TypeInfo:  0x000000014288A748
struct GunSwayStanceTransition
{
    GunSwayDispersionData m_MaxPenaltyValue; //0x0000
    Float32 m_CoolDown; //0x0018
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 09866
// TypeInfo:  0x000000014288A708
struct GunSwayBaseMoveJumpData
{
    GunSwayDispersionData m_BaseValue; //0x0000
    GunSwayDispersionData m_Moving; //0x0018
    GunSwayDispersionData m_Jumping; //0x0030
    GunSwayDispersionData m_Sprinting; //0x0048
    GunSwayDispersionData m_VaultingSmallObject; //0x0060
    GunSwayDispersionData m_VaultingMediumObject; //0x0078
    GunSwayRecoilData m_Recoil; //0x0090
    GunSwayLagData m_GunSwayLag; //0x00A8
};//Size=0x00BC

////////////////////////////////////////
// RuntimeId: 09868
// TypeInfo:  0x000000014288A6E8
struct GunSwayStandData
{
    GunSwayBaseMoveJumpData m_NoZoom; //0x0000
    GunSwayBaseMoveJumpData m_Zoom; //0x00BC
};//Size=0x0178

////////////////////////////////////////
// RuntimeId: 09872
// TypeInfo:  0x000000014288A6A8
struct GunSwayStanceZoomModifierData
{
    GunSwayDispersionModData m_DispersionMod; //0x0000
    GunSwayDispersionModData m_MovingDispersionMod; //0x0010
    GunSwayDispersionModData m_SprintingDispersionMod; //0x0020
    Float32 m_RecoilMagnitudeMod; //0x0030
    Float32 m_RecoilAngleMod; //0x0034
    Float32 m_FirstShotRecoilMod; //0x0038
    Float32 m_LagYawMod; //0x003C
    Float32 m_LagPitchMod; //0x0040
};//Size=0x0044

////////////////////////////////////////
// RuntimeId: 09870
// TypeInfo:  0x000000014288A6C8
struct GunSwayCrouchProneData
{
    GunSwayBaseMoveData m_NoZoom; //0x0000
    GunSwayBaseMoveData m_Zoom; //0x005C
};//Size=0x00B8

////////////////////////////////////////
// RuntimeId: 03845
// TypeInfo:  0x00000001427FE980
struct AntRef
{
    Guid m_AssetGuid; //0x0000
    Int32 m_ProjectId; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 09842
// TypeInfo:  0x00000001428871A8
struct WeaponMesh1p
{
    SkinnedMeshAsset* m_Mesh; //0x0000
    SkinnedMeshAsset* m_MeshZoom; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09826
// TypeInfo:  0x00000001428871C8
struct WeaponModifierData
{
    Guid m_UnlockAssetGuid; //0x0000
    Array<WeaponModifierBase*> m_Modifiers; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09824
// TypeInfo:  0x00000001428871E8
struct WeaponModifier
{
    char _0x0000[144];
    Int32 m_Dummy2ToMakeFrostEDcompile; //0x0090
    char _0x0094[140];
};//Size=0x0120

////////////////////////////////////////
// RuntimeId: 09790
// TypeInfo:  0x0000000142886C68
struct SupplyData
{
    HealingSupplyUnitSphereData* m_Healing; //0x0000
    AmmoSupplyUnitSphereData* m_Ammo; //0x0008
    Float32 m_ExclusionTimeout; //0x0010
    Float32 m_ExcludeDamagedSoldierTime; //0x0014
    Float32 m_ExcludeSuppressedSoldierTime; //0x0018
    Boolean m_SupplySoldiers; //0x001C
    Boolean m_SupplyVehicles; //0x001D
    Boolean m_TeamSpecific; //0x001E
    Boolean m_ExcludeSelf; //0x001F
    Boolean m_ExcludeSoldiersUnderwater; //0x0020
    Boolean m_ExcludeSoldierIfInMelee; //0x0021
    char _0x0022[6];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09774
// TypeInfo:  0x0000000142887208
struct PlatformAimAssistData
{
    GamePlatform m_Platform; //0x0000
    char _0x0004[4];
    SoldierAimAssistData* m_AimAssistData; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09764
// TypeInfo:  0x0000000142886C88
struct NetworkDefibrillatorKillMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 09763
// TypeInfo:  0x0000000142886CA8
struct NetworkDefibrillatorReviveMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 09760
// TypeInfo:  0x0000000142886CC8
struct DefibrillatorUpgradeWeaponData
{
    ValueUnlockAsset* m_UpgradeUnlock; //0x0000
    Float32 m_AttackTime; //0x0008
    Float32 m_FullHealthTime; //0x000C
    Float32 m_InitialStartHealth; //0x0010
    Float32 m_DefibActionCooldownTime; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09726
// TypeInfo:  0x0000000142886CE8
struct SoldierDetonationData
{
    Float32 m_Angle; //0x0000
    Float32 m_Radius; //0x0004
    Float32 m_SoldierDetonationActivationDelay; //0x0008
    Float32 m_MinSpeedForActivation; //0x000C
    Boolean m_HasSoldierDetonation; //0x0010
    Boolean m_UseAngle; //0x0011
    char _0x0012[2];
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 09724
// TypeInfo:  0x0000000142886D08
struct NetworkSetCustomizationWeaponSlotMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 09723
// TypeInfo:  0x0000000142886D28
struct NetworkSetActiveWeaponSlotMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 09722
// TypeInfo:  0x0000000142886D48
struct BulletToCharacterComponentsHitMessage
{
    char _0x0000[128];
};//Size=0x0080

////////////////////////////////////////
// RuntimeId: 03695
// TypeInfo:  0x00000001421490C0
struct Vec3
{
    Float32 m_x; //0x0000
    Float32 m_y; //0x0004
    Float32 m_z; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09717
// TypeInfo:  0x0000000142886D68
struct CustomizationAccessoryPivots
{
    Vec3 m_BasePivotPos; //0x0000
    Vec3 m_OpticPivotPos; //0x0010
    Vec3 m_BarrelPivotPos; //0x0020
    Vec3 m_AccessoryPivotPos; //0x0030
    Vec3 m_UnderBarrelPivotPos; //0x0040
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 09713
// TypeInfo:  0x0000000142886D88
struct WeaponAnimationSettingsData
{
    Float32 m_KickbackFactor; //0x0000
    Float32 m_KickbackSpeedFactor; //0x0004
    Float32 m_WeaponOffsetX; //0x0008
    Float32 m_WeaponOffsetY; //0x000C
    Float32 m_WeaponOffsetZ; //0x0010
    Float32 m_ZoomOutSpeed; //0x0014
    Float32 m_ZoomInSpeed; //0x0018
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 09707
// TypeInfo:  0x0000000142887248
struct WeaponOverrideValue
{
    WeaponOverrideValueType m_ValueType; //0x0000
    Float32 m_Value; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09697
// TypeInfo:  0x0000000142886DA8
struct PickupSettingsData
{
    Vec3 m_MeshRenderOffset; //0x0000
    Vec3 m_MeshRenderRotation; //0x0010
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 03703
// TypeInfo:  0x0000000142149120
struct LinearTransform
{
    Vec3 m_right; //0x0000
    Vec3 m_up; //0x0010
    Vec3 m_forward; //0x0020
    Vec3 m_trans; //0x0030
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 09689
// TypeInfo:  0x0000000142887288
struct RigidMeshSocketTransform
{
    LinearTransform m_Transform; //0x0000
    WeaponRegularSocketObjectData* m_SocketObject; //0x0040
    char _0x0048[8];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 09687
// TypeInfo:  0x00000001428872A8
struct AnimationConfigurationShootModuleData
{
    Float32 m_ZoomedKickbackFactor; //0x0000
    Float32 m_ZoomedKickbackSpeedFactor; //0x0004
    Float32 m_KickbackFactor; //0x0008
    Float32 m_KickbackSpeedFactor; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09677
// TypeInfo:  0x0000000142886DC8
struct WeaponLagEffectForceData
{
    Vec3 m_OffsetForce; //0x0000
    Vec3 m_RotationForce; //0x0010
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 09673
// TypeInfo:  0x0000000142886E08
struct WeaponLagEffectSpringData
{
    Float32 m_Constant; //0x0000
    Float32 m_Damping; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09675
// TypeInfo:  0x0000000142886DE8
struct WeaponLagEffectSpringVector
{
    WeaponLagEffectSpringData m_SpringX; //0x0000
    WeaponLagEffectSpringData m_SpringY; //0x0008
    WeaponLagEffectSpringData m_SpringZ; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09667
// TypeInfo:  0x00000001428872C8
struct ZoomLevelSpecificTransitionTime
{
    Int32 m_FromZoomLevel; //0x0000
    Int32 m_ToZoomLevel; //0x0004
    Float32 m_ZoomTransitionTime; //0x0008
    Float32 m_FovTransitionTime; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09665
// TypeInfo:  0x0000000142886E28
struct AimingPoseData
{
    Float32 m_MinimumPitch; //0x0000
    Float32 m_MaximumPitch; //0x0004
    Float32 m_TargetingFov; //0x0008
    Float32 m_AimSteadiness; //0x000C
    Float32 m_SpeedMultiplier; //0x0010
    Float32 m_RecoilMultiplier; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09659
// TypeInfo:  0x0000000142886E48
struct UnlockWeaponAndSlot
{
    SoldierWeaponUnlockAsset* m_Weapon; //0x0000
    WeaponSlot m_Slot; //0x0008
    char _0x000C[4];
    Array<UnlockAssetBase*> m_CustomizationUnlockAssets; //0x0010
    Array<UnlockAssetBase*> m_UnlockAssets; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 09655
// TypeInfo:  0x00000001428872E8
struct UnlockToBlueprintBundle
{
    Guid m_UnlockAssetGuid; //0x0000
    CString m_BundleName; //0x0010
    Boolean m_IsFirstPersonOnly; //0x0018
    char _0x0019[7];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 09653
// TypeInfo:  0x0000000142886E68
struct StoredWeaponData
{
    Int32 m_WeaponClass; //0x0000
    Int32 m_MagCount; //0x0004
    Int32 m_MagCapacity; //0x0008
    Boolean m_SwitchToPrimaryWhenOutOfAmmo; //0x000C
    char _0x000D[3];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09637
// TypeInfo:  0x0000000142887308
struct DirectWeaponSwitchingMapData
{
    Int32 m_Action; //0x0000
    Float32 m_MaxHoldTime; //0x0004
    WeaponSwitchingEnum m_ToWeapon; //0x0008
    Float32 m_SwitchBackToPrevMaxTimePressed; //0x000C
    Float32 m_PreventMeleeRepeatTime; //0x0010
    Boolean m_FireAndSwitchBackToPrev; //0x0014
    Boolean m_UseQuickSwitch; //0x0015
    char _0x0016[2];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09635
// TypeInfo:  0x0000000142887328
struct WeaponSwitchingMapData
{
    WeaponSwitchingEnum m_FromWeapon; //0x0000
    Int32 m_Action; //0x0004
    Float32 m_MaxHoldTime; //0x0008
    char _0x000C[4];
    Array<WeaponSwitchingEnum> m_ToWeapon; //0x0010
    Boolean m_FireAndSwitchBackToPrev; //0x0018
    char _0x0019[7];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 09625
// TypeInfo:  0x0000000142887348
struct DamageEntryData
{
    Float32 m_Damage; //0x0000
    Float32 m_Timeout; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09617
// TypeInfo:  0x0000000142886EC8
struct SoldierToComponentsOnClearSpottingMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09616
// TypeInfo:  0x0000000142886EE8
struct ClientSoldierToComponentsOnHandleDamageMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 09615
// TypeInfo:  0x0000000142886F08
struct ClientSoldierToComponentsOnImpulseMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09614
// TypeInfo:  0x0000000142886F28
struct SoldierToComponentsOnActionStateChangedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09613
// TypeInfo:  0x0000000142886F48
struct SoldierToComponentsOnIncapableMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 09612
// TypeInfo:  0x0000000142886F68
struct SoldierToComponentsOnCustomizeSoldierMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09611
// TypeInfo:  0x0000000142886F88
struct SoldierToComponentsInitializedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09602
// TypeInfo:  0x0000000142887368
struct ValueAtX
{
    Float32 m_X; //0x0000
    Float32 m_Value; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09594
// TypeInfo:  0x0000000142887388
struct HidableSoldierMeshWeaponPart
{
    SkinnedMeshAsset* m_WeaponMesh; //0x0000
    ObjectBlueprint* m_WeaponMeshBlueprint; //0x0008
    CString m_BoneName; //0x0010
    Boolean m_HideAlways; //0x0018
    Boolean m_HideInVehicleEntries; //0x0019
    char _0x001A[6];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 09590
// TypeInfo:  0x00000001428873A8
struct SoldierHeadCollisionPoseData
{
    Vec3 m_IdleOffset; //0x0000
    Vec3 m_MovingForwardOffset; //0x0010
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 09586
// TypeInfo:  0x00000001428873C8
struct AutoAimData
{
    Vec3 m_AutoAimOuterBoxOffset; //0x0000
    Vec3 m_AutoAimOuterBoxExtends; //0x0010
    Vec3 m_AutoAimInnerBoxOffset; //0x0020
    Vec3 m_AutoAimInnerBoxExtends; //0x0030
    CharacterPoseType m_PoseType; //0x0040
    char _0x0044[12];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 09584
// TypeInfo:  0x00000001428873E8
struct FootStepTrigger
{
    Float32 m_Time; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 09576
// TypeInfo:  0x0000000142886FC8
struct NetworkPickupWeaponFromKitMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 09573
// TypeInfo:  0x0000000142887408
struct DynamicWeaponPickupSlotData
{
    Uint32 m_WeaponSlot; //0x0000
    Int32 m_AltWeaponSlot; //0x0004
    Int32 m_LinkedToWeaponSlot; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 09565
// TypeInfo:  0x0000000142887428
struct WeaponUnlockPickupData
{
    UnlockWeaponAndSlot m_UnlockWeaponAndSlot; //0x0000
    Int32 m_AltWeaponSlot; //0x0020
    Int32 m_LinkedToWeaponSlot; //0x0024
    Uint32 m_MinAmmo; //0x0028
    Uint32 m_MaxAmmo; //0x002C
    Boolean m_UnlimitedAmmoPickup; //0x0030
    char _0x0031[7];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 09547
// TypeInfo:  0x0000000142886FE8
struct HitReactionComponentBinding
{
    AntRef m_Hit; //0x0000
    AntRef m_HitByAIPlayer; //0x0014
    AntRef m_AllowKillFromAnimation; //0x0028
    AntRef m_Direction; //0x003C
    AntRef m_FiringDistance; //0x0050
    AntRef m_BoneType; //0x0064
    AntRef m_ImpactType; //0x0078
    AntRef m_Immortal; //0x008C
    AntRef m_RandomAnimationIndex; //0x00A0
};//Size=0x00B4

////////////////////////////////////////
// RuntimeId: 09541
// TypeInfo:  0x0000000142887028
struct BlockAimAssistData
{
    Float32 m_BlockingRadius; //0x0000
    Float32 m_LifeTime; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09535
// TypeInfo:  0x0000000142887048
struct NetworkPlayerSelectedWeaponMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 09532
// TypeInfo:  0x0000000142887068
struct CoverPeekBinding
{
    AntRef m_CoverHeight1p; //0x0000
    AntRef m_CanCoverPeek; //0x0014
    AntRef m_CanPeekOver; //0x0028
    AntRef m_CanPeekLeft; //0x003C
    AntRef m_CanPeekRight; //0x0050
    AntRef m_WeaponDown; //0x0064
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 09508
// TypeInfo:  0x0000000142887088
struct MovementComponentBinding
{
    AntRef m_AnimationControlled; //0x0000
    AntRef m_FeedbackCollisions; //0x0014
    AntRef m_DisableAnimationControlledCamera; //0x0028
    AntRef m_DisableAnimationControlExitVelocity; //0x003C
    AntRef m_ForceVelocityMode; //0x0050
};//Size=0x0064

////////////////////////////////////////
// RuntimeId: 09504
// TypeInfo:  0x00000001428870A8
struct CameraCommonBinding
{
    AntRef m_FirstPersonCameraHeight; //0x0000
    AntRef m_AnimatedCameraBlendTime; //0x0014
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09502
// TypeInfo:  0x00000001428870C8
struct Camera1pBinding
{
    AntRef m_Render1pInBackground; //0x0000
    AntRef m_ForceRender1pInForeground; //0x0014
    AntRef m_ForceAnimatedCamera; //0x0028
};//Size=0x003C

////////////////////////////////////////
// RuntimeId: 09494
// TypeInfo:  0x00000001428870E8
struct AimingWorldSpaceLockEfficiencyData
{
    Float32 m_EfficiencyYaw; //0x0000
    Float32 m_EfficiencyPitch; //0x0004
    Float32 m_EfficiencyYawZoom; //0x0008
    Float32 m_EfficiencyPitchZoom; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09484
// TypeInfo:  0x0000000142887448
struct SoldierHealthModuleBinding
{
    AntRef m_HeadShot; //0x0000
    AntRef m_LeftArmHit; //0x0014
    AntRef m_RightArmHit; //0x0028
    AntRef m_LeftLegHit; //0x003C
    AntRef m_RightLegHit; //0x0050
    AntRef m_OnGround; //0x0064
    AntRef m_DeathAnimationTriggered; //0x0078
    AntRef m_RandomAnimationIndex; //0x008C
    AntRef m_Sprinting; //0x00A0
    AntRef m_HitLeft; //0x00B4
    AntRef m_HitRight; //0x00C8
    AntRef m_HitFront; //0x00DC
    AntRef m_HitBack; //0x00F0
    AntRef m_DeathHitDirection; //0x0104
    AntRef m_Explosion; //0x0118
    AntRef m_Dead; //0x012C
    AntRef m_Revived; //0x0140
    AntRef m_RandomValue; //0x0154
    AntRef m_Pose; //0x0168
    AntRef m_RightSpeed; //0x017C
    AntRef m_ForwardSpeed; //0x0190
    AntRef m_CriticallyHit; //0x01A4
    AntRef m_InteractiveManDown; //0x01B8
    AntRef m_Health; //0x01CC
};//Size=0x01E0

////////////////////////////////////////
// RuntimeId: 09480
// TypeInfo:  0x0000000142887128
struct AnimatedWeaponBinding
{
    AntRef m_Deploy; //0x0000
    AntRef m_AltDeploy; //0x0014
    AntRef m_Undeploy; //0x0028
    AntRef m_QuickSwitch; //0x003C
    AntRef m_Reload; //0x0050
    AntRef m_ReloadStage; //0x0064
    AntRef m_ReloadShotgun; //0x0078
    AntRef m_Fire; //0x008C
    AntRef m_FireSingle; //0x00A0
    AntRef m_FireHoldAndRelease; //0x00B4
    AntRef m_FireSimple; //0x00C8
    AntRef m_FirstShotSpawned; //0x00DC
    AntRef m_PreFiring; //0x00F0
    AntRef m_BoltAction; //0x0104
    AntRef m_PumpAction; //0x0118
    AntRef m_MeleeAttack; //0x012C
    AntRef m_QuickThrow; //0x0140
    AntRef m_QuickThrowType; //0x0154
    AntRef m_AimBody; //0x0168
    AntRef m_AlwaysAimHead; //0x017C
    AntRef m_OneHanded; //0x0190
    AntRef m_OneHandedAiming; //0x01A4
    AntRef m_AimingEnabled; //0x01B8
    AntRef m_LowerGun; //0x01CC
    AntRef m_BreathControl; //0x01E0
    AntRef m_RflType; //0x01F4
    AntRef m_PstlType; //0x0208
    AntRef m_HgrType; //0x021C
    AntRef m_ATType; //0x0230
    AntRef m_ShgType; //0x0244
    AntRef m_LMGType; //0x0258
    AntRef m_BagType; //0x026C
    AntRef m_SnpType; //0x0280
    AntRef m_Zoom; //0x0294
    AntRef m_CantedZoom; //0x02A8
    AntRef m_MagnifierSightToggle; //0x02BC
    AntRef m_MagnifierSightIsUp; //0x02D0
    AntRef m_AimBodyWeight; //0x02E4
    AntRef m_DisableZoomToggleWeight; //0x02F8
    AntRef m_ZoomParameter; //0x030C
    AntRef m_ZoomScaleFactor; //0x0320
    AntRef m_Dispersion; //0x0334
    AntRef m_AimTargetPosBody; //0x0348
    AntRef m_ZoomOutSpeed; //0x035C
    AntRef m_ZoomInSpeed; //0x0370
    AntRef m_UnDeploySpeed; //0x0384
    AntRef m_DeploySpeed; //0x0398
    AntRef m_LightEnabled; //0x03AC
    AntRef m_FireModeChanged; //0x03C0
    AntRef m_AnimType; //0x03D4
    AntRef m_GunDown; //0x03E8
    AntRef m_AllowSwitchingToWeaponInWater; //0x03FC
    AntRef m_NumberOfBulletsLeftInGun; //0x0410
    AntRef m_BulletsLeftInGun; //0x0424
    AntRef m_AbortVehicleDeploy; //0x0438
    AntRef m_CustomizeWeapon; //0x044C
    AntRef m_CustomizeWeaponSwitch; //0x0460
    AntRef m_WeaponActionESIG; //0x0474
    AntRef m_IsSprinting; //0x0488
    AntRef m_PreparingToBash; //0x049C
    AntRef m_JustStartedSprinting; //0x04B0
    AntRef m_KickbackMagnitudeFactor; //0x04C4
    AntRef m_KickbackSpeedFactor; //0x04D8
    AntRef m_ZoomingTime; //0x04EC
    AntRef m_TriggerZoomGunTwitch; //0x0500
    AntRef m_WeaponChooserSignal; //0x0514
    AntRef m_WeaponClassSignal; //0x0528
    AntRef m_OffsetX; //0x053C
    AntRef m_OffsetY; //0x0550
    AntRef m_OffsetZ; //0x0564
    AntRef m_AIAllowFire; //0x0578
    AntRef m_AIAltFireFromAnt; //0x058C
};//Size=0x05A0

////////////////////////////////////////
// RuntimeId: 09478
// TypeInfo:  0x0000000142887148
struct Animated3pOnlyWeaponBinding
{
    AntRef m_Deploy3P; //0x0000
    AntRef m_HideWeapon3p; //0x0014
    AntRef m_WeaponAssembled3p; //0x0028
};//Size=0x003C

////////////////////////////////////////
// RuntimeId: 09476
// TypeInfo:  0x0000000142887168
struct Animated1pOnlyWeaponBinding
{
    AntRef m_UndeployFinished; //0x0000
    AntRef m_CameraFreeWeight; //0x0014
    AntRef m_Deploy1P; //0x0028
    AntRef m_HideWeapon1p; //0x003C
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 09400
// TypeInfo:  0x000000014287F598
struct ServerSoldierSelfHealMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09399
// TypeInfo:  0x000000014287F5B8
struct ServerSoldierManDownMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 09398
// TypeInfo:  0x000000014287F5D8
struct ServerSoldierOnInitMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09397
// TypeInfo:  0x000000014287F5F8
struct ServerSoldierChangingWeaponMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09396
// TypeInfo:  0x000000014287F618
struct ServerSoldierFiringMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09395
// TypeInfo:  0x000000014287F638
struct ServerSoldierDamagedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09394
// TypeInfo:  0x000000014287F658
struct ServerProjectileMissileDestroyedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09393
// TypeInfo:  0x000000014287F678
struct ServerProjectileMissileDamagedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 09392
// TypeInfo:  0x000000014287F698
struct ClientSoldierChangeCoverStateMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 09391
// TypeInfo:  0x000000014287F6B8
struct ClientSoldierOnLandMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09390
// TypeInfo:  0x000000014287F6D8
struct ClientSoldierOnJumpMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09367
// TypeInfo:  0x000000014287EB80
struct OriginResponseMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09366
// TypeInfo:  0x000000014287EBA0
struct OriginRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09303
// TypeInfo:  0x000000014287C8A0
struct OnlineProviderConfiguration
{
    GamePlatform m_Platform; //0x0000
    char _0x0004[4];
    CString m_ServiceName; //0x0008
    CString m_Client; //0x0010
    CString m_SKU; //0x0018
    CString m_Version; //0x0020
    Uint32 m_ServerSocketPacketSize; //0x0028
    Boolean m_IsServer; //0x002C
    char _0x002D[3];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09301
// TypeInfo:  0x000000014287C8C0
struct OnlinePlatformConfiguration
{
    GamePlatform m_Platform; //0x0000
    char _0x0004[4];
    OnlineServicesAsset* m_Services; //0x0008
    Array<PresenceBackendData*> m_ClientBackends; //0x0010
    Array<ServerBackendData*> m_ServerBackends; //0x0018
    Boolean m_IsFallback; //0x0020
    char _0x0021[7];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09291
// TypeInfo:  0x000000014287C900
struct OnlineEnvironmentUrlData
{
    CString m_Url; //0x0000
    OnlineEnvironment m_Environment; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09293
// TypeInfo:  0x000000014287C340
struct OnlineEnvironmentUrl
{
    Array<OnlineEnvironmentUrlData> m_Urls; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09295
// TypeInfo:  0x000000014287C8E0
struct OnlineEnvironmentConsoleUrlData
{
    GamePlatform m_Platform; //0x0000
    char _0x0004[4];
    OnlineEnvironmentUrl m_Url; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09297
// TypeInfo:  0x000000014287C320
struct OnlineEnvironmentConsoleUrl
{
    Array<OnlineEnvironmentConsoleUrlData> m_Urls; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09285
// TypeInfo:  0x000000014287C360
struct BlazeCreateGameParameters
{
    GameParametersData* m_Base; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09271
// TypeInfo:  0x000000014287C920
struct Ps4CountryAgeOverrides
{
    CString m_CountryCode; //0x0000
    Int32 m_AgeRequirement; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09273
// TypeInfo:  0x000000014287C380
struct Ps4AgeSettings
{
    Int32 m_DefaultAgeRequirement; //0x0000
    char _0x0004[4];
    Array<Ps4CountryAgeOverrides> m_AgeOverrides; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09269
// TypeInfo:  0x000000014287C3A0
struct Ps4TitleData
{
    CString m_TitleId; //0x0000
    CString m_TitleSecret; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09261
// TypeInfo:  0x000000014287C3C0
struct Ps3ServiceId
{
    CString m_SPID; //0x0000
    CString m_ProductCode; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09263
// TypeInfo:  0x000000014287C940
struct Ps3ServiceSettings
{
    CString m_Region; //0x0000
    CString m_ProductCode; //0x0008
    CString m_PrimaryProductCode; //0x0010
    Ps3ServiceId m_TicketingService; //0x0018
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09253
// TypeInfo:  0x000000014287C3E0
struct Ps3AgeLevels
{
    Int32 m_AgeLevel7; //0x0000
    Int32 m_AgeLevel8; //0x0004
    Int32 m_AgeLevel9; //0x0008
    Int32 m_AgeLevel10; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09255
// TypeInfo:  0x000000014287C980
struct Ps3ParentalLockAgeSettingsForCountry
{
    CString m_CountryCode; //0x0000
    Ps3AgeLevels m_AgeLevels; //0x0008
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09259
// TypeInfo:  0x000000014287C960
struct Ps3ParentalLockAgeSettings
{
    CString m_Region; //0x0000
    Ps3AgeLevels m_AgeLevels; //0x0008
    Ps3ParentalLockAgeSettingsOverrides* m_CountryOverrides; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 09211
// TypeInfo:  0x000000014287CA20
struct MatchmakingSizeConfiguration
{
    MatchmakingPlatform m_Platform; //0x0000
    char _0x0004[4];
    Array<CString> m_Settings; //0x0008
    Uint32 m_DesiredPlayerCount; //0x0010
    Uint32 m_MinPlayerCount; //0x0014
    Uint32 m_MaxPlayerCapacity; //0x0018
    char _0x001C[4];
    CString m_MinFitThreshold; //0x0020
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09233
// TypeInfo:  0x000000014287C420
struct MatchmakingFreePlayerSlotsRule
{
    Uint32 m_MaxFreePlayerSlots; //0x0000
    Uint32 m_MinFreePlayerSlots; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09231
// TypeInfo:  0x000000014287C440
struct MatchmakingSlotUtilizationRule
{
    Uint32 m_PreferredPercentage; //0x0000
    Uint32 m_MinPercentage; //0x0004
    Uint32 m_MaxPercentage; //0x0008
    char _0x000C[4];
    CString m_RangeOffsetListName; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 09227
// TypeInfo:  0x000000014287C9A0
struct MatchmakingMod
{
    Array<CString> m_Licenses; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09229
// TypeInfo:  0x000000014287C460
struct MatchmakingModRule
{
    Array<MatchmakingMod> m_Mods; //0x0000
    CString m_MinFitThresholdListName; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09225
// TypeInfo:  0x000000014287C9C0
struct MatchmakingUserExtendedDataRule
{
    CString m_Rule; //0x0000
    CString m_MinFitThresHold; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09221
// TypeInfo:  0x000000014287CA00
struct MatchmakingRuleString
{
    CString m_Value; //0x0000
    MatchmakingPlatform m_Platform; //0x0008
    char _0x000C[4];
    Array<CString> m_Licenses; //0x0010
    Boolean m_UseOnlyIfEmpty; //0x0018
    char _0x0019[7];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 09223
// TypeInfo:  0x000000014287C9E0
struct MatchmakingGenericRule
{
    CString m_Rule; //0x0000
    CString m_MinFitThresHold; //0x0008
    CString m_Setting; //0x0010
    Array<MatchmakingRuleString> m_DesiredValues; //0x0018
    Boolean m_IgnoreIfDefault; //0x0020
    Boolean m_MergeValues; //0x0021
    Boolean m_SortValues; //0x0022
    char _0x0023[5];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09219
// TypeInfo:  0x000000014287C480
struct MatchmakingRankedRule
{
    CString m_MinFitThreshold; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09217
// TypeInfo:  0x000000014287C4A0
struct MatchmakingPingSiteRule
{
    CString m_MinFitThreshold; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 09213
// TypeInfo:  0x000000014287C4E0
struct MatchmakingSizeRule
{
    CString m_Setting; //0x0000
    Array<MatchmakingSizeConfiguration> m_Configurations; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09209
// TypeInfo:  0x000000014287C500
struct MatchmakingVirtualizedRule
{
    CString m_MinFitThreshold; //0x0000
    MatchmakingVirtualizationMode m_VirtualizationMode; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09235
// TypeInfo:  0x000000014287C400
struct MatchmakingCriteria
{
    MatchmakingSizeRule m_SizeRule; //0x0000
    MatchmakingPingSiteRule m_PingSiteRule; //0x0010
    MatchmakingRankedRule m_RankedRule; //0x0018
    Array<MatchmakingGenericRule> m_GenericRules; //0x0020
    MatchmakingVirtualizedRule m_VirtualizedRule; //0x0028
    Array<MatchmakingUserExtendedDataRule> m_UEDRules; //0x0038
    MatchmakingModRule m_ModRule; //0x0040
    MatchmakingSlotUtilizationRule m_SlotUtilizationRule; //0x0050
    MatchmakingFreePlayerSlotsRule m_FreePlayerSlotsRule; //0x0068
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 09203
// TypeInfo:  0x000000014287C520
struct ServerBackendEjectHostMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09202
// TypeInfo:  0x000000014287C540
struct ServerBackendStatsDownloadFailMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09201
// TypeInfo:  0x000000014287C560
struct ServerGameManagerAvailableMapsChangedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09200
// TypeInfo:  0x000000014287C580
struct ServerGameManagerKickPlayerMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 09199
// TypeInfo:  0x000000014287C5A0
struct ServerGameManagerAddQueuedPlayerMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 09198
// TypeInfo:  0x000000014287C5C0
struct ServerGameManagerValidateBannerResponseMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 09197
// TypeInfo:  0x000000014287C5E0
struct ServerGameManagerValidateBannerRequestMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 09196
// TypeInfo:  0x000000014287C600
struct ServerGameManagerAddGameBanResponseMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 09195
// TypeInfo:  0x000000014287C620
struct ServerGameManagerAddGameBanRequestMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 09194
// TypeInfo:  0x000000014287C640
struct ServerGameManagerGetGameDataMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09193
// TypeInfo:  0x000000014287C660
struct ServerGameManagerRestartLevelRequestMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09192
// TypeInfo:  0x000000014287C680
struct ServerGameManagerGameDestructingMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09191
// TypeInfo:  0x000000014287C6A0
struct ServerGameManagerPlayerRemovedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09190
// TypeInfo:  0x000000014287C6C0
struct ServerGameManagerPlayerJoiningQueueMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 09189
// TypeInfo:  0x000000014287C6E0
struct ServerGameManagerCheckPlayerStatusMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 09188
// TypeInfo:  0x000000014287C700
struct ServerGameManagerPlayerJoiningMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09187
// TypeInfo:  0x000000014287C720
struct ServerGameManagerUpdateCapacityMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09186
// TypeInfo:  0x000000014287C740
struct ServerGameManagerGameParametersChangedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09185
// TypeInfo:  0x000000014287C760
struct ServerGameManagerChangeGameParametersMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09184
// TypeInfo:  0x000000014287C780
struct ServerGameManagerReconfigurableGameCreatedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09183
// TypeInfo:  0x000000014287C7A0
struct ServerGameManagerCreatingReconfigurableGameMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09182
// TypeInfo:  0x000000014287C7C0
struct ServerGameManagerGameResetMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09181
// TypeInfo:  0x000000014287C7E0
struct ServerGameManagerGameCreatedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09180
// TypeInfo:  0x000000014287C800
struct ServerGameManagerCreatingGameMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09179
// TypeInfo:  0x000000014287C820
struct ServerBackendFinalizingMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09178
// TypeInfo:  0x000000014287C840
struct ServerBackendDownloadCompleteMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09175
// TypeInfo:  0x000000014287CA40
struct LicenseInfo
{
    CString m_Name; //0x0000
    Boolean m_ClientOnly; //0x0008
    char _0x0009[7];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09165
// TypeInfo:  0x000000014287CA60
struct GameAttributeData
{
    CString m_Attribute; //0x0000
    CString m_Value; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09159
// TypeInfo:  0x0000000142879FB0
struct PresenceUserIdRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09158
// TypeInfo:  0x0000000142879FD0
struct PresenceUserIdMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09157
// TypeInfo:  0x0000000142879FF0
struct PresenceStorageRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09156
// TypeInfo:  0x000000014287A010
struct PresenceStorageMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09155
// TypeInfo:  0x000000014287A030
struct PresenceProfileInfoRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09154
// TypeInfo:  0x000000014287A050
struct PresenceProfileInfoMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09153
// TypeInfo:  0x000000014287A070
struct PresencePrivilegeRequestResultMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09152
// TypeInfo:  0x000000014287A090
struct PresencePrivilegeRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09151
// TypeInfo:  0x000000014287A0B0
struct PresencePlaygroupRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09150
// TypeInfo:  0x000000014287A0D0
struct PresencePlaygroupAttributesMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09149
// TypeInfo:  0x000000014287A0F0
struct PresencePlaygroupMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09148
// TypeInfo:  0x000000014287A110
struct PresenceMatchmakerMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09147
// TypeInfo:  0x000000014287A130
struct PresenceLivePartyMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09146
// TypeInfo:  0x000000014287A150
struct PresenceLicenseMetricMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09145
// TypeInfo:  0x000000014287A170
struct PresenceLicenseRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09144
// TypeInfo:  0x000000014287A190
struct PresenceLicenseMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09143
// TypeInfo:  0x000000014287A1B0
struct PresenceJoinResultMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09142
// TypeInfo:  0x000000014287A1D0
struct PresenceGameRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09141
// TypeInfo:  0x000000014287A1F0
struct PresenceGameQueueMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09140
// TypeInfo:  0x000000014287A210
struct PresenceGameMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09139
// TypeInfo:  0x000000014287A230
struct PresenceFriendsListManagerSettingsMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09138
// TypeInfo:  0x000000014287A250
struct PresenceFriendRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09137
// TypeInfo:  0x000000014287A270
struct PresenceFriendMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09136
// TypeInfo:  0x000000014287A290
struct PresenceConnectionRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09135
// TypeInfo:  0x000000014287A2B0
struct PresenceConnectionMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09134
// TypeInfo:  0x000000014287A2D0
struct PresenceBrowserRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09133
// TypeInfo:  0x000000014287A2F0
struct PresenceBlockListRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09132
// TypeInfo:  0x000000014287A310
struct PresenceBlockListMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09131
// TypeInfo:  0x000000014287A330
struct PresenceBlobRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09130
// TypeInfo:  0x000000014287A350
struct PresenceBlobMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09129
// TypeInfo:  0x000000014287A370
struct PresenceAchievementRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09128
// TypeInfo:  0x000000014287A390
struct OnlineInternalGameMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09123
// TypeInfo:  0x00000001428795C0
struct PresenceNickelRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09122
// TypeInfo:  0x00000001428795E0
struct PresenceNickelMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 09066
// TypeInfo:  0x0000000142877018
struct SkyCloudLayer
{
    Vec3 m_Color; //0x0000
    Float32 m_Altitude; //0x0010
    Float32 m_TileFactor; //0x0014
    Float32 m_Rotation; //0x0018
    Float32 m_Speed; //0x001C
    Float32 m_SunLightIntensity; //0x0020
    Float32 m_SunLightPower; //0x0024
    Float32 m_AmbientLightIntensity; //0x0028
    Float32 m_AlphaMul; //0x002C
    TextureAsset* m_Texture; //0x0030
    char _0x0038[8];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 03693
// TypeInfo:  0x00000001421490A0
struct Vec2
{
    Float32 m_x; //0x0000
    Float32 m_y; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 08988
// TypeInfo:  0x0000000142877038
struct GroundHeightData
{
    Float32 m_WorldSize; //0x0000
    Vec2 m_HeightSpan; //0x0004
    char _0x000C[4];
    Array<Uint16> m_Data; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 08917
// TypeInfo:  0x0000000142874080
struct VegetationEffectSlot
{
    EffectBlueprint* m_Effect; //0x0000
    Float32 m_StrengthMin; //0x0008
    Float32 m_StrengthMax; //0x000C
    Float32 m_SizeMin; //0x0010
    Float32 m_SizeMax; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 08908
// TypeInfo:  0x0000000142871F68
struct UIPremiumContentUpdateMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08907
// TypeInfo:  0x0000000142871F88
struct UIComponentDeferActionMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08906
// TypeInfo:  0x0000000142871FA8
struct UIComponentOnItemChangedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08905
// TypeInfo:  0x0000000142871FC8
struct UIComponentChangeCameraViewPointMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 08904
// TypeInfo:  0x0000000142871FE8
struct UIComponentSetSettingMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 08903
// TypeInfo:  0x0000000142872008
struct UIComponentLoadCompleteMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08902
// TypeInfo:  0x0000000142872028
struct UIReadyForUnloadMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08901
// TypeInfo:  0x0000000142872048
struct UISoldierChangeMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08898
// TypeInfo:  0x0000000142872088
struct UIAssetChangedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08897
// TypeInfo:  0x00000001428720A8
struct UIInputPressedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08896
// TypeInfo:  0x00000001428720C8
struct UIGraphExitedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08895
// TypeInfo:  0x00000001428720E8
struct UIScreenLoadedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08894
// TypeInfo:  0x0000000142872108
struct UIFirstPartyUIMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08893
// TypeInfo:  0x0000000142872128
struct UITransitionEffectStopMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08892
// TypeInfo:  0x0000000142872148
struct UITransitionEffectStartMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08891
// TypeInfo:  0x0000000142872168
struct UIExitToMenuReasonMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08890
// TypeInfo:  0x0000000142872188
struct UISpawnAllowedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08889
// TypeInfo:  0x00000001428721A8
struct UIVehicleHitUpdatedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 08888
// TypeInfo:  0x00000001428721C8
struct UISquadStatusChangedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08887
// TypeInfo:  0x00000001428721E8
struct UISoldierHitUpdatedMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 08886
// TypeInfo:  0x0000000142872208
struct UIReturnMouseToUIMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08885
// TypeInfo:  0x0000000142872228
struct UIPlayerVehicleHealthChangeMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08884
// TypeInfo:  0x0000000142872248
struct UILevelWarmUpTimerMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08883
// TypeInfo:  0x0000000142872268
struct UIInputStatusChangedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08882
// TypeInfo:  0x0000000142872288
struct UIHudWarningMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08881
// TypeInfo:  0x00000001428722A8
struct UIHudUpdateCrosshairMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08880
// TypeInfo:  0x00000001428722C8
struct UIHudToggleMapZoomMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08879
// TypeInfo:  0x00000001428722E8
struct UIHudShowVoteResultsMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08878
// TypeInfo:  0x0000000142872308
struct UIHudShowVoteMenuMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08877
// TypeInfo:  0x0000000142872328
struct UIHudOutputStaticMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08876
// TypeInfo:  0x0000000142872348
struct UIHudDistortHudMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08875
// TypeInfo:  0x0000000142872368
struct UIHudDebugPauseMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08874
// TypeInfo:  0x0000000142872388
struct UIHudChatMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 08873
// TypeInfo:  0x00000001428723A8
struct UIHudChangeInventoryWeaponMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08872
// TypeInfo:  0x00000001428723C8
struct UIHasSuppressedEnemyMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08871
// TypeInfo:  0x00000001428723E8
struct UIDamageGivenToEnemyMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 08870
// TypeInfo:  0x0000000142872408
struct UICycleRadioChannelMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08869
// TypeInfo:  0x0000000142872428
struct UIMatchImagesRetrievedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08868
// TypeInfo:  0x0000000142872448
struct UIRequestMatchImagesMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08867
// TypeInfo:  0x0000000142872468
struct UIVKBDInputDoneMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 08866
// TypeInfo:  0x0000000142872488
struct UISubtitleMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 08865
// TypeInfo:  0x00000001428724A8
struct UIMessageEntityMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 08864
// TypeInfo:  0x00000001428724C8
struct UIScreenCountChangeMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08863
// TypeInfo:  0x00000001428724E8
struct UIControllerDisconnectedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08862
// TypeInfo:  0x0000000142872508
struct UIControllerConnectedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08861
// TypeInfo:  0x0000000142872528
struct UIUserDisconnectedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08860
// TypeInfo:  0x0000000142872548
struct UIUserConnectedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08859
// TypeInfo:  0x0000000142872568
struct UIUserNotificationMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08858
// TypeInfo:  0x0000000142872588
struct UIUserSkippedLoginMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08857
// TypeInfo:  0x00000001428725A8
struct MemoryCardBootCheckMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08856
// TypeInfo:  0x00000001428725C8
struct MemoryCardFindEntriesDoneMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08855
// TypeInfo:  0x00000001428725E8
struct MemoryCardFindEntriesMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08854
// TypeInfo:  0x0000000142872608
struct MemoryCardSaveDoneMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08853
// TypeInfo:  0x0000000142872628
struct MemoryCardSaveMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08852
// TypeInfo:  0x0000000142872648
struct MemoryCardLoadDoneMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08851
// TypeInfo:  0x0000000142872668
struct MemoryCardLoadMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08850
// TypeInfo:  0x0000000142872688
struct MemoryCardDestroyedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08849
// TypeInfo:  0x00000001428726A8
struct MemoryCardInitializedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08848
// TypeInfo:  0x00000001428726C8
struct MemoryCardCreatedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08847
// TypeInfo:  0x00000001428726E8
struct MemoryCardPopupHideMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08846
// TypeInfo:  0x0000000142872708
struct MemoryCardPopupResponseMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08845
// TypeInfo:  0x0000000142872728
struct MemoryCardPopupRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08830
// TypeInfo:  0x0000000142872888
struct UIPopupButton
{
    UIInputAction m_InputConcept; //0x0000
    char _0x0004[4];
    CString m_Label; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08782
// TypeInfo:  0x00000001428728A8
struct WidgetEventQueryPair
{
    CString m_Name; //0x0000
    UIWidgetEventID m_Query; //0x0008
    char _0x000C[4];
    CString m_InstanceName; //0x0010
    Boolean m_IsOutput; //0x0018
    char _0x0019[7];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 08772
// TypeInfo:  0x00000001428728C8
struct UIDataSourceInfo
{
    CString m_DataName; //0x0000
    UIComponentData* m_DataCategory; //0x0008
    Int32 m_DataKey; //0x0010
    Boolean m_UseDirectAccess; //0x0014
    Boolean m_UpdateOnInitialize; //0x0015
    char _0x0016[2];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 08770
// TypeInfo:  0x0000000142872748
struct UISimpleDataSource
{
    UIComponentData* m_DataCategory; //0x0000
    Int32 m_DataKey; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08766
// TypeInfo:  0x00000001428728E8
struct UIWidgetProperty
{
    CString m_Name; //0x0000
    CString m_Value; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08752
// TypeInfo:  0x0000000142872908
struct InterruptFlow
{
    UIInterruptID m_interruptEnum; //0x0000
    char _0x0004[4];
    UIGraphAsset* m_interruptFlow; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08748
// TypeInfo:  0x0000000142872928
struct UIAudioEventMapping
{
    CString m_EventName; //0x0000
    SoundAsset* m_SoundAsset; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08728
// TypeInfo:  0x0000000142872948
struct UIResourceTableEntry
{
    ResourceRef m_Resource; //0x0000
    Uint32 m_Hash; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08720
// TypeInfo:  0x0000000142872968
struct UIFontMapping
{
    Array<CString> m_ScaleformFontName; //0x0000
    CString m_FontLongName; //0x0008
    Boolean m_Bold; //0x0010
    char _0x0011[7];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 08714
// TypeInfo:  0x0000000142872988
struct FontCollectionLookupEntry
{
    CString m_CollectionBasePath; //0x0000
    LanguageFormat m_Language; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08712
// TypeInfo:  0x00000001428729A8
struct UIBundleAssetState
{
    CString m_StateName; //0x0000
    UIState m_UIState; //0x0008
    char _0x000C[4];
    CString m_ResourceBundleName; //0x0010
    CString m_StatePath; //0x0018
    CString m_BundlePath; //0x0020
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08652
// TypeInfo:  0x000000014286DAE0
struct TerrainQuadDecalAtlasTile
{
    Uint32 m_TileIndexX; //0x0000
    Uint32 m_TileIndexY; //0x0004
    Uint32 m_TileCountX; //0x0008
    Uint32 m_TileCountY; //0x000C
    Boolean m_FlipX; //0x0010
    Boolean m_FlipY; //0x0011
    char _0x0012[2];
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 08640
// TypeInfo:  0x000000014286DCA0
struct RibbonPointData
{
    Vec4 m_UserMaskLeft; //0x0000
    Vec4 m_UserMaskRight; //0x0010
    Float32 m_Left; //0x0020
    Float32 m_Right; //0x0024
    char _0x0028[8];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08632
// TypeInfo:  0x000000014286DCC0
struct TerrainLayerShaderData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08630
// TypeInfo:  0x000000014286DCE0
struct MeshScatteringSpawnData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08616
// TypeInfo:  0x000000014286DD00
struct TerrainLayerMaskData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08604
// TypeInfo:  0x000000014286DD20
struct TerrainLayerCombinationDrawData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08602
// TypeInfo:  0x000000014286DD40
struct Surface3dDrawMethodData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08600
// TypeInfo:  0x000000014286DD60
struct MeshScatteringMaskScaleDrawMethodData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08598
// TypeInfo:  0x000000014286DD80
struct Surface2dDrawMethodData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08596
// TypeInfo:  0x000000014286DDA0
struct Surface2dDrawPassData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08594
// TypeInfo:  0x000000014286DDC0
struct TerrainLayerCombinationDrawPassData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08578
// TypeInfo:  0x000000014286DDE0
struct TerrainLayerProceduralMask
{
    Float32 m_AltitudeMin; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 08576
// TypeInfo:  0x000000014286DE00
struct TerrainGeoTexture
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08532
// TypeInfo:  0x000000014286DE20
struct RectangularCoverageData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 08516
// TypeInfo:  0x000000014286A6F8
struct PerformanceClientMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08515
// TypeInfo:  0x000000014286A718
struct PerformanceShaderMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08464
// TypeInfo:  0x000000014286ACB8
struct TerrainShaderParameter
{
    Uint32 m_ParameterHandle; //0x0000
    TerrainShaderParameterDataType m_ParameterType; //0x0004
    CString m_ParameterName; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08412
// TypeInfo:  0x000000014286AD38
struct BoolShaderParameter
{
    CString m_ParameterName; //0x0000
    Boolean m_Value; //0x0008
    char _0x0009[7];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08418
// TypeInfo:  0x000000014286ACD8
struct VectorArrayShaderParameter
{
    CString m_ParameterName; //0x0000
    ShaderParameterType m_ParameterType; //0x0008
    char _0x000C[4];
    Array<Vec4> m_Values; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 08416
// TypeInfo:  0x000000014286ACF8
struct TextureShaderParameter
{
    CString m_ParameterName; //0x0000
    TextureBaseAsset* m_Value; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08414
// TypeInfo:  0x000000014286AD18
struct VectorShaderParameter
{
    Vec4 m_Value; //0x0000
    CString m_ParameterName; //0x0010
    ShaderParameterType m_ParameterType; //0x0018
    char _0x001C[4];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 08424
// TypeInfo:  0x000000014286AB78
struct SurfaceShaderInstanceDataStruct
{
    SurfaceShaderBaseAsset* m_Shader; //0x0000
    Array<BoolShaderParameter> m_BoolParameters; //0x0008
    Array<VectorShaderParameter> m_VectorParameters; //0x0010
    Array<VectorArrayShaderParameter> m_VectorArrayParameters; //0x0018
    Array<TextureShaderParameter> m_TextureParameters; //0x0020
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 08396
// TypeInfo:  0x000000014286ABB8
struct PoissonRadialBlurData
{
    Float32 m_BlendFactor; //0x0000
    Vec2 m_PoissonDiscScale; //0x0004
    Float32 m_RadialScale; //0x000C
    Float32 m_RadialExponent; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 08394
// TypeInfo:  0x000000014286ABD8
struct ColorTintData
{
    Vec3 m_Contrast; //0x0000
    Vec3 m_Brightness; //0x0010
    Vec3 m_Saturation; //0x0020
    Float32 m_Hue; //0x0030
    char _0x0034[12];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 08342
// TypeInfo:  0x000000014286AD58
struct AnimatedPointCloudAttributeDesc
{
    PointCloudAttributeUsage m_Usage; //0x0000
    PointCloudAttributeQuantization m_IFrameQuantization; //0x0004
    PointCloudAttributeQuantization m_DFrameQuantization; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 08340
// TypeInfo:  0x000000014286AD78
struct VariationLink
{
    Uint64 m_VariationKey; //0x0000
    Uint32 m_ObjectVariationHash; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08332
// TypeInfo:  0x000000014286AD98
struct MeshVariationDatabaseRedirectEntry
{
    MeshAsset* m_Mesh; //0x0000
    Uint32 m_VariationAssetNameHash; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08328
// TypeInfo:  0x000000014286ADD8
struct MeshVariationDatabaseMaterial
{
    MeshMaterial* m_Material; //0x0000
    MeshMaterialVariation* m_MaterialVariation; //0x0008
    Array<TextureShaderParameter> m_TextureParameters; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 08330
// TypeInfo:  0x000000014286ADB8
struct MeshVariationDatabaseEntry
{
    MeshAsset* m_Mesh; //0x0000
    Uint32 m_VariationAssetNameHash; //0x0008
    char _0x000C[4];
    Array<MeshVariationDatabaseMaterial> m_Materials; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 08281
// TypeInfo:  0x00000001428671C8
struct DecalAtlasTile
{
    Float32 m_TileIndexX; //0x0000
    Float32 m_TileIndexY; //0x0004
    Float32 m_TileCountX; //0x0008
    Float32 m_TileCountY; //0x000C
    Boolean m_FlipX; //0x0010
    Boolean m_FlipY; //0x0011
    char _0x0012[2];
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 03707
// TypeInfo:  0x0000000142149160
struct AxisAlignedBox
{
    Vec3 m_min; //0x0000
    Vec3 m_max; //0x0010
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 08136
// TypeInfo:  0x0000000142863428
struct PhysicsComponentOnImpulseMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08135
// TypeInfo:  0x0000000142863448
struct PhysicsComponentOnDamageMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 08114
// TypeInfo:  0x00000001428635A8
struct AssetAabbs
{
    Array<AxisAlignedBox> m_PartAabb; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 08106
// TypeInfo:  0x0000000142863468
struct EndPointData
{
    Float32 m_Pos; //0x0000
    Float32 m_EndDamping; //0x0004
    Float32 m_SpringLength; //0x0008
    Float32 m_SpringAcceleration; //0x000C
    Float32 m_SpringDamping; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 08090
// TypeInfo:  0x00000001428635C8
struct FrictionScaleAtVelocity
{
    Float32 m_FrictionScale; //0x0000
    Float32 m_Velocity; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 08088
// TypeInfo:  0x00000001428635E8
struct SensitivityAtVelocity
{
    Float32 m_SteeringSensitivity; //0x0000
    Float32 m_Velocity; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 08086
// TypeInfo:  0x0000000142863488
struct SpringData
{
    Float32 m_Length; //0x0000
    Float32 m_Stiffness; //0x0004
    Float32 m_Damping; //0x0008
    Float32 m_ProgressiveStartRatio; //0x000C
    Float32 m_ProgressiveExponent; //0x0010
    Float32 m_VisualClipOffset; //0x0014
    Float32 m_AttachOffsetY; //0x0018
    Float32 m_DisabledStrenghModifier; //0x001C
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 08084
// TypeInfo:  0x00000001428634A8
struct SphereCollisionData
{
    Float32 m_ExtraRadius; //0x0000
    Float32 m_CounterNormalBrakeForceMod; //0x0004
    Boolean m_Enabled; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 08068
// TypeInfo:  0x00000001428634C8
struct Boost
{
    Float32 m_ForwardStrength; //0x0000
    Float32 m_ReverseStrength; //0x0004
    Float32 m_DissipationTime; //0x0008
    Float32 m_RecoveryTime; //0x000C
    Float32 m_CrawlStrength; //0x0010
    Float32 m_AccelerationScale; //0x0014
    Boolean m_ToggleIfOnPress; //0x0018
    char _0x0019[3];
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 08036
// TypeInfo:  0x00000001428634E8
struct InputThrottle
{
    Float32 m_ForwardSpeedSupressionAmount; //0x0000
    Float32 m_BackwardSpeedSupressionAmount; //0x0004
    Float32 m_SideSpeedSupressionAmount; //0x0008
    Float32 m_IgnoreBrakeSpeedThreshold; //0x000C
    Boolean m_Enabled; //0x0010
    char _0x0011[3];
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 08034
// TypeInfo:  0x0000000142863608
struct ConstantForceData
{
    Vec3 m_Value; //0x0000
    ForceCondition m_Condition; //0x0010
    ForceType m_TypeOfForce; //0x0014
    SpaceType m_Space; //0x0018
    char _0x001C[4];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 08026
// TypeInfo:  0x0000000142863628
struct StabilizerSettings
{
    StabilizerProperty m_Property; //0x0000
    Float32 m_Strength; //0x0004
    Float32 m_Radius; //0x0008
    Boolean m_Advanced; //0x000C
    Boolean m_Use2DRadiusTest; //0x000D
    Boolean m_UseInputOverride; //0x000E
    char _0x000F[1];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08024
// TypeInfo:  0x0000000142863508
struct AntiRollBars
{
    AntiRollBar* m_Front; //0x0000
    AntiRollBar* m_Rear; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08020
// TypeInfo:  0x0000000142863528
struct VehicleInputData
{
    Float32 m_ThrottleDeadzone; //0x0000
    Float32 m_BrakeDeadzone; //0x0004
    Float32 m_YawDeadzone; //0x0008
    Float32 m_PitchDeadzone; //0x000C
    Float32 m_RollDeadzone; //0x0010
    Float32 m_ThrottleInertiaOutDuration; //0x0014
    Float32 m_ThrottleInertiaInDuration; //0x0018
    Float32 m_ThrottleInertiaMinRatio; //0x001C
    Float32 m_BrakeInertiaOutDuration; //0x0020
    Float32 m_BrakeInertiaInDuration; //0x0024
    Float32 m_BrakeInertiaMinRatio; //0x0028
    Float32 m_YawInertiaOutDuration; //0x002C
    Float32 m_YawInertiaInDuration; //0x0030
    Float32 m_YawInertiaMinRatio; //0x0034
    Float32 m_PitchInertiaOutDuration; //0x0038
    Float32 m_PitchInertiaInDuration; //0x003C
    Float32 m_PitchInertiaMinRatio; //0x0040
    Float32 m_RollInertiaOutDuration; //0x0044
    Float32 m_RollInertiaInDuration; //0x0048
    Float32 m_RollInertiaMinRatio; //0x004C
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 07988
// TypeInfo:  0x0000000142863548
struct SpeedModifierData
{
    Float32 m_ForwardConstant; //0x0000
    Float32 m_BackwardConstant; //0x0004
    Float32 m_LeftConstant; //0x0008
    Float32 m_RightConstant; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07984
// TypeInfo:  0x0000000142863648
struct PoseTransitionTime
{
    CharacterPoseType m_ToPose; //0x0000
    Float32 m_TransitionTime; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07978
// TypeInfo:  0x0000000142863668
struct CharacterPoseConstraintsData
{
    Boolean m_StandPose; //0x0000
    Boolean m_CrouchPose; //0x0001
    Boolean m_PronePose; //0x0002
};//Size=0x0003

////////////////////////////////////////
// RuntimeId: 07976
// TypeInfo:  0x0000000142863568
struct LookConstraintsData
{
    Float32 m_MinLookYaw; //0x0000
    Float32 m_MaxLookYaw; //0x0004
    Float32 m_MinLookPitch; //0x0008
    Float32 m_MaxLookPitch; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07964
// TypeInfo:  0x0000000142860970
struct EdgeModelInstance
{
    LinearTransform m_Transform; //0x0000
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 07948
// TypeInfo:  0x00000001428609B0
struct ClothStateSetupTransitionLookup
{
    Uint32 m_FirstTransitionableLodIndex; //0x0000
    Uint32 m_TransitionableLodCount; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07950
// TypeInfo:  0x0000000142860990
struct ClothStateSetupTransition
{
    Uint32 m_TransitionLodIndex; //0x0000
    Uint32 m_TransitionLodStateIndex; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07952
// TypeInfo:  0x0000000142860950
struct ClothStatesSetup
{
    Array<Uint32> m_States; //0x0000
    Array<ClothStateSetupTransitionLookup> m_StatesTransitionLookups; //0x0008
    Array<ClothStateSetupTransition> m_StatesTransitions; //0x0010
    Uint32 m_EmptyState; //0x0018
    char _0x001C[4];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07946
// TypeInfo:  0x00000001428609D0
struct ClothBoneTableEntry
{
    CString m_BoneName; //0x0000
    Uint32 m_TransformIndex; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07944
// TypeInfo:  0x00000001428609F0
struct ClothSectionMapping
{
    CString m_ClothMeshName; //0x0000
    Array<Uint32> m_SubsetIds; //0x0008
    Uint32 m_LodIndex; //0x0010
    char _0x0014[4];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 07932
// TypeInfo:  0x0000000142860088
struct SpikeInternalMessagePartMessage
{
    char _0x0000[120];
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 07931
// TypeInfo:  0x00000001428600A8
struct SpikeInternalMessageWrapperMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 07926
// TypeInfo:  0x000000014285FFB0
struct CoreDemoStatusMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07923
// TypeInfo:  0x000000014285FE30
struct MovieAsyncUnloadMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07918
// TypeInfo:  0x000000014285F300
struct AntAnimatableComponentMeshData
{
    AntAnimatableComponentMeshRenderType m_MeshRenderType; //0x0000
    AntAnimatableComponentMeshRenderContext m_MeshRenderContext; //0x0004
    MeshAsset* m_Mesh; //0x0008
    Float32 m_CameraRelativeScaleX; //0x0010
    Float32 m_CameraRelativeScaleY; //0x0014
    Float32 m_CameraRelativeScaleZ; //0x0018
    Float32 m_CameraRelativeOffsetX; //0x001C
    Float32 m_CameraRelativeOffsetY; //0x0020
    Float32 m_CameraRelativeOffsetZ; //0x0024
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03859
// TypeInfo:  0x00000001427FE9E0
struct AntAnimatableData
{
    AntRef m_Actor; //0x0000
    AntRef m_SceneOpMatrix; //0x0014
    ProceduralAwarenessAntRefs* m_ProceduralAwareness; //0x0028
    AntRef m_RightHandEffectorDisableOverride; //0x0030
    AntRef m_LeftHandEffectorDisableOverride; //0x0044
    MasterSkeletonAsset* m_MasterSkeletonAsset; //0x0058
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 07904
// TypeInfo:  0x000000014285F2A0
struct LodBinding
{
    AntRef m_DisableControllerUpdate; //0x0000
    AntRef m_DisablePoseUpdate; //0x0014
    AntRef m_DistanceFromCamera; //0x0028
    AntRef m_AnimatableInstanceId; //0x003C
    AntRef m_ResetController; //0x0050
};//Size=0x0064

////////////////////////////////////////
// RuntimeId: 07896
// TypeInfo:  0x000000014285F320
struct PoseConstraintsData
{
    Boolean m_StandPose; //0x0000
    Boolean m_CrouchPose; //0x0001
    Boolean m_PronePose; //0x0002
};//Size=0x0003

////////////////////////////////////////
// RuntimeId: 07894
// TypeInfo:  0x000000014285F340
struct AimingConstraintsData
{
    Float32 m_MinYaw; //0x0000
    Float32 m_MaxYaw; //0x0004
    Float32 m_MinPitch; //0x0008
    Float32 m_MaxPitch; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07842
// TypeInfo:  0x000000014285F360
struct DataVisualizerValue
{
    CString m_Value; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07826
// TypeInfo:  0x000000014285D3A0
struct WeaponModifierCore
{
    Int32 m_DummyToMakeFrostEDcompile; //0x0000
    char _0x0004[140];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 07808
// TypeInfo:  0x000000014285D3C0
struct WeaponMiscModifierSettings
{
    Boolean m_EnableBreathControl; //0x0000
    Boolean m_CanBeInSupportedShooting; //0x0001
    Boolean m_UnZoomOnBoltAction; //0x0002
    Boolean m_HoldBoltActionUntilZoomRelease; //0x0003
    Boolean m_IsSilenced; //0x0004
};//Size=0x0005

////////////////////////////////////////
// RuntimeId: 07792
// TypeInfo:  0x000000014285D100
struct ArtilleryDispersionData
{
    Float32 m_MaxDispersion; //0x0000
    Float32 m_DispersionAimMove; //0x0004
    Float32 m_DispersionAimMoveThreshold; //0x0008
    Float32 m_DispersionFiring; //0x000C
    Float32 m_DispersionDeployment; //0x0010
    Float32 m_DecreasePerSecond; //0x0014
    Boolean m_DispersionActive; //0x0018
    char _0x0019[3];
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 07774
// TypeInfo:  0x000000014285D140
struct RumbleFiringData
{
    Float32 m_LowRumble; //0x0000
    Float32 m_HighRumble; //0x0004
    Float32 m_RumbleDuration; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 07764
// TypeInfo:  0x000000014285D1C0
struct FiringDispersionData
{
    Float32 m_MinAngle; //0x0000
    Float32 m_MaxAngle; //0x0004
    Float32 m_IncreasePerShot; //0x0008
    Float32 m_DecreasePerSecond; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07766
// TypeInfo:  0x000000014285D1A0
struct FireEffectData
{
    Vec3 m_Offset; //0x0000
    Vec3 m_Rotation; //0x0010
    Vec3 m_ZoomOffset; //0x0020
    Vec3 m_ZoomRotation; //0x0030
    EffectBlueprint* m_Effect; //0x0040
    Boolean m_UseZoomOffset; //0x0048
    Boolean m_UseZoomRotation; //0x0049
    Boolean m_DisableDuringZoom; //0x004A
    Boolean m_UpdateTransform; //0x004B
    Boolean m_StopLoopingEffects; //0x004C
    char _0x004D[3];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 07768
// TypeInfo:  0x000000014285D180
struct OverHeatData
{
    FireEffectData m_OverHeatEffect; //0x0000
    Float32 m_HeatPerBullet; //0x0050
    Float32 m_HeatDropPerSecond; //0x0054
    Float32 m_OverHeatPenaltyTime; //0x0058
    Float32 m_OverHeatThreshold; //0x005C
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 07770
// TypeInfo:  0x000000014285D160
struct WeaponDispersion
{
    FiringDispersionData m_StandDispersion; //0x0000
    FiringDispersionData m_CrouchDispersion; //0x0010
    FiringDispersionData m_ProneDispersion; //0x0020
    Float32 m_JumpDispersionAngle; //0x0030
    Float32 m_ProneTransitionDispersionAngle; //0x0034
    Float32 m_MoveDispersionAngle; //0x0038
    Float32 m_MoveZoomedDispersionAngle; //0x003C
    Float32 m_DecreasePerSecond; //0x0040
};//Size=0x0044

////////////////////////////////////////
// RuntimeId: 07750
// TypeInfo:  0x000000014285D240
struct HoldAndReleaseData
{
    Float32 m_MaxHoldTime; //0x0000
    Float32 m_MinPowerModifier; //0x0004
    Float32 m_MaxPowerModifier; //0x0008
    Float32 m_PowerIncreasePerSecond; //0x000C
    Float32 m_Delay; //0x0010
    Float32 m_KilledHoldingPowerModifier; //0x0014
    Boolean m_ForceFireWhenKilledHolding; //0x0018
    char _0x0019[3];
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 07760
// TypeInfo:  0x000000014285D200
struct RecoilData
{
    Float32 m_MaxRecoilAngleX; //0x0000
    Float32 m_MinRecoilAngleX; //0x0004
    Float32 m_MaxRecoilAngleY; //0x0008
    Float32 m_MinRecoilAngleY; //0x000C
    Float32 m_MaxRecoilAngleZ; //0x0010
    Float32 m_MinRecoilAngleZ; //0x0014
    Float32 m_MaxRecoilFov; //0x0018
    Float32 m_MinRecoilFov; //0x001C
    Boolean m_RecoilFollowsDispersion; //0x0020
    char _0x0021[3];
};//Size=0x0024

////////////////////////////////////////
// RuntimeId: 07752
// TypeInfo:  0x000000014285D220
struct BoltActionData
{
    Float32 m_BoltActionDelay; //0x0000
    Float32 m_BoltActionTime; //0x0004
    Boolean m_HoldBoltActionUntilFireRelease; //0x0008
    Boolean m_HoldBoltActionUntilZoomRelease; //0x0009
    Boolean m_ForceBoltActionOnFireTrigger; //0x000A
    Boolean m_UnZoomOnBoltAction; //0x000B
    Boolean m_ReturnToZoomAfterBoltAction; //0x000C
    char _0x000D[3];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07762
// TypeInfo:  0x000000014285D1E0
struct FireLogicData
{
    HoldAndReleaseData m_HoldAndRelease; //0x0000
    BoltActionData m_BoltAction; //0x001C
    RecoilData m_Recoil; //0x002C
    Int32 m_FireInputAction; //0x0050
    Int32 m_ReloadInputAction; //0x0054
    Int32 m_CycleFireModeInputAction; //0x0058
    Float32 m_TriggerPullWeight; //0x005C
    Float32 m_RateOfFire; //0x0060
    Float32 m_RateOfFireForBurst; //0x0064
    Float32 m_DelayBetweenBursts; //0x0068
    Float32 m_ClientFireRateMultiplier; //0x006C
    Float32 m_ReloadDelay; //0x0070
    Float32 m_ReloadTime; //0x0074
    Array<Float32> m_ReloadTimerArray; //0x0078
    Float32 m_ReloadTimeBulletsLeft; //0x0080
    Float32 m_ReloadThreshold; //0x0084
    Float32 m_PreFireDelay; //0x0088
    Float32 m_PreFireDelayZoomed; //0x008C
    Float32 m_PreFireRequireHold; //0x0090
    Float32 m_AutomaticDelay; //0x0094
    ReloadLogic m_ReloadLogic; //0x0098
    ReloadType m_ReloadType; //0x009C
    FireLogicType m_FireLogicType; //0x00A0
    char _0x00A4[4];
    Array<FireLogicType> m_FireLogicTypeArray; //0x00A8
    Boolean m_HoldOffReloadUntilFireRelease; //0x00B0
    Boolean m_HoldOffReloadUntilZoomRelease; //0x00B1
    Boolean m_ForceReloadActionOnFireTrigger; //0x00B2
    Boolean m_AlwaysAutoReload; //0x00B3
    Boolean m_ZoomTransitionDisableFire; //0x00B4
    char _0x00B5[3];
};//Size=0x00B8

////////////////////////////////////////
// RuntimeId: 07744
// TypeInfo:  0x000000014285D400
struct InitialDirectionScaleByPitchData
{
    Vec3 m_InitialDirectionScale; //0x0000
    Float32 m_Pitch; //0x0010
    char _0x0014[12];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07746
// TypeInfo:  0x000000014285D3E0
struct InitialSpeedScaleByPitchData
{
    Vec3 m_InitialSpeedScale; //0x0000
    Float32 m_Pitch; //0x0010
    char _0x0014[12];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07748
// TypeInfo:  0x000000014285D260
struct ShotConfigData
{
    Vec3 m_InitialPosition; //0x0000
    Vec3 m_InitialDirection; //0x0010
    Vec3 m_InitialSpeed; //0x0020
    Array<InitialDirectionScaleByPitchData> m_InitialDirectionScaleByPitch; //0x0030
    Array<InitialSpeedScaleByPitchData> m_InitialSpeedScaleByPitch; //0x0038
    Float32 m_InheritWeaponSpeedAmount; //0x0040
    char _0x0044[4];
    ExplosionEntityData* m_MuzzleExplosion; //0x0048
    ProjectileEntityData* m_ProjectileData; //0x0050
    ProjectileEntityData* m_SecondaryProjectileData; //0x0058
    ProjectileBlueprint* m_Projectile; //0x0060
    ProjectileBlueprint* m_SecondaryProjectile; //0x0068
    Float32 m_SpawnDelay; //0x0070
    Float32 m_SpawnDelayZoomed; //0x0074
    Uint32 m_NumberOfBulletsPerShell; //0x0078
    Uint32 m_NumberOfBulletsPerShot; //0x007C
    Uint32 m_NumberOfBulletsPerBurst; //0x0080
    Boolean m_RelativeTargetAiming; //0x0084
    Boolean m_ForceSpawnToCamera; //0x0085
    Boolean m_SpawnVisualAtWeaponBone; //0x0086
    Boolean m_ActiveForceSpawnToCamera; //0x0087
    char _0x0088[8];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 07742
// TypeInfo:  0x000000014285D420
struct HealingSphereData
{
    Float32 m_Radius; //0x0000
    Float32 m_HealthIncSpeed; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07738
// TypeInfo:  0x000000014285D280
struct NearTargetDetonationData
{
    Float32 m_DetonationRadius; //0x0000
    Float32 m_MaxDetonationDelay; //0x0004
    Float32 m_MinDetonationDelay; //0x0008
    Boolean m_DetonateNearTarget; //0x000C
    char _0x000D[3];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07736
// TypeInfo:  0x000000014285D2A0
struct MissileUnguidedData
{
    Vec2 m_StaticPosition; //0x0000
    Vec2 m_TargetPositionOffset; //0x0008
    Boolean m_UseStaticPosition; //0x0010
    Boolean m_UseTargetPosition; //0x0011
    char _0x0012[2];
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 07734
// TypeInfo:  0x000000014285D2C0
struct MissileLockableInfoData
{
    Float32 m_HeatSignature; //0x0000
    Float32 m_RadarSignature; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07730
// TypeInfo:  0x000000014285D2E0
struct LockingAndHomingData
{
    WarnTarget m_WarnLock; //0x0000
    Boolean m_IsHoming; //0x0004
    Boolean m_IsGuided; //0x0005
    Boolean m_IsGuidedWhenZoomed; //0x0006
    Boolean m_IsGuidedHoming; //0x0007
    Boolean m_FireOnlyWhenLockedOn; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 07728
// TypeInfo:  0x000000014285D440
struct ZoomLevelLockData
{
    Float32 m_OutlineTaggedDistance; //0x0000
    LockType m_LockType; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07712
// TypeInfo:  0x000000014285D300
struct AmmoConfigData
{
    Int32 m_MagazineCapacity; //0x0000
    Int32 m_NumberOfMagazines; //0x0004
    Uint32 m_TraceFrequency; //0x0008
    Uint32 m_AmmoPickupMinAmount; //0x000C
    Uint32 m_AmmoPickupMaxAmount; //0x0010
    Float32 m_AutoReplenishDelay; //0x0014
    Float32 m_AmmoBagPickupDelayMultiplier; //0x0018
    Int32 m_AmmoBagPickupAmount; //0x001C
    Boolean m_AutoReplenishMagazine; //0x0020
    Boolean m_StartUnloaded; //0x0021
    char _0x0022[2];
};//Size=0x0024

////////////////////////////////////////
// RuntimeId: 07694
// TypeInfo:  0x000000014285D360
struct CannedAnimationBinding
{
    AntRef m_LevelIndex; //0x0000
    AntRef m_ScenarioIndex; //0x0014
    AntRef m_ActorIndex; //0x0028
    AntRef m_PartIndex; //0x003C
    AntRef m_TriggerCannedAnimation; //0x0050
    AntRef m_ExitCannedAnimation; //0x0064
    AntRef m_ExternalTime; //0x0078
    AntRef m_BlendValue; //0x008C
    AntRef m_AdvanceScenario; //0x00A0
    AntRef m_EnteredLoop; //0x00B4
    AntRef m_AlmostFinished; //0x00C8
};//Size=0x00DC

////////////////////////////////////////
// RuntimeId: 07692
// TypeInfo:  0x000000014285D380
struct WarpAnimationBinding
{
    AntRef m_ConnectJointGroup; //0x0000
    AntRef m_ConnectJointWeight; //0x0014
    AntRef m_EnableAlign; //0x0028
    AntRef m_DisableCulling; //0x003C
    AntRef m_TranslationYWarpTolerance; //0x0050
    AntRef m_AttachToAnimatableInstanceId; //0x0064
    AntRef m_JoinAttachment; //0x0078
};//Size=0x008C

////////////////////////////////////////
// RuntimeId: 07665
// TypeInfo:  0x0000000142857350
struct VehicleCameraControlBinding
{
    AntRef m_EnableAnimatedVehicleCamera; //0x0000
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 07663
// TypeInfo:  0x0000000142857370
struct VehicleEntryListenerBinding
{
    AntRef m_InVehicle; //0x0000
    AntRef m_InOpenEntry; //0x0014
    AntRef m_VehicleEntryFire; //0x0028
    AntRef m_VehicleEntryYaw; //0x003C
    AntRef m_VehicleEntryRelativeYaw; //0x0050
    AntRef m_VehicleEntryPitch; //0x0064
    AntRef m_VehicleEntryRoll; //0x0078
    AntRef m_VehicleEntryRotation; //0x008C
    AntRef m_VehicleEntryForceX; //0x00A0
    AntRef m_VehicleEntryForceY; //0x00B4
    AntRef m_VehicleEntryForceZ; //0x00C8
    AntRef m_VehicleEntryIndex; //0x00DC
    AntRef m_VehicleEntryIndexUpdated; //0x00F0
    AntRef m_VehicleOpenEntryIndex; //0x0104
    AntRef m_InVehicleRetrigger; //0x0118
    AntRef m_VehicleEntryChooserIndex; //0x012C
};//Size=0x0140

////////////////////////////////////////
// RuntimeId: 07661
// TypeInfo:  0x0000000142857390
struct ClientCameraToComponentsInitMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07660
// TypeInfo:  0x00000001428573B0
struct VehicleToComponentsStartDisabledDamagedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 07659
// TypeInfo:  0x00000001428573D0
struct ClientVehicleToComponentsHealthChangedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07654
// TypeInfo:  0x00000001428573F0
struct NormalizeSettings
{
    Float32 m_Minimum; //0x0000
    Float32 m_Maximum; //0x0004
    Float32 m_Lower; //0x0008
    Float32 m_Upper; //0x000C
    Float32 m_Velocity; //0x0010
    Boolean m_Normalize; //0x0014
    char _0x0015[3];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 07650
// TypeInfo:  0x0000000142857410
struct VehicleLockableInfoData
{
    Float32 m_HeatSignature; //0x0000
    Float32 m_RadarSignature; //0x0004
    Float32 m_LowAltitudeHeight; //0x0008
    Float32 m_LowAltitudeHeatSignature; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07648
// TypeInfo:  0x0000000142857430
struct AngleOfImpactData
{
    Float32 m_Zone12Delimiter; //0x0000
    Float32 m_Zone23Delimiter; //0x0004
    Float32 m_Zone1Multiplier; //0x0008
    Float32 m_Zone2Multiplier; //0x000C
    Float32 m_Zone3Multiplier; //0x0010
    Boolean m_Enabled; //0x0014
    char _0x0015[3];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 07646
// TypeInfo:  0x0000000142857450
struct MPModeData
{
    Int32 m_VehiclePoints; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 07644
// TypeInfo:  0x0000000142857470
struct VehicleHealthZoneData
{
    Float32 m_MaxHealth; //0x0000
    Float32 m_MaxShieldHealth; //0x0004
    Float32 m_MinDamageAngle; //0x0008
    Float32 m_DamageAngleMultiplier; //0x000C
    Curve2D* m_DamageAngleMultiplierCurve; //0x0010
    Float32 m_VerticalFactor; //0x0018
    Boolean m_UseDamageAngleCalculation; //0x001C
    char _0x001D[3];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07642
// TypeInfo:  0x0000000142857490
struct VehicleHudData
{
    Vec3 m_CustomizationOffset; //0x0000
    VehicleCustomizationAsset* m_Customization; //0x0010
    UIHudIcon m_MinimapIcon; //0x0018
    char _0x001C[4];
    CString m_IconName; //0x0020
    TextureAsset* m_Texture; //0x0028
    Uint32 m_VehicleItemHash; //0x0030
    Boolean m_RotateInMap; //0x0034
    Boolean m_ShowHealth; //0x0035
    char _0x0036[10];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05312
// TypeInfo:  0x0000000142820808
struct MaterialDecl
{
    Uint32 m_Packed; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 07626
// TypeInfo:  0x00000001428577F0
struct CameraRelativeControlPerSpeedData
{
    Float32 m_SpeedThreshold; //0x0000
    Float32 m_WorldSpaceLockEfficiency; //0x0004
    Float32 m_WorldSpaceLockEfficiencyAway; //0x0008
    Float32 m_ThrottleForSteeringHelp; //0x000C
    Float32 m_ThrottleForSteeringHelpStrength; //0x0010
    Float32 m_ThrottleHold; //0x0014
    Float32 m_MinInputMagnitude; //0x0018
    Float32 m_ThrottleExponent; //0x001C
    Float32 m_TurningExponent; //0x0020
    Float32 m_FullTurningThreshold; //0x0024
    Float32 m_FullTurningBlending; //0x0028
    Float32 m_ExtraForwardZoneAngle; //0x002C
    Float32 m_AngularYawConstraint; //0x0030
    Boolean m_UseInForwardAndNeutralGears; //0x0034
    Boolean m_UseInReverseGear; //0x0035
    Boolean m_UseInBoost; //0x0036
    Boolean m_UseNotInBoost; //0x0037
    Boolean m_InvertExtraForwardZoneIfBackwards; //0x0038
    Boolean m_InvertExtraForwardZoneOnSideFacingCamera; //0x0039
    char _0x003A[2];
};//Size=0x003C

////////////////////////////////////////
// RuntimeId: 07620
// TypeInfo:  0x00000001428574B0
struct LandingGearConditionData
{
    Float32 m_Height; //0x0000
    Float32 m_Velocity; //0x0004
    Float32 m_Angle; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 07608
// TypeInfo:  0x0000000142857810
struct TurretRotationInfo
{
    RotationAxis m_RotationAxis; //0x0000
    RotationChannel m_Channel; //0x0004
    Float32 m_MaxRotation; //0x0008
    Float32 m_MinRotation; //0x000C
    Float32 m_PhaseOffset; //0x0010
    Boolean m_NormalizeRotation; //0x0014
    Boolean m_InvertRotation; //0x0015
    char _0x0016[2];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 07596
// TypeInfo:  0x00000001428574D0
struct RotorModelData
{
    Float32 m_RotationRpm; //0x0000
    Uint32 m_PartIndex; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07572
// TypeInfo:  0x0000000142857830
struct UnlockIdTable
{
    Array<Uint32> m_Identifiers; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07570
// TypeInfo:  0x0000000142857850
struct BasicUnlockInfo
{
    Guid m_UnlockGuid; //0x0000
    Uint32 m_Identifier; //0x0010
    Uint32 m_UnlockScore; //0x0014
    Array<CString> m_Licenses; //0x0018
    Array<CString> m_AdditionalLicenses; //0x0020
    CString m_PersistentStorageCode; //0x0028
    CString m_StringId; //0x0030
    Boolean m_IgnoreAllUnlocked; //0x0038
    Boolean m_BypassLicenseCheckAllUnlocked; //0x0039
    char _0x003A[6];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 07558
// TypeInfo:  0x0000000142857870
struct UnlockAssetPair
{
    UnlockAssetBase* m_Second; //0x0000
    UnlockAssetBase* m_Result; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07424
// TypeInfo:  0x0000000142857650
struct UIElementColor
{
    Vec3 m_Rgb; //0x0000
    Float32 m_Alpha; //0x0010
    char _0x0014[4];
    CString m_PropertyName; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07484
// TypeInfo:  0x0000000142857530
struct UIElementInclusionSettings
{
    Array<CString> m_CustomInclusionCritera; //0x0000
    Boolean m_IsSingleplayerLayer; //0x0008
    Boolean m_IsMultiplayerLayer; //0x0009
    Boolean m_IsWin32Layer; //0x000A
    Boolean m_IsXenonLayer; //0x000B
    Boolean m_IsPs3Layer; //0x000C
    Boolean m_IsGen4aLayer; //0x000D
    Boolean m_IsGen4bLayer; //0x000E
    Boolean m_IsSDLayer; //0x000F
    Boolean m_IsHDLayer; //0x0010
    Boolean m_IsAdvanced; //0x0011
    char _0x0012[6];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 07482
// TypeInfo:  0x0000000142857890
struct UIElementEditorSettings
{
    Float32 m_Opacity; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 07462
// TypeInfo:  0x0000000142857550
struct UIElementGradient
{
    UIElementColor m_TopLeftColor; //0x0000
    UIElementColor m_TopRightColor; //0x0020
    UIElementColor m_BottomLeftColor; //0x0040
    UIElementColor m_BottomRightColor; //0x0060
};//Size=0x0080

////////////////////////////////////////
// RuntimeId: 07420
// TypeInfo:  0x0000000142857690
struct UIDataSource
{
    UIComponentData* m_DataCategory; //0x0000
    Int32 m_DataKey; //0x0008
    char _0x000C[4];
    CString m_SchematicsProperty; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 07458
// TypeInfo:  0x0000000142857590
struct UIElementTransform
{
    Vec3 m_Rotation; //0x0000
    Vec3 m_RotationPivot; //0x0010
    Float32 m_Z; //0x0020
    char _0x0024[4];
    CString m_PropertyName; //0x0028
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07456
// TypeInfo:  0x00000001428575B0
struct UIElementAnchor
{
    Float32 m_X; //0x0000
    Float32 m_Y; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07454
// TypeInfo:  0x00000001428575D0
struct UIElementSize
{
    Float32 m_X; //0x0000
    Float32 m_Y; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07452
// TypeInfo:  0x00000001428575F0
struct UIElementOffset
{
    Float32 m_X; //0x0000
    Float32 m_Y; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07450
// TypeInfo:  0x0000000142857610
struct UIElementRectExpansion
{
    Float32 m_X; //0x0000
    Float32 m_Y; //0x0004
    Float32 m_Width; //0x0008
    Float32 m_Height; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07448
// TypeInfo:  0x00000001428578B0
struct UIElementRect
{
    Float32 m_X; //0x0000
    Float32 m_Y; //0x0004
    Float32 m_Width; //0x0008
    Float32 m_Height; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07444
// TypeInfo:  0x00000001428578D0
struct UIElementTextEntry
{
    UITextEntryType m_TextType; //0x0000
    char _0x0004[4];
    CString m_Text; //0x0008
    CString m_FloatFormat; //0x0010
    UIDataSource m_DataSource; //0x0018
    Boolean m_UseLocalization; //0x0030
    char _0x0031[7];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 07428
// TypeInfo:  0x0000000142857630
struct UIElementFont
{
    CString m_ScaleformFontName; //0x0000
    Float32 m_FontSize; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07426
// TypeInfo:  0x00000001428578F0
struct UIElementLineStyle
{
    UIElementColor m_Color; //0x0000
    Float32 m_Width; //0x0020
    char _0x0024[12];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07506
// TypeInfo:  0x0000000142857510
struct UIElementBitmapDistanceFieldParams
{
    UIElementColor m_OutlineColor; //0x0000
    Float32 m_AlphaThreshold; //0x0020
    Float32 m_DistanceScale; //0x0024
    Float32 m_OutlineInner; //0x0028
    Float32 m_OutlineOuter; //0x002C
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07422
// TypeInfo:  0x0000000142857670
struct UICompareDataSource
{
    UIComponentData* m_DataCategory; //0x0000
    Int32 m_DataKey; //0x0008
    char _0x000C[4];
    CString m_SchematicsProperty; //0x0010
    CString m_CompareValue; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07460
// TypeInfo:  0x0000000142857570
struct UIElementText
{
    CString m_Sid; //0x0000
    Array<UIElementTextEntry> m_Entries; //0x0008
    UIElementAlignment m_VerticalAlignment; //0x0010
    UIElementAlignment m_HorizonalAlignment; //0x0014
    Boolean m_Multiline; //0x0018
    Boolean m_Wordwrap; //0x0019
    char _0x001A[6];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07416
// TypeInfo:  0x00000001428576B0
struct UIAutoScrollTextSettings
{
    Float32 m_NoScrollWaitTime; //0x0000
    Float32 m_FullyScrolledWaitTime; //0x0004
    Float32 m_MaxScrollTime; //0x0008
    Float32 m_PixelsPerSecond; //0x000C
    Float32 m_ScrollbackMultiplier; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 07410
// TypeInfo:  0x0000000142857910
struct UITextureMapping
{
    CString m_Id; //0x0000
    TextureAsset* m_Texture; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07408
// TypeInfo:  0x0000000142857930
struct UITextureMappingOutputEntry
{
    CString m_Id; //0x0000
    TextureAsset* m_Texture; //0x0008
    Vec2 m_Min; //0x0010
    Vec2 m_Max; //0x0018
    Boolean m_Streaming; //0x0020
    char _0x0021[7];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 07404
// TypeInfo:  0x00000001428576D0
struct UIFlowDialogNodeReachedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 07403
// TypeInfo:  0x00000001428576F0
struct UIDialogScreenPushedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07346
// TypeInfo:  0x0000000142857950
struct InputRecorderTrackData
{
    CString m_Name; //0x0000
    Int32 m_InputAction; //0x0008
    char _0x000C[4];
    FloatPropertyTrackData* m_PropertyTrack; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 07336
// TypeInfo:  0x0000000142857730
struct SimpleMovementActionTimeData
{
    Float32 m_Time; //0x0000
    Float32 m_MaxVariation; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07276
// TypeInfo:  0x0000000142857770
struct IndexRange
{
    Uint32 m_First; //0x0000
    Uint32 m_Last; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07278
// TypeInfo:  0x0000000142857970
struct ChildStaticModelNetworkInfo
{
    IndexRange m_NetworkRange; //0x0000
    Uint32 m_ParentPartComponentIndex; //0x0008
    Uint32 m_ParentHealthStateIndex; //0x000C
    Uint32 m_InstanceIndex; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 07280
// TypeInfo:  0x0000000142857750
struct StaticModelNetworkInfo
{
    Array<IndexRange> m_PartNetworkIdRanges; //0x0000
    Uint32 m_NetworkIdCount; //0x0008
    char _0x000C[4];
    Array<ChildStaticModelNetworkInfo> m_ChildNetworkInfos; //0x0010
    Uint32 m_ChildNetworkIdCount; //0x0018
    char _0x001C[4];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07274
// TypeInfo:  0x0000000142857990
struct PhysicsPartInfo
{
    Uint32 m_PartComponentIndex; //0x0000
    Uint32 m_HealthStateIndex; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07268
// TypeInfo:  0x0000000142857790
struct CharacterToComponentsSpawnTemplateMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 07239
// TypeInfo:  0x000000014284F200
struct PID
{
    Float32 m_P; //0x0000
    Float32 m_I; //0x0004
    Float32 m_D; //0x0008
    Float32 m_MaxError; //0x000C
    Float32 m_MaxPTerm; //0x0010
    Float32 m_MaxITerm; //0x0014
    Float32 m_MaxSumError; //0x0018
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 07217
// TypeInfo:  0x000000014284F5A0
struct CustomizeVisual
{
    Array<UnlockAsset*> m_Visual; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07215
// TypeInfo:  0x000000014284F2A0
struct NetworkPlayerSelectedUnlockAssetsMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 07214
// TypeInfo:  0x000000014284F5C0
struct CamoUnlockSelection
{
    Int32 m_Category; //0x0000
    char _0x0004[4];
    UnlockAssetBase* m_Asset; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07194
// TypeInfo:  0x000000014284F5E0
struct CustomizedMeshMaterialsData
{
    ObjectBlueprint* m_MeshBlueprint; //0x0000
    Array<CString> m_MaterialNames; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07164
// TypeInfo:  0x000000014284F320
struct PartComponentOverridePreDamagedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07145
// TypeInfo:  0x000000014284F340
struct EntityToComponentsResetMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 07142
// TypeInfo:  0x000000014284F360
struct UnlockComponentEnabledMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 07137
// TypeInfo:  0x000000014284F600
struct SoldierAnimatedCameraData
{
    Float32 m_CameraTransitionTime; //0x0000
    Boolean m_EnableFeature; //0x0004
    char _0x0005[3];
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07127
// TypeInfo:  0x000000014284F620
struct ShaderParameterVector
{
    Vec4 m_Value; //0x0000
    CString m_ParameterName; //0x0010
    char _0x0018[8];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07125
// TypeInfo:  0x000000014284F640
struct CameraBinding
{
    AntRef m_Render1pInBackground; //0x0000
    AntRef m_ForceRender1pInForeground; //0x0014
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 07085
// TypeInfo:  0x000000014284F6E0
struct ActionSuppressor
{
    Int32 m_ActionToSuppress; //0x0000
    Float32 m_SuppressingValue; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07121
// TypeInfo:  0x000000014284F3A0
struct InputSuppressionData
{
    Array<ActionSuppressor> m_SuppressVehicleInput; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07109
// TypeInfo:  0x000000014284F680
struct BuoyantPartsData
{
    BuoyantParts m_PartName; //0x0000
    Float32 m_Buoyancy; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07093
// TypeInfo:  0x000000014284F420
struct PitchModifier
{
    Vec3 m_Offset; //0x0000
    Float32 m_PitchVal; //0x0010
    Float32 m_PitchAngle; //0x0014
    char _0x0018[8];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 07097
// TypeInfo:  0x000000014284F400
struct AimAssistCollisionBonePrioritiesData
{
    Int32 m_StartPriority; //0x0000
    Int32 m_MidPriority; //0x0004
    Int32 m_EndPriority; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 07099
// TypeInfo:  0x000000014284F3E0
struct AimAssistCollisionBoneSnapAimData
{
    Float32 m_Bounding_LengthScale; //0x0000
    Float32 m_Bounding_RadiusScale; //0x0004
    Float32 m_Point_LengthScale; //0x0008
    AimAssistCollisionBonePrioritiesData m_Point_Priorities; //0x000C
    AimAssistCollisionBonePrioritiesData m_Point_Priorities_BoneUnderReticle; //0x0018
};//Size=0x0024

////////////////////////////////////////
// RuntimeId: 07103
// TypeInfo:  0x000000014284F6A0
struct BoneCollisionData
{
    Vec4 m_DebugDrawColor; //0x0000
    Vec3 m_CapsuleOffset; //0x0010
    PitchModifier m_MaxPitch; //0x0020
    PitchModifier m_MinPitch; //0x0040
    CString m_BoneName; //0x0060
    HitReactionType m_AnimationHitReactionType; //0x0068
    MaterialDecl m_MaterialPair; //0x006C
    Int32 m_BoneAxis; //0x0070
    Float32 m_CapsuleLength; //0x0074
    Float32 m_CapsuleRadius; //0x0078
    char _0x007C[4];
    AimAssistCollisionBoneData* m_AimAssistTarget; //0x0080
    Boolean m_ValidInHiLod; //0x0088
    Boolean m_ValidInLowLod; //0x0089
    Boolean m_DeactivateIfBehindWall; //0x008A
    Boolean m_UsePhysicsRotation; //0x008B
    char _0x008C[4];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 07091
// TypeInfo:  0x000000014284F6C0
struct HIKData
{
    Float32 m_ReachT; //0x0000
    Float32 m_ReachR; //0x0004
    Float32 m_Pull; //0x0008
    Float32 m_Resist; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07089
// TypeInfo:  0x000000014284F440
struct RagdollBinding
{
    AntRef m_RagdollOnBack; //0x0000
    AntRef m_RagdollBlend; //0x0014
    AntRef m_RagdollBlendEarly; //0x0028
    AntRef m_RagdollForceBlendDisabled; //0x003C
    AntRef m_RagdollActiveTime; //0x0050
    AntRef m_RagdollFullyBlendedIn; //0x0064
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 07123
// TypeInfo:  0x000000014284F660
struct RegularCameraViewData
{
    Vec3 m_MeshOffset; //0x0000
    Vec3 m_MeshScale; //0x0010
    InputSuppressionData m_InputSuppression; //0x0020
    Float32 m_FieldOfView; //0x0028
    char _0x002C[4];
    RigidMeshAsset* m_Mesh; //0x0030
    ObjectBlueprint* m_MaskMeshBlueprint; //0x0038
    Float32 m_ScreenExposureAreaScale; //0x0040
    Boolean m_FLIREnabled; //0x0044
    Boolean m_AllowFieldOfViewScaling; //0x0045
    Boolean m_LockMeshToRenderView; //0x0046
    char _0x0047[9];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 07083
// TypeInfo:  0x000000014284F700
struct StanceCameraData
{
    Array<Int32> m_ValidStances; //0x0000
    Array<Int32> m_DefaultCameraForStances; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07075
// TypeInfo:  0x000000014284F460
struct EntryComponentStanceChangedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 07070
// TypeInfo:  0x000000014284F720
struct StanceSwitchSoundData
{
    SoundAsset* m_StanceSwitchSound; //0x0000
    Array<Int32> m_ValidStances; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 07066
// TypeInfo:  0x000000014284F480
struct EntryComponentHudData
{
    Int32 m_Index; //0x0000
    EntrySeatType m_SeatType; //0x0004
    Boolean m_Frustum; //0x0008
    Boolean m_Visible; //0x0009
    Boolean m_MaximizeMiniMapOnEntry; //0x000A
    char _0x000B[1];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 07040
// TypeInfo:  0x000000014284F4C0
struct CharacterToComponentsOnKilledMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 07033
// TypeInfo:  0x000000014284F4E0
struct CharacterToComponentsOnTeleportedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 07000
// TypeInfo:  0x000000014284F740
struct CameraLeapData
{
    LinearTransform m_Transform; //0x0000
    Float32 m_Time; //0x0040
    Float32 m_FovModifier; //0x0044
    char _0x0048[8];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06988
// TypeInfo:  0x000000014284F760
struct HudImpactData
{
    Float32 m_MinHealth; //0x0000
    Float32 m_MaxHealth; //0x0004
    Float32 m_MinTimeVisible; //0x0008
    Float32 m_MaxTimeVisible; //0x000C
    Boolean m_Enable; //0x0010
    char _0x0011[3];
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 06984
// TypeInfo:  0x000000014284F500
struct BlurEffectData
{
    Float32 m_DispersionStrength; //0x0000
    Float32 m_DispersionThreshhold; //0x0004
    Float32 m_ExplosionStrength; //0x0008
    Float32 m_BulletStrength; //0x000C
    Float32 m_ExplosionFalloffSpeed; //0x0010
    Float32 m_BulletFalloffSpeed; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 06982
// TypeInfo:  0x000000014284F520
struct TurnEffectData
{
    Float32 m_MaxRollAngle; //0x0000
    Float32 m_MaxPitchAngle; //0x0004
    Float32 m_YawVelocityThreshhold; //0x0008
    Float32 m_VelocityThreshhold; //0x000C
    Float32 m_SafeTime; //0x0010
    Float32 m_BeginTime; //0x0014
    Float32 m_HoldTime; //0x0018
    Float32 m_EndTime; //0x001C
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 06980
// TypeInfo:  0x000000014284F780
struct CameraSineCurveData
{
    Float32 m_Frequency; //0x0000
    Float32 m_Amplitude; //0x0004
    Float32 m_PhaseShift; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 04976
// TypeInfo:  0x000000014281C508
struct BundleHeapInfo
{
    BundleHeapType m_HeapType; //0x0000
    Uint32 m_InitialSize; //0x0004
    Boolean m_AllowGrow; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 06958
// TypeInfo:  0x000000014284F560
struct BlueprintBundleSettings
{
    BundleHeapInfo m_Heap; //0x0000
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 05016
// TypeInfo:  0x000000014281C368
struct EventSpec
{
    Int32 m_Id; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 06906
// TypeInfo:  0x00000001428494D0
struct SubLevelPreloadInfo
{
    CString m_SubLevelBundlePath; //0x0000
    Array<CString> m_PreloadedBlueprintBundles; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06908
// TypeInfo:  0x00000001428492B0
struct LevelPreloadInfo
{
    Array<CString> m_PreloadedBlueprintBundles; //0x0000
    Array<SubLevelPreloadInfo> m_SubLevelPreloadInfoMap; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06896
// TypeInfo:  0x00000001428494F0
struct PathfindingBlob
{
    Guid m_BlobId; //0x0000
    Uint32 m_BlobSize; //0x0010
    char _0x0014[4];
    Array<Uint32> m_ChunkSizes; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 06890
// TypeInfo:  0x0000000142849510
struct FaceAnimationWaveMapping
{
    Int32 m_WaveNameHash; //0x0000
    Int32 m_AntEnumValue; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 06880
// TypeInfo:  0x0000000142849530
struct LevelStartPoint
{
    CString m_Name; //0x0000
    Array<CString> m_AutoloadSublevels; //0x0008
    Boolean m_IsDefault; //0x0010
    char _0x0011[7];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 06878
// TypeInfo:  0x0000000142849550
struct LevelBundleLoad
{
    CString m_Name; //0x0000
    Boolean m_TryKeepBetweenLevels; //0x0008
    char _0x0009[7];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06876
// TypeInfo:  0x0000000142849570
struct LevelDescriptionInclusionCategory
{
    CString m_Category; //0x0000
    Array<CString> m_Mode; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06872
// TypeInfo:  0x00000001428492D0
struct LevelDescription
{
    CString m_Name; //0x0000
    CString m_Description; //0x0008
    Array<LevelDescriptionComponent*> m_Components; //0x0010
    Boolean m_IsMultiplayer; //0x0018
    Boolean m_IsCoop; //0x0019
    Boolean m_IsMenu; //0x001A
    Boolean m_IsEpilogue; //0x001B
    char _0x001C[4];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 06868
// TypeInfo:  0x00000001428492F0
struct InputMessagesSingleInputEventMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06825
// TypeInfo:  0x0000000142849310
struct EditableActions
{
    Array<EditableAction*> m_Actions; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 06827
// TypeInfo:  0x0000000142849590
struct EditableActionMap
{
    CString m_Id; //0x0000
    CString m_NameId; //0x0008
    EntryInputActionMapsData* m_ActionMap; //0x0010
    EditableActions m_ConfigurationLayout; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 06811
// TypeInfo:  0x00000001428495B0
struct EntryInputActionBinding
{
    Int32 m_Action; //0x0000
    Int32 m_Alias; //0x0004
    EntryInputActionType m_ActionType; //0x0008
    Boolean m_Networked; //0x000C
    char _0x000D[3];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06787
// TypeInfo:  0x00000001428495D0
struct HudData
{
    Float32 m_CrosshairScaleMin; //0x0000
    Float32 m_CrosshairScaleMax; //0x0004
    Float32 m_CrosshairOpacityMin; //0x0008
    Float32 m_CrosshairOpacityMax; //0x000C
    Float32 m_CrosshairOpacityModifier; //0x0010
    char _0x0014[4];
    CString m_CrosshairTypeId; //0x0018
    CrosshairTypeAsset* m_CrosshairType; //0x0020
    LockingTypeAsset* m_LockingType; //0x0028
    CString m_WeaponClass; //0x0030
    Float32 m_LowAmmoWarning; //0x0038
    Float32 m_ReloadPrompt; //0x003C
    Int32 m_RenderTargetIndex; //0x0040
    char _0x0044[4];
    UIPartPropertyList* m_HudPropertyList; //0x0048
    Float32 m_SeaLevelAltFreq; //0x0050
    Float32 m_CameraShakeModifier; //0x0054
    CString m_HudIcon; //0x0058
    Boolean m_ShowMinimap; //0x0060
    Boolean m_HideAmmo; //0x0061
    Boolean m_InfiniteAmmo; //0x0062
    Boolean m_HideCrosshairWhenAimOnFriend; //0x0063
    Boolean m_UseRenderTarget; //0x0064
    Boolean m_UseRangeMeter; //0x0065
    Boolean m_UseAimWarning; //0x0066
    Boolean m_UsePredictedSight; //0x0067
    Boolean m_UseWeaponOrientations; //0x0068
    Boolean m_UseVelocityVectorMarker; //0x0069
    Boolean m_UseLockingController; //0x006A
    Boolean m_UseThrust; //0x006B
    Boolean m_UseGForce; //0x006C
    Boolean m_UseSkidSlip; //0x006D
    Boolean m_UseClimbRate; //0x006E
    char _0x006F[1];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 06779
// TypeInfo:  0x00000001428495F0
struct UIPartProperties
{
    UIPartIdentifier m_Identifier; //0x0000
    Float32 m_Range; //0x0004
    Float32 m_Frequency; //0x0008
    Boolean m_CompensateFreelook; //0x000C
    char _0x000D[3];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06765
// TypeInfo:  0x0000000142849610
struct StaticModelGroupMemberData
{
    Array<LinearTransform> m_InstanceTransforms; //0x0000
    Array<Uint32> m_InstanceObjectVariation; //0x0008
    Array<Boolean> m_InstanceCastSunShadow; //0x0010
    Array<Boolean> m_InstanceCastReflection; //0x0018
    Array<RadiosityTypeOverride> m_InstanceRadiosityTypeOverride; //0x0020
    Array<Boolean> m_InstanceTerrainShaderNodesEnable; //0x0028
    GamePhysicsEntityData* m_MemberType; //0x0030
    MeshAsset* m_MeshAsset; //0x0038
    Uint32 m_InstanceCount; //0x0040
    Uint32 m_HealthStateEntityManagerId; //0x0044
    IndexRange m_PhysicsPartRange; //0x0048
    Uint32 m_PhysicsPartCountPerInstance; //0x0050
    IndexRange m_NetworkIdRange; //0x0054
    Uint32 m_NetworkIdCountPerInstance; //0x005C
    Uint32 m_PartComponentCount; //0x0060
    char _0x0064[4];
};//Size=0x0068

////////////////////////////////////////
// RuntimeId: 06723
// TypeInfo:  0x00000001428493D0
struct ServerControllableToComponentsPlayerExitMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06722
// TypeInfo:  0x00000001428493F0
struct ServerControllableToComponentsPlayerEnteredMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06721
// TypeInfo:  0x0000000142849410
struct ClientControllableToComponentsPlayerExitMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06720
// TypeInfo:  0x0000000142849430
struct ClientControllableToComponentsPlayerEnteredMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06711
// TypeInfo:  0x0000000142849630
struct VoiceOverConversationEntityTrackInfo
{
    Uint32 m_TakeControlId; //0x0000
    Uint32 m_SourceId; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 06701
// TypeInfo:  0x0000000142849450
struct FbProxyControllerEntityBinding
{
    AntRef m_Trigger; //0x0000
    AntRef m_Stop; //0x0014
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06695
// TypeInfo:  0x0000000142849490
struct EventSyncReachedClientMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 06690
// TypeInfo:  0x0000000142849650
struct EntitlementData
{
    CString m_License; //0x0000
    CString m_EntitlementTag; //0x0008
    CString m_GroupName; //0x0010
    CString m_ProductId; //0x0018
    CString m_ProjectId; //0x0020
    EntitlementType m_UsageType; //0x0028
    Boolean m_VerifyOwnership; //0x002C
    char _0x002D[3];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06688
// TypeInfo:  0x0000000142849670
struct PlatformProjectId
{
    GamePlatform m_Platform; //0x0000
    char _0x0004[4];
    CString m_ProjectId; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06686
// TypeInfo:  0x0000000142849690
struct EntitlementPlatformType
{
    GamePlatform m_Platform; //0x0000
    EntitlementType m_EntitlementType; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 06666
// TypeInfo:  0x00000001428494B0
struct AntDynamicAvoidanceBinding
{
    AntRef m_TimeUntilCollision; //0x0000
    AntRef m_DistanceUntilCollision; //0x0014
    AntRef m_NormalizedVelocity; //0x0028
    AntRef m_Speed; //0x003C
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06662
// TypeInfo:  0x0000000142843638
struct CongestionControlSettings
{
    Float32 m_LatencyMsMax; //0x0000
    Float32 m_PacketLossMin; //0x0004
    Float32 m_PacketLossMax; //0x0008
    Float32 m_LatencyIncrPercMax; //0x000C
    Float32 m_LatencyIncrJitter; //0x0010
    Float32 m_LatencyIncrThreshold; //0x0014
    Float32 m_ConnectionGradeGood; //0x0018
    Float32 m_ConnectionGradeBad; //0x001C
    Float32 m_FreqDistScaleHFMax; //0x0020
    Float32 m_FreqDistScaleBaseMax; //0x0024
    Float32 m_AdaptionStepCount; //0x0028
    Float32 m_MaxBwUtilForIncrease; //0x002C
    Boolean m_Enabled; //0x0030
    char _0x0031[3];
};//Size=0x0034

////////////////////////////////////////
// RuntimeId: 06624
// TypeInfo:  0x0000000142843778
struct ProfileOptionDataEnumItem
{
    CString m_DisplayName; //0x0000
    Boolean m_Default; //0x0008
    char _0x0009[7];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06614
// TypeInfo:  0x0000000142843798
struct BinaryOption
{
    CString m_Name; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 06612
// TypeInfo:  0x00000001428437B8
struct StringOption
{
    CString m_Name; //0x0000
    CString m_Value; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06610
// TypeInfo:  0x00000001428437D8
struct IntOption
{
    CString m_Name; //0x0000
    Int32 m_Value; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06608
// TypeInfo:  0x00000001428437F8
struct FloatOption
{
    CString m_Name; //0x0000
    Float32 m_Value; //0x0008
    Float32 m_Min; //0x000C
    Float32 m_Max; //0x0010
    Float32 m_Step; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 06600
// TypeInfo:  0x0000000142843678
struct ProceduralAwarenessComponentBinding
{
    AntRef m_StrengthScale; //0x0000
    AntRef m_UseTargetOverride; //0x0014
    AntRef m_TargetOverride; //0x0028
    AntRef m_NewTargetChosen; //0x003C
    AntRef m_DoRandomBlendOut; //0x0050
};//Size=0x0064

////////////////////////////////////////
// RuntimeId: 06588
// TypeInfo:  0x0000000142843698
struct PhysicsDrivenAnimationEntityBinding
{
    AntRef m_PhysicsMotionTarget; //0x0000
    AntRef m_AimLeftRight; //0x0014
    AntRef m_AimUpDown; //0x0028
    AntRef m_Crouch; //0x003C
    AntRef m_ForceSetTrajectory; //0x0050
    AntRef m_InAir; //0x0064
    AntRef m_Skydive; //0x0078
    AntRef m_Parachute; //0x008C
    AntRef m_Swim; //0x00A0
    AntRef m_InputBackward; //0x00B4
    AntRef m_InputForward; //0x00C8
    AntRef m_InputLeft; //0x00DC
    AntRef m_InputRight; //0x00F0
    AntRef m_IsEnemy; //0x0104
    AntRef m_Jump; //0x0118
    AntRef m_LeanLeftRight; //0x012C
    AntRef m_Prone; //0x0140
    AntRef m_Sprint; //0x0154
    AntRef m_GroundSupported; //0x0168
    AntRef m_GroundNormal; //0x017C
    AntRef m_GroundDistance; //0x0190
    AntRef m_GroundAngleZ; //0x01A4
    AntRef m_GroundAngleX; //0x01B8
    AntRef m_GroundAngleFromNormal; //0x01CC
    AntRef m_IsClientAnimatable; //0x01E0
    AntRef m_CustomizationScreen; //0x01F4
    AntRef m_Minimal3pServer; //0x0208
    AntRef m_VerticalImpact; //0x021C
    AntRef m_VerticalImpactSpeed; //0x0230
    AntRef m_FalseSignal; //0x0244
    AntRef m_LockArmsToCameraWeight; //0x0258
    AntRef m_WindDirection; //0x026C
    AntRef m_WindStrength; //0x0280
    AntRef m_WaterDepth; //0x0294
    AntRef m_EyeWaterDepth; //0x02A8
};//Size=0x02BC

////////////////////////////////////////
// RuntimeId: 06572
// TypeInfo:  0x0000000142843818
struct RichPresenceProperty
{
    CString m_Name; //0x0000
    RichPresencePropertyType m_PropertyType; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06568
// TypeInfo:  0x0000000142843838
struct RichPresenceContextSetting
{
    RichPresenceContext* m_Context; //0x0000
    RichPresenceContextValue* m_Value; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06556
// TypeInfo:  0x0000000142843858
struct PersistenceConsumableMapping
{
    ConsumableGroup m_Group; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 06542
// TypeInfo:  0x00000001428436F8
struct PersistentValueTemplateData
{
    CString m_Name; //0x0000
    CString m_DefaultValue; //0x0008
    Float32 m_DefaultFloatValue; //0x0010
    PersistentValueType m_ValueType; //0x0014
    PersistentValueDataType m_DataType; //0x0018
    PersistentValueHistoryType m_HistoryType; //0x001C
    Boolean m_ClubStat; //0x0020
    char _0x0021[7];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06486
// TypeInfo:  0x0000000142843878
struct EffectWithSpeedRange
{
    EffectBlueprint* m_Effect; //0x0000
    Float32 m_MinSpeed; //0x0008
    Float32 m_MaxSpeed; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 06234
// TypeInfo:  0x0000000142839000
struct ServerProjectileOnSpawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06233
// TypeInfo:  0x0000000142839020
struct ServerAdministrationRestartRequiredMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06232
// TypeInfo:  0x0000000142839040
struct AIDirectorStateMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06231
// TypeInfo:  0x0000000142839060
struct AISpawnBotMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06230
// TypeInfo:  0x0000000142839080
struct AIPlayerEnableAsTargetMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06229
// TypeInfo:  0x00000001428390A0
struct ServerPeerLoadLevelMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06228
// TypeInfo:  0x00000001428390C0
struct ServerPeerInitializedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06227
// TypeInfo:  0x00000001428390E0
struct ServerMissionObjectiveCompletedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06226
// TypeInfo:  0x0000000142839100
struct ServerSubLevelOnStreamedInMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06225
// TypeInfo:  0x0000000142839120
struct ServerLevelCompletedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06224
// TypeInfo:  0x0000000142839140
struct ServerLevelStartedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06223
// TypeInfo:  0x0000000142839160
struct ServerLevelSpawnEntitiesEndMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06222
// TypeInfo:  0x0000000142839180
struct ServerLevelSpawnEntitiesBeginMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06221
// TypeInfo:  0x00000001428391A0
struct ServerRoundInterruptedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06220
// TypeInfo:  0x00000001428391C0
struct ServerRoundOverMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06219
// TypeInfo:  0x00000001428391E0
struct ServerRoundResetMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06218
// TypeInfo:  0x0000000142839200
struct ServerGameplayCheckpointActivatedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06217
// TypeInfo:  0x0000000142839220
struct ServerGameplayCheckpointTriggeredMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06216
// TypeInfo:  0x0000000142839240
struct ServerGameModeResetMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06215
// TypeInfo:  0x0000000142839260
struct ServerGameplaySetPostRoundLogicMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06214
// TypeInfo:  0x0000000142839280
struct ServerGameplaySetPreRoundLogicMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06213
// TypeInfo:  0x00000001428392A0
struct ServerGameplayGameModeResetMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06212
// TypeInfo:  0x00000001428392C0
struct ServerGameplayServerPlayerMenuCancelMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06211
// TypeInfo:  0x00000001428392E0
struct ServerGameplayServerPlayerMenuOkMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06210
// TypeInfo:  0x0000000142839300
struct ServerGameplayPreviousWeatherStateMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06209
// TypeInfo:  0x0000000142839320
struct ServerGameplayFightHarderMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06208
// TypeInfo:  0x0000000142839340
struct ServerGameplayDeserterReturnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06207
// TypeInfo:  0x0000000142839360
struct ServerGameplayDeserterMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06206
// TypeInfo:  0x0000000142839380
struct ServerGameplayPlayerMenuCancelMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06205
// TypeInfo:  0x00000001428393A0
struct ServerGameplayPlayerMenuOkMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06204
// TypeInfo:  0x00000001428393C0
struct ServerGameplayVoiceOverFinishedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06203
// TypeInfo:  0x00000001428393E0
struct ServerStaticModelDamagedPartByPlayerMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06202
// TypeInfo:  0x0000000142839400
struct ServerStaticModelDestroyedPartMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 06201
// TypeInfo:  0x0000000142839420
struct ServerStaticModelGroupDestroyedPartMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 06200
// TypeInfo:  0x0000000142839440
struct ServerStaticModelDestroyedAllCollapsablePartsMessage
{
    char _0x0000[160];
};//Size=0x00A0

////////////////////////////////////////
// RuntimeId: 06199
// TypeInfo:  0x0000000142839460
struct ServerStaticModelSpawnMessage
{
    char _0x0000[144];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 06198
// TypeInfo:  0x0000000142839480
struct ServerSoundVoiceOverFinishedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06197
// TypeInfo:  0x00000001428394A0
struct ServerInputDeactivateInputRestrictionMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06196
// TypeInfo:  0x00000001428394C0
struct ServerInputReactivateInputRestrictionMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06195
// TypeInfo:  0x00000001428394E0
struct ServerCollisionExplosionPackDestroyedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06194
// TypeInfo:  0x0000000142839500
struct ServerCollisionExplosionPackPlacedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06193
// TypeInfo:  0x0000000142839520
struct ServerCollisionExplosionUnSpawnMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06192
// TypeInfo:  0x0000000142839540
struct ServerCollisionExplosionDamageMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 06191
// TypeInfo:  0x0000000142839560
struct ServerCollisionExplosionSpawnMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 06190
// TypeInfo:  0x0000000142839580
struct ServerCollisionProjectileTimeoutMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06189
// TypeInfo:  0x00000001428395A0
struct ServerCollisionProjectileImpactMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 06188
// TypeInfo:  0x00000001428395C0
struct ServerCollisionProjectileFireMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06187
// TypeInfo:  0x00000001428395E0
struct ServerCollisionGrenadeCollisionMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06186
// TypeInfo:  0x0000000142839600
struct ServerCollisionGrenadeThrowMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06185
// TypeInfo:  0x0000000142839620
struct ServerComponentEntryComponentProcessedInputMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06184
// TypeInfo:  0x0000000142839640
struct ServerComponentEntryOnPlayerExitsMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06183
// TypeInfo:  0x0000000142839660
struct ServerComponentEntryOnPlayerEntersMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06182
// TypeInfo:  0x0000000142839680
struct ServerComponentEntryOnUnspawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06181
// TypeInfo:  0x00000001428396A0
struct ServerComponentWeaponOnUnspawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06180
// TypeInfo:  0x00000001428396C0
struct ServerComponentWeaponOnSpawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06179
// TypeInfo:  0x00000001428396E0
struct ServerEntityPickupOnUnspawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06178
// TypeInfo:  0x0000000142839700
struct ServerEntityPickupOnSpawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06177
// TypeInfo:  0x0000000142839720
struct ServerEntityBangerEntityOnUnspawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06176
// TypeInfo:  0x0000000142839740
struct ServerEntityBangerEntityOnSpawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06175
// TypeInfo:  0x0000000142839760
struct ServerClubMemberDeletedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06174
// TypeInfo:  0x0000000142839780
struct ServerClubMemberCreatedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06173
// TypeInfo:  0x00000001428397A0
struct ServerControllableUnspawnDoneMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06172
// TypeInfo:  0x00000001428397C0
struct ServerControllableSpawnDoneMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06171
// TypeInfo:  0x00000001428397E0
struct ServerConnectionExitMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06170
// TypeInfo:  0x0000000142839800
struct ServerConnectionInitMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06169
// TypeInfo:  0x0000000142839820
struct ServerWeaponPlayerWeaponPickupMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06166
// TypeInfo:  0x0000000142839860
struct ServerWeaponReplacedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06165
// TypeInfo:  0x0000000142839880
struct ServerWeaponWeaponComponentActivateMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06164
// TypeInfo:  0x00000001428398A0
struct ServerWeaponWeaponComponentReloadMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06163
// TypeInfo:  0x00000001428398C0
struct ServerWeaponPlayerResupplyMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06162
// TypeInfo:  0x00000001428398E0
struct ServerWeaponPlayerReloadMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06161
// TypeInfo:  0x0000000142839900
struct ServerWeaponPlayerWeaponDestroyedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06160
// TypeInfo:  0x0000000142839920
struct ServerWeaponPlayerWeaponRemovedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06159
// TypeInfo:  0x0000000142839940
struct ServerWeaponPlayerWeaponReloadEndMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06158
// TypeInfo:  0x0000000142839960
struct ServerWeaponPlayerPrimaryFireShotSpawnedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06157
// TypeInfo:  0x0000000142839980
struct ServerWeaponPlayerPrimaryOutOfAmmoMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06156
// TypeInfo:  0x00000001428399A0
struct ServerWeaponArtilleryFiredMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06155
// TypeInfo:  0x00000001428399C0
struct ServerWeaponLaserDesignatorMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06154
// TypeInfo:  0x00000001428399E0
struct ServerWeaponMortarStrikeMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06153
// TypeInfo:  0x0000000142839A00
struct ServerVehicleLockableMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06152
// TypeInfo:  0x0000000142839A20
struct ServerVehicleExitMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06151
// TypeInfo:  0x0000000142839A40
struct ServerVehicleEnterMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06150
// TypeInfo:  0x0000000142839A60
struct ServerVehicleDisabledMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06149
// TypeInfo:  0x0000000142839A80
struct ServerVehicleDamageMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06148
// TypeInfo:  0x0000000142839AA0
struct ServerVehicleEnterRestrictionMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06147
// TypeInfo:  0x0000000142839AC0
struct ServerVehicleUnspawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06146
// TypeInfo:  0x0000000142839AE0
struct ServerVehicleSpawnDoneMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06145
// TypeInfo:  0x0000000142839B00
struct ServerVehicleForceArmamentReturnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06144
// TypeInfo:  0x0000000142839B20
struct ServerVehicleSwitchTeamMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06143
// TypeInfo:  0x0000000142839B40
struct ServerVehicleDestroyedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06142
// TypeInfo:  0x0000000142839B60
struct ServerPlayerDisconnectMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06141
// TypeInfo:  0x0000000142839B80
struct ServerPlayerStartedFireMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06140
// TypeInfo:  0x0000000142839BA0
struct ServerPlayerInteractionEntityInRangeChangedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06139
// TypeInfo:  0x0000000142839BC0
struct ServerPlayerOnPickupMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06136
// TypeInfo:  0x0000000142839C00
struct ServerPlayerAssistCountsAsKillMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06135
// TypeInfo:  0x0000000142839C20
struct ServerPlayerApplyCustomizationMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06134
// TypeInfo:  0x0000000142839C40
struct ServerPlayerCustomizationDoneMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06133
// TypeInfo:  0x0000000142839C60
struct ServerPlayerChatMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06132
// TypeInfo:  0x0000000142839C80
struct ServerPlayerTickMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06131
// TypeInfo:  0x0000000142839CA0
struct ServerPlayerExitEntryMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06130
// TypeInfo:  0x0000000142839CC0
struct ServerPlayerEnterEntryMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06129
// TypeInfo:  0x0000000142839CE0
struct ServerPlayerAboutToClearCharacterMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06128
// TypeInfo:  0x0000000142839D00
struct ServerPlayerInstantSuicideMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06127
// TypeInfo:  0x0000000142839D20
struct ServerPlayerKilledMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 06126
// TypeInfo:  0x0000000142839D40
struct ServerPlayerManuallySelectedSpawnPointMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06125
// TypeInfo:  0x0000000142839D60
struct ServerPlayerChangeChatChannelMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06124
// TypeInfo:  0x0000000142839D80
struct ServerPlayerSwitchTeamMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06123
// TypeInfo:  0x0000000142839DA0
struct ServerPlayerKitPickedupMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06122
// TypeInfo:  0x0000000142839DC0
struct ServerPlayerKitReplacedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06121
// TypeInfo:  0x0000000142839DE0
struct ServerPlayerChangedCharacterMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06120
// TypeInfo:  0x0000000142839E00
struct ServerPlayerReviveRefusedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06119
// TypeInfo:  0x0000000142839E20
struct ServerPlayerReviveAcceptedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06118
// TypeInfo:  0x0000000142839E40
struct ServerPlayerReviveMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06117
// TypeInfo:  0x0000000142839E60
struct ServerPlayerLeftLevelMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06116
// TypeInfo:  0x0000000142839E80
struct ServerPlayerReleasingLevelMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06115
// TypeInfo:  0x0000000142839EA0
struct ServerPlayerEnteredLevelMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06114
// TypeInfo:  0x0000000142839EC0
struct ServerPlayerLevelLoadedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06113
// TypeInfo:  0x0000000142839EE0
struct ServerPlayerDebugFriendZoneSpawnMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 06112
// TypeInfo:  0x0000000142839F00
struct ServerPlayerRespawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06111
// TypeInfo:  0x0000000142839F20
struct ServerPlayerDestroyMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06110
// TypeInfo:  0x0000000142839F40
struct ServerPlayerCreatedForConnectionMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06109
// TypeInfo:  0x0000000142839F60
struct ServerPlayerCreateMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 06108
// TypeInfo:  0x0000000142839F80
struct ServerPlayerAboutToCreateForConnectionMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06107
// TypeInfo:  0x0000000142839FA0
struct ServerCharacterCharacterDamageMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06106
// TypeInfo:  0x0000000142839FC0
struct ServerCharacterKilledMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06105
// TypeInfo:  0x0000000142839FE0
struct ServerMetricsDetonateExplosionMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06104
// TypeInfo:  0x000000014283A000
struct ServerMetricsObjectiveSuccessMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06103
// TypeInfo:  0x000000014283A020
struct ServerMetricsSaveGameSavedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06102
// TypeInfo:  0x000000014283A040
struct ServerMetricsSaveGameLoadedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06101
// TypeInfo:  0x000000014283A060
struct ServerPlayerAccessLockedVisualContentMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06100
// TypeInfo:  0x000000014283A080
struct ServerClientConnectionRemovedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06099
// TypeInfo:  0x000000014283A0A0
struct ServerClientConnectionConnectedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06098
// TypeInfo:  0x000000014283A0C0
struct ServerAdminBanPlayerMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 06097
// TypeInfo:  0x000000014283A0E0
struct ServerAdminSetServerNameMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06096
// TypeInfo:  0x000000014283A100
struct ServerScriptTickMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06095
// TypeInfo:  0x000000014283A120
struct ServerStopMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06094
// TypeInfo:  0x000000014283A140
struct ServerLoadLevelMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06093
// TypeInfo:  0x000000014283A160
struct ServerLevelUnloadedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06092
// TypeInfo:  0x000000014283A180
struct ServerUnloadLevelMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06091
// TypeInfo:  0x000000014283A1A0
struct ServerLevelLoadedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06090
// TypeInfo:  0x000000014283A1C0
struct ServerStoppedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06089
// TypeInfo:  0x000000014283A1E0
struct ServerApplyConfigurationMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06088
// TypeInfo:  0x000000014283A200
struct ServerResetConfigurationMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06087
// TypeInfo:  0x000000014283A220
struct ServerStartedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 06086
// TypeInfo:  0x000000014283A240
struct ServerDoneLoadGameMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06085
// TypeInfo:  0x000000014283A260
struct ServerLoadGameMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 06084
// TypeInfo:  0x000000014283A280
struct SaveGameSaveMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06083
// TypeInfo:  0x000000014283A2A0
struct StatDisableMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06082
// TypeInfo:  0x000000014283A2C0
struct StatEnableMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 06035
// TypeInfo:  0x0000000142835488
struct PlayerScore
{
    Int32 m_Rank; //0x0000
    Uint32 m_Kills; //0x0004
    Uint32 m_Deaths; //0x0008
    Uint32 m_ScoreMultiplier; //0x000C
    Int32 m_Score; //0x0010
    Int32 m_GlobalScoreOriginal; //0x0014
    Int32 m_GlobalScoreUpdated; //0x0018
    Float32 m_Time; //0x001C
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 06033
// TypeInfo:  0x0000000142834A68
struct UINetworkGunMasterNotificationMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06030
// TypeInfo:  0x0000000142834AA8
struct UINetworkCheckLevelInstalledMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06029
// TypeInfo:  0x0000000142834AC8
struct UINetworkCoopPlayerMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 06026
// TypeInfo:  0x0000000142834B08
struct UINetworkCoopGameMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06025
// TypeInfo:  0x0000000142834B28
struct UINetworkSetCoopServerLobbyGameTypeMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06024
// TypeInfo:  0x0000000142834B48
struct UINetworkSquadWipeInstigatorMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06023
// TypeInfo:  0x0000000142834B68
struct UINetworkSquadWipeMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06022
// TypeInfo:  0x0000000142834B88
struct UINetworkRoundWarningMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06021
// TypeInfo:  0x0000000142834BA8
struct UINetworkRollCreditsMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 06020
// TypeInfo:  0x0000000142834BC8
struct UINetworkKilledOtherPlayerMessage
{
    char _0x0000[120];
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 06019
// TypeInfo:  0x0000000142834BE8
struct UINetworkOwnPlayerKilledMessage
{
    char _0x0000[152];
};//Size=0x0098

////////////////////////////////////////
// RuntimeId: 06016
// TypeInfo:  0x0000000142834C28
struct UINetworkStealBodyMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06015
// TypeInfo:  0x0000000142834C48
struct UINetworkEndOfRoundBonusMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 06014
// TypeInfo:  0x0000000142834C68
struct UINetworkMenuResponseMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06013
// TypeInfo:  0x0000000142834C88
struct UINetworkFieldUpgradeScoringMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06012
// TypeInfo:  0x0000000142834CA8
struct UINetworkHudScoringMessage
{
    char _0x0000[152];
};//Size=0x0098

////////////////////////////////////////
// RuntimeId: 06011
// TypeInfo:  0x0000000142834CC8
struct UINetworkPlayerRankUpMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 06010
// TypeInfo:  0x0000000142834CE8
struct UINetworkVoiceOverSubtitleTextMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 06009
// TypeInfo:  0x0000000142834D08
struct UINetworkPlayerCollectibleTextMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06008
// TypeInfo:  0x0000000142834D28
struct UINetworkPlayerTutorialInstructionsTextMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06007
// TypeInfo:  0x0000000142834D48
struct UINetworkPlayerMissionObjectiveTextMessage
{
    char _0x0000[104];
};//Size=0x0068

////////////////////////////////////////
// RuntimeId: 06006
// TypeInfo:  0x0000000142834D68
struct UINetworkVideoDoneMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06005
// TypeInfo:  0x0000000142834D88
struct UINetworkAllowSkipVideoMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06004
// TypeInfo:  0x0000000142834DA8
struct UINetworkSkipVideoMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06003
// TypeInfo:  0x0000000142834DC8
struct UINetworkStopVideoMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 06002
// TypeInfo:  0x0000000142834DE8
struct UINetworkPauseVideoMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 06001
// TypeInfo:  0x0000000142834E08
struct UINetworkPlayVideoMessage
{
    char _0x0000[136];
};//Size=0x0088

////////////////////////////////////////
// RuntimeId: 06000
// TypeInfo:  0x0000000142834E28
struct UINetworkPlayerKillsTextMessage
{
    char _0x0000[136];
};//Size=0x0088

////////////////////////////////////////
// RuntimeId: 05999
// TypeInfo:  0x0000000142834E48
struct UINetworkPlayerDisconnectMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05998
// TypeInfo:  0x0000000142834E68
struct UINetworkPlayerConnectMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05997
// TypeInfo:  0x0000000142834E88
struct UINetworkPlayerDeserterTextMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05996
// TypeInfo:  0x0000000142834EA8
struct UINetworkAdminYellMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05995
// TypeInfo:  0x0000000142834EC8
struct UINetworkPlayerTextMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05994
// TypeInfo:  0x00000001428354A8
struct UINetworkTextInfo
{
    CString m_StringId; //0x0000
    Float32 m_DisplayTime; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 05992
// TypeInfo:  0x0000000142834EE8
struct UINetworkHudTextMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 05991
// TypeInfo:  0x0000000142834F08
struct UINetworkHudTooltipMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 05990
// TypeInfo:  0x0000000142834F28
struct UINetworkEnableHudMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05983
// TypeInfo:  0x0000000142834FA8
struct NetworkLevelInstalledMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05982
// TypeInfo:  0x0000000142834FC8
struct NetworkSynchronizeInternetSimulationStateMessage
{
    char _0x0000[184];
};//Size=0x00B8

////////////////////////////////////////
// RuntimeId: 05981
// TypeInfo:  0x0000000142834FE8
struct NetworkMatchReadyStatusChangedMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 05980
// TypeInfo:  0x0000000142835008
struct ServerRestartTimerMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05979
// TypeInfo:  0x0000000142835028
struct NetworkMetricsLevelCompleteMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05978
// TypeInfo:  0x0000000142835048
struct NetworkMetricsLevelProgressMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05977
// TypeInfo:  0x0000000142835068
struct NetworkMetricsSaveGameSavedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05976
// TypeInfo:  0x0000000142835088
struct NetworkSetPlayerViewMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05975
// TypeInfo:  0x00000001428350A8
struct NetworkSuicideMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05974
// TypeInfo:  0x00000001428350C8
struct NetworkGameplayContinueMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05973
// TypeInfo:  0x00000001428350E8
struct PerformanceLogMessage
{
    char _0x0000[256];
};//Size=0x0100

////////////////////////////////////////
// RuntimeId: 05972
// TypeInfo:  0x00000001428354C8
struct PerformanceFpsHistogram
{
    Float32 m_Below5; //0x0000
    Float32 m_Below10; //0x0004
    Float32 m_Below15; //0x0008
    Float32 m_Below20; //0x000C
    Float32 m_Below25; //0x0010
    Float32 m_Below30; //0x0014
    Float32 m_Below35; //0x0018
    Float32 m_Below40; //0x001C
    Float32 m_Below45; //0x0020
    Float32 m_Below50; //0x0024
    Float32 m_Below55; //0x0028
    Float32 m_Below60; //0x002C
    Float32 m_Above60; //0x0030
};//Size=0x0034

////////////////////////////////////////
// RuntimeId: 05970
// TypeInfo:  0x0000000142835108
struct NetworkFirstPlayerEnteredMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05969
// TypeInfo:  0x0000000142835128
struct NetworkDifficultyChangedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05968
// TypeInfo:  0x0000000142835148
struct NetworkSettingsMessage
{
    char _0x0000[120];
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 05967
// TypeInfo:  0x0000000142835168
struct DebugSpawnGameEntityMessage
{
    char _0x0000[144];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 05966
// TypeInfo:  0x0000000142835188
struct NetworkCreatePlayerMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05965
// TypeInfo:  0x00000001428351A8
struct NetworkCameraReplayMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05964
// TypeInfo:  0x00000001428351C8
struct NetworkCameraFreeCameraMessage
{
    char _0x0000[128];
};//Size=0x0080

////////////////////////////////////////
// RuntimeId: 05963
// TypeInfo:  0x00000001428351E8
struct NetworkMovePlayerMessage
{
    char _0x0000[144];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 05962
// TypeInfo:  0x0000000142835208
struct NetworkJuiceSessionMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05961
// TypeInfo:  0x0000000142835228
struct NetworkSelectTeamMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05960
// TypeInfo:  0x0000000142835248
struct NetworkOnPlayerSpawnedMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05959
// TypeInfo:  0x0000000142835268
struct NetworkSelectSpawnGroupMessage
{
    char _0x0000[104];
};//Size=0x0068

////////////////////////////////////////
// RuntimeId: 05958
// TypeInfo:  0x0000000142835288
struct NetworkSpawnVehicleCustomizationMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05957
// TypeInfo:  0x00000001428352A8
struct NetworkUnSpawnCustomizationMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05956
// TypeInfo:  0x00000001428352C8
struct NetworkSpawnCustomizationMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05955
// TypeInfo:  0x00000001428352E8
struct NetworkSpawnOnSelectedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05954
// TypeInfo:  0x0000000142835308
struct NetworkSpawnHereMessage
{
    char _0x0000[144];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 05953
// TypeInfo:  0x0000000142835328
struct NetworkSpawnMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 05952
// TypeInfo:  0x0000000142835348
struct NetworkRequestLoadLevelMessage
{
    char _0x0000[120];
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 05951
// TypeInfo:  0x0000000142835368
struct NetworkScreenFadeMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05950
// TypeInfo:  0x0000000142835388
struct NetworkChangeGameSettingMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05947
// TypeInfo:  0x00000001428353C8
struct LevelConsoleSetActiveHealthStateMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05946
// TypeInfo:  0x00000001428353E8
struct NetworkTimeSyncMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05945
// TypeInfo:  0x0000000142835408
struct NetworkLoadLevelMessage
{
    char _0x0000[136];
};//Size=0x0088

////////////////////////////////////////
// RuntimeId: 05944
// TypeInfo:  0x0000000142835428
struct NetworkLevelLoadedAckMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 05943
// TypeInfo:  0x0000000142835448
struct NetworkTinyEventMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05942
// TypeInfo:  0x0000000142835468
struct NetworkPerformanceProfileMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 05398
// TypeInfo:  0x0000000142822C10
struct LevelSetupOption
{
    CString m_Criterion; //0x0000
    CString m_Value; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 05939
// TypeInfo:  0x0000000142835508
struct BlueprintBundlePreloadInfo
{
    CString m_Name; //0x0000
    Int32 m_Compartment; //0x0008
    Int32 m_ParentCompartment; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 05927
// TypeInfo:  0x00000001428328E8
struct SyncedSequenceStateChangeMessageBase
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05926
// TypeInfo:  0x0000000142832908
struct JuiceSoldierRagdollDeactivateMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05925
// TypeInfo:  0x0000000142832928
struct JuiceSoldierRagdollActivateMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05924
// TypeInfo:  0x0000000142832948
struct CoreReadSaveGameDoneMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05923
// TypeInfo:  0x0000000142832968
struct CoreWriteSaveGameDoneMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05922
// TypeInfo:  0x0000000142832988
struct CoreWriteProfileGameMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 05921
// TypeInfo:  0x00000001428329A8
struct CoreWriteSaveGameMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05920
// TypeInfo:  0x00000001428329C8
struct StatisticsEventMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05919
// TypeInfo:  0x00000001428329E8
struct BlueprintBundleStreamedInMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05918
// TypeInfo:  0x0000000142832A08
struct LoadGameBeginLoadMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05917
// TypeInfo:  0x0000000142832A28
struct SaveGameBeginSaveMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05916
// TypeInfo:  0x0000000142832A48
struct SessionPlayerJoinedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05915
// TypeInfo:  0x0000000142832A68
struct SessionPlayerAuthenticatedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05914
// TypeInfo:  0x0000000142832A88
struct SessionPlayerLeftMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05913
// TypeInfo:  0x0000000142832AA8
struct CoreToggleBugSentryMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05912
// TypeInfo:  0x0000000142832AC8
struct CoreGameTimerMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05911
// TypeInfo:  0x0000000142832AE8
struct CoreExitIngameMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05910
// TypeInfo:  0x0000000142832B08
struct CoreEnteredIngameMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05909
// TypeInfo:  0x0000000142832B28
struct PerformanceClientNetworkMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05908
// TypeInfo:  0x0000000142832B48
struct PerformanceServerNetworkMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05907
// TypeInfo:  0x0000000142832B68
struct PerformanceServerMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05906
// TypeInfo:  0x0000000142832B88
struct ProfileOptionsSettingsSavedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05905
// TypeInfo:  0x0000000142832BA8
struct ProfileOptionsSettingsPreSaveMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05904
// TypeInfo:  0x0000000142832BC8
struct ProfileOptionsSettingsLoadedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05903
// TypeInfo:  0x0000000142832BE8
struct ProfileOptionsApplyMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05900
// TypeInfo:  0x0000000142832C28
struct NetworkDisconnectedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05899
// TypeInfo:  0x0000000142832C48
struct NetworkConnectedMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 05898
// TypeInfo:  0x0000000142832C68
struct AIClientBridgeDynamicModelEntityOnUnspawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05897
// TypeInfo:  0x0000000142832C88
struct AIClientBridgeDynamicModelEntityOnSpawnMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05894
// TypeInfo:  0x0000000142832CC8
struct BundleManagerBundleUnloadMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05893
// TypeInfo:  0x0000000142832CE8
struct CoreReadSaveGameDataDoneMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05892
// TypeInfo:  0x0000000142832D08
struct CoreDebugReadProfileGameDataMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05891
// TypeInfo:  0x0000000142832D28
struct CoreDebugReadSaveGameDataMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05890
// TypeInfo:  0x0000000142832D48
struct NetworkLogicFireDoublePlayerEventMessageBase
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05889
// TypeInfo:  0x0000000142832D68
struct NetworkLogicFirePlayerEventMessageBase
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05888
// TypeInfo:  0x0000000142832D88
struct NetworkLogicFireEventMessageBase
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05887
// TypeInfo:  0x0000000142832DA8
struct SubLevelFromClientSubLevelLoadedMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05886
// TypeInfo:  0x0000000142832DC8
struct SubLevelFromClientRequestBundleBaselineMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05885
// TypeInfo:  0x0000000142832DE8
struct SubLevelToClientDropBundleBaselineMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05884
// TypeInfo:  0x0000000142832E08
struct SubLevelToClientUnloadRequestsMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05883
// TypeInfo:  0x0000000142832E28
struct SubLevelToClientLoadRequestsMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05882
// TypeInfo:  0x0000000142832F48
struct SubLevelBundleInfo
{
    Int32 m_CompartmentIndex; //0x0000
    BundleHeapInfo m_HeapInfo; //0x0004
    CString m_Name; //0x0010
    Uint16 m_SubLevelNameInx; //0x0018
    Uint16 m_SubLevelId; //0x001A
    Uint16 m_ParentSubLevelId; //0x001C
    Uint8 m_Priority; //0x001E
    Boolean m_IsBlueprintBundle; //0x001F
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 05880
// TypeInfo:  0x0000000142832E48
struct SubLevelToClientSubLevelNameMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05879
// TypeInfo:  0x0000000142832F68
struct BundleNameAndIndex
{
    CString m_Name; //0x0000
    Uint16 m_Index; //0x0008
    char _0x000A[6];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 05873
// TypeInfo:  0x0000000142832EA8
struct ServerAdministrationPasswordMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05872
// TypeInfo:  0x0000000142832EC8
struct ServerAdministrationEventsEnabledMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05871
// TypeInfo:  0x0000000142832EE8
struct ServerAdministrationQuitMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05870
// TypeInfo:  0x0000000142832F08
struct ServerAdministrationLoginMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05869
// TypeInfo:  0x0000000142832F28
struct ServerAdministrationPacketMessageBase
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05797
// TypeInfo:  0x000000014282DD80
struct ClientSetServerPasswordMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05796
// TypeInfo:  0x000000014282DDA0
struct ClientWantFullscreenMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05795
// TypeInfo:  0x000000014282DDC0
struct ClientLeftRemoteServerMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05794
// TypeInfo:  0x000000014282DDE0
struct ClientDisconnectedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05793
// TypeInfo:  0x000000014282DE00
struct ClientConnectedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05792
// TypeInfo:  0x000000014282DE20
struct ClientAbortCutsceneMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05791
// TypeInfo:  0x000000014282DE40
struct ClientLevelLoadedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05790
// TypeInfo:  0x000000014282DE60
struct ClientLevelLoadProgressMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05789
// TypeInfo:  0x000000014282DE80
struct ClientLevelDescriptionLoadedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05788
// TypeInfo:  0x000000014282DEA0
struct ClientLevelUnloadedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05787
// TypeInfo:  0x000000014282DEC0
struct ClientLoadLevelMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05786
// TypeInfo:  0x000000014282DEE0
struct ClientLoadLevelRequestedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05785
// TypeInfo:  0x000000014282DF00
struct ClientEnteredIngameMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05784
// TypeInfo:  0x000000014282DF20
struct ClientEnterHudIngameMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05783
// TypeInfo:  0x000000014282DF40
struct ClientExitGameMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05782
// TypeInfo:  0x000000014282DF60
struct ClientExitToMenuMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05781
// TypeInfo:  0x000000014282DF80
struct ClientReturnToMenuMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05780
// TypeInfo:  0x000000014282DFA0
struct ClientStartMultiplayerMessage
{
    char _0x0000[104];
};//Size=0x0068

////////////////////////////////////////
// RuntimeId: 05779
// TypeInfo:  0x000000014282DFC0
struct ClientContinueSingleplayerMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05778
// TypeInfo:  0x000000014282DFE0
struct ClientStartedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05777
// TypeInfo:  0x000000014282E000
struct ClientJoinServerJobMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05776
// TypeInfo:  0x000000014282E020
struct ClientPeerNetworkRemovedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05775
// TypeInfo:  0x000000014282E040
struct ClientJoinMultiplayerMessageBase
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05774
// TypeInfo:  0x000000014282E060
struct ClientRestartSingleplayerMessageBase
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05773
// TypeInfo:  0x000000014282E080
struct ClientStartSingleplayerMessageBase
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 05612
// TypeInfo:  0x0000000142827310
struct UserGamerpicBufferReceivedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05603
// TypeInfo:  0x0000000142827330
struct UIBundleUnloadedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05602
// TypeInfo:  0x0000000142827350
struct UIBundleLoadedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05595
// TypeInfo:  0x0000000142827390
struct ClientInputDeviceAddedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05594
// TypeInfo:  0x00000001428273B0
struct ClientEffectPlayMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05593
// TypeInfo:  0x00000001428273D0
struct ClientCommanderPlayerChangedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05592
// TypeInfo:  0x00000001428273F0
struct ClientConnectionUnloadLevelMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05591
// TypeInfo:  0x0000000142827410
struct ClientConnectionLinkLevelMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05590
// TypeInfo:  0x0000000142827430
struct ClientConnectionLoadLevelMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05589
// TypeInfo:  0x0000000142827450
struct ClientConnectionInitializedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05588
// TypeInfo:  0x0000000142827470
struct ClientStateChangingStateMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05587
// TypeInfo:  0x0000000142827490
struct ClientLevelFinalizedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05586
// TypeInfo:  0x00000001428274B0
struct ClientLevelSpawnEntitiesEndMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05585
// TypeInfo:  0x00000001428274D0
struct ClientLevelSpawnDebugEntitiesMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05584
// TypeInfo:  0x00000001428274F0
struct ClientGameplaySoldierHealthRequestMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05583
// TypeInfo:  0x0000000142827510
struct ClientGameplayControllableLowHealthMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05582
// TypeInfo:  0x0000000142827530
struct ClientGameplaySoldierHitMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05581
// TypeInfo:  0x0000000142827550
struct ClientCameraShowKillerMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05580
// TypeInfo:  0x0000000142827570
struct ClientCollisionProjectileImpactMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05579
// TypeInfo:  0x0000000142827590
struct ClientCollisionSpawnExplosionMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05578
// TypeInfo:  0x00000001428275B0
struct ClientCollisionExplosionPackDetonatedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05577
// TypeInfo:  0x00000001428275D0
struct ClientCollisionExplosionPackPlacedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05576
// TypeInfo:  0x00000001428275F0
struct ClientCollisionGrenadeCollisionMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05575
// TypeInfo:  0x0000000142827610
struct ClientSoundVoiceOverFinishedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05574
// TypeInfo:  0x0000000142827630
struct ClientVehicleCriticalDamageMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05573
// TypeInfo:  0x0000000142827650
struct ClientEntityDummyToGetTheClientEntityMessageCategoryMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05572
// TypeInfo:  0x0000000142827670
struct ClientCharacterSpawnDoneMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05571
// TypeInfo:  0x0000000142827690
struct ClientCharacterLocalPlayerDeletedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05570
// TypeInfo:  0x00000001428276B0
struct ClientCharacterLocalPlayerSetMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05569
// TypeInfo:  0x00000001428276D0
struct ClientSpawnSpawnedOrUnSpawnedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05568
// TypeInfo:  0x00000001428276F0
struct ClientControllableUnspawnDoneMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05567
// TypeInfo:  0x0000000142827710
struct ClientControllableSpawnDoneMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05566
// TypeInfo:  0x0000000142827730
struct ClientInputUnchangedInputMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05565
// TypeInfo:  0x0000000142827750
struct ClientInputSettingsRefreshMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05564
// TypeInfo:  0x0000000142827770
struct ClientWeaponDispersionUpdatedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05563
// TypeInfo:  0x0000000142827790
struct ClientWeaponPlayerPrimaryOutOfAmmoMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05562
// TypeInfo:  0x00000001428277B0
struct ClientWeaponPlayerWeaponReloadEndMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05561
// TypeInfo:  0x00000001428277D0
struct ClientWeaponPlayerWeaponReloadBeginMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05560
// TypeInfo:  0x00000001428277F0
struct ClientWeaponPlayerPrimaryWeaponFireMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05559
// TypeInfo:  0x0000000142827810
struct ClientWeaponPlayerWeaponChangeMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05558
// TypeInfo:  0x0000000142827830
struct ClientPlayerReviveRefusedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05557
// TypeInfo:  0x0000000142827850
struct ClientPlayerReviveAcceptedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05556
// TypeInfo:  0x0000000142827870
struct ClientPlayerReviveMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05555
// TypeInfo:  0x0000000142827890
struct ClientPlayerInteractionEntityInRangeChangedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05554
// TypeInfo:  0x00000001428278B0
struct ClientPlayerOnWeaponUndeployFinishedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05553
// TypeInfo:  0x00000001428278D0
struct ClientPlayerSelectedUnlocksMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05552
// TypeInfo:  0x00000001428278F0
struct ClientPlayerDeletedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05551
// TypeInfo:  0x0000000142827910
struct ClientPlayerConnectMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05550
// TypeInfo:  0x0000000142827930
struct ClientPlayerLocalSetMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05549
// TypeInfo:  0x0000000142827950
struct ClientPlayerChangedPlayerViewMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05548
// TypeInfo:  0x0000000142827970
struct ClientPlayerSwitchGroupMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05547
// TypeInfo:  0x0000000142827990
struct ClientPlayerSwitchTeamMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05546
// TypeInfo:  0x00000001428279B0
struct ClientPlayerManDownMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05545
// TypeInfo:  0x00000001428279D0
struct ClientPlayerWeaponPickupMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05544
// TypeInfo:  0x00000001428279F0
struct ClientPlayerAmmoPickupMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05543
// TypeInfo:  0x0000000142827A10
struct ClientPlayerShowKillCardOnlyMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05542
// TypeInfo:  0x0000000142827A30
struct ClientPlayerShowKillCameraMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05541
// TypeInfo:  0x0000000142827A50
struct ClientPlayerKilledMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05540
// TypeInfo:  0x0000000142827A70
struct ClientPlayerEnterEntryMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 05539
// TypeInfo:  0x0000000142827A90
struct ClientPlayerEnterExitVehicleMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 05538
// TypeInfo:  0x0000000142827AB0
struct ClientPlayerRequestCameraChangeMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 05537
// TypeInfo:  0x0000000142827AD0
struct ClientPlayerUpdateCameraComponentMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05536
// TypeInfo:  0x0000000142827AF0
struct ClientMetricsPauseGameMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05535
// TypeInfo:  0x0000000142827B10
struct ClientMetricsUIActionMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05534
// TypeInfo:  0x0000000142827B30
struct ClientMetricsPopUIScreenMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05533
// TypeInfo:  0x0000000142827B50
struct ClientMetricsPushUIScreenMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05482
// TypeInfo:  0x0000000142824958
struct EventKeyframe
{
    Float32 m_Time; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 05458
// TypeInfo:  0x0000000142824978
struct ColorKeyframe
{
    Vec4 m_RGBColor; //0x0000
    Float32 m_Time; //0x0010
    char _0x0014[12];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 05454
// TypeInfo:  0x0000000142824998
struct BoolKeyframe
{
    Float32 m_Time; //0x0000
    Boolean m_Value; //0x0004
    char _0x0005[3];
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 05400
// TypeInfo:  0x0000000142822BF0
struct LevelSetup
{
    CString m_Name; //0x0000
    Array<LevelSetupOption> m_InclusionOptions; //0x0008
    Uint32 m_DifficultyIndex; //0x0010
    char _0x0014[4];
    Array<CString> m_SubLevelNames; //0x0018
    CString m_StartPoint; //0x0020
    Array<Int32> m_SubLevelStates; //0x0028
    Boolean m_IsSaveGame; //0x0030
    Boolean m_ForceReloadResources; //0x0031
    char _0x0032[6];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 05941
// TypeInfo:  0x00000001428354E8
struct LoadLevelInfo
{
    LevelSetup m_Setup; //0x0000
    Array<BlueprintBundlePreloadInfo> m_BlueprintBundlePreloads; //0x0038
    Uint32 m_LevelSequenceNumber; //0x0040
    char _0x0044[4];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 05370
// TypeInfo:  0x0000000142820828
struct TransformPartPropertyKey
{
    Float32 m_Value; //0x0000
    AnimTangentType m_InAnimTangentType; //0x0004
    Float32 m_InAngle; //0x0008
    Float32 m_InWeight; //0x000C
    AnimTangentType m_OutAnimTangentType; //0x0010
    Float32 m_OutAngle; //0x0014
    Float32 m_OutWeight; //0x0018
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 05328
// TypeInfo:  0x0000000142820848
struct SequenceEventData
{
    EventSpec m_Event; //0x0000
    Int32 m_Time; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 05320
// TypeInfo:  0x0000000142820888
struct MaterialRelationPropertyPair
{
    Array<PhysicsMaterialRelationPropertyData*> m_PhysicsMaterialProperties; //0x0000
    Array<PhysicsPropertyRelationPropertyData*> m_PhysicsPropertyProperties; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 05322
// TypeInfo:  0x0000000142820868
struct MaterialInteractionGridRow
{
    Array<MaterialRelationPropertyPair> m_Items; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 07630
// TypeInfo:  0x00000001428577D0
struct OnImpulseModifierData
{
    MaterialDecl m_MaterialPair; //0x0000
    Float32 m_MagnitudeScale; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 05282
// TypeInfo:  0x000000014281C2C8
struct SubLevelDestroyedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05281
// TypeInfo:  0x000000014281C2E8
struct SubLevelEntitiesCreatedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 05254
// TypeInfo:  0x000000014281C3A8
struct SubSkeleton
{
    SkeletonAsset* m_Skeleton; //0x0000
    Array<Int32> m_BoneMap; //0x0008
    Array<LinearTransform> m_TransformMap; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 05248
// TypeInfo:  0x000000014281C3C8
struct GameplayBone
{
    CString m_Name; //0x0000
    GameplayBones m_Bone; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 05106
// TypeInfo:  0x000000014281C3E8
struct EntityStableUid
{
    Uint32 m_Id; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 05104
// TypeInfo:  0x000000014281C408
struct EntityOwnerUid
{
    Uint32 m_Id; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 05102
// TypeInfo:  0x000000014281C428
struct EntityUid
{
    Uint32 m_Id; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 05058
// TypeInfo:  0x000000014281C448
struct PropertyChannel
{
    Realm m_Realm; //0x0000
    Int32 m_Id; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 05056
// TypeInfo:  0x000000014281C468
struct EventChannel
{
    Realm m_Realm; //0x0000
    Int32 m_Id; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 05054
// TypeInfo:  0x000000014281C488
struct LinkChannel
{
    Realm m_Realm; //0x0000
    Int32 m_Id; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 05024
// TypeInfo:  0x000000014281C4A8
struct DynamicLink
{
    Int32 m_Id; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 05022
// TypeInfo:  0x000000014281C4C8
struct DynamicEvent
{
    Int32 m_Id; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 05020
// TypeInfo:  0x000000014281C4E8
struct EventConnection
{
    DataContainer* m_Source; //0x0000
    DataContainer* m_Target; //0x0008
    EventSpec m_SourceEvent; //0x0010
    EventSpec m_TargetEvent; //0x0014
    EventConnectionTargetType m_TargetType; //0x0018
    char _0x001C[4];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 06936
// TypeInfo:  0x000000014284F7A0
struct AntEventData
{
    Int32 m_TagId; //0x0000
    EventSpec m_Event; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 06962
// TypeInfo:  0x000000014284F540
struct BlueprintBundleReference
{
    CString m_Name; //0x0000
    BlueprintBundleSettings m_Settings; //0x0008
    Uint32 m_BaseBundleHash; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 04871
// TypeInfo:  0x0000000142813728
struct EmitterExclusionVolumeBoundingSphereSoA
{
    Vec4 m_PosX; //0x0000
    Vec4 m_PosY; //0x0010
    Vec4 m_PosZ; //0x0020
    Vec4 m_RadiusSqr; //0x0030
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 04869
// TypeInfo:  0x0000000142813748
struct EmitterExclusionVolume
{
    Vec4 m_Left; //0x0000
    Vec4 m_Up; //0x0010
    Vec4 m_Forward; //0x0020
    Vec4 m_HalfExtents; //0x0030
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 04721
// TypeInfo:  0x00000001428136B0
struct PolynomialTempData
{
    Vec4 m_Coefficients; //0x0000
    Float32 m_ScaleValue; //0x0010
    Float32 m_MinClamp; //0x0014
    Float32 m_MaxClamp; //0x0018
    char _0x001C[4];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 04712
// TypeInfo:  0x0000000142811020
struct BreakablePartToStaticEntityPart
{
    Uint32 m_BreakablePartIndex; //0x0000
    Uint32 m_StaticModelPartIndex; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 04710
// TypeInfo:  0x0000000142811040
struct StaticModelToBreakableParts
{
    Uint32 m_StaticModelIndex; //0x0000
    Uint32 m_BreakablePartStartIndex; //0x0004
    Uint32 m_BreakablePartCount; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 04702
// TypeInfo:  0x0000000142810FA0
struct BreakableModelToComponentsSpawnPartObjectsOnCollapseMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 04701
// TypeInfo:  0x0000000142810FC0
struct BreakableModelToComponentsCollapseMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 04674
// TypeInfo:  0x000000014280FFE8
struct DebrisClusterPartInfoData
{
    Vec3 m_LinearVelocity; //0x0000
    Vec3 m_AngularVelocity; //0x0010
    Int32 m_PartIndex; //0x0020
    Int32 m_NumberOfChildren; //0x0024
    Float32 m_SplitSpeedThreshold; //0x0028
    Boolean m_SyncRestPosition; //0x002C
    Boolean m_SyncContinous; //0x002D
    Boolean m_InEffectWorldOnly; //0x002E
    char _0x002F[1];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 04668
// TypeInfo:  0x0000000142810008
struct DebrisHavokInfo
{
    HavokAsset* m_HavokAsset; //0x0000
    Int32 m_ReserveCount; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 04666
// TypeInfo:  0x0000000142810028
struct DebrisSystemMetrics
{
    Int32 m_HavokParticleCount; //0x0000
    Int32 m_HavokParticlePartCount; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 04593
// TypeInfo:  0x0000000142807FF0
struct AudioLanguageMapping
{
    AudioLanguage* m_Source; //0x0000
    AudioLanguage* m_Target; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 04585
// TypeInfo:  0x0000000142808010
struct SoundPatchPublicNode
{
    AudioGraphNodeData* m_Node; //0x0000
    Uint32 m_Id; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 04567
// TypeInfo:  0x0000000142808030
struct SoundWaveLocalizationInfo
{
    AudioLanguage* m_Language; //0x0000
    Uint16 m_FirstVariationIndex; //0x0008
    Uint16 m_VariationCount; //0x000A
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 04561
// TypeInfo:  0x0000000142808050
struct SoundDataReference
{
    DataContainer* m_DataOwner; //0x0000
    SoundDataAsset* m_SoundData; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 04549
// TypeInfo:  0x0000000142808070
struct MixerInputInfo
{
    MixerValueAccumulateMode m_Mode; //0x0000
    Boolean m_KeepValue; //0x0004
    char _0x0005[3];
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 04543
// TypeInfo:  0x0000000142808090
struct MixerPresetNodeData
{
    AudioGraphNodeData* m_Node; //0x0000
    Float32 m_Value; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 04539
// TypeInfo:  0x00000001428080D0
struct MixGroupPropertyValue
{
    Uint32 m_Property; //0x0000
    Float32 m_Value; //0x0004
    Boolean m_Controlled; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 04541
// TypeInfo:  0x00000001428080B0
struct MixerPresetGroupData
{
    MixGroup* m_Group; //0x0000
    MixGroupState m_State; //0x0008
    Float32 m_AttackTime; //0x000C
    Float32 m_ReleaseTime; //0x0010
    Int32 m_Priority; //0x0014
    Array<MixGroupPropertyValue> m_Properties; //0x0018
    Boolean m_IsDominant; //0x0020
    Boolean m_IsAdditive; //0x0021
    char _0x0022[6];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 04533
// TypeInfo:  0x00000001428080F0
struct MixGroupPropertyParameters
{
    Uint32 m_Property; //0x0000
    Float32 m_MinOffset; //0x0004
    Float32 m_MaxOffset; //0x0008
    Float32 m_DefaultValue; //0x000C
    Boolean m_EnableOffsetMinMax; //0x0010
    Boolean m_OverrideDefaultValue; //0x0011
    char _0x0012[2];
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 04479
// TypeInfo:  0x0000000142807E70
struct AudioGraphNodePort
{
    Float32 m_UnconnectedValue; //0x0000
    Uint16 m_ValueIndex; //0x0004
    Boolean m_IsConnected; //0x0006
    char _0x0007[1];
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 04421
// TypeInfo:  0x0000000142808110
struct RangeMapperEntry
{
    Float32 m_RangeStart; //0x0000
    Float32 m_RangeEnd; //0x0004
    Float32 m_OutputValue; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 04323
// TypeInfo:  0x0000000142808130
struct VoiceOverManuscriptLanguageColumns
{
    AudioLanguage* m_Language; //0x0000
    CString m_TextColumn; //0x0008
    CString m_SubtitleOffsetColumn; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 04295
// TypeInfo:  0x0000000142807E90
struct VoiceOverConversationInfo
{
    Array<VoiceOverDialogGroup*> m_Groups; //0x0000
    Array<VoiceOverDialogTrack*> m_Tracks; //0x0008
    Array<VoiceOverPronunciation*> m_Pronunciations; //0x0010
    VoiceOverConversationInterruptMode m_InterruptMode; //0x0018
    Int32 m_Priority; //0x001C
    VoiceOverConversationQueueMode m_QueueMode; //0x0020
    Float32 m_Relevancy; //0x0024
    Uint8 m_LastSequenceIndex; //0x0028
    char _0x0029[7];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 04283
// TypeInfo:  0x0000000142808150
struct VoiceOverDialogTakeMapping
{
    Float32 m_TakeControlMin; //0x0000
    Float32 m_TakeControlMax; //0x0004
    Uint8 m_TakeIndex; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 04277
// TypeInfo:  0x0000000142808170
struct VoiceOverDialogTake
{
    SoundWaveAsset* m_Wave; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 04197
// TypeInfo:  0x0000000142807EB0
struct VoiceOverValueConnection
{
    VoiceOverExpressionNode* m_TargetNode; //0x0000
    VoiceOverValue* m_TargetValue; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 04027
// TypeInfo:  0x0000000142807F90
struct SoundGraphPluginRef
{
    Boolean m_IsValid; //0x0000
    Uint8 m_VoiceIndex; //0x0001
    Uint8 m_PluginIndex; //0x0002
};//Size=0x0003

////////////////////////////////////////
// RuntimeId: 04135
// TypeInfo:  0x00000001428081B0
struct MusicOverlayVariation
{
    Float32 m_MinimumTimeRemaining; //0x0000
    char _0x0004[4];
    SoundWaveAsset* m_Wave; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 04083
// TypeInfo:  0x00000001428081D0
struct SoundScopeStrategyMapping
{
    SoundScopeData* m_Scope; //0x0000
    SoundScopeStrategyData* m_Strategy; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 04075
// TypeInfo:  0x00000001428081F0
struct SoundWaveRuntimeVariation
{
    Uint32 m_PersistentDataSize; //0x0000
    Uint16 m_FirstSegmentIndex; //0x0004
    Uint8 m_FirstSubtitleIndex; //0x0006
    Uint8 m_SubtitleCount; //0x0007
    Uint8 m_SegmentCount; //0x0008
    Uint8 m_ChunkIndex; //0x0009
    Uint8 m_FirstLoopSegmentIndex; //0x000A
    Uint8 m_LastLoopSegmentIndex; //0x000B
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 04071
// TypeInfo:  0x0000000142808210
struct SoundWaveSubtitle
{
    Float32 m_Time; //0x0000
    Uint8 m_StringIndex; //0x0004
    char _0x0005[3];
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 04069
// TypeInfo:  0x0000000142808230
struct SoundWaveVariationSegment
{
    Uint32 m_SamplesOffset; //0x0000
    Uint32 m_SeekTableOffset; //0x0004
    Float32 m_SegmentLength; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 04055
// TypeInfo:  0x0000000142808250
struct SoundDataChunk
{
    Guid m_ChunkId; //0x0000
    Uint32 m_ChunkSize; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 04029
// TypeInfo:  0x00000001428082B0
struct SoundGraphPluginInfo
{
    Uint32 m_Id; //0x0000
    Uint32 m_EnableAttributeReadMask; //0x0004
    Uint8 m_ConnectionIndex; //0x0008
    Uint8 m_OutputChannelCount; //0x0009
    Uint8 m_ConstructParamsIndex; //0x000A
    Uint8 m_ConstructParamCount; //0x000B
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 04033
// TypeInfo:  0x0000000142808270
struct SoundGraphVoiceInfo
{
    Array<SoundGraphPluginInfo> m_Plugins; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 04031
// TypeInfo:  0x0000000142808290
struct SoundGraphLinkedPluginAttribute
{
    Float32 m_UnconnectedValue; //0x0000
    Uint16 m_ValueIndex; //0x0004
    Uint16 m_NodeIndexAndFlags; //0x0006
    Uint8 m_VoiceIndex; //0x0008
    Uint8 m_PluginIndex; //0x0009
    Uint8 m_AttributeIndex; //0x000A
    char _0x000B[1];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 04019
// TypeInfo:  0x0000000142808310
struct SoundGraphPluginConnectionParam
{
    Int32 m_Value; //0x0000
    Uint8 m_Index; //0x0004
    char _0x0005[3];
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 04167
// TypeInfo:  0x0000000142808190
struct MusicPlayerPlugins
{
    SoundGraphPluginRef m_SndPlayer; //0x0000
    SoundGraphPluginRef m_Rechannel; //0x0003
    SoundGraphPluginRef m_Resample; //0x0006
    SoundGraphPluginRef m_Pause; //0x0009
    SoundGraphPluginRef m_Gain; //0x000C
};//Size=0x000F

////////////////////////////////////////
// RuntimeId: 04025
// TypeInfo:  0x00000001428082D0
struct SoundGraphPluginConstructParam
{
    Float32 m_Value; //0x0000
    Uint8 m_Index; //0x0004
    char _0x0005[3];
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 04023
// TypeInfo:  0x00000001428082F0
struct SoundGraphPluginConnection
{
    SoundGraphPluginConnectionType m_ConnectionType; //0x0000
    char _0x0004[4];
    SoundBusData* m_Bus; //0x0008
    Array<SoundGraphPluginConnectionParam> m_Parameters; //0x0010
    Uint8 m_VoiceIndex; //0x0018
    Uint8 m_PluginIndex; //0x0019
    Uint8 m_SignalIndex; //0x001A
    char _0x001B[5];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 04035
// TypeInfo:  0x0000000142807F70
struct SoundGraphInfo
{
    Array<SoundGraphVoiceInfo> m_Voices; //0x0000
    Array<SoundGraphLinkedPluginAttribute> m_LinkedPluginAttributes; //0x0008
    Array<SoundGraphPluginConnection> m_Connections; //0x0010
    Array<SoundGraphPluginConstructParam> m_ConstructParams; //0x0018
    Uint32 m_PluginsParamCount; //0x0020
    Uint32 m_PluginCount; //0x0024
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 04013
// TypeInfo:  0x0000000142808330
struct PointEnvelopePoint
{
    Float32 m_X; //0x0000
    Float32 m_Y; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 03985
// TypeInfo:  0x0000000142808350
struct SamplerPlugins
{
    SoundGraphPluginRef m_SndPlayer; //0x0000
    SoundGraphPluginRef m_Resample; //0x0003
    SoundGraphPluginRef m_Pause; //0x0006
    SoundGraphPluginRef m_Gain; //0x0009
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 03899
// TypeInfo:  0x0000000142808370
struct DivisibleLoopPlayerPlugins
{
    SoundGraphPluginRef m_SndPlayer; //0x0000
    SoundGraphPluginRef m_Pause; //0x0003
    SoundGraphPluginRef m_Gain; //0x0006
    SoundGraphPluginRef m_GainFader; //0x0009
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 07906
// TypeInfo:  0x000000014285F280
struct AntAnimationHandlerData
{
    AntAnimatableData m_Animatable; //0x0000
    AntRef m_RootController; //0x0060
    LodBinding m_LodBinding; //0x0074
    Array<Int32> m_JointOutputFieldHashes; //0x00D8
    Array<Int32> m_JointEnabledFieldHashes; //0x00E0
    AntControllerComplexity m_ControllerComplexity; //0x00E8
    Boolean m_ReportBackFromAnt; //0x00EC
    Boolean m_EnableMasterSlaveCopy; //0x00ED
    Boolean m_IsProp; //0x00EE
    char _0x00EF[1];
};//Size=0x00F0

////////////////////////////////////////
// RuntimeId: 03851
// TypeInfo:  0x00000001427FEA00
struct AntScenario
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 03849
// TypeInfo:  0x00000001427FEA20
struct AntRefInfo
{
    Guid m_FrostbitePartition; //0x0000
    AntRef m_AntRef; //0x0010
};//Size=0x0024

////////////////////////////////////////
// RuntimeId: 09846
// TypeInfo:  0x0000000142886C48
struct WeaponLagBinding
{
    AntRef m_EntityPitch; //0x0000
    AntRef m_EntityYaw; //0x0014
    AntRef m_PitchResult; //0x0028
    AntRef m_YawResult; //0x003C
    AntRef m_RollResult; //0x0050
};//Size=0x0064

////////////////////////////////////////
// RuntimeId: 03836
// TypeInfo:  0x00000001427FDE48
struct CoreSettings
{
    CString m_Host; //0x0000
    CString m_HostUser; //0x0008
    CString m_HostUserDomain; //0x0010
    CString m_InitSeed; //0x0018
    CoreLogLevel m_LogLevel; //0x0020
    CoreLogLevel m_DialogLevel; //0x0024
    Uint32 m_DebugOutputMode; //0x0028
    Int32 m_RandomTimeSeed; //0x002C
    Int32 m_RandomTickSeed; //0x0030
    Int32 m_RandomSessionId; //0x0034
    CString m_GameConfigurationName; //0x0038
    HardwareProfile m_HardwareProfile; //0x0040
    Float32 m_HardwareCpuBias; //0x0044
    Float32 m_HardwareGpuBias; //0x0048
    char _0x004C[4];
    CString m_ProfileDirectoryName; //0x0050
    Float32 m_ScatterJobYieldGranularity; //0x0058
    char _0x005C[4];
    CString m_AvailableLanguages; //0x0060
    Boolean m_LiveEditingEnable; //0x0068
    Boolean m_UserLogEnabled; //0x0069
    Boolean m_DisplayAsserts; //0x006A
    Boolean m_CrashOnFatalErrors; //0x006B
    Boolean m_UseStorageServer; //0x006C
    Boolean m_EnableLocalization; //0x006D
    Boolean m_EnableSpikePacketBuffering; //0x006E
    char _0x006F[1];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 03828
// TypeInfo:  0x00000001427FDE68
struct PlatformScalableBool
{
    Boolean m_Default; //0x0000
    Boolean m_Xenon; //0x0001
    Boolean m_Ps3; //0x0002
    Boolean m_Gen4a; //0x0003
    Boolean m_Gen4b; //0x0004
};//Size=0x0005

////////////////////////////////////////
// RuntimeId: 03826
// TypeInfo:  0x00000001427FDE88
struct PlatformScalableFloat
{
    Float32 m_Default; //0x0000
    Float32 m_Xenon; //0x0004
    Float32 m_Ps3; //0x0008
    Float32 m_Gen4a; //0x000C
    Float32 m_Gen4b; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 03824
// TypeInfo:  0x00000001427FDEA8
struct PlatformScalableInt
{
    Int32 m_Default; //0x0000
    Int32 m_Xenon; //0x0004
    Int32 m_Ps3; //0x0008
    Int32 m_Gen4a; //0x000C
    Int32 m_Gen4b; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 03820
// TypeInfo:  0x00000001427FDEC8
struct QualityScalableBool
{
    Boolean m_Low; //0x0000
    Boolean m_Medium; //0x0001
    Boolean m_High; //0x0002
    Boolean m_Ultra; //0x0003
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 03818
// TypeInfo:  0x00000001427FDEE8
struct QualityScalableFloat
{
    Float32 m_Low; //0x0000
    Float32 m_Medium; //0x0004
    Float32 m_High; //0x0008
    Float32 m_Ultra; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03816
// TypeInfo:  0x00000001427FDF08
struct QualityScalableInt
{
    Int32 m_Low; //0x0000
    Int32 m_Medium; //0x0004
    Int32 m_High; //0x0008
    Int32 m_Ultra; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03806
// TypeInfo:  0x00000001427FDF28
struct DataField
{
    CString m_Value; //0x0000
    DataContainer* m_ValueRef; //0x0008
    Int32 m_Id; //0x0010
    FieldAccessType m_AccessType; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03802
// TypeInfo:  0x00000001427FDF48
struct LinkConnection
{
    DataContainer* m_Source; //0x0000
    DataContainer* m_Target; //0x0008
    Int32 m_SourceFieldId; //0x0010
    Int32 m_TargetFieldId; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03800
// TypeInfo:  0x00000001427FDF68
struct PropertyConnection
{
    DataContainer* m_Source; //0x0000
    DataContainer* m_Target; //0x0008
    Int32 m_SourceFieldId; //0x0010
    Int32 m_TargetFieldId; //0x0014
    Boolean m_ShouldNetworkValue; //0x0018
    char _0x0019[7];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 03780
// TypeInfo:  0x00000001427FDF88
struct InternetSimulationState
{
    Float32 m_ReorderRatio; //0x0000
    Float32 m_LatencyMin; //0x0004
    Float32 m_LatencyMax; //0x0008
    Float32 m_DuplicateRatio; //0x000C
    Float32 m_DropRatio; //0x0010
    Float32 m_CorruptRatio; //0x0014
    Float32 m_SizeRatio; //0x0018
    Float32 m_SpikeDurationMin; //0x001C
    Float32 m_SpikeDurationMax; //0x0020
    Float32 m_SpikeCooldownMin; //0x0024
    Float32 m_SpikeCooldownMax; //0x0028
    Float32 m_BandwidthMax; //0x002C
    Float32 m_BandwidthDelayMax; //0x0030
    Boolean m_Enabled; //0x0034
    char _0x0035[3];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 03778
// TypeInfo:  0x00000001427FDC68
struct StreamInstallGameInstalledMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03777
// TypeInfo:  0x00000001427FDC88
struct StreamInstallRequestResumeMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03776
// TypeInfo:  0x00000001427FDCA8
struct StreamInstallRequestSuspendMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03775
// TypeInfo:  0x00000001427FDCC8
struct StreamInstallInstallDoneMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 03774
// TypeInfo:  0x00000001427FDCE8
struct StreamInstallChunkInstalledMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 03773
// TypeInfo:  0x00000001427FDD08
struct StreamInstallInstallProgressMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 03772
// TypeInfo:  0x00000001427FDD28
struct StreamInstallInstallingMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03771
// TypeInfo:  0x00000001427FDD48
struct CoreCleanupMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03770
// TypeInfo:  0x00000001427FDD68
struct CoreSublevelStartStreamOutMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03769
// TypeInfo:  0x00000001427FDD88
struct CorePanicMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03768
// TypeInfo:  0x00000001427FDDA8
struct CoreQuitMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03767
// TypeInfo:  0x00000001427FDDC8
struct CoreUpdateClipboardMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 03766
// TypeInfo:  0x00000001427FDDE8
struct CoreMainThreadInitMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03765
// TypeInfo:  0x00000001427FDE08
struct CoreHibernateMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 03764
// TypeInfo:  0x00000001427FDE28
struct CoreQuittingInitiatedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 03757
// TypeInfo:  0x00000001427FCB08
struct SplineCurve
{
    Vec4 m_XValues0; //0x0000
    Vec4 m_XValues1; //0x0010
    Vec4 m_XValues2; //0x0020
    Vec4 m_YValues0; //0x0030
    Vec4 m_YValues1; //0x0040
    Vec4 m_YValues2; //0x0050
    Vec4 m_YValues3; //0x0060
    Vec4 m_GValues0; //0x0070
    Vec4 m_GValues1; //0x0080
    Vec4 m_GValues2; //0x0090
    Vec4 m_GValues3; //0x00A0
    Vec4 m_GValues4; //0x00B0
    Vec4 m_GValues5; //0x00C0
    SplineType m_SplineType; //0x00D0
    char _0x00D4[12];
};//Size=0x00E0

////////////////////////////////////////
// RuntimeId: 03749
// TypeInfo:  0x00000001427FCB48
struct AudioCurvePoint
{
    Float32 m_X; //0x0000
    Float32 m_Y; //0x0004
    Float32 m_K; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 03753
// TypeInfo:  0x00000001427FCB28
struct AudioCurve
{
    Array<AudioCurvePoint> m_Points; //0x0000
    AudioCurveType m_CurveType; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 08154
// TypeInfo:  0x0000000142863588
struct PartInfoData
{
    AxisAlignedBox m_Aabb; //0x0000
    Vec3 m_Translation; //0x0020
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 03705
// TypeInfo:  0x0000000142149140
struct Mat4
{
    Float32 m_m11; //0x0000
    Float32 m_m12; //0x0004
    Float32 m_m13; //0x0008
    Float32 m_m14; //0x000C
    Float32 m_m21; //0x0010
    Float32 m_m22; //0x0014
    Float32 m_m23; //0x0018
    Float32 m_m24; //0x001C
    Float32 m_m31; //0x0020
    Float32 m_m32; //0x0024
    Float32 m_m33; //0x0028
    Float32 m_m34; //0x002C
    Float32 m_m41; //0x0030
    Float32 m_m42; //0x0034
    Float32 m_m43; //0x0038
    Float32 m_m44; //0x003C
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 09691
// TypeInfo:  0x0000000142887268
struct WeaponStateData
{
    Array<Uint32> m_ReferencedAssetHashes; //0x0000
    Array<BoneFakePhysicsData*> m_BoneFakePhysics; //0x0008
    ObjectBlueprint* m_WeaponMesh3p; //0x0010
    SkinnedMeshAsset* m_Mesh3p; //0x0018
    AntRef m_Weapon; //0x0020
    AntRef m_Weapon3p; //0x0034
    Float32 m_ZoomMeshTransitionFactor; //0x0048
    Float32 m_ZoomScaleFactor; //0x004C
    Array<Float32> m_ZoomInOutMeshTransitionFactors; //0x0050
    Float32 m_KeepAimingTime; //0x0058
    AnimatedFireEnum m_AnimatedFireType; //0x005C
    AnimatedAimingEnum m_AnimatedAimingType; //0x0060
    Float32 m_HideProjectileAfterFireTime; //0x0064
    CString m_ProjectileBoneName; //0x0068
    Float32 m_UnDeploySpeed; //0x0070
    Float32 m_DeploySpeed; //0x0074
    Array<LinearTransform> m_Mesh3pTransforms; //0x0078
    Boolean m_AlwaysAimHead; //0x0080
    Boolean m_IsOneHanded; //0x0081
    Boolean m_PlayDeployAfterFire; //0x0082
    Boolean m_SkipDeployAnimation; //0x0083
    Boolean m_SkipReloadAnimation; //0x0084
    Boolean m_SkipFireAnimation; //0x0085
    Boolean m_SendFireWhenPrefiring; //0x0086
    char _0x0087[1];
};//Size=0x0088

////////////////////////////////////////
// RuntimeId: 03701
// TypeInfo:  0x0000000142149180
struct Plane
{
    Float32 m_x; //0x0000
    Float32 m_y; //0x0004
    Float32 m_z; //0x0008
    Float32 m_w; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03699
// TypeInfo:  0x0000000142149100
struct Quat
{
    Float32 m_x; //0x0000
    Float32 m_y; //0x0004
    Float32 m_z; //0x0008
    Float32 m_w; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 09920
// TypeInfo:  0x000000014288BD00
struct AmbientWaveSettings
{
    SplineCurve m_WindDistribution; //0x0000
    Float32 m_WaveAmplitude; //0x00E0
    Float32 m_WindSpeed; //0x00E4
    Float32 m_WindAngle; //0x00E8
    Float32 m_MinWavelength; //0x00EC
    Float32 m_LargeWaveReduction; //0x00F0
    Float32 m_FoamHalfLife; //0x00F4
    Float32 m_FoamThreshold; //0x00F8
    Float32 m_FoamMaxValue; //0x00FC
};//Size=0x0100

////////////////////////////////////////
// RuntimeId: 09721
// TypeInfo:  0x0000000142887228
struct BulletHitInfo
{
    Vec3 m_Direction; //0x0000
    Vec3 m_SpawnPosition; //0x0010
    Vec3 m_HitPosition; //0x0020
    UnlockAssetBase* m_WeaponUnlockAsset; //0x0030
    AntHitReactionWeaponType m_WeaponType; //0x0038
    Int32 m_BoneType; //0x003C
    Int32 m_ShooterPlayerId; //0x0040
    Boolean m_ShooterIsAIPlayer; //0x0044
    char _0x0045[11];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 08992
// TypeInfo:  0x0000000142877058
struct LensFlareElement
{
    Vec4 m_SizeOccluderCurve; //0x0000
    Vec4 m_SizeScreenPosCurve; //0x0010
    Vec4 m_SizeAngleCurve; //0x0020
    Vec4 m_SizeCamDistCurve; //0x0030
    Vec4 m_AlphaOccluderCurve; //0x0040
    Vec4 m_AlphaScreenPosCurve; //0x0050
    Vec4 m_AlphaAngleCurve; //0x0060
    Vec4 m_AlphaCamDistCurve; //0x0070
    Vec4 m_RotationDistCurve; //0x0080
    SurfaceShaderBaseAsset* m_Shader; //0x0090
    Float32 m_RayDistance; //0x0098
    Vec2 m_Size; //0x009C
    Float32 m_SizeCamDistMax; //0x00A4
    Float32 m_AlphaCamDistMax; //0x00A8
    Float32 m_RotationLocal; //0x00AC
    Float32 m_RotationDistMultiplier; //0x00B0
    Boolean m_RotationAlignedToRay; //0x00B4
    char _0x00B5[11];
};//Size=0x00C0

////////////////////////////////////////
// RuntimeId: 03677
// TypeInfo:  0x00000001427F9208
struct HudCameraShakeParams
{
    Float32 m_WeaponDispersionMin; //0x0000
    Float32 m_WeaponDispersionMax; //0x0004
    Float32 m_WeaponDispersionScale; //0x0008
    Uint32 m_WeaponDispersionFilterSize; //0x000C
    Float32 m_JumpEffectDurationMin; //0x0010
    Float32 m_JumpEffectDurationMax; //0x0014
    Float32 m_JumpEffectMin; //0x0018
    Float32 m_JumpEffectMax; //0x001C
    Float32 m_LandEffectDurationMin; //0x0020
    Float32 m_LandEffectDurationMax; //0x0024
    Float32 m_LandEffectMin; //0x0028
    Float32 m_LandEffectMax; //0x002C
    Uint32 m_JumpAndLandEffectFilterSize; //0x0030
    Float32 m_CameraShakeMinAngle; //0x0034
    Float32 m_CameraShakeMaxAngle; //0x0038
    Float32 m_CameraShakeXScale; //0x003C
    Float32 m_CameraShakeYScale; //0x0040
    Uint32 m_CameraShakeFilterSize; //0x0044
    Float32 m_WeaponLagXScale; //0x0048
    Float32 m_WeaponLagYScale; //0x004C
    Uint32 m_LagFilterSize; //0x0050
    Float32 m_DisplacementPivotZ; //0x0054
    Float32 m_MaxDisplacementAngle; //0x0058
    Float32 m_MaxDisplacementZ; //0x005C
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 03657
// TypeInfo:  0x00000001427F9228
struct UITooltipLine
{
    Int32 m_InputAction; //0x0000
    UIInputActionAxisDisplay m_Axis; //0x0004
    CString m_Description; //0x0008
    Boolean m_HideWhenMissingIcon; //0x0010
    char _0x0011[7];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03651
// TypeInfo:  0x00000001427F9248
struct UIMouseButtonsGroup
{
    Boolean m_IsWin32; //0x0000
    Boolean m_IsXenon; //0x0001
    Boolean m_IsPS3; //0x0002
    Boolean m_IsDurango; //0x0003
    Boolean m_IsOrbis; //0x0004
};//Size=0x0005

////////////////////////////////////////
// RuntimeId: 03601
// TypeInfo:  0x00000001427F90E8
struct UITextureAtlasInfo
{
    Vec2 m_MinUv; //0x0000
    Vec2 m_MaxUv; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03647
// TypeInfo:  0x00000001427F9288
struct UIKeysButtonsGroup
{
    Boolean m_IsWin32; //0x0000
    Boolean m_IsXenon; //0x0001
    Boolean m_IsPS3; //0x0002
    Boolean m_IsDurango; //0x0003
    Boolean m_IsOrbis; //0x0004
};//Size=0x0005

////////////////////////////////////////
// RuntimeId: 03645
// TypeInfo:  0x00000001427F92A8
struct UIKeysButtonTexture
{
    InputDeviceKeys m_Key; //0x0000
    UITextureAtlasInfo m_AtlasInfo; //0x0004
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 03643
// TypeInfo:  0x00000001427F92C8
struct UIPadButtonsGroup
{
    Boolean m_IsWin32; //0x0000
    Boolean m_IsXenon; //0x0001
    Boolean m_IsPS3; //0x0002
    Boolean m_IsDurango; //0x0003
    Boolean m_IsOrbis; //0x0004
};//Size=0x0005

////////////////////////////////////////
// RuntimeId: 03641
// TypeInfo:  0x00000001427F92E8
struct UIPadButtonTexture
{
    InputDevicePadButtons m_PadButton; //0x0000
    UITextureAtlasInfo m_AtlasInfo; //0x0004
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 03639
// TypeInfo:  0x00000001427F9308
struct UIAxesButtonsGroup
{
    Boolean m_IsWin32; //0x0000
    Boolean m_IsXenon; //0x0001
    Boolean m_IsPS3; //0x0002
    Boolean m_IsDurango; //0x0003
    Boolean m_IsOrbis; //0x0004
};//Size=0x0005

////////////////////////////////////////
// RuntimeId: 03637
// TypeInfo:  0x00000001427F9328
struct UIAxesButtonTexture
{
    InputDeviceAxes m_Axis; //0x0000
    UITextureAtlasInfo m_AtlasInfo; //0x0004
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 03631
// TypeInfo:  0x00000001427F9368
struct UICreditsColumn
{
    CString m_Text; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 03633
// TypeInfo:  0x00000001427F9348
struct UICreditsRow
{
    UICreditsTextType m_TextType; //0x0000
    char _0x0004[4];
    Array<UICreditsColumn> m_Columns; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03627
// TypeInfo:  0x00000001427F9388
struct UIMinimapData
{
    Float32 m_WorldRotation; //0x0000
    Float32 m_AirRadarRange; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 03625
// TypeInfo:  0x00000001427F93A8
struct UIMinimapDistanceFieldParams
{
    Vec4 m_ColorTint; //0x0000
    Vec4 m_OutlineColor; //0x0010
    UIDistanceFieldAsset* m_DistanceField; //0x0020
    Float32 m_AlphaThreshold; //0x0028
    Float32 m_DistanceScale; //0x002C
    Float32 m_OutlineInner; //0x0030
    Float32 m_OutlineOuter; //0x0034
    char _0x0038[8];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 03615
// TypeInfo:  0x00000001427F9408
struct UIMinimapIconUv
{
    Vec2 m_MinUv; //0x0000
    Vec2 m_MaxUv; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03617
// TypeInfo:  0x00000001427F93E8
struct UIMinimapIconTextureState
{
    UIIconMode m_Mode; //0x0000
    UIIconState m_State; //0x0004
    Float32 m_FrameRate; //0x0008
    char _0x000C[4];
    Array<UIMinimapIconUv> m_TextureInfos; //0x0010
    Boolean m_ShouldRotate; //0x0018
    char _0x0019[7];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 03619
// TypeInfo:  0x00000001427F93C8
struct UIMinimapIconTexture
{
    UIHudIcon m_IconType; //0x0000
    char _0x0004[4];
    CString m_Name; //0x0008
    Array<UIMinimapIconTextureState> m_States; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03649
// TypeInfo:  0x00000001427F9268
struct UIMouseButtonTexture
{
    InputDeviceMouseButtons m_MouseButton; //0x0000
    UITextureAtlasInfo m_AtlasInfo; //0x0004
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 03585
// TypeInfo:  0x00000001427F9108
struct SuppressionReactionData
{
    Float32 m_SuppressionHighThreshold; //0x0000
    Float32 m_SuppressionLowThreshold; //0x0004
    Float32 m_SuppressionUIThreshold; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 03439
// TypeInfo:  0x00000001427F9428
struct ScoringBucketModifierData
{
    ScoringBucket m_Bucket; //0x0000
    Float32 m_Modifier; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 03437
// TypeInfo:  0x00000001427F9448
struct ScoringBucketUnlockData
{
    Uint32 m_PointsNeeded; //0x0000
    char _0x0004[4];
    BasicUnlockInfo m_UnlockInfo; //0x0008
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 03427
// TypeInfo:  0x00000001427F9488
struct MapRotationEntry
{
    CString m_ShortGameModeName; //0x0000
    CString m_FullGameModeName; //0x0008
    CString m_MapName; //0x0010
    CString m_FullMapName; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 03429
// TypeInfo:  0x00000001427F9468
struct MapRotationConfig
{
    Int32 m_MapRotationId; //0x0000
    char _0x0004[4];
    Array<GamePlatform> m_Platforms; //0x0008
    CString m_NameSid; //0x0010
    CString m_DescSid; //0x0018
    CString m_Mod; //0x0020
    CString m_Key; //0x0028
    Array<MapRotationEntry> m_MapRotation; //0x0030
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 03425
// TypeInfo:  0x00000001427F94A8
struct SettingCategory
{
    Uint32 m_CategoryId; //0x0000
    char _0x0004[4];
    CString m_NameSid; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03419
// TypeInfo:  0x00000001427F9508
struct SettingRange
{
    CString m_Key; //0x0000
    Uint32 m_Min; //0x0008
    Uint32 m_Max; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03421
// TypeInfo:  0x00000001427F94E8
struct RSPPlatformSettingRange
{
    Array<GamePlatform> m_Platforms; //0x0000
    Array<SettingRange> m_Ranges; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03423
// TypeInfo:  0x00000001427F94C8
struct SettingsRangeConfig
{
    CString m_Key; //0x0000
    Array<SettingRange> m_Ranges; //0x0008
    Array<RSPPlatformSettingRange> m_PlatformRanges; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03413
// TypeInfo:  0x00000001427F9568
struct LockedSettingConfig
{
    CString m_Key; //0x0000
    Uint32 m_Value; //0x0008
    Boolean m_ValidateSetting; //0x000C
    char _0x000D[3];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03415
// TypeInfo:  0x00000001427F9548
struct RSPPlatformSetting
{
    Array<GamePlatform> m_Platforms; //0x0000
    Array<LockedSettingConfig> m_LockedSettings; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03417
// TypeInfo:  0x00000001427F9528
struct PresetTypeConfig
{
    Int32 m_PresetId; //0x0000
    char _0x0004[4];
    CString m_Key; //0x0008
    CString m_NameSid; //0x0010
    CString m_DescSid; //0x0018
    CString m_ServerType; //0x0020
    Array<LockedSettingConfig> m_LockedSettings; //0x0028
    Array<RSPPlatformSetting> m_PlatformSettings; //0x0030
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 03411
// TypeInfo:  0x00000001427F9588
struct SettingConfig
{
    CString m_Key; //0x0000
    CString m_NameSid; //0x0008
    CString m_DescSid; //0x0010
    Uint32 m_CategoryId; //0x0018
    char _0x001C[4];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 03395
// TypeInfo:  0x00000001427F95A8
struct StatSpamSetting
{
    StatEvent m_Event; //0x0000
    Uint32 m_AmountLimit; //0x0004
    Float32 m_TimeLimit; //0x0008
    Boolean m_PlayerToPlayer; //0x000C
    char _0x000D[3];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03389
// TypeInfo:  0x00000001427F91E8
struct SkillLevelComponent
{
    Float32 m_MaxValue; //0x0000
    Float32 m_Weight; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 03365
// TypeInfo:  0x00000001427EE108
struct SquadIcon
{
    CString m_Black; //0x0000
    CString m_White; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03329
// TypeInfo:  0x00000001427EE128
struct UIPerformanceMetricSettings
{
    UIPerformanceMetric m_MetricType; //0x0000
    Float32 m_HighThreshold; //0x0004
    Float32 m_LowThreshold; //0x0008
    char _0x000C[4];
    CString m_GoodSid; //0x0010
    CString m_MediumSid; //0x0018
    CString m_BadSid; //0x0020
    CString m_GoodHeaderSid; //0x0028
    CString m_MediumHeaderSid; //0x0030
    CString m_BadHeaderSid; //0x0038
    Boolean m_LessIsBetter; //0x0040
    char _0x0041[7];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 03307
// TypeInfo:  0x00000001427EDC08
struct UICustomizationDisplay
{
    Array<UICustomizationCategoryOrdering*> m_CategoryOrdering; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 03265
// TypeInfo:  0x00000001427EE148
struct TitanScoringInfoState
{
    CString m_ShipBarOutlineTexture; //0x0000
    CString m_ShipBarFillTexture; //0x0008
    Float32 m_PulseInterval; //0x0010
    char _0x0014[4];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03255
// TypeInfo:  0x00000001427EE168
struct OverrideVideoData
{
    MovieTextureAsset* m_Video; //0x0000
    GamePlatform m_Platform; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03225
// TypeInfo:  0x00000001427EE188
struct CellTemplateData
{
    CString m_MappingID; //0x0000
    UIWidgetBlueprint* m_WidgetTemplate; //0x0008
    UIServerFilterType m_FilterMapping; //0x0010
    char _0x0014[4];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03197
// TypeInfo:  0x00000001427EE1C8
struct UIInputConceptFilterData
{
    InputConceptIdentifiers m_First; //0x0000
    InputConceptIdentifiers m_Last; //0x0004
    Boolean m_IncludeThisRange; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 03199
// TypeInfo:  0x00000001427EE1A8
struct UIOptionKeyBindingsType
{
    CString m_ActivatorEventName; //0x0000
    CString m_ID; //0x0008
    Array<UIInputConceptFilterData> m_Filters; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03195
// TypeInfo:  0x00000001427EE1E8
struct UIOptionTableColumn
{
    Float32 m_widthMin; //0x0000
    Float32 m_expandWeight; //0x0004
    Boolean m_rightSpacing; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 03187
// TypeInfo:  0x00000001427EDC28
struct UIOptionsConsoleControlsTextFieldMappings
{
    Array<UIOptionControlTextFieldMapping_NonChanging*> m_NonChanging; //0x0000
    Array<UIOptionControlTextFieldMapping_UnaryChanging*> m_UnaryChanging; //0x0008
    Array<UIOptionControlTextFieldMapping_BothChanging*> m_BothChanging; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03175
// TypeInfo:  0x00000001427EE208
struct UIOptionsOption
{
    ProfileOptionData* m_OptionData; //0x0000
    CString m_PlayerShownName; //0x0008
    CString m_Description; //0x0010
    UIElementInclusionSettings m_Inclusion; //0x0018
    CString m_VisibilityPropertyName; //0x0030
    UIOptionsSpecialCase m_SpecialCase; //0x0038
    char _0x003C[4];
    CString m_OnLabel; //0x0040
    CString m_OffLabel; //0x0048
    CString m_EventName; //0x0050
    CString m_SelectedEventName; //0x0058
    UIOptionsSliderDisplay m_SliderDisplayMode; //0x0060
    char _0x0064[4];
    CustomOptionData* m_CustomData; //0x0068
    Boolean m_IsButton; //0x0070
    Boolean m_ApplyOnChange; //0x0071
    char _0x0072[6];
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 03169
// TypeInfo:  0x00000001427EE248
struct SquadDeployGameModeData
{
    SquadDeployGameMode m_GameMode; //0x0000
    char _0x0004[4];
    CString m_Experience; //0x0008
    Int32 m_CommanderCount; //0x0010
    Boolean m_Disabled; //0x0014
    Boolean m_IsGen4Only; //0x0015
    char _0x0016[2];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03171
// TypeInfo:  0x00000001427EE228
struct SquadDeployMapPackData
{
    SquadDeployMapPack m_MapPack; //0x0000
    BFModMask m_MapPackModIndex; //0x0004
    CString m_MapPackDisplayName; //0x0008
    CString m_License; //0x0010
    Array<SquadDeployGameModeData> m_SupportedGameModes; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 03153
// TypeInfo:  0x00000001427EE268
struct UITabBarButton
{
    CString m_Sid; //0x0000
    CString m_OnSelectedOutputEvent; //0x0008
    CString m_VisibleProperty; //0x0010
    CString m_SelectableProperty; //0x0018
    CString m_NewContentProperty; //0x0020
    Boolean m_ButtonSelectable; //0x0028
    char _0x0029[7];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 03147
// TypeInfo:  0x00000001427EDC68
struct UIWorldIconZoneFloats
{
    Float32 m_Interaction; //0x0000
    Float32 m_Critical; //0x0004
    Float32 m_Close; //0x0008
    Float32 m_Far; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 03149
// TypeInfo:  0x00000001427EDC48
struct UIWorldIconFadeConfiguration
{
    UIWorldIconZoneFloats m_ZoneFadeValues; //0x0000
    UIWorldIconZoneFloats m_ZoneLookAtFadeValues; //0x0010
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 03127
// TypeInfo:  0x00000001427EDC88
struct BFUIColorizationData
{
    BFUIColorizationMode m_ColorizationMode; //0x0000
    UIIconState m_IconState; //0x0004
    UIIconState m_SpectatorIconState; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 03115
// TypeInfo:  0x00000001427EDCA8
struct UIAirRadarConfiguration
{
    Float32 m_RadarSensitivity; //0x0000
    Float32 m_HeatSensitivity; //0x0004
    Boolean m_TrackLaserPaintedObjects; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 03113
// TypeInfo:  0x00000001427EDCC8
struct UIChatConfiguration
{
    UICppScreenData* m_ChatScreenData; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 03111
// TypeInfo:  0x00000001427EDCE8
struct UIMinimapIconConfiguration
{
    UIElementColor m_BgCol; //0x0000
    UIElementFontStyle* m_SmallFont; //0x0020
    char _0x0028[8];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 03109
// TypeInfo:  0x00000001427EDD08
struct UIDeployConfiguration
{
    UIElementFontStyle* m_SpawnLabelFont; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 03099
// TypeInfo:  0x00000001427EDD88
struct UILockingConfiguration
{
    UIElementColor m_TextColor; //0x0000
    UIElementFontStyle* m_Font; //0x0020
    Float32 m_TextScale; //0x0028
    Float32 m_TextOffset; //0x002C
    Float32 m_DistanceScale; //0x0030
    Float32 m_DistanceMaxScaleMod; //0x0034
    CString m_DefaultTargetIcon; //0x0038
    CString m_DefaultChevronIcon; //0x0040
    Int32 m_LockingQuadSpacingStart; //0x0048
    Int32 m_LockedQuadSpacing; //0x004C
    Int32 m_LockTextOffset; //0x0050
    char _0x0054[4];
    CString m_LockedText; //0x0058
    CString m_LockedGuidingText; //0x0060
    CString m_NotLockedGuidingText; //0x0068
    Int32 m_DistanceTextOffset; //0x0070
    Float32 m_LockingBlinkRate; //0x0074
    Int32 m_PulseTargetChevronSpacing; //0x0078
    Float32 m_PulseDuration; //0x007C
    Float32 m_UnavalibleAlpha; //0x0080
    char _0x0084[12];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 03105
// TypeInfo:  0x00000001427EDD48
struct UIWorldZoneDistanceConfiguration
{
    Float32 m_CriticalDistance; //0x0000
    Float32 m_CloseDistance; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 03101
// TypeInfo:  0x00000001427EDD68
struct UIShieldIconConfiguration
{
    Float32 m_BlinkRate; //0x0000
    char _0x0004[4];
    CString m_PortableGadgetIcon; //0x0008
    CString m_PortableShieldIcon; //0x0010
    CString m_VehicleShieldIcon; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 03097
// TypeInfo:  0x00000001427EDDA8
struct UIColorConfiguration
{
    UIElementColor m_Neutral; //0x0000
    UIElementColor m_Team; //0x0020
    UIElementColor m_Squad; //0x0040
    UIElementColor m_Enemy; //0x0060
    UIElementColor m_Team1; //0x0080
    UIElementColor m_Team2; //0x00A0
    UIElementColor m_Team3; //0x00C0
    UIElementColor m_Team4; //0x00E0
    UIElementColor m_Commander; //0x0100
    UIElementColor m_Spectator; //0x0120
};//Size=0x0140

////////////////////////////////////////
// RuntimeId: 03087
// TypeInfo:  0x00000001427EDE28
struct UIGrenadeConfiguration
{
    Float32 m_IconVerticalOffset; //0x0000
    Float32 m_FadeStartDist; //0x0004
    Float32 m_DisappearDist; //0x0008
    Float32 m_WarningFadeStartDist; //0x000C
    Float32 m_WarningDisappearDist; //0x0010
    Float32 m_MaxScaleAtDist; //0x0014
    Float32 m_MinScaleAtDist; //0x0018
    Float32 m_MaxScale; //0x001C
    Float32 m_MinScale; //0x0020
    Float32 m_MagneticEdgeOffsetMultiplierNear; //0x0024
    Float32 m_MagneticEdgeOffsetMultiplierFar; //0x0028
    Float32 m_MagneticEdgeNearDist; //0x002C
    Float32 m_MagneticEdgeFarDist; //0x0030
};//Size=0x0034

////////////////////////////////////////
// RuntimeId: 03089
// TypeInfo:  0x00000001427EDE08
struct UINametagVisibilityValues
{
    Boolean m_VisibleClose; //0x0000
    Boolean m_VisibleFar; //0x0001
};//Size=0x0002

////////////////////////////////////////
// RuntimeId: 03091
// TypeInfo:  0x00000001427EDDE8
struct UINametagVisibilityConfiguration
{
    UINametagVisibilityValues m_LookAtVisibility; //0x0000
    UINametagVisibilityValues m_Visibility; //0x0002
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 03093
// TypeInfo:  0x00000001427EDDC8
struct UINametagBehavior
{
    Float32 m_CloseDistance; //0x0000
    Boolean m_MagneticToScreen; //0x0004
    UINametagVisibilityConfiguration m_IconVisibility; //0x0005
    UINametagVisibilityConfiguration m_NameVisibility; //0x0009
    UINametagVisibilityConfiguration m_HealthVisibility; //0x000D
    UINametagVisibilityConfiguration m_DistanceVisibility; //0x0011
    char _0x0015[3];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 03107
// TypeInfo:  0x00000001427EDD28
struct UIWorldIconConfiguration
{
    UILockingConfiguration m_LockingCfg; //0x0000
    UIColorConfiguration m_StdColors; //0x0090
    UINametagConfiguration* m_NametagCfg; //0x01D0
    UINametagConfiguration* m_SPNametagCfg; //0x01D8
    UINametagConfiguration* m_HardcoreNametagCfg; //0x01E0
    UIShieldIconConfiguration m_ShieldIconCfg; //0x01E8
    Array<UIColorConfiguration> m_ColorBlindModes; //0x0208
    UIWorldZoneDistanceConfiguration m_ZoneDistanceCfg; //0x0210
    Float32 m_RequestIconBlinkRate; //0x0218
    UIGrenadeConfiguration m_GrenadeCfg; //0x021C
    UIElementFontStyle* m_MapFont; //0x0250
    UIElementFontStyle* m_HudFont; //0x0258
};//Size=0x0260

////////////////////////////////////////
// RuntimeId: 03059
// TypeInfo:  0x00000001427EDE48
struct UIGridStepperConfig
{
    UIElementScrollbarStyle* m_ScrollBarStyle; //0x0000
    Uint32 m_ScrollbarWidth; //0x0008
    Uint32 m_ScrollbarMargin; //0x000C
    Int32 m_ScrollbarTopOffset; //0x0010
    Int32 m_ScrollbarBottomOffset; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02999
// TypeInfo:  0x00000001427EE288
struct UIHitIndicatorIcon
{
    Float32 m_BaseShowTime; //0x0000
    Float32 m_MaxShowTime; //0x0004
    Float32 m_DamageToSecondsFactor; //0x0008
    Float32 m_TimeBeforeFadeOut; //0x000C
    Float32 m_StartOffset; //0x0010
    Float32 m_EndOffset; //0x0014
    Float32 m_OffsetDuration; //0x0018
    UIHitIndicatorIconType m_IconType; //0x001C
    CString m_TextureId; //0x0020
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02955
// TypeInfo:  0x00000001427EE2A8
struct UIBattledashHorisontalListData
{
    Uint32 m_Index; //0x0000
    char _0x0004[4];
    CString m_Name; //0x0008
    CString m_TextureId; //0x0010
    CString m_IdString; //0x0018
    CString m_Description; //0x0020
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02951
// TypeInfo:  0x00000001427EE2C8
struct UIAutoListCategoryData
{
    UIAutoListType m_listtype; //0x0000
    char _0x0004[4];
    CString m_idString; //0x0008
    CString m_displayTitle; //0x0010
    CString m_EmptyListDescription; //0x0018
    Boolean m_showEmptyCategory; //0x0020
    char _0x0021[7];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02943
// TypeInfo:  0x00000001427EE2E8
struct UIBattledashDetailPane
{
    CString m_title; //0x0000
    CString m_value; //0x0008
    CString m_textureId; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02935
// TypeInfo:  0x00000001427EE308
struct UIBattledashIndicatorData
{
    CString m_Name; //0x0000
    CString m_TextureId; //0x0008
    Float32 m_IndicatorFadeTime; //0x0010
    Float32 m_OverrideIconSize; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02907
// TypeInfo:  0x00000001427EE328
struct UINPXTooltipWidgetLayout
{
    UILayoutMode m_LayoutMode; //0x0000
    UIElementOffset m_Offset; //0x0004
    UIElementAnchor m_Anchor; //0x000C
    UIElementOffset m_Position; //0x0014
    UIElementRectExpansion m_Expansion; //0x001C
};//Size=0x002C

////////////////////////////////////////
// RuntimeId: 02887
// TypeInfo:  0x00000001427EDE68
struct UIScoreboardColumnStyle
{
    Float32 m_Width; //0x0000
    UIElementAlignment m_TextAlignment; //0x0004
    Float32 m_TextOffset; //0x0008
    Boolean m_HasLine; //0x000C
    char _0x000D[3];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02875
// TypeInfo:  0x00000001427EE348
struct UICommoRoseButtonInfo
{
    CString m_ButtonId; //0x0000
    CString m_ButtonText; //0x0008
    CString m_ChatText; //0x0010
    ChatChannelType m_ChatChannel; //0x0018
    char _0x001C[4];
    UIElementAction* m_Action; //0x0020
    CString m_IconTextureId; //0x0028
    UICommoRoseTextAlignment m_TextAlignment; //0x0030
    UIElementRect m_InactiveRect; //0x0034
    UIElementRect m_ActiveRect; //0x0044
    char _0x0054[4];
    UIElementFontStyle* m_InactiveFontStyle; //0x0058
    UIElementFontStyle* m_ActiveFontStyle; //0x0060
    Boolean m_UseLocalRect; //0x0068
    Boolean m_IsSelectable; //0x0069
    char _0x006A[6];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 02829
// TypeInfo:  0x00000001427EDE88
struct UIDeactivateCameraMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02828
// TypeInfo:  0x00000001427EDEA8
struct UIDeployScreenUpdateCameraMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02827
// TypeInfo:  0x00000001427EDEC8
struct UIMapWidgetHelperData
{
    Vec4 m_MapFocusMargins; //0x0000
    UIVisualWidgetType m_VisualWidgetType; //0x0010
    char _0x0014[12];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 02787
// TypeInfo:  0x00000001427EDEE8
struct BFServerConfigurationData
{
    Uint32 m_ScoreMultiplier; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 02789
// TypeInfo:  0x00000001427EE368
struct BFServerConfigurationSchedule
{
    Array<CString> m_Licenses; //0x0000
    Array<CString> m_Levels; //0x0008
    BFServerConfigurationData m_Data; //0x0010
    char _0x0014[4];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02757
// TypeInfo:  0x00000001427EE388
struct GameConfigurationContentMapping
{
    GamePlatform m_Platform; //0x0000
    char _0x0004[4];
    CString m_License; //0x0008
    Array<CString> m_Content; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02733
// TypeInfo:  0x00000001427EDF28
struct PeerCreateGameParameters
{
    GameParametersData* m_Base; //0x0000
    Uint32 m_PlayerCapacity; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02729
// TypeInfo:  0x00000001427EE3A8
struct NucleusPlatformConfiguration
{
    GamePlatform m_Platform; //0x0000
    char _0x0004[4];
    CString m_ClientId; //0x0008
    CString m_ClientSecret; //0x0010
    CString m_LoginScope; //0x0018
    CString m_ClientRedirectUrl; //0x0020
    CString m_DisplayType; //0x0028
    CString m_BlazeServerClientId; //0x0030
    CString m_BlazeServerRedirectUrl; //0x0038
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 02727
// TypeInfo:  0x00000001427EE3C8
struct NucleusEnvironmentConfiguration
{
    NucleusEnvironment m_Env; //0x0000
    char _0x0004[4];
    CString m_BaseUrl; //0x0008
    CString m_NucleusClientId; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02713
// TypeInfo:  0x00000001427EE3E8
struct BFModMaskMapping
{
    CString m_ModName; //0x0000
    CString m_License; //0x0008
    BFModMask m_MaskBit; //0x0010
    char _0x0014[4];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02667
// TypeInfo:  0x00000001427EE408
struct PCAchievementSettings
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 02665
// TypeInfo:  0x00000001427EDF48
struct DurangoAchievementSettings
{
    Uint32 m_CompletionValue; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 02659
// TypeInfo:  0x00000001427EE428
struct AwardStarNameInstance
{
    CString m_Name; //0x0000
    StatsCategoryBaseData* m_Category; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02651
// TypeInfo:  0x00000001427EE448
struct EventScaleData
{
    StatEvent m_Event; //0x0000
    Float32 m_Scale; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 02649
// TypeInfo:  0x00000001427EE468
struct CriteriaAward
{
    AwardData* m_Award; //0x0000
    Uint32 m_Count; //0x0008
    char _0x000C[4];
    CString m_Sid; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02643
// TypeInfo:  0x00000001427EE488
struct CriteriaStarCategoryInstance
{
    CString m_Name; //0x0000
    StatsCategoryBaseData* m_ParamX; //0x0008
    StatsCategoryBaseData* m_ParamY; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02625
// TypeInfo:  0x00000001427EE4A8
struct AIProximityReactionsBinding
{
    AntRef m_AIReaction; //0x0000
    AntRef m_AIExplosionReaction; //0x0014
    AntRef m_AIExplosionForce; //0x0028
    AntRef m_AIStunReaction; //0x003C
    AntRef m_AIStunReactionRandomFactor; //0x0050
    AntRef m_AIReactionDirection; //0x0064
    AntRef m_IsPanicking; //0x0078
    AntRef m_FireNearby; //0x008C
    AntRef m_AimUpAndDown; //0x00A0
    AntRef m_FocusAimScale; //0x00B4
    AntRef m_FocusAiming; //0x00C8
    AntRef m_EnableProceduralHeadAim; //0x00DC
    AntRef m_KillFromAnimation; //0x00F0
    AntRef m_PlayerAnimationKill; //0x0104
    AntRef m_PlayerInitiatedRagdoll; //0x0118
    AntRef m_AISuppressed; //0x012C
    AntRef m_HumanAwareness; //0x0140
    AntRef m_HumanIsClose; //0x0154
    AntRef m_HumanTargetYaw; //0x0168
    AntRef m_LookAtHuman; //0x017C
    AntRef m_RetriggerIdle; //0x0190
    AntRef m_HasWantedPrecision; //0x01A4
    AntRef m_TargetVisible; //0x01B8
    AntRef m_TargetSpotted; //0x01CC
    AntRef m_TargetDistance; //0x01E0
    AntRef m_CruiseSpeedLevel; //0x01F4
    AntRef m_DrasticAimYawChange; //0x0208
};//Size=0x021C

////////////////////////////////////////
// RuntimeId: 02607
// TypeInfo:  0x00000001427EDFE8
struct ScenarioTaskData
{
    Vec3 m_StartPoint; //0x0000
    Vec3 m_EndPointWorldOffset; //0x0010
    PlayAnimationData* m_PlayAnimation; //0x0020
    Float32 m_WorldAngle; //0x0028
    Int32 m_ScenarioId; //0x002C
    Int32 m_ActorId; //0x0030
    Int32 m_PartId; //0x0034
    Int32 m_LevelId; //0x0038
    char _0x003C[4];
    Array<LinearTransform> m_ConnectTransforms; //0x0040
    Float32 m_StartTurnDistance; //0x0048
    Float32 m_StartTimerDistance; //0x004C
    Float32 m_TriggerScenarioDelay; //0x0050
    Boolean m_TriggerScenario; //0x0054
    Boolean m_UseClientPosition; //0x0055
    Boolean m_ForceWaitForAnimation; //0x0056
    Boolean m_OvershootWaypoint; //0x0057
    char _0x0058[8];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 02605
// TypeInfo:  0x00000001427EE008
struct AILocoCoverTaskData
{
    Vec3 m_WantedPos; //0x0000
    Vec3 m_ThreatPosition; //0x0010
    AntCoverEnum m_CoverType; //0x0020
    AntPoseEnum m_CoverPose; //0x0024
    Float32 m_WaitTime; //0x0028
    Float32 m_WorldAngle; //0x002C
    CoverPeekType m_PeekOut; //0x0030
    CoverIdleType m_IdleBehavior; //0x0034
    AntPoseEnum m_ExitPose; //0x0038
    Float32 m_OffsetLength; //0x003C
    CoverEnterStrategy m_EnterStrategy; //0x0040
    Float32 m_ExitAngle; //0x0044
    Float32 m_DistanceToNextWaypoint; //0x0048
    Float32 m_AlignOffsetAlong; //0x004C
    Float32 m_AlignOffsetPerpendicular; //0x0050
    CoverExitStyle m_ExitStyle; //0x0054
    CoverFireType m_PrepareFireType; //0x0058
    Boolean m_ForceExitCover; //0x005C
    Boolean m_UseClientPosition; //0x005D
    char _0x005E[2];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 02591
// TypeInfo:  0x00000001427EE048
struct AILocoBaseTaskData
{
    AntPoseEnum m_PoseChangeMovingTowards; //0x0000
    AntAttentionStateEnum m_AttentionChangeMovingTowards; //0x0004
    AntSpeedLevel m_SpeedChangeMovingTowards; //0x0008
    AntPoseEnum m_PoseChange; //0x000C
    AntAttentionStateEnum m_AttentionStateChange; //0x0010
    AntSpeedLevel m_SpeedLevelChange; //0x0014
    Float32 m_Radius; //0x0018
    Boolean m_IsScripted; //0x001C
    char _0x001D[3];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 02589
// TypeInfo:  0x00000001427EE068
struct AILocoMoveTaskData
{
    Vec3 m_WantedPos; //0x0000
    Float32 m_WaitTime; //0x0010
    Float32 m_WorldAngle; //0x0014
    AntPoseEnum m_EnterPose; //0x0018
    AntPoseEnum m_ExitPose; //0x001C
    Float32 m_AlmostFinishedDistance; //0x0020
    Boolean m_OverrideAngle; //0x0024
    Boolean m_UseClientPosition; //0x0025
    Boolean m_OnlySignalAlmostFinishedWhenMovingTowardsWaypoint; //0x0026
    char _0x0027[9];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 02587
// TypeInfo:  0x00000001427EE088
struct AILocoVaultTaskData
{
    Vec3 m_StartPoint; //0x0000
    Float32 m_DistanceBeforeVault; //0x0010
    Float32 m_HeightBeforeVault; //0x0014
    Float32 m_LengthOfVaultableObject; //0x0018
    Float32 m_HeightAfterVault; //0x001C
    Float32 m_DistanceAfterVault; //0x0020
    Float32 m_WorldAngle; //0x0024
    WaypointVaultType m_VaultType; //0x0028
    Boolean m_UseClientPosition; //0x002C
    char _0x002D[3];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 02577
// TypeInfo:  0x00000001427EE0A8
struct AILocoCoverBinding
{
    AntRef m_PrepareFire; //0x0000
    AntRef m_PrepareChangedToTrue; //0x0014
    AntRef m_ThrowGrenade; //0x0028
    AntRef m_PeekOut; //0x003C
    AntRef m_IdleBehindCover; //0x0050
    AntRef m_PeekType; //0x0064
    AntRef m_IdleTypePrevious; //0x0078
    AntRef m_IdleType; //0x008C
    AntRef m_IdleTypeChanged; //0x00A0
    AntRef m_CoverTypeEnum; //0x00B4
    AntRef m_CoverFireStyle; //0x00C8
    AntRef m_EnterCover; //0x00DC
    AntRef m_ExitCover; //0x00F0
    AntRef m_CoverDistanceSmall; //0x0104
    AntRef m_CoverDistanceMedium; //0x0118
    AntRef m_DistanceScale; //0x012C
    AntRef m_AbsoluteDistance; //0x0140
    AntRef m_AngleToNormal; //0x0154
    AntRef m_DirectionToCoverVsAITrajectory; //0x0168
    AntRef m_CoverNormalVsAITrajectory; //0x017C
    AntRef m_OutAngle; //0x0190
    AntRef m_ExitCoverDistance; //0x01A4
    AntRef m_ThreatAngle; //0x01B8
    AntRef m_StopExitCoverOutAround; //0x01CC
    AntRef m_EnterStrategy; //0x01E0
    AntRef m_ExitStyle; //0x01F4
};//Size=0x0208

////////////////////////////////////////
// RuntimeId: 02575
// TypeInfo:  0x00000001427EE0C8
struct AILocoVaultBinding
{
    AntRef m_Vault; //0x0000
    AntRef m_DistanceBeforeVault; //0x0014
    AntRef m_HeightBeforeVault; //0x0028
    AntRef m_LengthOfVaultableObject; //0x003C
    AntRef m_HeightAfterVault; //0x0050
    AntRef m_DistanceAfterVault; //0x0064
    AntRef m_VaultType; //0x0078
};//Size=0x008C

////////////////////////////////////////
// RuntimeId: 02573
// TypeInfo:  0x00000001427EE0E8
struct AILocoBinding
{
    AntRef m_LocoTarget; //0x0000
    AntRef m_AttentionState; //0x0014
    AntRef m_EndPoseEnum; //0x0028
    AntRef m_CurrentPoseEnum; //0x003C
    AntRef m_EnterExitPoseEnum; //0x0050
    AntRef m_RunStyle; //0x0064
    AntRef m_TargetWaypointPosition; //0x0078
    AntRef m_TargetWaypointRadius; //0x008C
    AntRef m_TargetSpeedLevel; //0x00A0
    AntRef m_CruiseSpeedLevel; //0x00B4
    AntRef m_EnableProceduralHeadAim; //0x00C8
};//Size=0x00DC

////////////////////////////////////////
// RuntimeId: 02567
// TypeInfo:  0x00000001427EE4C8
struct AdvertisementZoneMember
{
    CString m_Identifier; //0x0000
    CString m_Filename; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02563
// TypeInfo:  0x00000001427E04B8
struct XdpChallengeData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 02561
// TypeInfo:  0x00000001427E04D8
struct XdpHeroStatData
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 02559
// TypeInfo:  0x00000001427E04F8
struct XdpStatCodeData
{
    CString m_XdpCode; //0x0000
    CString m_StorageCode; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02555
// TypeInfo:  0x00000001427E0518
struct XdpStatExport
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 02553
// TypeInfo:  0x00000001427E0538
struct WebExportLoadingImages
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 02551
// TypeInfo:  0x00000001427E0558
struct WebExportLevelLoadingImage
{
    LevelData* m_Level; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 02527
// TypeInfo:  0x00000001427E0578
struct SurveyButton
{
    CString m_Sid; //0x0000
    UIInputAction m_Action; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02523
// TypeInfo:  0x00000001427E0598
struct QuickMatchFilterInfo
{
    CString m_ID; //0x0000
    CString m_Title; //0x0008
    CString m_Description; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02441
// TypeInfo:  0x00000001427E05D8
struct IngameMenuElementData
{
    CString m_Sid; //0x0000
    CString m_Identifier; //0x0008
    CString m_EnabledFunc; //0x0010
    CString m_VisibleFunc; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 02445
// TypeInfo:  0x00000001427E05B8
struct IngameMenuCategory
{
    IngameMenuCategoryType m_CategoryType; //0x0000
    char _0x0004[4];
    Array<IngameMenuElementData> m_Elements; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02433
// TypeInfo:  0x00000001427E0638
struct UISettingsItem
{
    CString m_NameSid; //0x0000
    UISettingSymbols m_StartEndSymbols; //0x0008
    char _0x000C[4];
    ProfileOptionData* m_Setting; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02435
// TypeInfo:  0x00000001427E0618
struct UISettingsGroup
{
    CString m_NameSid; //0x0000
    Int32 m_ScreenColumn; //0x0008
    char _0x000C[4];
    Array<UISettingsItem> m_SettingsItems; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02437
// TypeInfo:  0x00000001427E05F8
struct UISettingsPage
{
    CString m_NameSid; //0x0000
    Array<UISettingsGroup> m_SettingsGroups; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02423
// TypeInfo:  0x00000001427E0658
struct ScreenshotInfo
{
    CString m_Name; //0x0000
    Uint32 m_CropImageX1; //0x0008
    Uint32 m_CropImageX2; //0x000C
    Uint32 m_CropImageY1; //0x0010
    Uint32 m_CropImageY2; //0x0014
    Uint32 m_ResizeOutputImageWidth; //0x0018
    Uint32 m_ResizeOutputImageHeight; //0x001C
    Boolean m_CropImage; //0x0020
    Boolean m_ResizeOutputImage; //0x0021
    char _0x0022[6];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02401
// TypeInfo:  0x00000001427E0678
struct UILeaderboardData
{
    CString m_Name; //0x0000
    CString m_Description; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02387
// TypeInfo:  0x00000001427E0698
struct ServerInfoSetting
{
    CString m_Key; //0x0000
    CString m_Name; //0x0008
    Boolean m_IsBool; //0x0010
    char _0x0011[7];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02381
// TypeInfo:  0x00000001427E06B8
struct SlotRange
{
    Int32 m_Min; //0x0000
    Int32 m_Max; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 02365
// TypeInfo:  0x00000001427E06D8
struct DataSource
{
    UIComponentData* m_Category; //0x0000
    Int32 m_Value; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02347
// TypeInfo:  0x00000001427E06F8
struct UIStreamInstallGroup
{
    CString m_MainMenuSid; //0x0000
    CString m_GroupId; //0x0008
    Boolean m_DisableIfIncomplete; //0x0010
    char _0x0011[7];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02307
// TypeInfo:  0x00000001427E0338
struct SoldierToComponentsReviveMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02304
// TypeInfo:  0x00000001427E0358
struct RotateToHitData
{
    Float32 m_RotationSpeedFactor; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 02292
// TypeInfo:  0x00000001427E0718
struct MinimapData
{
    Vec3 m_OverlayColor; //0x0000
    Vec3 m_CameraPosition; //0x0010
    Vec2 m_Position; //0x0020
    Float32 m_AnchorPosHorizontal; //0x0028
    Float32 m_AnchorPosVertical; //0x002C
    Vec2 m_Size; //0x0030
    Float32 m_CameraFov; //0x0038
    Float32 m_CameraDistance; //0x003C
    Float32 m_CameraLookDistance; //0x0040
    Float32 m_OverlayAlpha; //0x0044
    Float32 m_CameraRotation; //0x0048
    Int32 m_InnerZoomFactor; //0x004C
    Int32 m_MaxZoomLevels; //0x0050
    Int32 m_StartZoomLevel; //0x0054
    Boolean m_RotationFromPlayer; //0x0058
    Boolean m_PositionFromPlayer; //0x0059
    Boolean m_CenterOnCombatArea; //0x005A
    char _0x005B[5];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 02272
// TypeInfo:  0x00000001427E0378
struct ClientRoundOverMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02263
// TypeInfo:  0x00000001427E0738
struct Minimap2DTile
{
    TextureAsset* m_Texture; //0x0000
    Int32 m_ChildIndex0; //0x0008
    Int32 m_ChildIndex1; //0x000C
    Int32 m_ChildIndex2; //0x0010
    Int32 m_ChildIndex3; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02251
// TypeInfo:  0x00000001427E0758
struct AreaValueTeam
{
    Int32 m_AreaValue; //0x0000
    TeamId m_Team; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 02247
// TypeInfo:  0x00000001427E0778
struct TicketCountPercentage
{
    Int32 m_MaxPercentOfTicketsLeft; //0x0000
    Int32 m_TicketLossPerMin; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 02197
// TypeInfo:  0x00000001427E0798
struct SimpleAnimationControlBinding
{
    AntRef m_LocoTarget; //0x0000
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 02195
// TypeInfo:  0x00000001427E07B8
struct SupportedShootingBinding
{
    AntRef m_Supported; //0x0000
    AntRef m_SupportedPos; //0x0014
    AntRef m_ForwardVector; //0x0028
    AntRef m_Yaw; //0x003C
    AntRef m_Pitch; //0x0050
    AntRef m_DistToObject; //0x0064
    AntRef m_HeightOfObject; //0x0078
    AntRef m_Undeploying; //0x008C
    AntRef m_AnimatedCamera; //0x00A0
};//Size=0x00B4

////////////////////////////////////////
// RuntimeId: 02193
// TypeInfo:  0x00000001427E07D8
struct SpecialMovesBinding
{
    AntRef m_UseNewVault; //0x0000
    AntRef m_TriggerHighVault; //0x0014
    AntRef m_TriggerUpVault; //0x0028
    AntRef m_TriggerLowVault; //0x003C
    AntRef m_TriggerSlideIntoProne; //0x0050
    AntRef m_TriggerSpecialAnimation; //0x0064
    AntRef m_SpecialAnimationIndex; //0x0078
    AntRef m_ObjectHeight; //0x008C
    AntRef m_ObjectDistance; //0x00A0
    AntRef m_ObjectThickness; //0x00B4
    AntRef m_StartObjectDistanceTimer; //0x00C8
    AntRef m_VaultObjectPositionX; //0x00DC
    AntRef m_VaultObjectPositionZ; //0x00F0
    AntRef m_CancelAnimation; //0x0104
};//Size=0x0118

////////////////////////////////////////
// RuntimeId: 02191
// TypeInfo:  0x00000001427E07F8
struct SoldierParachuteBinding
{
    AntRef m_Enabled; //0x0000
    AntRef m_SteerLeftRight; //0x0014
    AntRef m_AccelerateBrake; //0x0028
    AntRef m_Pitch; //0x003C
    AntRef m_Roll; //0x0050
};//Size=0x0064

////////////////////////////////////////
// RuntimeId: 02189
// TypeInfo:  0x00000001427E0398
struct SoldierEmoteBinding
{
    AntRef m_Speak; //0x0000
    AntRef m_IsSquadLeader; //0x0014
    AntRef m_EmoteSpot; //0x0028
    AntRef m_EmoteOk; //0x003C
    AntRef m_EmoteNeedARide; //0x0050
    AntRef m_EmoteGoGoGo; //0x0064
    AntRef m_EmoteNeedBackup; //0x0078
    AntRef m_EmoteThanks; //0x008C
    AntRef m_EmoteNeedMedic; //0x00A0
    AntRef m_EmoteFollowMe; //0x00B4
    AntRef m_EmoteNeedAmmo; //0x00C8
    AntRef m_EmoteSorry; //0x00DC
    AntRef m_EmoteNo; //0x00F0
    AntRef m_EmoteDefendCapturePoint; //0x0104
    AntRef m_EmoteAttackCapturePoint; //0x0118
    AntRef m_EmoteMoveToPosition; //0x012C
};//Size=0x0140

////////////////////////////////////////
// RuntimeId: 02187
// TypeInfo:  0x00000001427E0818
struct ClimbLadderBinding
{
    AntRef m_ClimbLadderPhase; //0x0000
    AntRef m_ClimbLadderConnectPhase; //0x0014
    AntRef m_ClimbLadderTransitionPhase; //0x0028
    AntRef m_OnLadder; //0x003C
    AntRef m_LadderTopTransition; //0x0050
    AntRef m_FallHigh; //0x0064
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 02185
// TypeInfo:  0x00000001427E03B8
struct UIPopupUpdateMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 02184
// TypeInfo:  0x00000001427E03D8
struct UIPopupHideMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 02183
// TypeInfo:  0x00000001427E03F8
struct UIPopupShowMessage
{
    char _0x0000[104];
};//Size=0x0068

////////////////////////////////////////
// RuntimeId: 02182
// TypeInfo:  0x00000001427E0418
struct UITriggerPopupHideMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02181
// TypeInfo:  0x00000001427E0438
struct UITriggerPopupShowMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 02180
// TypeInfo:  0x00000001427E0838
struct UIPopupTextInput
{
    CString m_Id; //0x0000
    CString m_Label; //0x0008
    CString m_DefaultValue; //0x0010
    Boolean m_IsPassword; //0x0018
    char _0x0019[7];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 02168
// TypeInfo:  0x00000001427E0858
struct UILevelSpecificPageHeader
{
    CString m_LevelNameSID; //0x0000
    CString m_Header; //0x0008
    CString m_SubHeader; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02148
// TypeInfo:  0x00000001427E0878
struct UIButton
{
    CString m_ButtonLabel; //0x0000
    CString m_ButtonId; //0x0008
    Boolean m_IsPremium; //0x0010
    char _0x0011[7];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02150
// TypeInfo:  0x00000001427E0478
struct UIButtonSet
{
    Array<UIButton> m_Buttons; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 02130
// TypeInfo:  0x00000001427E0498
struct DefaultSelectionItem
{
    UIDataSourceInfo m_DefaultSelectionQuery; //0x0000
    Int32 m_DefaultSelectionIndex; //0x0018
    char _0x001C[4];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 02140
// TypeInfo:  0x00000001427E08B8
struct StaticListItem
{
    CString m_ItemName; //0x0000
    CString m_ItemIndex; //0x0008
    UISimpleDataSource m_DynamicDisable; //0x0010
    UISimpleDataSource m_DynamicNewContent; //0x0020
    Boolean m_AppendPlatformToSID; //0x0030
    Boolean m_ExcludeInRetail; //0x0031
    char _0x0032[6];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 02144
// TypeInfo:  0x00000001427E0898
struct NestedList
{
    CString m_Label; //0x0000
    CString m_Index; //0x0008
    UIDataSourceInfo m_ListDataSource; //0x0010
    UIDataSourceInfo m_DynamicShowList; //0x0028
    Array<CString> m_StaticItems; //0x0040
    DefaultSelectionItem m_DefaultHighlighted; //0x0048
    UIListRowType m_RowType; //0x0068
    Boolean m_UseAsNormalListRows; //0x006C
    Boolean m_HiddenOnPC; //0x006D
    Boolean m_HiddenOnXenon; //0x006E
    Boolean m_HighLightOnUpdate; //0x006F
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 02128
// TypeInfo:  0x00000001427D8108
struct UIScreenActionInputEventMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 02041
// TypeInfo:  0x00000001427D8348
struct ManualDataEntry
{
    GamePlatform m_Platform; //0x0000
    LanguageFormat m_Language; //0x0004
    Array<TextureAsset*> m_Textures; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 02023
// TypeInfo:  0x00000001427D8388
struct InspectAnimationTriggerData
{
    AntRef m_Animation; //0x0000
    Float32 m_Probability; //0x0014
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 02025
// TypeInfo:  0x00000001427D8368
struct InspectViewPointData
{
    CString m_ViewPointID; //0x0000
    Array<InspectAnimationTriggerData> m_AnimationTriggers; //0x0008
    Array<AntRef> m_ContinuousAnimationSignal; //0x0010
    Float32 m_LookAtHeight; //0x0018
    Float32 m_Yaw; //0x001C
    Float32 m_Pitch; //0x0020
    Float32 m_Distance; //0x0024
    Float32 m_FovOffset; //0x0028
    Float32 m_AdjustmentYaw; //0x002C
    Boolean m_Fixed; //0x0030
    char _0x0031[7];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 02003
// TypeInfo:  0x00000001427D8128
struct UIMapNavigationData
{
    Float32 m_NearestZoomRange; //0x0000
    Vec2 m_ManualViewCenter; //0x0004
    Float32 m_ManualViewRange; //0x000C
    Float32 m_PanSpeed; //0x0010
    Boolean m_UseAutoView; //0x0014
    char _0x0015[3];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 01997
// TypeInfo:  0x00000001427D83C8
struct UILevelLoadIconData
{
    CString m_Label; //0x0000
    CString m_IconName; //0x0008
    Vec2 m_Pos; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 01999
// TypeInfo:  0x00000001427D83A8
struct UILevelLoadGameModeData
{
    CString m_GameModeIdentifier; //0x0000
    Uint32 m_PackageIdentifier; //0x0008
    char _0x000C[4];
    Array<CString> m_BackgroundImagesPath; //0x0010
    Array<UILevelLoadIconData> m_IconData; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 01995
// TypeInfo:  0x00000001427D8148
struct UIGPSPosition
{
    Float64 m_Latitude; //0x0000
    Float64 m_Longitude; //0x0008
    Float64 m_SeaLevelOffset; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 01993
// TypeInfo:  0x00000001427D8168
struct UILevelStatData
{
    CString m_StatEasy; //0x0000
    CString m_StatMedium; //0x0008
    CString m_StatHard; //0x0010
    CString m_StatHardcore; //0x0018
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 01987
// TypeInfo:  0x00000001427D8188
struct UIGeoLongitude
{
    Int32 m_Degrees; //0x0000
    Int32 m_Minuites; //0x0004
    Int32 m_Seconds; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 01985
// TypeInfo:  0x00000001427D81A8
struct UIGeoLatitude
{
    Int32 m_Degrees; //0x0000
    Int32 m_Minuites; //0x0004
    Int32 m_Seconds; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 01981
// TypeInfo:  0x00000001427D81C8
struct SoldierLeaningBinding
{
    AntRef m_Lean; //0x0000
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 01977
// TypeInfo:  0x00000001427D83E8
struct GameTipData
{
    CString m_Text; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 01967
// TypeInfo:  0x00000001427D8428
struct GameModeTeamSize
{
    Uint32 m_PlayerCount; //0x0000
    Uint32 m_SquadSize; //0x0004
    Uint32 m_SquadAutoFillLimit; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 01969
// TypeInfo:  0x00000001427D81E8
struct GameModeSize
{
    CString m_Name; //0x0000
    CString m_ShortName; //0x0008
    CString m_MetaIdentifier; //0x0010
    Uint32 m_PlayerCount; //0x0018
    Uint32 m_CommanderCount; //0x001C
    Array<GameModeTeamSize> m_Teams; //0x0020
    Uint32 m_RoundsPerMap; //0x0028
    Boolean m_ForceSquad; //0x002C
    Boolean m_AddPlatformToMetaIdentifier; //0x002D
    char _0x002E[2];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 01971
// TypeInfo:  0x00000001427D8408
struct GameModeInformation
{
    GamePlatform m_Platform; //0x0000
    char _0x0004[4];
    Array<GameModeSize> m_Sizes; //0x0008
    GameModeSize m_DefaultSize; //0x0010
    Boolean m_AllowFallbackToDefault; //0x0040
    char _0x0041[7];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 01961
// TypeInfo:  0x00000001427D8448
struct FreeStreamingChunksLoadInfo
{
    CString m_Name; //0x0000
    Int32 m_NumPartitions; //0x0008
    Boolean m_IsLocalized; //0x000C
    Boolean m_IsOptional; //0x000D
    char _0x000E[2];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 01941
// TypeInfo:  0x00000001427D8468
struct CounterHelper
{
    Boolean m_dummy; //0x0000
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 01869
// TypeInfo:  0x00000001427D8328
struct AntiSpamConfig
{
    Float32 m_DetectionInterval; //0x0000
    Uint32 m_DetectionIntervalMaxMessageCount; //0x0004
    Uint32 m_ServerSideMessageCountTolerance; //0x0008
    Uint32 m_SecondsBlocked; //0x000C
    Uint32 m_ServerSideSecondsBlockedTolerance; //0x0010
    char _0x0014[4];
    CString m_NotificationSid; //0x0018
    CString m_StillBlockedSid; //0x0020
    SoundWaveAsset* m_WarningSound; //0x0028
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 01853
// TypeInfo:  0x00000001427D8488
struct UILevelLocation
{
    char _0x0000[1];
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 01849
// TypeInfo:  0x00000001427D84A8
struct UIMatchmakingGamemodeMappack
{
    CString m_Experience; //0x0000
    CString m_MapPackIdentifier; //0x0008
    CString m_MapPackLicense; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 01819
// TypeInfo:  0x00000001427D84C8
struct GameModeVariation
{
    CString m_Identifier; //0x0000
    CString m_Name; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 01743
// TypeInfo:  0x00000001427D0C40
struct GameTweakBlindedBehavior
{
    Float32 m_BlindedTime; //0x0000
    Float32 m_BlindedRadius; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 01741
// TypeInfo:  0x00000001427D0BA0
struct GameTweakPanicBehavior
{
    Float32 m_PrePanicTime; //0x0000
    Float32 m_TotalPanicTime; //0x0004
    Float32 m_PanicBlastRadiusPercentage; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 01739
// TypeInfo:  0x00000001427D0CC0
struct GameTweakSniper
{
    Float32 m_GlintToShotFiredDelay; //0x0000
    Float32 m_HideAfterShotDelay; //0x0004
    Float32 m_TimeUpBeforeScopeGlint; //0x0008
    Float32 m_TimeHidden; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 01737
// TypeInfo:  0x00000001427D0D20
struct GameTweakAIDamage
{
    Float32 m_DamageBucketSizeHumanSquad; //0x0000
    Float32 m_DamageBucketSizeFriendlies; //0x0004
    Float32 m_DamageBucketSizeEnemies; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 01731
// TypeInfo:  0x00000001427D0D00
struct EvasiveBucketTimeSettings
{
    Array<Float32> m_SprintDamageBucketTimes; //0x0000
    Array<Float32> m_CrouchDamageBucketTimes; //0x0008
    Array<Float32> m_ProneDamageBucketTimes; //0x0010
    Array<Float32> m_MovingVehicleDamageBucketTimes; //0x0018
    Array<Float32> m_VehicleStillDamageBucketTimes; //0x0020
    Float32 m_SprintSpeed; //0x0028
    Float32 m_MovingVehicleSpeed; //0x002C
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 01725
// TypeInfo:  0x00000001427D0D40
struct TinyPiecewiseLinearCurve
{
    Float32 m_X0; //0x0000
    Float32 m_Y0; //0x0004
    Float32 m_X1; //0x0008
    Float32 m_Y1; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 01735
// TypeInfo:  0x00000001427D0D60
struct GameTweakBucketDamage
{
    Array<Float32> m_PlayerDamageBucketTimes; //0x0000
    EvasiveBucketTimeSettings m_EvasiveBucketTimeSettings; //0x0008
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 01729
// TypeInfo:  0x00000001427D0E20
struct AccuracyPenaltySettings
{
    Float32 m_SprintMultiplier; //0x0000
    Float32 m_CrouchMultiplier; //0x0004
    Float32 m_ProneMultiplier; //0x0008
    Float32 m_MovingVehicleMultiplier; //0x000C
    Float32 m_VehicleStillMultiplier; //0x0010
    Float32 m_SprintSpeed; //0x0014
    Float32 m_MovingVehicleSpeed; //0x0018
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 01727
// TypeInfo:  0x00000001427D0D80
struct GameTweakCommon
{
    Float32 m_SensingConeRange; //0x0000
    Float32 m_SensingConeRangeWhenAlerted; //0x0004
    Float32 m_SensingConeAngle; //0x0008
    Float32 m_SensingConeAngleWhenAlerted; //0x000C
    Float32 m_SensingConeAngleAbove; //0x0010
    Float32 m_SensingConeAngleBelow; //0x0014
    Float32 m_SensingShotFiredDistance; //0x0018
    Float32 m_SensingHumanDrivenVehicleDistance; //0x001C
    Float32 m_SensingExplosionDistance; //0x0020
    Float32 m_SensingGrenadeDistance; //0x0024
    TinyPiecewiseLinearCurve m_DistanceToAwareTimeCurveCentral; //0x0028
    Float32 m_AwareCurveCentralAngle; //0x0038
    TinyPiecewiseLinearCurve m_DistanceToAwareTimeCurvePeripheral; //0x003C
    Float32 m_AwareStandingPenaltyMultiplier; //0x004C
    Float32 m_AwareToAlertTime; //0x0050
    Float32 m_HighIntensityRadius; //0x0054
    Float32 m_ConcealmentCoolDownTime; //0x0058
    Float32 m_ConcealmentDisableAtDistance; //0x005C
    Float32 m_PassiveTime; //0x0060
    Float32 m_GrenadeMinimumTime; //0x0064
    Float32 m_GrenadeMaximumTime; //0x0068
    Float32 m_ChargeGrenadeMinimumTime; //0x006C
    Float32 m_ChargeGrenadeMaximumTime; //0x0070
    Int32 m_SimultaneousChargeCount; //0x0074
    Int32 m_SimultaneousVehicleUsage; //0x0078
    Float32 m_MinVehicleBookingDelayOnTokenAvailable; //0x007C
    Float32 m_MaxVehicleBookingDelayOnTokenAvailable; //0x0080
    Float32 m_EnemyMinTimeInMediumIntensity; //0x0084
};//Size=0x0088

////////////////////////////////////////
// RuntimeId: 01733
// TypeInfo:  0x00000001427D0C60
struct GameTweakAITargeting
{
    Float32 m_IntervalBetweenAdditionalEnemiesTargetingPlayer; //0x0000
    TinyPiecewiseLinearCurve m_FiringDelayAfterAquiringTarget; //0x0004
    Float32 m_ReaquireTargetDistanceThreshold; //0x0014
    TinyPiecewiseLinearCurve m_FiringDelayAfterReaquiringTarget; //0x0018
    TinyPiecewiseLinearCurve m_TimeUntilDamageFromStartOfFirstBurst; //0x0028
    TinyPiecewiseLinearCurve m_TimeUntilDamageTimeIsFullyRestored; //0x0038
    AccuracyPenaltySettings m_AccuracyPenaltySettings; //0x0048
};//Size=0x0064

////////////////////////////////////////
// RuntimeId: 01721
// TypeInfo:  0x00000001427D0E80
struct FiringPatternData
{
    Uint64 m_Pattern; //0x0000
    Int32 m_Id; //0x0008
    FiringWeaponClass m_WeaponClass; //0x000C
    IntensityClass m_Intensity; //0x0010
    Int32 m_Delay; //0x0014
    Boolean m_SingleShot; //0x0018
    char _0x0019[7];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 01707
// TypeInfo:  0x00000001427D0BC0
struct Distances
{
    Float32 m_Min; //0x0000
    Float32 m_Max; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 01709
// TypeInfo:  0x00000001427D0C80
struct VehicleVsSoldier
{
    Distances m_Distances; //0x0000
    Int32 m_NumRepositions; //0x0008
    Float32 m_FlushOutTime; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 01711
// TypeInfo:  0x00000001427D0C20
struct VehicleVsVehicle
{
    Distances m_Distances; //0x0000
    Float32 m_SearchTime; //0x0008
    Float32 m_KeepFocusWhileSearchingTime; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 01701
// TypeInfo:  0x00000001427D0DA0
struct VehicleSuppressionSettings
{
    Float32 m_SuppressionDistance; //0x0000
    Float32 m_ReevaluateCoverDistance; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 01699
// TypeInfo:  0x00000001427D0CE0
struct WeaponSuppressionSettings
{
    Float32 m_SuppressionValue; //0x0000
    Float32 m_ContinuousSuppressionTime; //0x0004
    Float32 m_SuppressionAreaSize; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 01697
// TypeInfo:  0x00000001427D0E00
struct EngageSettings
{
    Float32 m_DistanceToTarget; //0x0000
    Float32 m_SuppressionValue; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 01683
// TypeInfo:  0x00000001427D0DC0
struct AttackCoverRequestSettings
{
    Float32 m_MinimumTimeInCoverToRequest; //0x0000
    Float32 m_MaximumTimeInCoverToRequest; //0x0004
    Float32 m_MinimumTimeIntervalToRequestProtectiveCover; //0x0008
    Float32 m_MaximumTimeIntervalToRequestProtectiveCover; //0x000C
    Float32 m_MinimumTimeInCoverAfterTargetLost; //0x0010
    Float32 m_MaximumTimeInCoverAfterTargetLost; //0x0014
    Float32 m_DistanceToTargetCompromisedThreshold; //0x0018
    Float32 m_MinimumDistanceToTarget; //0x001C
    TinyPiecewiseLinearCurve m_MinimumInitialDelay; //0x0020
    TinyPiecewiseLinearCurve m_MaximumInitialDelay; //0x0030
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 01601
// TypeInfo:  0x00000001427D0E60
struct BFCoverSlot
{
    Vec3 m_Position; //0x0000
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 01595
// TypeInfo:  0x00000001427D0EC0
struct BFCoverData
{
    Vec4 m_PosAndExtra0; //0x0000
    Vec4 m_DirectionAndExtra1; //0x0010
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 01591
// TypeInfo:  0x00000001427D0EA0
struct CoverQueryScoreRuntime
{
    Int32 m_RelationMask; //0x0000
    Int32 m_Flags; //0x0004
    Int32 m_Filter; //0x0008
    CoverQueryStyle m_XStyle; //0x000C
    CoverQueryPosition m_FromPosition; //0x0010
    CoverQueryPosition m_ToPosition; //0x0014
    CoverQueryDirection m_ReferenceDirection; //0x0018
    CoverQueryCurveXSource m_CurveXSource; //0x001C
    Array<Float32> m_Curve; //0x0020
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 01585
// TypeInfo:  0x00000001427D0C00
struct CoverQueryFilter
{
    Boolean m_LeftBlocked; //0x0000
    Boolean m_LeftNotBlocked; //0x0001
    Boolean m_RightBlocked; //0x0002
    Boolean m_RightNotBlocked; //0x0003
    Boolean m_TopBlocked; //0x0004
    Boolean m_TopNotBlocked; //0x0005
    Boolean m_StandCovers; //0x0006
    Boolean m_MediumCovers; //0x0007
    Boolean m_CrouchCovers; //0x0008
    Boolean m_ProneCovers; //0x0009
    Boolean m_OpenCovers; //0x000A
    Boolean m_OpenDirectionalCovers; //0x000B
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 01565
// TypeInfo:  0x00000001427D0BE0
struct BFCoverZones
{
    BFCoverZoneDefinition* m_CoverZonesOverAndOut; //0x0000
    BFCoverZoneDefinition* m_CoverZonesOver; //0x0008
    BFCoverZoneDefinition* m_CoverZonesOut; //0x0010
    BFCoverZoneDefinition* m_CoverZonesOpen; //0x0018
    BFCoverZoneDefinition* m_CoverZonesOpenDirectional; //0x0020
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 01561
// TypeInfo:  0x00000001427D0EE0
struct BFCoverZone
{
    Float32 m_FirstAngle; //0x0000
    Float32 m_SecondAngle; //0x0004
    Float32 m_CloseDistance; //0x0008
    Float32 m_FarDistance; //0x000C
    Boolean m_Peek; //0x0010
    Boolean m_Over; //0x0011
    Boolean m_Out; //0x0012
    Boolean m_Flanked; //0x0013
    Boolean m_AlwaysRequestCover; //0x0014
    Boolean m_RequestCoverIfUnderFire; //0x0015
    Boolean m_ForceOutFiring; //0x0016
    Boolean m_TriggerFlanked; //0x0017
    Boolean m_SuppressedByEnemyBullets; //0x0018
    Boolean m_AllowProjectileFire; //0x0019
    char _0x001A[2];
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 01523
// TypeInfo:  0x00000001427CD5D8
struct BurstInterval
{
    Float32 m_BurstLength; //0x0000
    Float32 m_BurstLengthVariation; //0x0004
    Float32 m_TimeBetweenBursts; //0x0008
    Float32 m_TimeBetweenBurstsVariation; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 01517
// TypeInfo:  0x00000001427CD598
struct Interval
{
    Float32 m_MinimumTime; //0x0000
    Float32 m_MaximumTime; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 01505
// TypeInfo:  0x00000001427CD4B8
struct BFAIProjectileBinding
{
    AntRef m_FireProjectile; //0x0000
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 01499
// TypeInfo:  0x00000001427CD518
struct LinearTime
{
    Float32 m_Distance; //0x0000
    Float32 m_Time; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 01501
// TypeInfo:  0x00000001427CD558
struct Dispersion
{
    Float32 m_MinimumHorizontal; //0x0000
    Float32 m_MaximumHorizontal; //0x0004
    Float32 m_MinimumVertical; //0x0008
    Float32 m_MaximumVertical; //0x000C
    Float32 m_ScalingDistance; //0x0010
    Boolean m_ScaleWithDistance; //0x0014
    char _0x0015[3];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 01503
// TypeInfo:  0x00000001427CD5B8
struct BFAIProjectile
{
    BFAIProjectileCurveType m_Curve; //0x0000
    LinearTime m_Minimum; //0x0004
    LinearTime m_Maximum; //0x000C
    Dispersion m_Dispersion; //0x0014
    char _0x002C[4];
    ProjectileBlueprint* m_Projectile; //0x0030
    SoundAsset* m_Sound; //0x0038
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 01485
// TypeInfo:  0x00000001427CD418
struct AreaBookingSettings
{
    Float32 m_EnemyTeamBookingRadius; //0x0000
    Float32 m_FriendlyTeamBookingRadius; //0x0004
    Float32 m_CorpseBookingTime; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 01483
// TypeInfo:  0x00000001427CD4F8
struct SquadEngageData
{
    Float32 m_EngageTime; //0x0000
    Float32 m_FindCoverTime; //0x0004
    Float32 m_FailureCooldownTime; //0x0008
    Float32 m_CooldownTime; //0x000C
    Float32 m_SecondaryTargetRadius; //0x0010
    Float32 m_CoverFireTargetRadius; //0x0014
    Float32 m_AllowedTargetHiddenTime; //0x0018
    Float32 m_WaitingToFireTime; //0x001C
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 01481
// TypeInfo:  0x00000001427CD438
struct ShootingData
{
    Float32 m_KeepFiringAtPlayerTime; //0x0000
    Float32 m_KeepFiringAtAITime; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 01477
// TypeInfo:  0x00000001427CD498
struct SquadTargettingData
{
    Float32 m_VisibleTargetLimit; //0x0000
    Float32 m_TargetLostTimer; //0x0004
    Array<Float32> m_TargetImportanceThresholds; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 01479
// TypeInfo:  0x00000001427CD4D8
struct TargetingData
{
    Float32 m_ForcePlayerAsTargetRange; //0x0000
    Float32 m_ForcePlayerAsTargetAfterAttackedTime; //0x0004
    Float32 m_AimOffsetY; //0x0008
    char _0x000C[4];
    SquadTargettingData m_SquadTargettingData; //0x0010
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 01475
// TypeInfo:  0x00000001427CD578
struct DamageAndPrecisionData
{
    Float32 m_BulletDamage; //0x0000
    Float32 m_AiDamageBucketTime; //0x0004
    Boolean m_IsSquadUsingDamageBucket; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 01473
// TypeInfo:  0x00000001427CD458
struct BFAI2SpottingPotentialMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 01472
// TypeInfo:  0x00000001427CD538
struct BFAI2SpottingFoundMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00991
// TypeInfo:  0x00000001427B3910
struct StatDamageHelperMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00990
// TypeInfo:  0x00000001427B3930
struct StatPointsMessageBase
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00989
// TypeInfo:  0x00000001427B3950
struct StatEventMessageBase
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00988
// TypeInfo:  0x00000001427B3970
struct StatTriggerEntityMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00987
// TypeInfo:  0x00000001427B3990
struct StatEventEntityTriggerMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00986
// TypeInfo:  0x00000001427B39B0
struct StatGainRankMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00985
// TypeInfo:  0x00000001427B39D0
struct StatGainAwardMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00984
// TypeInfo:  0x00000001427B39F0
struct StatFinalizeStatsMessageBase
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00983
// TypeInfo:  0x00000001427B3A10
struct StatClubRecordClosingMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00982
// TypeInfo:  0x00000001427B3A30
struct StatClubRecordCreatedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00981
// TypeInfo:  0x00000001427B3A50
struct StatPlayerRecordClosingMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00980
// TypeInfo:  0x00000001427B3A70
struct StatPlayerRecordCreatedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00979
// TypeInfo:  0x00000001427B3A90
struct ServerBackendExternalIdResponseMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00978
// TypeInfo:  0x00000001427B3AB0
struct ServerBackendExternalIdRequestMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00977
// TypeInfo:  0x00000001427B3AD0
struct ServerBackendStringMetricMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00976
// TypeInfo:  0x00000001427B3AF0
struct ServerBackendCounterMetricMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00975
// TypeInfo:  0x00000001427B3B10
struct ServerBackendGaugeMetricMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00974
// TypeInfo:  0x00000001427B3B30
struct ServerBackendTagMetricMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00973
// TypeInfo:  0x00000001427B3B50
struct ServerBackendLiveScoreboardDisableMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00972
// TypeInfo:  0x00000001427B3B70
struct ServerBackendLiveScoreboardEnableMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00971
// TypeInfo:  0x00000001427B3B90
struct ServerBackendLiveServerProxyDisableMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00970
// TypeInfo:  0x00000001427B3BB0
struct ServerBackendLiveServerProxyEnableMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00969
// TypeInfo:  0x00000001427B3BD0
struct ServerBackendLiveServerProxyConfigUpdatedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00968
// TypeInfo:  0x00000001427B3BF0
struct ServerBackendLogTransmitterSettingsUpdatedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00967
// TypeInfo:  0x00000001427B3C10
struct ServerBackendBattlelogTransactionMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00966
// TypeInfo:  0x00000001427B3C30
struct PlaygroundServerBackendResponseMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00965
// TypeInfo:  0x00000001427B3C50
struct PeerServerBackendResponseMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00964
// TypeInfo:  0x00000001427B3C70
struct PeerServerBackendRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00963
// TypeInfo:  0x00000001427B3C90
struct ServerBackendRoleResponseMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00962
// TypeInfo:  0x00000001427B3CB0
struct ServerBackendRoleRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00961
// TypeInfo:  0x00000001427B3CD0
struct ServerBackendBattlepackResponseMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00960
// TypeInfo:  0x00000001427B3CF0
struct ServerBackendBattlepackRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00959
// TypeInfo:  0x00000001427B3D10
struct ServerBackendOnGameReportMetricMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00958
// TypeInfo:  0x00000001427B3D30
struct ServerBackendOnGameReportCompleteMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00957
// TypeInfo:  0x00000001427B3D50
struct ServerBackendGameReportCompleteMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00956
// TypeInfo:  0x00000001427B3D70
struct ServerBackendOnFinalizationCompleteMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00955
// TypeInfo:  0x00000001427B3D90
struct VeniceServerMetricsFriendZoneSpawnMessage
{
    char _0x0000[128];
};//Size=0x0080

////////////////////////////////////////
// RuntimeId: 00954
// TypeInfo:  0x00000001427B3DB0
struct VeniceServerMetricsManDownImmobilizedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00953
// TypeInfo:  0x00000001427B3DD0
struct VeniceServerMetricsManDownMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00952
// TypeInfo:  0x00000001427B3DF0
struct VeniceServerMetricsRestartRoundMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00951
// TypeInfo:  0x00000001427B3E10
struct VeniceServerMetricsStartRoundMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00950
// TypeInfo:  0x00000001427B3E30
struct VeniceServerMetricsLifeCounterMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00949
// TypeInfo:  0x00000001427B3E50
struct VeniceServerMetricsTicketCounterMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00948
// TypeInfo:  0x00000001427B3E70
struct VeniceServerMetricsRankupMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00947
// TypeInfo:  0x00000001427B3E90
struct VeniceServerMetricsCreateLogMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00880
// TypeInfo:  0x00000001427B3EB0
struct ServerLevolutionTriggeredMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00875
// TypeInfo:  0x00000001427B3ED0
struct VeniceNetworkWeaponAimingMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00862
// TypeInfo:  0x00000001427B3EF0
struct IndirectFireDispersionData
{
    Float32 m_MaxAngle; //0x0000
    Float32 m_MinAngle; //0x0004
    Float32 m_DispersionAimMove; //0x0008
    Float32 m_DispersionAimMoveThreshold; //0x000C
    Float32 m_DispersionFiring; //0x0010
    Float32 m_DispersionDeployment; //0x0014
    Float32 m_DecreasePerSecond; //0x0018
};//Size=0x001C

////////////////////////////////////////
// RuntimeId: 00856
// TypeInfo:  0x00000001427B3F10
struct PlayerFriendManagerFriendJoinEventMessage
{
    char _0x0000[104];
};//Size=0x0068

////////////////////////////////////////
// RuntimeId: 00853
// TypeInfo:  0x00000001427B3F50
struct PlayerFriendManagerSetAllowCreateFriendSquadMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00852
// TypeInfo:  0x00000001427B3F70
struct PlayerFriendManagerAbortFriendJoinMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00843
// TypeInfo:  0x00000001427B3F90
struct ColorPalletesMessageBase
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00842
// TypeInfo:  0x00000001427B3FB0
struct VeniceNetworkHardwareIdMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00841
// TypeInfo:  0x00000001427B3FD0
struct VeniceNetworkRequestHardwareIdMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00840
// TypeInfo:  0x00000001427B3FF0
struct VeniceNetworkRequestFrontBufferScreenshot2Message
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00839
// TypeInfo:  0x00000001427B4010
struct VeniceNetworkRequestFrontBufferScreenshotMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00838
// TypeInfo:  0x00000001427B4030
struct VeniceNetworkVictimDisabledPartMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00837
// TypeInfo:  0x00000001427B4050
struct VeniceNetworkVictimMissingPhysicsComponentMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00836
// TypeInfo:  0x00000001427B4070
struct VeniceNetworkIgnoredDamageMessage
{
    char _0x0000[120];
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 00835
// TypeInfo:  0x00000001427B4090
struct VeniceNetworkSavePersistenceMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00834
// TypeInfo:  0x00000001427B40B0
struct VeniceNetworkClientLanguageMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00833
// TypeInfo:  0x00000001427B40D0
struct VeniceNetworkRequestClientLanguageMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00832
// TypeInfo:  0x00000001427B40F0
struct VeniceNetworkRequestScreenshotMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00831
// TypeInfo:  0x00000001427B4110
struct VeniceNetworkClientCameraInfoMessageBase
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00830
// TypeInfo:  0x00000001427B4130
struct VeniceNetworkServerStatInfoMessageBase
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00829
// TypeInfo:  0x00000001427B4150
struct VeniceNetworkRequestServerStatInfoMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00828
// TypeInfo:  0x00000001427B4170
struct VeniceNetworkSuspiciousKeyMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00827
// TypeInfo:  0x00000001427B4190
struct VeniceNetworkPunkBusterActiveMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00826
// TypeInfo:  0x00000001427B41B0
struct VeniceNetworkPunkBusterPacketMessageBase
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00825
// TypeInfo:  0x00000001427B41D0
struct VeniceNetworkServerInfoMessage
{
    char _0x0000[144];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 00824
// TypeInfo:  0x00000001427B41F0
struct VeniceNetworkRequestServerInfoMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00823
// TypeInfo:  0x00000001427B4210
struct VeniceNetworkSetPingMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00822
// TypeInfo:  0x00000001427B4230
struct VeniceNetworkMetricsAchievementMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00821
// TypeInfo:  0x00000001427B4250
struct VeniceNetworkLocalClientConnectionInfoUpdatedMessageBase
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00820
// TypeInfo:  0x00000001427B4270
struct VeniceNetworkOnPlayerSelectedTeamMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00817
// TypeInfo:  0x00000001427B42B0
struct VeniceNetworkFriendZoneDebugEnableMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00816
// TypeInfo:  0x00000001427B42D0
struct VeniceNetworkFriendZoneMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00815
// TypeInfo:  0x00000001427B42F0
struct VeniceNetworkVirtualGameStateMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00814
// TypeInfo:  0x00000001427B4310
struct VeniceNetworkSendTelemetryTokenMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00813
// TypeInfo:  0x00000001427B4330
struct VeniceNetworkNotifyMicStateMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00812
// TypeInfo:  0x00000001427B4350
struct VeniceNetworkSetVoiceChannelMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00811
// TypeInfo:  0x00000001427B4370
struct VeniceNetworkVoiceTokenMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00810
// TypeInfo:  0x00000001427B4390
struct VeniceNetworkEorStatsMessage
{
    char _0x0000[176];
};//Size=0x00B0

////////////////////////////////////////
// RuntimeId: 00809
// TypeInfo:  0x00000001427B43B0
struct VeniceNetworkSettingsMessage
{
    char _0x0000[216];
};//Size=0x00D8

////////////////////////////////////////
// RuntimeId: 00808
// TypeInfo:  0x00000001427B43D0
struct VeniceNetworkRequestCoopPlayerInformationMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00807
// TypeInfo:  0x00000001427B43F0
struct VeniceNetworkRequestCoopEorStatsMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00806
// TypeInfo:  0x00000001427B4410
struct VeniceNetworkRequestEorStatsMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00805
// TypeInfo:  0x00000001427B4430
struct VeniceNetworkDefibKillMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00804
// TypeInfo:  0x00000001427B4450
struct VeniceNetworkScoreChangeMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00803
// TypeInfo:  0x00000001427B4470
struct VeniceNetworkCounterStatusMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00802
// TypeInfo:  0x00000001427B4490
struct VeniceNetworkRequestCounterStatusMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00801
// TypeInfo:  0x00000001427B44B0
struct VeniceNetworkMissionAwardsStatusMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00798
// TypeInfo:  0x00000001427B4790
struct CounterStatus
{
    Float32 m_CurrentValue; //0x0000
    Float32 m_OriginalValue; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 00800
// TypeInfo:  0x00000001427B4770
struct AwardStatus
{
    CString m_Code; //0x0000
    Uint32 m_CurrentValue; //0x0008
    Uint32 m_OriginalValue; //0x000C
    Array<CounterStatus> m_Counters; //0x0010
    Boolean m_IsCounting; //0x0018
    char _0x0019[7];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 00796
// TypeInfo:  0x00000001427B47B0
struct StatCounterStatus
{
    CString m_Code; //0x0000
    Float32 m_CurrentValue; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00794
// TypeInfo:  0x00000001427B44D0
struct VeniceNetworkDogTagMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00793
// TypeInfo:  0x00000001427B44F0
struct VeniceNetworkAchievementUpdateMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00792
// TypeInfo:  0x00000001427B4510
struct VeniceNetworkAchievementProgressMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00791
// TypeInfo:  0x00000001427B4530
struct VeniceNetworkUnlockAchievementsMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00790
// TypeInfo:  0x00000001427B4550
struct VeniceNetworkAllWeaponKillsMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00789
// TypeInfo:  0x00000001427B4570
struct VeniceNetworkRequestAllWeaponKillsMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00788
// TypeInfo:  0x00000001427B4590
struct VeniceNetworkBoostUpdateMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00785
// TypeInfo:  0x00000001427B45D0
struct VeniceNetworkUnlockGainedMessage
{
    char _0x0000[120];
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 00782
// TypeInfo:  0x00000001427B4610
struct VeniceNetworkAwardGainedMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 00781
// TypeInfo:  0x00000001427B4630
struct VeniceNetworkSetSquadPrivacyMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00780
// TypeInfo:  0x00000001427B4650
struct VeniceNetworkLeaveSquadMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00779
// TypeInfo:  0x00000001427B4670
struct VeniceNetworkKickFromSquadMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00778
// TypeInfo:  0x00000001427B4690
struct VeniceNetworkCreateSquadMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00777
// TypeInfo:  0x00000001427B46B0
struct VeniceNetworkJoinSquadByOnlineIdMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00776
// TypeInfo:  0x00000001427B46D0
struct VeniceNetworkJoinSquadMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00775
// TypeInfo:  0x00000001427B46F0
struct VeniceNetworkOrderMessage
{
    char _0x0000[104];
};//Size=0x0068

////////////////////////////////////////
// RuntimeId: 00774
// TypeInfo:  0x00000001427B4710
struct VeniceNetworkFocusPointMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00773
// TypeInfo:  0x00000001427B4730
struct VeniceNetworkSpottingOverheatMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00772
// TypeInfo:  0x00000001427B4750
struct VeniceNetworkSpottingMessage
{
    char _0x0000[232];
};//Size=0x00E8

////////////////////////////////////////
// RuntimeId: 00700
// TypeInfo:  0x00000001427A9600
struct StaticModelDamagedPartByPlayerMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00699
// TypeInfo:  0x00000001427A9620
struct StaticModelAllPartsDisabledMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00698
// TypeInfo:  0x00000001427A9640
struct BallisticShieldCreatedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00697
// TypeInfo:  0x00000001427A9660
struct EmblemTextureFinishedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00696
// TypeInfo:  0x00000001427A9680
struct ServerScreenshotReceivedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00695
// TypeInfo:  0x00000001427A96A0
struct FieldUpgradesLevelUpPlayerMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00694
// TypeInfo:  0x00000001427A96C0
struct PushNotificationChallengeActiveDeltaMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00693
// TypeInfo:  0x00000001427A96E0
struct PushNotificationPresencePlayingDeltaMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00692
// TypeInfo:  0x00000001427A9700
struct PushNotificationPresentMessageBase
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00689
// TypeInfo:  0x00000001427A9740
struct GameControlJoinServerMessageBase
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00688
// TypeInfo:  0x00000001427A9760
struct ESportsMatchManagerDelayedTerminationMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00687
// TypeInfo:  0x00000001427A9780
struct ESportsMatchManagerTooFewPlayersMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00686
// TypeInfo:  0x00000001427A97A0
struct VeniceCommonMetricsTriggerMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00685
// TypeInfo:  0x00000001427A97C0
struct ServerUnlockSystemSetupMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00682
// TypeInfo:  0x00000001427A9800
struct ServerMapSequencerLevelLoadedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00681
// TypeInfo:  0x00000001427A9820
struct ServerMapSequencerSwitchingLevelsMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00680
// TypeInfo:  0x00000001427A9840
struct ServerMapSequencerControlledInfoMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00679
// TypeInfo:  0x00000001427A9860
struct ServerMapSequencerMaxPlayerCountMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00678
// TypeInfo:  0x00000001427A9880
struct ServerMapSequencerEventMessageBase
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00675
// TypeInfo:  0x00000001427A98C0
struct ClientPersistenceAwardGainedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00674
// TypeInfo:  0x00000001427A98E0
struct VoiceSetPushToTalkStateMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00673
// TypeInfo:  0x00000001427A9900
struct VoiceChangedMicEnabledMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00672
// TypeInfo:  0x00000001427A9920
struct VoiceSetMuteStatusMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00671
// TypeInfo:  0x00000001427A9940
struct VoiceSettingsRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00670
// TypeInfo:  0x00000001427A9960
struct VoiceSettingsMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00669
// TypeInfo:  0x00000001427A9980
struct VoiceChannelRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00668
// TypeInfo:  0x00000001427A99A0
struct VoiceChannelMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00667
// TypeInfo:  0x00000001427A99C0
struct UIMemoryCardDestroyedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00666
// TypeInfo:  0x00000001427A99E0
struct UIMemoryCardCreatedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00665
// TypeInfo:  0x00000001427A9A00
struct UIIOStatusMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00662
// TypeInfo:  0x00000001427A9A40
struct UINPXTooltipMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00661
// TypeInfo:  0x00000001427A9A60
struct UITooltipMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00658
// TypeInfo:  0x00000001427A9AA0
struct UISelectedWeaponMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00657
// TypeInfo:  0x00000001427A9AC0
struct UIClearWeaponsListMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00656
// TypeInfo:  0x00000001427A9AE0
struct UISelectedVisualUnlocksMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00655
// TypeInfo:  0x00000001427A9B00
struct UIReceivedCustomizationFromBlazeMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00654
// TypeInfo:  0x00000001427A9B20
struct UIRefreshCustomizationSelectionsMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00653
// TypeInfo:  0x00000001427A9B40
struct UIPreEndOfRoundReadyMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00652
// TypeInfo:  0x00000001427A9B60
struct UIEndOfRoundReadyMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00651
// TypeInfo:  0x00000001427A9B80
struct UIRequestEndOfRoundMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00650
// TypeInfo:  0x00000001427A9BA0
struct UIRequestPreEndOfRoundMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00649
// TypeInfo:  0x00000001427A9BC0
struct UILoadingProgressHideMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00648
// TypeInfo:  0x00000001427A9BE0
struct UILoadingProgressShowMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00647
// TypeInfo:  0x00000001427A9C00
struct UIEnterFrontendMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00646
// TypeInfo:  0x00000001427A9C20
struct UIControlpointChangedTeamMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00645
// TypeInfo:  0x00000001427A9C40
struct UIPlayerVehicleListRefreshMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00644
// TypeInfo:  0x00000001427A9C60
struct UIHudTicketBleedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00643
// TypeInfo:  0x00000001427A9C80
struct UIHudSquadLevelChangeMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00642
// TypeInfo:  0x00000001427A9CA0
struct UIHudLastManStandingMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00641
// TypeInfo:  0x00000001427A9CC0
struct UIHudResetWinningTeamMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00640
// TypeInfo:  0x00000001427A9CE0
struct UITrackedAwardChangedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00639
// TypeInfo:  0x00000001427A9D00
struct UITrackedAwardUpdatedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00638
// TypeInfo:  0x00000001427A9D20
struct UIHudReviveWeaponEquippedChangedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00637
// TypeInfo:  0x00000001427A9D40
struct UIHudShowEnemiesMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00636
// TypeInfo:  0x00000001427A9D60
struct UIHudShowCaptureProgressMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00635
// TypeInfo:  0x00000001427A9D80
struct UIHudEnableMinimapMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00634
// TypeInfo:  0x00000001427A9DA0
struct UIShowScoreboardMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00633
// TypeInfo:  0x00000001427A9DC0
struct UIShowMinimapMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00632
// TypeInfo:  0x00000001427A9DE0
struct ServerSoldierSuppressionSuppressMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00631
// TypeInfo:  0x00000001427A9E00
struct UIMinimapObjectiveEventMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00630
// TypeInfo:  0x00000001427A9E20
struct UIObjectiveEventMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00627
// TypeInfo:  0x00000001427A9E60
struct ClientGameplayPlayerBaseDestroyedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00626
// TypeInfo:  0x00000001427A9E80
struct ServerGameplayChainlinkDoubleBreakMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00625
// TypeInfo:  0x00000001427A9EA0
struct ServerGameplayChainlinkDoubleLinkMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00624
// TypeInfo:  0x00000001427A9EC0
struct ServerGameplayChainlinkLinkBrokenMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00623
// TypeInfo:  0x00000001427A9EE0
struct ServerGameplayChainlinkLinkCreatedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00622
// TypeInfo:  0x00000001427A9F00
struct ServerGameplayCTFFlagReturnedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00621
// TypeInfo:  0x00000001427A9F20
struct ServerGameplayCTFFlagCapturedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00620
// TypeInfo:  0x00000001427A9F40
struct ServerGameplayCTFFlagDroppedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00619
// TypeInfo:  0x00000001427A9F60
struct ServerGameplayCTFFlagPickedUpMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00618
// TypeInfo:  0x00000001427A9F80
struct ServerGameplayTeamTakeLeadMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00617
// TypeInfo:  0x00000001427A9FA0
struct ServerGameplayTeamLostLeadMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00616
// TypeInfo:  0x00000001427A9FC0
struct ServerGameplayPlayerBaseDestroyedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00615
// TypeInfo:  0x00000001427A9FE0
struct ServerGameplayTeamReinforceMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00614
// TypeInfo:  0x00000001427AA000
struct ServerGameplayCapturePointPlayerEnteredMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00613
// TypeInfo:  0x00000001427AA020
struct ServerGameplayCapturePointResetMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00612
// TypeInfo:  0x00000001427AA040
struct ServerGameplayCapturePointLostMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00611
// TypeInfo:  0x00000001427AA060
struct ServerGameplayCapturePointCapturedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00610
// TypeInfo:  0x00000001427AA080
struct ServerGameplayCapturePointChangedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00609
// TypeInfo:  0x00000001427AA0A0
struct ServerPlayerTrialAccountOnUnofficialKickMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00608
// TypeInfo:  0x00000001427AA0C0
struct ServerPlayerRankTooHighKickMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00607
// TypeInfo:  0x00000001427AA0E0
struct ServerPlayerBoostUpdateMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00606
// TypeInfo:  0x00000001427AA100
struct ServerPlayerConsumableConsumedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00605
// TypeInfo:  0x00000001427AA120
struct ServerPlayerFieldUpgradeUpdateMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00604
// TypeInfo:  0x00000001427AA140
struct ServerPlayerCommanderOrderReplyMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00603
// TypeInfo:  0x00000001427AA160
struct ServerPlayerNewCommanderOrderMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00602
// TypeInfo:  0x00000001427AA180
struct ServerPlayerLicensesAvailableMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00601
// TypeInfo:  0x00000001427AA1A0
struct ServerPlayerManDownRevivedMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00600
// TypeInfo:  0x00000001427AA1C0
struct ServerPlayerMeleeInteruptedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00599
// TypeInfo:  0x00000001427AA1E0
struct ServerPlayerTeamKillKickMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00598
// TypeInfo:  0x00000001427AA200
struct ServerPlayerNoInteractivityKickMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00597
// TypeInfo:  0x00000001427AA220
struct ServerPlayerSpawnOnSelectedSpawnPointMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00596
// TypeInfo:  0x00000001427AA240
struct ServerPlayerSpawnAtVehicleMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00595
// TypeInfo:  0x00000001427AA260
struct ServerPlayerSpawnOnPlayerMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00594
// TypeInfo:  0x00000001427AA280
struct ServerPlayerSquadLeaderStatusChangedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00593
// TypeInfo:  0x00000001427AA2A0
struct ServerPlayerChangedSquadSpawnerStatusMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00592
// TypeInfo:  0x00000001427AA2C0
struct ServerPlayerChangedVoiceChannelMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00591
// TypeInfo:  0x00000001427AA2E0
struct ServerPlayerSwitchSquadMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00590
// TypeInfo:  0x00000001427AA300
struct ClientPlayerMeleeCounterWindowEndsMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00589
// TypeInfo:  0x00000001427AA320
struct ClientPlayerMeleeCounterWindowStartsMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00588
// TypeInfo:  0x00000001427AA340
struct ClientPlayerChangedMatchReadyStatusMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00587
// TypeInfo:  0x00000001427AA360
struct ClientPlayerVoiceSlotMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00586
// TypeInfo:  0x00000001427AA380
struct ClientPlayerChangedVoiceChannelMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00585
// TypeInfo:  0x00000001427AA3A0
struct ClientPlayerChangedAllowedToSpawnOnMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00584
// TypeInfo:  0x00000001427AA3C0
struct ClientPlayerChangedSquadLeaderStatusMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00583
// TypeInfo:  0x00000001427AA3E0
struct ClientPlayerNewSquadOrderMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00582
// TypeInfo:  0x00000001427AA400
struct ClientPlayerSwitchSquadMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00581
// TypeInfo:  0x00000001427AA420
struct ServerAutoBalanceSettingsChangedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00580
// TypeInfo:  0x00000001427AA440
struct ServerResendSyncedSettingsMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00579
// TypeInfo:  0x00000001427AA460
struct ServerRestartForESportsMatchMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00578
// TypeInfo:  0x00000001427AA480
struct ServerRotateLevelMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00577
// TypeInfo:  0x00000001427AA4A0
struct CommanderActivateCameraMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00576
// TypeInfo:  0x00000001427AA4C0
struct CommanderAwardCommanderScoreMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00575
// TypeInfo:  0x00000001427AA4E0
struct CommanderAwardCommanderSquadScoreMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00574
// TypeInfo:  0x00000001427AA500
struct CommanderNetworkEMPDroneDeployedMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00573
// TypeInfo:  0x00000001427AA520
struct CommanderNetworkUAVDroneDeployedMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00572
// TypeInfo:  0x00000001427AA540
struct CommanderNetworkGunshipDeployedMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00571
// TypeInfo:  0x00000001427AA560
struct CommanderNetworkEarlyWarningEndedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00570
// TypeInfo:  0x00000001427AA580
struct CommanderNetworkEarlyWarningStartedMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00569
// TypeInfo:  0x00000001427AA5A0
struct CommanderNetworkRadarScanStartedMessage
{
    char _0x0000[128];
};//Size=0x0080

////////////////////////////////////////
// RuntimeId: 00568
// TypeInfo:  0x00000001427AA5C0
struct CommanderNetworkTomahawkLaunchedMessage
{
    char _0x0000[88];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00567
// TypeInfo:  0x00000001427AA5E0
struct CommanderNetworkSatelliteEMPEndedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00566
// TypeInfo:  0x00000001427AA600
struct CommanderNetworkSatelliteEMPStartedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00565
// TypeInfo:  0x00000001427AA620
struct CommanderNetworkJamEndedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00564
// TypeInfo:  0x00000001427AA640
struct CommanderNetworkJamStartedMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 00563
// TypeInfo:  0x00000001427AA660
struct CommanderNetworkScanEndedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00562
// TypeInfo:  0x00000001427AA680
struct CommanderNetworkScanStartedMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 00561
// TypeInfo:  0x00000001427AA6A0
struct CommanderNetworkOrderReplyMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00560
// TypeInfo:  0x00000001427AA6C0
struct CommanderNetworkRemoveOrderMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00559
// TypeInfo:  0x00000001427AA6E0
struct CommanderNetworkIssueOrderMessage
{
    char _0x0000[128];
};//Size=0x0080

////////////////////////////////////////
// RuntimeId: 00558
// TypeInfo:  0x00000001427AA700
struct CommanderNetworkAbortActionMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00557
// TypeInfo:  0x00000001427AA720
struct CommanderNetworkSelectedSquadMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00556
// TypeInfo:  0x00000001427AA740
struct CommanderNetworkTriggerOrderReplyMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00555
// TypeInfo:  0x00000001427AA760
struct CommanderNetworkTriggerRequestMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00554
// TypeInfo:  0x00000001427AA780
struct CommanderNetworkTriggerActionMessage
{
    char _0x0000[144];
};//Size=0x0090

////////////////////////////////////////
// RuntimeId: 00553
// TypeInfo:  0x00000001427AA7A0
struct CommanderNetworkLeaveSeatMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00552
// TypeInfo:  0x00000001427AA7C0
struct CommanderNetworkApplyForSeatMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00551
// TypeInfo:  0x00000001427AA7E0
struct CommanderNetworkSquadReinforcedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00550
// TypeInfo:  0x00000001427AA800
struct CommanderNetworkMutinyAbortedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00549
// TypeInfo:  0x00000001427AA820
struct CommanderNetworkMutinyCompletedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00548
// TypeInfo:  0x00000001427AA840
struct CommanderNetworkMutinyStartedMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00547
// TypeInfo:  0x00000001427AA860
struct CommanderNetworkSquadLeaderRateCommanderMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00546
// TypeInfo:  0x00000001427AA880
struct CommanderNetworkRemoveRequestFromSquadMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00545
// TypeInfo:  0x00000001427AA8A0
struct CommanderNetworkAddRequestFromSquadMessage
{
    char _0x0000[96];
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00544
// TypeInfo:  0x00000001427AA8C0
struct CommanderNetworkRequestActionFromCommanderMessage
{
    char _0x0000[112];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 00543
// TypeInfo:  0x00000001427AA8E0
struct CommanderActionsActionStateChangedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00542
// TypeInfo:  0x00000001427AA900
struct CommanderSquadChangedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00541
// TypeInfo:  0x00000001427AA920
struct CommanderCommanderChangedMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00536
// TypeInfo:  0x00000001427ABA60
struct GunMasterLevelInfo
{
    CustomizeSoldierData* m_CustomizeData; //0x0000
    Int32 m_KillsNeeded; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00538
// TypeInfo:  0x00000001427ABA40
struct GunMasterWeaponsPreset
{
    Array<GunMasterLevelInfo> m_GunMasterLevelInfos; //0x0000
    Array<CustomizeSoldierData*> m_LevelOverrides; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00470
// TypeInfo:  0x00000001427ABA80
struct MessageLineData
{
    CString m_MessageSid; //0x0000
    Int32 m_EntryInputAction; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00452
// TypeInfo:  0x00000001427AA960
struct AimingConstraintEntityBinding
{
    AntRef m_ProneAimLimit; //0x0000
    AntRef m_ProneAimDistance; //0x0014
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00444
// TypeInfo:  0x00000001427AA980
struct CharacterMeleeBinding
{
    AntRef m_TriggerMelee; //0x0000
    AntRef m_DefendMelee; //0x0014
    AntRef m_MeleeKill; //0x0028
    AntRef m_SelfActor; //0x003C
    AntRef m_OtherActor; //0x0050
    AntRef m_MeleeActive; //0x0064
};//Size=0x0078

////////////////////////////////////////
// RuntimeId: 00442
// TypeInfo:  0x00000001427AA9A0
struct CharacterMeleeCommonBinding
{
    AntRef m_MeleeDistance; //0x0000
    AntRef m_MeleeAngle; //0x0014
    AntRef m_MeleeDirection; //0x0028
    AntRef m_DefendEnabled; //0x003C
    AntRef m_MeleeDefenceTime; //0x0050
    AntRef m_MeleeSequenceTime; //0x0064
    AntRef m_MeleeAborted; //0x0078
    AntRef m_IsTimeToKill; //0x008C
    AntRef m_CloseToTarget; //0x00A0
    AntRef m_MeleeType; //0x00B4
};//Size=0x00C8

////////////////////////////////////////
// RuntimeId: 00424
// TypeInfo:  0x00000001427AA9C0
struct KillWeight
{
    Float32 m_LowIntenseWeight; //0x0000
    Float32 m_HighIntenseWeight; //0x0004
    Float32 m_CoolDownTime; //0x0008
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 00370
// TypeInfo:  0x00000001427ABAA0
struct LookAtHuman
{
    AntSpeedLevel m_SpeedLevel; //0x0000
    Float32 m_DelayMin; //0x0004
    Float32 m_DelayMax; //0x0008
    Float32 m_LengthMin; //0x000C
    Float32 m_LengthMax; //0x0010
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 00352
// TypeInfo:  0x00000001427ABAC0
struct WeaponInteractionData
{
    SoldierWeaponUnlockAsset* m_WeaponToInteractWith; //0x0000
    Boolean m_OnlyManDownTargets; //0x0008
    char _0x0009[7];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00324
// TypeInfo:  0x00000001427AA9E0
struct SupportedShootingProximityChecking
{
    Float32 m_RayAboveGunHeightOffset; //0x0000
    Float32 m_RayAboveLength; //0x0004
    Float32 m_RayBelowGunHeightOffset; //0x0008
    Float32 m_RayBelowLength; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00314
// TypeInfo:  0x00000001427ABB00
struct SpecialMoveInterpolatedPoint
{
    Vec3 m_Value; //0x0000
    Float32 m_Time; //0x0010
    char _0x0014[12];
};//Size=0x0020

////////////////////////////////////////
// RuntimeId: 00318
// TypeInfo:  0x00000001427AAA00
struct SpecialMoveStateData
{
    Float32 m_OptimumDistanceFromObject; //0x0000
    Float32 m_OptimumHeightOfObject; //0x0004
    Float32 m_OptimumLengthOfObject; //0x0008
    Float32 m_MaxDistanceScale; //0x000C
    Float32 m_MinDistanceScale; //0x0010
    Float32 m_MaxHeightScale; //0x0014
    Float32 m_MinHeightScale; //0x0018
    Float32 m_MaxObjectLengthScale; //0x001C
    Float32 m_MinObjectLengthScale; //0x0020
    Float32 m_ExitAnimationDrivenStateVelocity; //0x0024
    SpecialMovesPoseType m_OverridePose; //0x0028
    SpecialMovesPoseType m_ResetPose; //0x002C
    Array<SpecialMoveInterpolatedPoint> m_GravityPoints; //0x0030
    Array<SpecialMoveInterpolatedPoint> m_MotionPoints; //0x0038
    Boolean m_ScaleWithDistanceToObject; //0x0040
    Boolean m_KeepInitialSoldierDirection; //0x0041
    char _0x0042[6];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00320
// TypeInfo:  0x00000001427ABAE0
struct SpecialMoveVaultStateCriteria
{
    Float32 m_DistToObject; //0x0000
    Float32 m_DistToObjectTolerance; //0x0004
    Float32 m_HeightOfObject; //0x0008
    Float32 m_HeightOfObjectTolerance; //0x000C
    Float32 m_LengthOfObject; //0x0010
    Float32 m_LengthOfObjectTolerance; //0x0014
    SpecialMoveStateData m_SpecialMoveState; //0x0018
};//Size=0x0060

////////////////////////////////////////
// RuntimeId: 00308
// TypeInfo:  0x00000001427AAA20
struct AirMissileJammingData
{
    Float32 m_MaxRadius; //0x0000
    Float32 m_MinRadius; //0x0004
    Float32 m_Theta; //0x0008
    Float32 m_Phi; //0x000C
    Float32 m_MinTurnSpeed; //0x0010
    Float32 m_MaxTurnSpeed; //0x0014
    Float32 m_QuietModeProbability; //0x0018
    Float32 m_QuietModeTime; //0x001C
    Float32 m_JammingTime; //0x0020
    Float32 m_TurnCalculationTime; //0x0024
    Float32 m_UpdateJammingPositionTime; //0x0028
    Boolean m_EnableAirMissileJamming; //0x002C
    char _0x002D[3];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00306
// TypeInfo:  0x00000001427AAA40
struct SmokeJammingData
{
    Float32 m_MaxRadius; //0x0000
    Float32 m_MinRadius; //0x0004
    Float32 m_JammingTime; //0x0008
    Float32 m_TargetUpdateTime; //0x000C
    Boolean m_EnableSmokeJamming; //0x0010
    Boolean m_JammingPositionIsLocationDependent; //0x0011
    Boolean m_ReportJammedBasedOnStartPosition; //0x0012
    char _0x0013[1];
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 00302
// TypeInfo:  0x00000001427AAA60
struct Vault3pOnlyBinding
{
    AntRef m_IsVaulting; //0x0000
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 00300
// TypeInfo:  0x00000001427AAA80
struct Vault1pOnlyBinding
{
    AntRef m_IsVaulting; //0x0000
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 00298
// TypeInfo:  0x00000001427AAAA0
struct VaultBinding
{
    AntRef m_VaultActive; //0x0000
    AntRef m_VaultCancel; //0x0014
    AntRef m_VaultDepthDistance; //0x0028
    AntRef m_VaultEndHeight; //0x003C
    AntRef m_VaultStartDistance; //0x0050
    AntRef m_VaultStartHeight; //0x0064
    AntRef m_VaultType; //0x0078
};//Size=0x008C

////////////////////////////////////////
// RuntimeId: 00292
// TypeInfo:  0x00000001427AAAC0
struct AwarenessTargetInfo
{
    Float32 m_Priority; //0x0000
    AwarenessTargetType m_TargetType; //0x0004
    Float32 m_TargetRange; //0x0008
    Boolean m_MustBeInsideFrustum; //0x000C
    char _0x000D[3];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00288
// TypeInfo:  0x00000001427AAAE0
struct AwarenessComponentBinding
{
    AntRef m_RelativeLookAtPitch; //0x0000
    AntRef m_RelativeLookAtYaw; //0x0014
    AntRef m_HasAwarenessTarget; //0x0028
    AntRef m_ExplosionNearby; //0x003C
    AntRef m_ExplosionDirection; //0x0050
    AntRef m_NearbyThreat; //0x0064
    AntRef m_NearbyThreatDirection; //0x0078
    AntRef m_AmbientThreat; //0x008C
};//Size=0x00A0

////////////////////////////////////////
// RuntimeId: 00286
// TypeInfo:  0x00000001427ABB20
struct TabletCommanderClientHasLoadedLevelMessage
{
    Boolean m_Loaded; //0x0000
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 00284
// TypeInfo:  0x00000001427ABB40
struct TabletCommanderSelectedSquadChangedMessage
{
    SquadId m_SelectedSquad; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 00282
// TypeInfo:  0x00000001427ABB60
struct TabletCommanderAbortActionMessage
{
    Uint8 m_ActionType; //0x0000
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 00280
// TypeInfo:  0x00000001427ABB80
struct TabletCommanderTriggerActionMessage
{
    Uint8 m_ActionType; //0x0000
    char _0x0001[3];
    Uint32 m_PlayerId; //0x0004
    Uint32 m_MapMarkerId; //0x0008
    Uint16 m_X; //0x000C
    Uint16 m_Y; //0x000E
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00278
// TypeInfo:  0x00000001427ABBA0
struct TabletCommanderPingMessage
{
    Float32 m_PingTime; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 00276
// TypeInfo:  0x00000001427ABBC0
struct TabletCommanderTryConnectMessage
{
    Uint32 m_TCClientProtocolVersion; //0x0000
    char _0x0004[4];
    Uint64 m_PlayerId; //0x0008
    CString m_PlayerName; //0x0010
    TabletCommanderPlatform m_Platform; //0x0018
    char _0x001C[4];
    CString m_DeviceModel; //0x0020
    CString m_DeviceOsVersion; //0x0028
    CString m_DeviceNetworkConnection; //0x0030
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00274
// TypeInfo:  0x00000001427ABBE0
struct TabletCommanderCarrierStateMessage
{
    Uint8 m_Team1CarrierHealth; //0x0000
    Uint8 m_Team2CarrierHealth; //0x0001
    Uint8 m_Team1CarrierState; //0x0002
    Uint8 m_Team2CarrierState; //0x0003
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 00272
// TypeInfo:  0x00000001427ABC00
struct TabletCommanderChatMessage
{
    CString m_ChatMessage; //0x0000
    Uint32 m_SenderPlayerId; //0x0008
    TabletCommanderChatChannel m_Channel; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00270
// TypeInfo:  0x00000001427ABC20
struct TabletCommanderEnemyCommanderChangedMessage
{
    CString m_CommanderName; //0x0000
    CString m_CommanderEmblem; //0x0008
    Uint32 m_CommanderPlayerId; //0x0010
    char _0x0014[4];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00268
// TypeInfo:  0x00000001427ABC40
struct TabletCommanderMutinyCompletedMessage
{
    Boolean m_Dummy; //0x0000
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 00266
// TypeInfo:  0x00000001427ABC60
struct TabletCommanderRankGainedMessage
{
    Uint8 m_OldRank; //0x0000
    Uint8 m_NewRank; //0x0001
};//Size=0x0002

////////////////////////////////////////
// RuntimeId: 00184
// TypeInfo:  0x00000001427AAB80
struct TabletCommanderAwardData
{
    CString m_AwardCode; //0x0000
    CString m_Name; //0x0008
    CString m_Description; //0x0010
    CString m_ImageName; //0x0018
    Float32 m_Score; //0x0020
    Uint32 m_TimesTakenCount; //0x0024
    Uint8 m_Group; //0x0028
    char _0x0029[7];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00182
// TypeInfo:  0x00000001427AC100
struct TabletCommanderScoreBoardData
{
    Uint32 m_Id; //0x0000
    Uint32 m_Score; //0x0004
    Uint16 m_Kills; //0x0008
    Uint16 m_Deaths; //0x000A
    Uint16 m_Rank; //0x000C
    char _0x000E[2];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00186
// TypeInfo:  0x00000001427AAB60
struct TabletCommanderAwardCriteria
{
    CString m_Description; //0x0000
    Float32 m_CompletionValue; //0x0008
    Float32 m_OriginalValue; //0x000C
    Float32 m_AbsoluteValue; //0x0010
    char _0x0014[4];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00192
// TypeInfo:  0x00000001427AC0C0
struct TabletCommanderRankLevelData
{
    Uint32 m_RankPointsNeeded; //0x0000
    Uint8 m_RankNumber; //0x0004
    char _0x0005[3];
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 00256
// TypeInfo:  0x00000001427ABD00
struct TabletCommanderPlayerLeftMessage
{
    Uint32 m_PlayerId; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 00176
// TypeInfo:  0x00000001427AABC0
struct TabletCommanderPlayerData
{
    Uint32 m_Id; //0x0000
    char _0x0004[4];
    CString m_Name; //0x0008
    Uint8 m_VoiceSlot; //0x0010
    char _0x0011[7];
    Uint64 m_XboxUserId; //0x0018
    TeamId m_TeamId; //0x0020
    SquadId m_SquadId; //0x0024
    Uint8 m_SoldierKit; //0x0028
    Boolean m_IsSquadLeader; //0x0029
    Boolean m_IsAlive; //0x002A
    char _0x002B[5];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00174
// TypeInfo:  0x00000001427AABE0
struct TabletCommanderLevolutionState
{
    LevolutionType m_LevolutionType; //0x0000
    char _0x0004[4];
    CString m_LevolutionId; //0x0008
    Uint16 m_X; //0x0010
    Uint16 m_Y; //0x0012
    Boolean m_Activated; //0x0014
    char _0x0015[3];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00250
// TypeInfo:  0x00000001427ABD60
struct TabletCommanderScoringEventMessage
{
    CString m_Description; //0x0000
    Float32 m_Score; //0x0008
    Float32 m_RawScore; //0x000C
    Uint8 m_StatEvent; //0x0010
    Uint8 m_VisibilityType; //0x0011
    Boolean m_IsEnemyCommander; //0x0012
    char _0x0013[5];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00248
// TypeInfo:  0x00000001427ABD80
struct TabletCommanderPlayerKilledMessage
{
    Uint32 m_KillerId; //0x0000
    Uint32 m_VictimId; //0x0004
    CString m_WeaponName; //0x0008
    Boolean m_KilledByVehicle; //0x0010
    char _0x0011[7];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00246
// TypeInfo:  0x00000001427ABDA0
struct TabletCommanderDeniedActionMessage
{
    Uint8 m_ActionType; //0x0000
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 00244
// TypeInfo:  0x00000001427ABDC0
struct TabletCommanderAcknowledgedActionMessage
{
    Uint8 m_ActionType; //0x0000
};//Size=0x0001

////////////////////////////////////////
// RuntimeId: 00178
// TypeInfo:  0x00000001427AABA0
struct TabletCommanderActionState
{
    Uint8 m_ActionType; //0x0000
    Uint8 m_ActionState; //0x0001
    char _0x0002[2];
    TeamId m_TeamId; //0x0004
    Float32 m_StateDuration; //0x0008
    Float32 m_Radius; //0x000C
    Uint16 m_TargetX; //0x0010
    Uint16 m_TargetY; //0x0012
    Boolean m_IsExcluded; //0x0014
    char _0x0015[3];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00180
// TypeInfo:  0x00000001427AC120
struct TabletCommanderCombatAreaPoint
{
    Uint16 m_X; //0x0000
    Uint16 m_Y; //0x0002
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 00238
// TypeInfo:  0x00000001427ABE20
struct TabletCommanderCommanderSwitchedTeamMessage
{
    TeamId m_TeamId; //0x0000
    TeamId m_EnemyTeamId; //0x0004
    Int32 m_Faction; //0x0008
    Int32 m_EnemyFaction; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00236
// TypeInfo:  0x00000001427ABE40
struct TabletCommanderLoadLevelRushMessage
{
    Uint8 m_StartCratesCount; //0x0000
    Uint8 m_CurrentCratesCount; //0x0001
    Boolean m_IsAttacker; //0x0002
};//Size=0x0003

////////////////////////////////////////
// RuntimeId: 00234
// TypeInfo:  0x00000001427ABE60
struct TabletCommanderLoadLevelSquadBarMessage
{
    Array<Uint8> m_ActionTypes; //0x0000
    Uint32 m_PointsPerSegment; //0x0008
    char _0x000C[4];
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00232
// TypeInfo:  0x00000001427ABE80
struct TabletCommanderLoadLevelLevolutionStateMessage
{
    Array<TabletCommanderLevolutionState> m_LevolutionStates; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 00230
// TypeInfo:  0x00000001427ABEA0
struct TabletCommanderLoadLevelActionStateMessage
{
    Array<TabletCommanderActionState> m_ActionStates; //0x0000
    RadarScanMode m_InfantryScanDir; //0x0008
    RadarScanMode m_VehicleScanDir; //0x000C
    Uint32 m_EarlyWarningDuration; //0x0010
    char _0x0014[4];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00228
// TypeInfo:  0x00000001427ABEC0
struct TabletCommanderLoadLevelPlayerDataMessage
{
    Array<TabletCommanderPlayerData> m_PlayerData; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 00200
// TypeInfo:  0x00000001427AC080
struct TabletCommanderLevolutionMiniMap
{
    CString m_Tag; //0x0000
    Float32 m_Size; //0x0008
    Uint16 m_X; //0x000C
    Uint16 m_Y; //0x000E
    Boolean m_IsPatch; //0x0010
    char _0x0011[7];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00224
// TypeInfo:  0x00000001427ABF00
struct TabletCommanderJoinServerMessage
{
    CString m_ServerName; //0x0000
    CString m_ServerVersion; //0x0008
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00222
// TypeInfo:  0x00000001427ABF20
struct TabletCommanderPongMessage
{
    Float32 m_PingTime; //0x0000
    Float32 m_PongTime; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 00220
// TypeInfo:  0x00000001427ABF40
struct TabletCommanderConnectionDeniedMessage
{
    Uint32 m_TCServerProtocolVersion; //0x0000
    TabletCommanderConnectionDeniedReason m_DeniedReason; //0x0004
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 00218
// TypeInfo:  0x00000001427ABF60
struct TabletCommanderConnectionApprovedMessage
{
    Uint32 m_TCServerProtocolVersion; //0x0000
};//Size=0x0004

////////////////////////////////////////
// RuntimeId: 00162
// TypeInfo:  0x00000001427AAC40
struct TabletCommanderPacketBase
{
    TabletCommanderPacketType m_PacketType; //0x0000
    Float32 m_ServerTime; //0x0004
    Uint8 m_PacketFrequency; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 00214
// TypeInfo:  0x00000001427ABFA0
struct TabletCommanderSquadRequest
{
    SquadId m_SquadId; //0x0000
    Uint8 m_ActionType; //0x0004
    char _0x0005[3];
    Uint32 m_ControlPointId; //0x0008
    Uint16 m_TargetX; //0x000C
    Uint16 m_TargetY; //0x000E
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00212
// TypeInfo:  0x00000001427ABFC0
struct TabletCommanderOrder
{
    Uint8 m_OrderType; //0x0000
    Uint8 m_ReplyType; //0x0001
    char _0x0002[2];
    Uint32 m_IssuedToPlayerId; //0x0004
    Uint32 m_ControlPointId; //0x0008
    Uint32 m_ControllableId; //0x000C
    Uint16 m_TargetX; //0x0010
    Uint16 m_TargetY; //0x0012
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 00210
// TypeInfo:  0x00000001427ABFE0
struct TabletCommanderMapMarker
{
    Uint32 m_MapMarkerId; //0x0000
    Uint16 m_X; //0x0004
    Uint16 m_Y; //0x0006
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 00208
// TypeInfo:  0x00000001427AC000
struct TabletCommanderObjective
{
    CString m_ObjectiveName; //0x0000
    CString m_LocationTextSid; //0x0008
    Uint32 m_ObjectiveId; //0x0010
    TabletCommanderObjectiveType m_ObjectiveType; //0x0014
    Uint8 m_ActionType; //0x0018
    char _0x0019[3];
    TeamId m_ControllingTeamId; //0x001C
    TeamId m_CapturingTeamId; //0x0020
    Uint16 m_X; //0x0024
    Uint16 m_Y; //0x0026
    Int16 m_ProgressVelocity; //0x0028
    Uint8 m_ProgressValue; //0x002A
    Boolean m_Blink; //0x002B
    Boolean m_IsControlled; //0x002C
    char _0x002D[3];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00164
// TypeInfo:  0x00000001427AAC20
struct TabletCommanderNetworkState
{
    Uint32 m_Id; //0x0000
    Uint16 m_X; //0x0004
    Uint16 m_Y; //0x0006
    Uint8 m_Rotation; //0x0008
    char _0x0009[3];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 00166
// TypeInfo:  0x00000001427AC180
struct TabletCommanderNetworkSoldierState
{
    TabletCommanderNetworkState m_NetworkState; //0x0000
    Uint32 m_InVehicleId; //0x000C
    Uint8 m_SoldierKit; //0x0010
    Boolean m_IsSquadLeader; //0x0011
    Boolean m_IsOnKillStreak; //0x0012
    Boolean m_IsHighValueTarget; //0x0013
    Boolean m_IsFiring; //0x0014
    char _0x0015[3];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00204
// TypeInfo:  0x00000001427AC040
struct TabletCommanderHighFrequencyFriendlySquad
{
    SquadId m_SquadId; //0x0000
    Float32 m_NormalizedSquadScore; //0x0004
    Boolean m_IsSquadWipeProtected; //0x0008
    Boolean m_IsSquadReinforced; //0x0009
    char _0x000A[6];
    Array<TabletCommanderNetworkSoldierState> m_Soldiers; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00226
// TypeInfo:  0x00000001427ABEE0
struct TabletCommanderLoadLevelMessage
{
    CString m_LevelName; //0x0000
    TabletCommanderGameMode m_GameMode; //0x0008
    char _0x000C[4];
    CString m_CommanderName; //0x0010
    CString m_CommanderEmblem; //0x0018
    Uint32 m_CommanderPlayerId; //0x0020
    Float32 m_WorldSize; //0x0024
    Float32 m_WorldCenterX; //0x0028
    Float32 m_WorldCenterY; //0x002C
    Float32 m_WorldRotation; //0x0030
    Uint32 m_RoundTimeLimit; //0x0034
    Uint32 m_PreRoundPlayerRequiredCount; //0x0038
    Boolean m_RoundInPreRoundState; //0x003C
    Uint8 m_MaxPlayerCount; //0x003D
    Uint8 m_CurrentPlayerCount; //0x003E
    Uint8 m_MaxCommanderCount; //0x003F
    Uint8 m_CurrentCommanderCount; //0x0040
    char _0x0041[7];
    Array<TabletCommanderLevolutionMiniMap> m_LevolutionMiniMaps; //0x0048
    Boolean m_RoundEnded; //0x0050
    char _0x0051[7];
};//Size=0x0058

////////////////////////////////////////
// RuntimeId: 00198
// TypeInfo:  0x00000001427AAB00
struct TabletCommanderMutinyState
{
    Float32 m_MutinyTreshold; //0x0000
    Uint32 m_MutinyDuration; //0x0004
    Uint8 m_ActiveSquadCount; //0x0008
    Uint8 m_NegativeRatingCount; //0x0009
    char _0x000A[2];
};//Size=0x000C

////////////////////////////////////////
// RuntimeId: 00196
// TypeInfo:  0x00000001427AC0A0
struct TabletCommanderServiceStarProgression
{
    TabletCommanderAwardData m_ServiceStarAwardData; //0x0000
    TabletCommanderAwardCriteria m_Criteria; //0x0030
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00194
// TypeInfo:  0x00000001427AAB20
struct TabletCommanderRankProgression
{
    Array<TabletCommanderRankLevelData> m_RankLevelData; //0x0000
    Uint32 m_OriginalGlobalScore; //0x0008
    Uint32 m_CurrentGlobalScore; //0x000C
    Float32 m_ScoreMultiplier; //0x0010
    char _0x0014[4];
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00258
// TypeInfo:  0x00000001427ABCE0
struct TabletCommanderRoundOverMessage
{
    TeamId m_WinningTeam; //0x0000
    Uint32 m_RoundTime; //0x0004
    Uint32 m_EoRTime; //0x0008
    char _0x000C[4];
    TabletCommanderRankProgression m_RankProgress; //0x0010
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00188
// TypeInfo:  0x00000001427AC0E0
struct TabletCommanderDogTagData
{
    CString m_Name; //0x0000
    CString m_Description; //0x0008
    CString m_ImageName; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00190
// TypeInfo:  0x00000001427AAB40
struct TabletCommanderAssignment
{
    TabletCommanderAwardData m_AssignmentAwardData; //0x0000
    Array<TabletCommanderAwardData> m_Dependencies; //0x0030
    Array<TabletCommanderAwardCriteria> m_Criterias; //0x0038
    Array<TabletCommanderDogTagData> m_DogTags; //0x0040
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00260
// TypeInfo:  0x00000001427ABCC0
struct TabletCommanderAssignmentMessage
{
    TabletCommanderAssignment m_Assignment; //0x0000
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00264
// TypeInfo:  0x00000001427ABC80
struct TabletCommanderAwardGainedMessage
{
    TabletCommanderAwardData m_Award; //0x0000
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00262
// TypeInfo:  0x00000001427ABCA0
struct TabletCommanderScoreBoardMessage
{
    Array<TabletCommanderScoreBoardData> m_ScoreData; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 00240
// TypeInfo:  0x00000001427ABE00
struct TabletCommanderCombatAreaMessage
{
    Array<TabletCommanderCombatAreaPoint> m_CombatAreaPoints; //0x0000
};//Size=0x0008

////////////////////////////////////////
// RuntimeId: 00242
// TypeInfo:  0x00000001427ABDE0
struct TabletCommanderActionEnteredStateMessage
{
    TabletCommanderActionState m_ActionState; //0x0000
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00254
// TypeInfo:  0x00000001427ABD20
struct TabletCommanderPlayerJoinedMessage
{
    TabletCommanderPlayerData m_PlayerData; //0x0000
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00252
// TypeInfo:  0x00000001427ABD40
struct TabletCommanderLevolutionMessage
{
    TabletCommanderLevolutionState m_LevolutionState; //0x0000
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00172
// TypeInfo:  0x00000001427AAC00
struct TabletCommanderTickets
{
    Uint32 m_FriendTickets; //0x0000
    Uint32 m_FriendMaxTickets; //0x0004
    Uint32 m_EnemyTickets; //0x0008
    Uint32 m_EnemyMaxTickets; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00170
// TypeInfo:  0x00000001427AC140
struct TabletCommanderNetworkBombState
{
    TabletCommanderNetworkState m_NetworkState; //0x0000
    TeamId m_TeamId; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00168
// TypeInfo:  0x00000001427AC160
struct TabletCommanderNetworkVehicleState
{
    TabletCommanderNetworkState m_NetworkState; //0x0000
    Uint32 m_IconType; //0x000C
    Boolean m_IsFiring; //0x0010
    char _0x0011[3];
};//Size=0x0014

////////////////////////////////////////
// RuntimeId: 00206
// TypeInfo:  0x00000001427AC020
struct TabletCommanderLowFrequencyPacket
{
    TabletCommanderPacketBase m_PacketBase; //0x0000
    char _0x000C[4];
    Array<TabletCommanderNetworkSoldierState> m_FriendlyDeadSoldierList; //0x0010
    Array<TabletCommanderObjective> m_ObjectiveList; //0x0018
    Array<TabletCommanderOrder> m_OrderList; //0x0020
    Array<TabletCommanderSquadRequest> m_SquadRequestList; //0x0028
    Array<TabletCommanderMapMarker> m_MapMarkerList; //0x0030
    TabletCommanderTickets m_Tickets; //0x0038
    TabletCommanderMutinyState m_MutinyState; //0x0048
    Uint32 m_RoundTimeSeconds; //0x0054
    Uint32 m_SquadPoints; //0x0058
    Uint32 m_PreRoundPlayerReadyCount; //0x005C
    Uint32 m_PreRoundRestartTime; //0x0060
    Int32 m_ObliterationTargetsArmedBitmask; //0x0064
    Int32 m_ObliterationTargetsDestroyedBitmask; //0x0068
    Uint8 m_CurrentCratesCount; //0x006C
    char _0x006D[3];
};//Size=0x0070

////////////////////////////////////////
// RuntimeId: 00202
// TypeInfo:  0x00000001427AC060
struct TabletCommanderHighFrequencyPacket
{
    TabletCommanderPacketBase m_PacketBase; //0x0000
    char _0x000C[4];
    Array<TabletCommanderHighFrequencyFriendlySquad> m_FriendlySquadList; //0x0010
    Array<TabletCommanderNetworkVehicleState> m_FriendlyVehicleList; //0x0018
    Array<TabletCommanderNetworkState> m_FriendlyTomahawkList; //0x0020
    Array<TabletCommanderNetworkSoldierState> m_SpottedEnemySoldierList; //0x0028
    Array<TabletCommanderNetworkVehicleState> m_SpottedEnemyVehicleList; //0x0030
    Array<TabletCommanderNetworkState> m_SpottedEnemyTomahawkList; //0x0038
    Array<TabletCommanderNetworkBombState> m_ObliterationBomb; //0x0040
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00216
// TypeInfo:  0x00000001427ABF80
struct TabletCommanderMessageListPacket
{
    TabletCommanderPacketBase m_PacketBase; //0x0000
    char _0x000C[4];
    Array<TabletCommanderMessageType> m_MessageTypeList; //0x0010
};//Size=0x0018

////////////////////////////////////////
// RuntimeId: 00140
// TypeInfo:  0x00000001427AACA0
struct UavCameraPointData
{
    Float32 m_MinTime; //0x0000
    Float32 m_MaxTime; //0x0004
    Float32 m_Speed; //0x0008
    Float32 m_AccelerationTime; //0x000C
};//Size=0x0010

////////////////////////////////////////
// RuntimeId: 00138
// TypeInfo:  0x00000001427AACC0
struct PunkBusterExecCmdMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00137
// TypeInfo:  0x00000001427AACE0
struct PunkBusterMessageMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00136
// TypeInfo:  0x00000001427AAD00
struct ServerUnlockListRefreshMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00135
// TypeInfo:  0x00000001427AAD20
struct ServerUnlockListEventMessageBase
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00132
// TypeInfo:  0x00000001427AAD60
struct ServerReservedSlotsListAggressiveJoinVIPPlayerMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00131
// TypeInfo:  0x00000001427AAD80
struct ServerReservedSlotsListEventMessageBase
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00130
// TypeInfo:  0x00000001427AADA0
struct ServerBanListEventMessageBase
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00129
// TypeInfo:  0x00000001427AADC0
struct NetworkGameAdministrationAddGameBanResponseMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00126
// TypeInfo:  0x00000001427AAE00
struct NetworkGameAdministrationAddGameBanRequestMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00125
// TypeInfo:  0x00000001427AAE20
struct NetworkGameAdministrationPacketMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00124
// TypeInfo:  0x00000001427AAE40
struct ServerGameAdministrationUpdateGameServerListsMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00123
// TypeInfo:  0x00000001427AAE60
struct ServerGameAdministrationResetServerMessage
{
    char _0x0000[72];
};//Size=0x0048

////////////////////////////////////////
// RuntimeId: 00122
// TypeInfo:  0x00000001427AAE80
struct ServerGameAdministrationRefreshGameAttributesMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00121
// TypeInfo:  0x00000001427AAEA0
struct ServerGameAdministrationGameSettingsUpdateMessage
{
    char _0x0000[152];
};//Size=0x0098

////////////////////////////////////////
// RuntimeId: 00120
// TypeInfo:  0x00000001427AAEC0
struct ServerGameAdministrationEventMessageBase
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00119
// TypeInfo:  0x00000001427AAEE0
struct ClientPersistenceUnlockMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00118
// TypeInfo:  0x00000001427AAF00
struct PresenceStateRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00117
// TypeInfo:  0x00000001427AAF20
struct PresenceStateMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00116
// TypeInfo:  0x00000001427AAF40
struct PresenceXPromoRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00115
// TypeInfo:  0x00000001427AAF60
struct PresenceXPromoMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00114
// TypeInfo:  0x00000001427AAF80
struct PresenceWebRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00113
// TypeInfo:  0x00000001427AAFA0
struct PresenceWebFeedRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00112
// TypeInfo:  0x00000001427AAFC0
struct PresenceWebAuthenticationRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00111
// TypeInfo:  0x00000001427AAFE0
struct PresenceWebAuthenticationMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00110
// TypeInfo:  0x00000001427AB000
struct PresenceWebMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00109
// TypeInfo:  0x00000001427AB020
struct PresenceUserTitleInfoRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00108
// TypeInfo:  0x00000001427AB040
struct PresenceUserTitleInfoMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00107
// TypeInfo:  0x00000001427AB060
struct PresenceUserProfileInfoMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00106
// TypeInfo:  0x00000001427AB080
struct PresenceUserSettingsRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00105
// TypeInfo:  0x00000001427AB0A0
struct PresenceUserSettingsMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00104
// TypeInfo:  0x00000001427AB0C0
struct PresenceConsoleNewsRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00103
// TypeInfo:  0x00000001427AB0E0
struct PresenceConsoleNewsMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00102
// TypeInfo:  0x00000001427AB100
struct PresenceStoreRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00101
// TypeInfo:  0x00000001427AB120
struct PresenceStoreMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00100
// TypeInfo:  0x00000001427AB140
struct PresenceServerRentalRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00099
// TypeInfo:  0x00000001427AB160
struct PresenceServerRentalMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00098
// TypeInfo:  0x00000001427AB180
struct PresenceServerBrowserRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00097
// TypeInfo:  0x00000001427AB1A0
struct PresenceServerBrowserMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00096
// TypeInfo:  0x00000001427AB1C0
struct PresencePlayerEmblemRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00095
// TypeInfo:  0x00000001427AB1E0
struct PresencePlayerEmblemMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00094
// TypeInfo:  0x00000001427AB200
struct PresenceSetupInfoMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00093
// TypeInfo:  0x00000001427AB220
struct PresenceServerBannerRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00092
// TypeInfo:  0x00000001427AB240
struct PresenceServerBannerMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00091
// TypeInfo:  0x00000001427AB260
struct PresenceRspRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00090
// TypeInfo:  0x00000001427AB280
struct PresenceRspMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00089
// TypeInfo:  0x00000001427AB2A0
struct PresenceResetStorageRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00088
// TypeInfo:  0x00000001427AB2C0
struct PresenceResetStorageMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00087
// TypeInfo:  0x00000001427AB2E0
struct PresenceProgressionRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00086
// TypeInfo:  0x00000001427AB300
struct PresenceProgressionMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00085
// TypeInfo:  0x00000001427AB320
struct PresencePingUpdatedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00084
// TypeInfo:  0x00000001427AB340
struct PresencePlaygroundRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00083
// TypeInfo:  0x00000001427AB360
struct PresencePeerGameRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00082
// TypeInfo:  0x00000001427AB380
struct PresencePeerGameMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00081
// TypeInfo:  0x00000001427AB3A0
struct PresencePartyRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00080
// TypeInfo:  0x00000001427AB3C0
struct PresencePartyMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00079
// TypeInfo:  0x00000001427AB3E0
struct PresenceNucleusLoginUIRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00078
// TypeInfo:  0x00000001427AB400
struct PresenceMigrateDataRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00077
// TypeInfo:  0x00000001427AB420
struct PresenceMigrateDataMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00076
// TypeInfo:  0x00000001427AB440
struct PresenceMatchFeedMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00075
// TypeInfo:  0x00000001427AB460
struct PresenceGameDataRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00074
// TypeInfo:  0x00000001427AB480
struct PresenceGameDataMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00073
// TypeInfo:  0x00000001427AB4A0
struct PresenceGameConfigurationRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00072
// TypeInfo:  0x00000001427AB4C0
struct PresenceGameConfigurationMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00071
// TypeInfo:  0x00000001427AB4E0
struct PresenceFriendsStatsRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00070
// TypeInfo:  0x00000001427AB500
struct PresenceFriendsStatsMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00069
// TypeInfo:  0x00000001427AB520
struct PresenceDownloadRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00068
// TypeInfo:  0x00000001427AB540
struct PresenceDownloadMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00067
// TypeInfo:  0x00000001427AB560
struct PresencePushNotificationMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00066
// TypeInfo:  0x00000001427AB580
struct PresenceCommMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00065
// TypeInfo:  0x00000001427AB5A0
struct PresenceChallengesRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00064
// TypeInfo:  0x00000001427AB5C0
struct PresenceChallengesMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00063
// TypeInfo:  0x00000001427AB5E0
struct PresenceCalendarRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00062
// TypeInfo:  0x00000001427AB600
struct PresenceCalendarMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00061
// TypeInfo:  0x00000001427AB620
struct PresenceBFCommerceMetricMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00060
// TypeInfo:  0x00000001427AB640
struct PresenceBFCommerceRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00059
// TypeInfo:  0x00000001427AB660
struct PresenceBFCommerceMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00058
// TypeInfo:  0x00000001427AB680
struct PresenceBattlepackRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00057
// TypeInfo:  0x00000001427AB6A0
struct PresenceBattlepackMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00056
// TypeInfo:  0x00000001427AB6C0
struct PresenceBattlelogRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00055
// TypeInfo:  0x00000001427AB6E0
struct PresenceBattlelogMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00054
// TypeInfo:  0x00000001427AB700
struct PresenceAuthenticationRequestMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00053
// TypeInfo:  0x00000001427AB720
struct PresenceAuthenticationMessageBase
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00052
// TypeInfo:  0x00000001427AB740
struct NuiGrammarLoadCompletedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00051
// TypeInfo:  0x00000001427AB760
struct NuiCheckSpeechRecognizingMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00050
// TypeInfo:  0x00000001427AB780
struct NuiSpeechGrammarActivationSettingsMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00049
// TypeInfo:  0x00000001427AB7A0
struct NuiSpeechGrammarDeactivationMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00048
// TypeInfo:  0x00000001427AB7C0
struct NuiSpeechGrammarActivationMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00047
// TypeInfo:  0x00000001427AB7E0
struct NuiSpeechProblemDetectedMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00046
// TypeInfo:  0x00000001427AB800
struct NuiSpeechOngoingActivityMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00045
// TypeInfo:  0x00000001427AB820
struct NuiSpeechRuleRecognitionFailedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00044
// TypeInfo:  0x00000001427AB840
struct NuiSpeechRuleRecognitionStartsMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00043
// TypeInfo:  0x00000001427AB860
struct NuiSpeechSoundEventMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00042
// TypeInfo:  0x00000001427AB880
struct NuiSpeechRuleRecognizedMessage
{
    char _0x0000[80];
};//Size=0x0050

////////////////////////////////////////
// RuntimeId: 00041
// TypeInfo:  0x00000001427AB8A0
struct VeniceClientMetricsJoinGameMessage
{
    char _0x0000[64];
};//Size=0x0040

////////////////////////////////////////
// RuntimeId: 00038
// TypeInfo:  0x00000001427AB8E0
struct VeniceClientMetricsQuitSPGameMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00037
// TypeInfo:  0x00000001427AB900
struct VeniceClientMetricsRestartSPMissionMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00036
// TypeInfo:  0x00000001427AB920
struct VeniceClientMetricsRestartSPCheckpointMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00035
// TypeInfo:  0x00000001427AB940
struct VeniceClientMetricsResumeSPGameMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00034
// TypeInfo:  0x00000001427AB960
struct VeniceClientMetricsStartSPGameMessage
{
    char _0x0000[56];
};//Size=0x0038

////////////////////////////////////////
// RuntimeId: 00033
// TypeInfo:  0x00000001427AB980
struct VeniceClientMetricsBootMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00032
// TypeInfo:  0x00000001427AB9A0
struct VeniceClientMetricsLeaveCriticalHealthMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00031
// TypeInfo:  0x00000001427AB9C0
struct VeniceClientMetricsEnterCriticalHealthMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00030
// TypeInfo:  0x00000001427AB9E0
struct VeniceClientMetricsTimeMessage
{
    char _0x0000[48];
};//Size=0x0030

////////////////////////////////////////
// RuntimeId: 00029
// TypeInfo:  0x00000001427ABA00
struct VeniceClientMetricsListenerDestroyedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00028
// TypeInfo:  0x00000001427ABA20
struct VeniceClientMetricsListenerCreatedMessage
{
    char _0x0000[40];
};//Size=0x0028

////////////////////////////////////////
// RuntimeId: 00015
// TypeInfo:  0x00000001427A14E0
struct DVRScoringChainMomentMessage
{
    char _0x0000[48];
};//Size=0x0030

}

