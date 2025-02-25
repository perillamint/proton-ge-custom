#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.11/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_017.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRSystem_IVRSystem_017_GetRecommendedRenderTargetSize(void *linux_side, uint32_t *pnWidth, uint32_t *pnHeight)
{
    ((IVRSystem*)linux_side)->GetRecommendedRenderTargetSize((uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

vr::HmdMatrix44_t cppIVRSystem_IVRSystem_017_GetProjectionMatrix(void *linux_side, EVREye eEye, float fNearZ, float fFarZ)
{
    return ((IVRSystem*)linux_side)->GetProjectionMatrix((vr::EVREye)eEye, (float)fNearZ, (float)fFarZ);
}

void cppIVRSystem_IVRSystem_017_GetProjectionRaw(void *linux_side, EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom)
{
    ((IVRSystem*)linux_side)->GetProjectionRaw((vr::EVREye)eEye, (float *)pfLeft, (float *)pfRight, (float *)pfTop, (float *)pfBottom);
}

bool cppIVRSystem_IVRSystem_017_ComputeDistortion(void *linux_side, EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates)
{
    return ((IVRSystem*)linux_side)->ComputeDistortion((vr::EVREye)eEye, (float)fU, (float)fV, (vr::DistortionCoordinates_t *)pDistortionCoordinates);
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_017_GetEyeToHeadTransform(void *linux_side, EVREye eEye)
{
    return ((IVRSystem*)linux_side)->GetEyeToHeadTransform((vr::EVREye)eEye);
}

bool cppIVRSystem_IVRSystem_017_GetTimeSinceLastVsync(void *linux_side, float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter)
{
    return ((IVRSystem*)linux_side)->GetTimeSinceLastVsync((float *)pfSecondsSinceLastVsync, (uint64_t *)pulFrameCounter);
}

int32_t cppIVRSystem_IVRSystem_017_GetD3D9AdapterIndex(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetD3D9AdapterIndex();
}

void cppIVRSystem_IVRSystem_017_GetDXGIOutputInfo(void *linux_side, int32_t *pnAdapterIndex)
{
    ((IVRSystem*)linux_side)->GetDXGIOutputInfo((int32_t *)pnAdapterIndex);
}

void cppIVRSystem_IVRSystem_017_GetOutputDevice(void *linux_side, uint64_t *pnDevice, ETextureType textureType, VkInstance_T *pInstance)
{
    ((IVRSystem*)linux_side)->GetOutputDevice((uint64_t *)pnDevice, (vr::ETextureType)textureType, (VkInstance_T *)pInstance);
}

bool cppIVRSystem_IVRSystem_017_IsDisplayOnDesktop(void *linux_side)
{
    return ((IVRSystem*)linux_side)->IsDisplayOnDesktop();
}

bool cppIVRSystem_IVRSystem_017_SetDisplayVisibility(void *linux_side, bool bIsVisibleOnDesktop)
{
    return ((IVRSystem*)linux_side)->SetDisplayVisibility((bool)bIsVisibleOnDesktop);
}

void cppIVRSystem_IVRSystem_017_GetDeviceToAbsoluteTrackingPose(void *linux_side, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount)
{
    ((IVRSystem*)linux_side)->GetDeviceToAbsoluteTrackingPose((vr::ETrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsToPhotonsFromNow, (vr::TrackedDevicePose_t *)pTrackedDevicePoseArray, (uint32_t)unTrackedDevicePoseArrayCount);
}

void cppIVRSystem_IVRSystem_017_ResetSeatedZeroPose(void *linux_side)
{
    ((IVRSystem*)linux_side)->ResetSeatedZeroPose();
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_017_GetSeatedZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_017_GetRawZeroPoseToStandingAbsoluteTrackingPose(void *linux_side)
{
    return ((IVRSystem*)linux_side)->GetRawZeroPoseToStandingAbsoluteTrackingPose();
}

uint32_t cppIVRSystem_IVRSystem_017_GetSortedTrackedDeviceIndicesOfClass(void *linux_side, ETrackedDeviceClass eTrackedDeviceClass, TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetSortedTrackedDeviceIndicesOfClass((vr::ETrackedDeviceClass)eTrackedDeviceClass, (vr::TrackedDeviceIndex_t *)punTrackedDeviceIndexArray, (uint32_t)unTrackedDeviceIndexArrayCount, (vr::TrackedDeviceIndex_t)unRelativeToTrackedDeviceIndex);
}

vr::EDeviceActivityLevel cppIVRSystem_IVRSystem_017_GetTrackedDeviceActivityLevel(void *linux_side, TrackedDeviceIndex_t unDeviceId)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceActivityLevel((vr::TrackedDeviceIndex_t)unDeviceId);
}

void cppIVRSystem_IVRSystem_017_ApplyTransform(void *linux_side, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pTrackedDevicePose, HmdMatrix34_t *pTransform)
{
    ((IVRSystem*)linux_side)->ApplyTransform((vr::TrackedDevicePose_t *)pOutputPose, (const vr::TrackedDevicePose_t *)pTrackedDevicePose, (const vr::HmdMatrix34_t *)pTransform);
}

vr::TrackedDeviceIndex_t cppIVRSystem_IVRSystem_017_GetTrackedDeviceIndexForControllerRole(void *linux_side, ETrackedControllerRole unDeviceType)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceIndexForControllerRole((vr::ETrackedControllerRole)unDeviceType);
}

vr::ETrackedControllerRole cppIVRSystem_IVRSystem_017_GetControllerRoleForTrackedDeviceIndex(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetControllerRoleForTrackedDeviceIndex((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

vr::ETrackedDeviceClass cppIVRSystem_IVRSystem_017_GetTrackedDeviceClass(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->GetTrackedDeviceClass((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

bool cppIVRSystem_IVRSystem_017_IsTrackedDeviceConnected(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->IsTrackedDeviceConnected((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

bool cppIVRSystem_IVRSystem_017_GetBoolTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    return ((IVRSystem*)linux_side)->GetBoolTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

float cppIVRSystem_IVRSystem_017_GetFloatTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    return ((IVRSystem*)linux_side)->GetFloatTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

int32_t cppIVRSystem_IVRSystem_017_GetInt32TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    return ((IVRSystem*)linux_side)->GetInt32TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

uint64_t cppIVRSystem_IVRSystem_017_GetUint64TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    return ((IVRSystem*)linux_side)->GetUint64TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

vr::HmdMatrix34_t cppIVRSystem_IVRSystem_017_GetMatrix34TrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError)
{
    return ((IVRSystem*)linux_side)->GetMatrix34TrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (vr::ETrackedPropertyError *)pError);
}

uint32_t cppIVRSystem_IVRSystem_017_GetStringTrackedDeviceProperty(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError)
{
    return ((IVRSystem*)linux_side)->GetStringTrackedDeviceProperty((vr::TrackedDeviceIndex_t)unDeviceIndex, (vr::ETrackedDeviceProperty)prop, (char *)pchValue, (uint32_t)unBufferSize, (vr::ETrackedPropertyError *)pError);
}

const char * cppIVRSystem_IVRSystem_017_GetPropErrorNameFromEnum(void *linux_side, ETrackedPropertyError error)
{
    return ((IVRSystem*)linux_side)->GetPropErrorNameFromEnum((vr::ETrackedPropertyError)error);
}

bool cppIVRSystem_IVRSystem_017_PollNextEvent(void *linux_side, winVREvent_t_1011 *pEvent, uint32_t uncbVREvent)
{
    VREvent_t lin;
    bool _ret;
    if(pEvent)
        struct_VREvent_t_1011_win_to_lin(pEvent, &lin);
    uncbVREvent = uncbVREvent ? sizeof(lin) : 0;
    _ret = ((IVRSystem*)linux_side)->PollNextEvent(pEvent ? &lin : nullptr, (uint32_t)uncbVREvent);
    if(pEvent)
        struct_VREvent_t_1011_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

bool cppIVRSystem_IVRSystem_017_PollNextEventWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, winVREvent_t_1011 *pEvent, uint32_t uncbVREvent, TrackedDevicePose_t *pTrackedDevicePose)
{
    VREvent_t lin;
    bool _ret;
    if(pEvent)
        struct_VREvent_t_1011_win_to_lin(pEvent, &lin);
    uncbVREvent = uncbVREvent ? sizeof(lin) : 0;
    _ret = ((IVRSystem*)linux_side)->PollNextEventWithPose((vr::ETrackingUniverseOrigin)eOrigin, pEvent ? &lin : nullptr, (uint32_t)uncbVREvent, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if(pEvent)
        struct_VREvent_t_1011_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

const char * cppIVRSystem_IVRSystem_017_GetEventTypeNameFromEnum(void *linux_side, EVREventType eType)
{
    return ((IVRSystem*)linux_side)->GetEventTypeNameFromEnum((vr::EVREventType)eType);
}

vr::HiddenAreaMesh_t cppIVRSystem_IVRSystem_017_GetHiddenAreaMesh(void *linux_side, EVREye eEye, EHiddenAreaMeshType type)
{
    return ((IVRSystem*)linux_side)->GetHiddenAreaMesh((vr::EVREye)eEye, (vr::EHiddenAreaMeshType)type);
}

bool cppIVRSystem_IVRSystem_017_GetControllerState(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1011 *pControllerState, uint32_t unControllerStateSize)
{
    VRControllerState001_t lin;
    bool _ret;
    if(pControllerState)
        struct_VRControllerState001_t_1011_win_to_lin(pControllerState, &lin);
    unControllerStateSize = unControllerStateSize ? sizeof(lin) : 0;
    _ret = ((IVRSystem*)linux_side)->GetControllerState((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr, (uint32_t)unControllerStateSize);
    if(pControllerState)
        struct_VRControllerState001_t_1011_lin_to_win(&lin, pControllerState, unControllerStateSize);
    return _ret;
}

bool cppIVRSystem_IVRSystem_017_GetControllerStateWithPose(void *linux_side, ETrackingUniverseOrigin eOrigin, TrackedDeviceIndex_t unControllerDeviceIndex, winVRControllerState001_t_1011 *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose)
{
    VRControllerState001_t lin;
    bool _ret;
    if(pControllerState)
        struct_VRControllerState001_t_1011_win_to_lin(pControllerState, &lin);
    unControllerStateSize = unControllerStateSize ? sizeof(lin) : 0;
    _ret = ((IVRSystem*)linux_side)->GetControllerStateWithPose((vr::ETrackingUniverseOrigin)eOrigin, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex, pControllerState ? &lin : nullptr, (uint32_t)unControllerStateSize, (vr::TrackedDevicePose_t *)pTrackedDevicePose);
    if(pControllerState)
        struct_VRControllerState001_t_1011_lin_to_win(&lin, pControllerState, unControllerStateSize);
    return _ret;
}

void cppIVRSystem_IVRSystem_017_TriggerHapticPulse(void *linux_side, TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec)
{
    ((IVRSystem*)linux_side)->TriggerHapticPulse((vr::TrackedDeviceIndex_t)unControllerDeviceIndex, (uint32_t)unAxisId, (unsigned short)usDurationMicroSec);
}

const char * cppIVRSystem_IVRSystem_017_GetButtonIdNameFromEnum(void *linux_side, EVRButtonId eButtonId)
{
    return ((IVRSystem*)linux_side)->GetButtonIdNameFromEnum((vr::EVRButtonId)eButtonId);
}

const char * cppIVRSystem_IVRSystem_017_GetControllerAxisTypeNameFromEnum(void *linux_side, EVRControllerAxisType eAxisType)
{
    return ((IVRSystem*)linux_side)->GetControllerAxisTypeNameFromEnum((vr::EVRControllerAxisType)eAxisType);
}

bool cppIVRSystem_IVRSystem_017_CaptureInputFocus(void *linux_side)
{
    return ((IVRSystem*)linux_side)->CaptureInputFocus();
}

void cppIVRSystem_IVRSystem_017_ReleaseInputFocus(void *linux_side)
{
    ((IVRSystem*)linux_side)->ReleaseInputFocus();
}

bool cppIVRSystem_IVRSystem_017_IsInputFocusCapturedByAnotherProcess(void *linux_side)
{
    return ((IVRSystem*)linux_side)->IsInputFocusCapturedByAnotherProcess();
}

uint32_t cppIVRSystem_IVRSystem_017_DriverDebugRequest(void *linux_side, TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize)
{
    return ((IVRSystem*)linux_side)->DriverDebugRequest((vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchRequest, (char *)pchResponseBuffer, (uint32_t)unResponseBufferSize);
}

vr::EVRFirmwareError cppIVRSystem_IVRSystem_017_PerformFirmwareUpdate(void *linux_side, TrackedDeviceIndex_t unDeviceIndex)
{
    return ((IVRSystem*)linux_side)->PerformFirmwareUpdate((vr::TrackedDeviceIndex_t)unDeviceIndex);
}

void cppIVRSystem_IVRSystem_017_AcknowledgeQuit_Exiting(void *linux_side)
{
    ((IVRSystem*)linux_side)->AcknowledgeQuit_Exiting();
}

void cppIVRSystem_IVRSystem_017_AcknowledgeQuit_UserPrompt(void *linux_side)
{
    ((IVRSystem*)linux_side)->AcknowledgeQuit_UserPrompt();
}

#ifdef __cplusplus
}
#endif
