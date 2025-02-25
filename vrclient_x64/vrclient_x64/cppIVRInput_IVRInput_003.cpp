#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.15/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRInput_IVRInput_003.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVRInputError cppIVRInput_IVRInput_003_SetActionManifestPath(void *linux_side, const char *pchActionManifestPath)
{
    return ((IVRInput*)linux_side)->SetActionManifestPath((const char *)pchActionManifestPath);
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetActionSetHandle(void *linux_side, const char *pchActionSetName, VRActionSetHandle_t *pHandle)
{
    return ((IVRInput*)linux_side)->GetActionSetHandle((const char *)pchActionSetName, (vr::VRActionSetHandle_t *)pHandle);
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetActionHandle(void *linux_side, const char *pchActionName, VRActionHandle_t *pHandle)
{
    return ((IVRInput*)linux_side)->GetActionHandle((const char *)pchActionName, (vr::VRActionHandle_t *)pHandle);
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetInputSourceHandle(void *linux_side, const char *pchInputSourcePath, VRInputValueHandle_t *pHandle)
{
    return ((IVRInput*)linux_side)->GetInputSourceHandle((const char *)pchInputSourcePath, (vr::VRInputValueHandle_t *)pHandle);
}

vr::EVRInputError cppIVRInput_IVRInput_003_UpdateActionState(void *linux_side, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    return ((IVRInput*)linux_side)->UpdateActionState((vr::VRActiveActionSet_t *)pSets, (uint32_t)unSizeOfVRSelectedActionSet_t, (uint32_t)unSetCount);
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetDigitalActionData(void *linux_side, VRActionHandle_t action, winInputDigitalActionData_t_1015 *pActionData, uint32_t unActionDataSize)
{
    InputDigitalActionData_t lin;
    vr::EVRInputError _ret;
    if(pActionData)
        struct_InputDigitalActionData_t_1015_win_to_lin(pActionData, &lin);
    unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetDigitalActionData((vr::VRActionHandle_t)action, pActionData ? &lin : nullptr, (uint32_t)unActionDataSize);
    if(pActionData)
        struct_InputDigitalActionData_t_1015_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetAnalogActionData(void *linux_side, VRActionHandle_t action, winInputAnalogActionData_t_1015 *pActionData, uint32_t unActionDataSize)
{
    InputAnalogActionData_t lin;
    vr::EVRInputError _ret;
    if(pActionData)
        struct_InputAnalogActionData_t_1015_win_to_lin(pActionData, &lin);
    unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetAnalogActionData((vr::VRActionHandle_t)action, pActionData ? &lin : nullptr, (uint32_t)unActionDataSize);
    if(pActionData)
        struct_InputAnalogActionData_t_1015_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetPoseActionData(void *linux_side, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, winInputPoseActionData_t_1015 *pActionData, uint32_t unActionDataSize)
{
    InputPoseActionData_t lin;
    vr::EVRInputError _ret;
    if(pActionData)
        struct_InputPoseActionData_t_1015_win_to_lin(pActionData, &lin);
    unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetPoseActionData((vr::VRActionHandle_t)action, (vr::ETrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsFromNow, pActionData ? &lin : nullptr, (uint32_t)unActionDataSize);
    if(pActionData)
        struct_InputPoseActionData_t_1015_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetSkeletalActionData(void *linux_side, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, winInputSkeletonActionData_t_1015 *pActionData, uint32_t unActionDataSize, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    InputSkeletonActionData_t lin;
    vr::EVRInputError _ret;
    if(pActionData)
        struct_InputSkeletonActionData_t_1015_win_to_lin(pActionData, &lin);
    _ret = ((IVRInput*)linux_side)->GetSkeletalActionData((vr::VRActionHandle_t)action, (vr::EVRSkeletalTransformSpace)eBoneParent, (float)fPredictedSecondsFromNow, pActionData ? &lin : nullptr, (uint32_t)unActionDataSize, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
    if(pActionData)
        struct_InputSkeletonActionData_t_1015_lin_to_win(&lin, pActionData);
    return _ret;
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed(void *linux_side, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    return ((IVRInput*)linux_side)->GetSkeletalActionDataCompressed((vr::VRActionHandle_t)action, (vr::EVRSkeletalTransformSpace)eBoneParent, (float)fPredictedSecondsFromNow, (void *)pvCompressedData, (uint32_t)unCompressedSize, (uint32_t *)punRequiredCompressedSize);
}

vr::EVRInputError cppIVRInput_IVRInput_003_UncompressSkeletalActionData(void *linux_side, void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace *peBoneParent, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    return ((IVRInput*)linux_side)->UncompressSkeletalActionData((void *)pvCompressedBuffer, (uint32_t)unCompressedBufferSize, (vr::EVRSkeletalTransformSpace *)peBoneParent, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
}

vr::EVRInputError cppIVRInput_IVRInput_003_TriggerHapticVibrationAction(void *linux_side, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    return ((IVRInput*)linux_side)->TriggerHapticVibrationAction((vr::VRActionHandle_t)action, (float)fStartSecondsFromNow, (float)fDurationSeconds, (float)fFrequency, (float)fAmplitude);
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetActionOrigins(void *linux_side, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t *originsOut, uint32_t originOutCount)
{
    return ((IVRInput*)linux_side)->GetActionOrigins((vr::VRActionSetHandle_t)actionSetHandle, (vr::VRActionHandle_t)digitalActionHandle, (vr::VRInputValueHandle_t *)originsOut, (uint32_t)originOutCount);
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetOriginLocalizedName(void *linux_side, VRInputValueHandle_t origin, char *pchNameArray, uint32_t unNameArraySize)
{
    return ((IVRInput*)linux_side)->GetOriginLocalizedName((vr::VRInputValueHandle_t)origin, (char *)pchNameArray, (uint32_t)unNameArraySize);
}

vr::EVRInputError cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo(void *linux_side, VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    unOriginInfoSize = std::min(unOriginInfoSize, (uint32_t)sizeof(vr::InputOriginInfo_t));
    return ((IVRInput*)linux_side)->GetOriginTrackedDeviceInfo((vr::VRInputValueHandle_t)origin, (vr::InputOriginInfo_t *)pOriginInfo, (uint32_t)unOriginInfoSize);
}

vr::EVRInputError cppIVRInput_IVRInput_003_ShowActionOrigins(void *linux_side, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    return ((IVRInput*)linux_side)->ShowActionOrigins((vr::VRActionSetHandle_t)actionSetHandle, (vr::VRActionHandle_t)ulActionHandle);
}

vr::EVRInputError cppIVRInput_IVRInput_003_ShowBindingsForActionSet(void *linux_side, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    return ((IVRInput*)linux_side)->ShowBindingsForActionSet((vr::VRActiveActionSet_t *)pSets, (uint32_t)unSizeOfVRSelectedActionSet_t, (uint32_t)unSetCount, (vr::VRInputValueHandle_t)originToHighlight);
}

#ifdef __cplusplus
}
#endif
