#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.10/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_016.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVROverlayError cppIVROverlay_IVROverlay_016_FindOverlay(void *linux_side, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    return ((IVROverlay*)linux_side)->FindOverlay((const char *)pchOverlayKey, (vr::VROverlayHandle_t *)pOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_CreateOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    return ((IVROverlay*)linux_side)->CreateOverlay((const char *)pchOverlayKey, (const char *)pchOverlayName, (vr::VROverlayHandle_t *)pOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_DestroyOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->DestroyOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetHighQualityOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->SetHighQualityOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::VROverlayHandle_t cppIVROverlay_IVROverlay_016_GetHighQualityOverlay(void *linux_side)
{
    return ((IVROverlay*)linux_side)->GetHighQualityOverlay();
}

uint32_t cppIVROverlay_IVROverlay_016_GetOverlayKey(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    return ((IVROverlay*)linux_side)->GetOverlayKey((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
}

uint32_t cppIVROverlay_IVROverlay_016_GetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    return ((IVROverlay*)linux_side)->GetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::EVROverlayError *)pError);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayName(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    return ((IVROverlay*)linux_side)->SetOverlayName((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchName);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayImageData(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    return ((IVROverlay*)linux_side)->GetOverlayImageData((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unBufferSize, (uint32_t *)punWidth, (uint32_t *)punHeight);
}

const char * cppIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum(void *linux_side, EVROverlayError error)
{
    return ((IVROverlay*)linux_side)->GetOverlayErrorNameFromEnum((vr::EVROverlayError)error);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    return ((IVROverlay*)linux_side)->SetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unPID);
}

uint32_t cppIVROverlay_IVROverlay_016_GetOverlayRenderingPid(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->GetOverlayRenderingPid((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    return ((IVROverlay*)linux_side)->SetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool)bEnabled);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayFlag(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    return ((IVROverlay*)linux_side)->GetOverlayFlag((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayFlags)eOverlayFlag, (bool *)pbEnabled);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    return ((IVROverlay*)linux_side)->SetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float)fRed, (float)fGreen, (float)fBlue);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayColor(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    return ((IVROverlay*)linux_side)->GetOverlayColor((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfRed, (float *)pfGreen, (float *)pfBlue);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    return ((IVROverlay*)linux_side)->SetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float)fAlpha);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayAlpha(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    return ((IVROverlay*)linux_side)->GetOverlayAlpha((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfAlpha);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTexelAspect(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    return ((IVROverlay*)linux_side)->SetOverlayTexelAspect((vr::VROverlayHandle_t)ulOverlayHandle, (float)fTexelAspect);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTexelAspect(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    return ((IVROverlay*)linux_side)->GetOverlayTexelAspect((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfTexelAspect);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlaySortOrder(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    return ((IVROverlay*)linux_side)->SetOverlaySortOrder((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unSortOrder);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlaySortOrder(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    return ((IVROverlay*)linux_side)->GetOverlaySortOrder((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punSortOrder);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    return ((IVROverlay*)linux_side)->SetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fWidthInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayWidthInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    return ((IVROverlay*)linux_side)->GetOverlayWidthInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfWidthInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    return ((IVROverlay*)linux_side)->SetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float)fMinDistanceInMeters, (float)fMaxDistanceInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters(void *linux_side, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    return ((IVROverlay*)linux_side)->GetOverlayAutoCurveDistanceRangeInMeters((vr::VROverlayHandle_t)ulOverlayHandle, (float *)pfMinDistanceInMeters, (float *)pfMaxDistanceInMeters);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    return ((IVROverlay*)linux_side)->SetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace)eTextureColorSpace);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace(void *linux_side, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    return ((IVROverlay*)linux_side)->GetOverlayTextureColorSpace((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EColorSpace *)peTextureColorSpace);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    return ((IVROverlay*)linux_side)->SetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VRTextureBounds_t *)pOverlayTextureBounds);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTextureBounds(void *linux_side, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    return ((IVROverlay*)linux_side)->GetOverlayTextureBounds((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VRTextureBounds_t *)pOverlayTextureBounds);
}

uint32_t cppIVROverlay_IVROverlay_016_GetOverlayRenderModel(void *linux_side, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, HmdColor_t *pColor, EVROverlayError *pError)
{
    return ((IVROverlay*)linux_side)->GetOverlayRenderModel((vr::VROverlayHandle_t)ulOverlayHandle, (char *)pchValue, (uint32_t)unBufferSize, (vr::HmdColor_t *)pColor, (vr::EVROverlayError *)pError);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayRenderModel(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char *pchRenderModel, HmdColor_t *pColor)
{
    return ((IVROverlay*)linux_side)->SetOverlayRenderModel((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchRenderModel, (const vr::HmdColor_t *)pColor);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformType(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformType((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayTransformType *)peTransformType);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformAbsolute((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin *)peTrackingOrigin, (vr::HmdMatrix34_t *)pmatTrackingOriginToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unTrackedDevice, (const vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punTrackedDevice, (vr::HmdMatrix34_t *)pmatTrackedDeviceToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unDeviceIndex, (const char *)pchComponentName);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformTrackedDeviceComponent((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t *)punDeviceIndex, (char *)pchComponentName, (uint32_t)unComponentNameSize);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->GetOverlayTransformOverlayRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayHandle_t *)ulOverlayHandleParent, (vr::HmdMatrix34_t *)pmatParentOverlayToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    return ((IVROverlay*)linux_side)->SetOverlayTransformOverlayRelative((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayHandle_t)ulOverlayHandleParent, (const vr::HmdMatrix34_t *)pmatParentOverlayToOverlayTransform);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_ShowOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->ShowOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_HideOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->HideOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

bool cppIVROverlay_IVROverlay_016_IsOverlayVisible(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->IsOverlayVisible((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates(void *linux_side, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    return ((IVROverlay*)linux_side)->GetTransformForOverlayCoordinates((vr::VROverlayHandle_t)ulOverlayHandle, (vr::ETrackingUniverseOrigin)eTrackingOrigin, (vr::HmdVector2_t)coordinatesInOverlay, (vr::HmdMatrix34_t *)pmatTransform);
}

bool cppIVROverlay_IVROverlay_016_PollNextOverlayEvent(void *linux_side, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1010 *pEvent, uint32_t uncbVREvent)
{
    VREvent_t lin;
    bool _ret;
    if(pEvent)
        struct_VREvent_t_1010_win_to_lin(pEvent, &lin);
    uncbVREvent = uncbVREvent ? sizeof(lin) : 0;
    _ret = ((IVROverlay*)linux_side)->PollNextOverlayEvent((vr::VROverlayHandle_t)ulOverlayHandle, pEvent ? &lin : nullptr, (uint32_t)uncbVREvent);
    if(pEvent)
        struct_VREvent_t_1010_lin_to_win(&lin, pEvent, uncbVREvent);
    return _ret;
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    return ((IVROverlay*)linux_side)->GetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod *)peInputMethod);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayInputMethod(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    return ((IVROverlay*)linux_side)->SetOverlayInputMethod((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayInputMethod)eInputMethod);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    return ((IVROverlay*)linux_side)->GetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdVector2_t *)pvecMouseScale);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayMouseScale(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    return ((IVROverlay*)linux_side)->SetOverlayMouseScale((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::HmdVector2_t *)pvecMouseScale);
}

bool cppIVROverlay_IVROverlay_016_ComputeOverlayIntersection(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    return ((IVROverlay*)linux_side)->ComputeOverlayIntersection((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::VROverlayIntersectionParams_t *)pParams, (vr::VROverlayIntersectionResults_t *)pResults);
}

bool cppIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse(void *linux_side, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    return ((IVROverlay*)linux_side)->HandleControllerOverlayInteractionAsMouse((vr::VROverlayHandle_t)ulOverlayHandle, (vr::TrackedDeviceIndex_t)unControllerDeviceIndex);
}

bool cppIVROverlay_IVROverlay_016_IsHoverTargetOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->IsHoverTargetOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::VROverlayHandle_t cppIVROverlay_IVROverlay_016_GetGamepadFocusOverlay(void *linux_side)
{
    return ((IVROverlay*)linux_side)->GetGamepadFocusOverlay();
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetGamepadFocusOverlay(void *linux_side, VROverlayHandle_t ulNewFocusOverlay)
{
    return ((IVROverlay*)linux_side)->SetGamepadFocusOverlay((vr::VROverlayHandle_t)ulNewFocusOverlay);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayNeighbor(void *linux_side, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    return ((IVROverlay*)linux_side)->SetOverlayNeighbor((vr::EOverlayDirection)eDirection, (vr::VROverlayHandle_t)ulFrom, (vr::VROverlayHandle_t)ulTo);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor(void *linux_side, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    return ((IVROverlay*)linux_side)->MoveGamepadFocusToNeighbor((vr::EOverlayDirection)eDirection, (vr::VROverlayHandle_t)ulFrom);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    return ((IVROverlay*)linux_side)->SetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (const vr::Texture_t *)pTexture);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_ClearOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->ClearOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayRaw(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    return ((IVROverlay*)linux_side)->SetOverlayRaw((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pvBuffer, (uint32_t)unWidth, (uint32_t)unHeight, (uint32_t)unDepth);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayFromFile(void *linux_side, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    return ((IVROverlay*)linux_side)->SetOverlayFromFile((vr::VROverlayHandle_t)ulOverlayHandle, (const char *)pchFilePath);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTexture(void *linux_side, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    return ((IVROverlay*)linux_side)->GetOverlayTexture((vr::VROverlayHandle_t)ulOverlayHandle, (void **)pNativeTextureHandle, (void *)pNativeTextureRef, (uint32_t *)pWidth, (uint32_t *)pHeight, (uint32_t *)pNativeFormat, (vr::ETextureType *)pAPIType, (vr::EColorSpace *)pColorSpace, (vr::VRTextureBounds_t *)pTextureBounds);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle(void *linux_side, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    return ((IVROverlay*)linux_side)->ReleaseNativeOverlayHandle((vr::VROverlayHandle_t)ulOverlayHandle, (void *)pNativeTextureHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayTextureSize(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    return ((IVROverlay*)linux_side)->GetOverlayTextureSize((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)pWidth, (uint32_t *)pHeight);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_CreateDashboardOverlay(void *linux_side, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    return ((IVROverlay*)linux_side)->CreateDashboardOverlay((const char *)pchOverlayKey, (const char *)pchOverlayFriendlyName, (vr::VROverlayHandle_t *)pMainHandle, (vr::VROverlayHandle_t *)pThumbnailHandle);
}

bool cppIVROverlay_IVROverlay_016_IsDashboardVisible(void *linux_side)
{
    return ((IVROverlay*)linux_side)->IsDashboardVisible();
}

bool cppIVROverlay_IVROverlay_016_IsActiveDashboardOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle)
{
    return ((IVROverlay*)linux_side)->IsActiveDashboardOverlay((vr::VROverlayHandle_t)ulOverlayHandle);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    return ((IVROverlay*)linux_side)->SetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t)unProcessId);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    return ((IVROverlay*)linux_side)->GetDashboardOverlaySceneProcess((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)punProcessId);
}

void cppIVROverlay_IVROverlay_016_ShowDashboard(void *linux_side, const char *pchOverlayToShow)
{
    ((IVROverlay*)linux_side)->ShowDashboard((const char *)pchOverlayToShow);
}

vr::TrackedDeviceIndex_t cppIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice(void *linux_side)
{
    return ((IVROverlay*)linux_side)->GetPrimaryDashboardDevice();
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_ShowKeyboard(void *linux_side, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    return ((IVROverlay*)linux_side)->ShowKeyboard((vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (bool)bUseMinimalMode, (uint64_t)uUserValue);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_ShowKeyboardForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    return ((IVROverlay*)linux_side)->ShowKeyboardForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::EGamepadTextInputMode)eInputMode, (vr::EGamepadTextInputLineMode)eLineInputMode, (const char *)pchDescription, (uint32_t)unCharMax, (const char *)pchExistingText, (bool)bUseMinimalMode, (uint64_t)uUserValue);
}

uint32_t cppIVROverlay_IVROverlay_016_GetKeyboardText(void *linux_side, char *pchText, uint32_t cchText)
{
    return ((IVROverlay*)linux_side)->GetKeyboardText((char *)pchText, (uint32_t)cchText);
}

void cppIVROverlay_IVROverlay_016_HideKeyboard(void *linux_side)
{
    ((IVROverlay*)linux_side)->HideKeyboard();
}

void cppIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute(void *linux_side, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    ((IVROverlay*)linux_side)->SetKeyboardTransformAbsolute((vr::ETrackingUniverseOrigin)eTrackingOrigin, (const vr::HmdMatrix34_t *)pmatTrackingOriginToKeyboardTransform);
}

void cppIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay(void *linux_side, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    ((IVROverlay*)linux_side)->SetKeyboardPositionForOverlay((vr::VROverlayHandle_t)ulOverlayHandle, (vr::HmdRect2_t)avoidRect);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_SetOverlayIntersectionMask(void *linux_side, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    return ((IVROverlay*)linux_side)->SetOverlayIntersectionMask((vr::VROverlayHandle_t)ulOverlayHandle, (vr::VROverlayIntersectionMaskPrimitive_t *)pMaskPrimitives, (uint32_t)unNumMaskPrimitives, (uint32_t)unPrimitiveSize);
}

vr::EVROverlayError cppIVROverlay_IVROverlay_016_GetOverlayFlags(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    return ((IVROverlay*)linux_side)->GetOverlayFlags((vr::VROverlayHandle_t)ulOverlayHandle, (uint32_t *)pFlags);
}

vr::VRMessageOverlayResponse cppIVROverlay_IVROverlay_016_ShowMessageOverlay(void *linux_side, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    return ((IVROverlay*)linux_side)->ShowMessageOverlay((const char *)pchText, (const char *)pchCaption, (const char *)pchButton0Text, (const char *)pchButton1Text, (const char *)pchButton2Text, (const char *)pchButton3Text);
}

void cppIVROverlay_IVROverlay_016_CloseMessageOverlay(void *linux_side)
{
    ((IVROverlay*)linux_side)->CloseMessageOverlay();
}

#ifdef __cplusplus
}
#endif
