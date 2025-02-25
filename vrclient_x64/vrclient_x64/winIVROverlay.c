/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVROverlay_IVROverlay_001.h"

typedef struct __winIVROverlay_IVROverlay_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_001;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayVisibility, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayVisibility, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_PollNextOverlayEvent, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_IsSystemOverlayVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_IsActiveSystemOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess, 16)

VROverlayError __thiscall winIVROverlay_IVROverlay_001_FindOverlay(winIVROverlay_IVROverlay_001 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_CreateOverlay(winIVROverlay_IVROverlay_001 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_DestroyOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetHighQualityOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_001_GetHighQualityOverlay(winIVROverlay_IVROverlay_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetHighQualityOverlay(_this->linux_side);
}

const char * __thiscall winIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_001 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayFlag(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayFlag(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayAlpha(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayAlpha(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayGamma(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayGamma(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float *pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTextureBounds(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayTextureBounds(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayTransformType(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayVisibility(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayVisibility *peOverlayVisibility)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayVisibility(_this->linux_side, ulOverlayHandle, peOverlayVisibility);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayVisibility(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayVisibility eOverlayVisibility)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayVisibility(_this->linux_side, ulOverlayHandle, eOverlayVisibility);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_ShowOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_HideOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_001_IsOverlayVisible(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_001_PollNextOverlayEvent(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayInputMethod(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayInputMethod(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetOverlayMouseScale(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayMouseScale(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_001_ComputeOverlayIntersection(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayTexture(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, void *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_001_set_overlay_texture(cppIVROverlay_IVROverlay_001_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 1);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayRaw(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetOverlayFromFile(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

bool __thiscall winIVROverlay_IVROverlay_001_IsSystemOverlayVisible(winIVROverlay_IVROverlay_001 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_001_IsActiveSystemOverlay(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess(winIVROverlay_IVROverlay_001 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

extern vtable_ptr winIVROverlay_IVROverlay_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_001,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayVisibility)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayVisibility)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_IsSystemOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_IsActiveSystemOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_001 *create_winIVROverlay_IVROverlay_001(void *linux_side)
{
    winIVROverlay_IVROverlay_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_001_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_001(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_001 *create_winIVROverlay_IVROverlay_001_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_001));
    struct thunk *thunks = alloc_thunks(40);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 40 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_001_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_001_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_001_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_001_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_001_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_001_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_001_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_001_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_001_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_001_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_001_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_001_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_001_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_001_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_001_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_001_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_001_GetOverlayVisibility, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_001_SetOverlayVisibility, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_001_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_001_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_001_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_001_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_001_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_001_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_001_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_001_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_001_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_001_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_001_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_001_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_001_IsSystemOverlayVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_001_IsActiveSystemOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess, 2, FALSE, FALSE);
    for (i = 0; i < 40; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_001_FnTable(void *object)
{
    winIVROverlay_IVROverlay_001 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_002.h"

typedef struct __winIVROverlay_IVROverlay_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_002;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_PollNextOverlayEvent, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayTexture, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess, 16)

VROverlayError __thiscall winIVROverlay_IVROverlay_002_FindOverlay(winIVROverlay_IVROverlay_002 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_CreateOverlay(winIVROverlay_IVROverlay_002 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_DestroyOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetHighQualityOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_002_GetHighQualityOverlay(winIVROverlay_IVROverlay_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetHighQualityOverlay(_this->linux_side);
}

const char * __thiscall winIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_002 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayFlag(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayFlag(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayColor(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayColor(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayAlpha(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayAlpha(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayGamma(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayGamma(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float *pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTextureBounds(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayTextureBounds(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayTransformType(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_ShowOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_HideOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_002_IsOverlayVisible(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_002_PollNextOverlayEvent(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayInputMethod(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayInputMethod(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetOverlayMouseScale(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayMouseScale(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_002_ComputeOverlayIntersection(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayTexture(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_005_set_overlay_texture(cppIVROverlay_IVROverlay_002_SetOverlayTexture, _this->linux_side, ulOverlayHandle, eTextureType, pTexture, 2);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_ClearOverlayTexture(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayRaw(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetOverlayFromFile(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_CreateDashboardOverlay(winIVROverlay_IVROverlay_002 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_002_IsDashboardVisible(winIVROverlay_IVROverlay_002 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_002_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_002 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

extern vtable_ptr winIVROverlay_IVROverlay_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_002,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_002 *create_winIVROverlay_IVROverlay_002(void *linux_side)
{
    winIVROverlay_IVROverlay_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_002_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_002(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_002 *create_winIVROverlay_IVROverlay_002_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_002));
    struct thunk *thunks = alloc_thunks(42);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 42 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_002_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_002_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_002_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_002_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_002_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_002_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_002_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_002_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_002_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_002_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_002_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_002_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_002_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_002_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_002_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_002_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_002_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_002_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_002_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_002_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_002_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_002_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_002_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_002_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_002_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_002_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_002_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_002_SetOverlayTexture, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_002_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_002_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_002_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_002_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_002_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_002_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    for (i = 0; i < 42; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_002_FnTable(void *object)
{
    winIVROverlay_IVROverlay_002 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_003.h"

typedef struct __winIVROverlay_IVROverlay_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_003;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_PollNextOverlayEvent, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayTexture, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_003_ShowDashboard, 8)

VROverlayError __thiscall winIVROverlay_IVROverlay_003_FindOverlay(winIVROverlay_IVROverlay_003 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_CreateOverlay(winIVROverlay_IVROverlay_003 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_DestroyOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetHighQualityOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_003_GetHighQualityOverlay(winIVROverlay_IVROverlay_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_003_GetOverlayKey(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, VROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_003_GetOverlayName(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, VROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayImageData(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_003 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayFlag(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayFlag(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayColor(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayColor(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayAlpha(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayAlpha(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayGamma(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayGamma(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float *pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTextureBounds(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayTextureBounds(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayTransformType(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_ShowOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_HideOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_003_IsOverlayVisible(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_003_PollNextOverlayEvent(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayInputMethod(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayInputMethod(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetOverlayMouseScale(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayMouseScale(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_003_ComputeOverlayIntersection(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayTexture(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_005_set_overlay_texture(cppIVROverlay_IVROverlay_003_SetOverlayTexture, _this->linux_side, ulOverlayHandle, eTextureType, pTexture, 3);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_ClearOverlayTexture(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayRaw(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetOverlayFromFile(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_CreateDashboardOverlay(winIVROverlay_IVROverlay_003 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_003_IsDashboardVisible(winIVROverlay_IVROverlay_003 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_003_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_003 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_003_ShowDashboard(winIVROverlay_IVROverlay_003 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_003_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

extern vtable_ptr winIVROverlay_IVROverlay_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_003,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_003_ShowDashboard)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_003 *create_winIVROverlay_IVROverlay_003(void *linux_side)
{
    winIVROverlay_IVROverlay_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_003_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_003(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_003 *create_winIVROverlay_IVROverlay_003_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_003));
    struct thunk *thunks = alloc_thunks(46);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 46 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_003_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_003_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_003_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_003_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_003_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_003_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_003_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_003_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_003_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_003_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_003_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_003_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_003_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_003_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_003_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_003_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_003_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_003_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_003_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_003_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_003_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_003_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_003_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_003_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_003_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_003_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_003_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_003_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_003_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_003_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_003_SetOverlayTexture, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_003_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_003_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_003_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_003_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_003_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_003_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_003_ShowDashboard, 1, FALSE, FALSE);
    for (i = 0; i < 46; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_003_FnTable(void *object)
{
    winIVROverlay_IVROverlay_003 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_004.h"

typedef struct __winIVROverlay_IVROverlay_004 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_004;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_PollNextOverlayEvent, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayTexture, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_004_ShowDashboard, 8)

VROverlayError __thiscall winIVROverlay_IVROverlay_004_FindOverlay(winIVROverlay_IVROverlay_004 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_CreateOverlay(winIVROverlay_IVROverlay_004 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_DestroyOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetHighQualityOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_004_GetHighQualityOverlay(winIVROverlay_IVROverlay_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_004_GetOverlayKey(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, VROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_004_GetOverlayName(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, VROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayImageData(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_004 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayFlag(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayFlag(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayColor(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayColor(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayAlpha(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayAlpha(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayGamma(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayGamma(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float *pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTextureBounds(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayTextureBounds(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayTransformType(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_ShowOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_HideOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_004_IsOverlayVisible(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_004_PollNextOverlayEvent(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayInputMethod(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayInputMethod(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetOverlayMouseScale(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayMouseScale(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_004_ComputeOverlayIntersection(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayTexture(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_005_set_overlay_texture(cppIVROverlay_IVROverlay_004_SetOverlayTexture, _this->linux_side, ulOverlayHandle, eTextureType, pTexture, 4);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_ClearOverlayTexture(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayRaw(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetOverlayFromFile(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_CreateDashboardOverlay(winIVROverlay_IVROverlay_004 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_004_IsDashboardVisible(winIVROverlay_IVROverlay_004 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_004_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_004 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_004_ShowDashboard(winIVROverlay_IVROverlay_004 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_004_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

extern vtable_ptr winIVROverlay_IVROverlay_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_004,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_004_ShowDashboard)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_004 *create_winIVROverlay_IVROverlay_004(void *linux_side)
{
    winIVROverlay_IVROverlay_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_004));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_004_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_004(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_004 *create_winIVROverlay_IVROverlay_004_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_004));
    struct thunk *thunks = alloc_thunks(48);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 48 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_004_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_004_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_004_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_004_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_004_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_004_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_004_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_004_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_004_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_004_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_004_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_004_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_004_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_004_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_004_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_004_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_004_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_004_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_004_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_004_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_004_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_004_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_004_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_004_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_004_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_004_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_004_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_004_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_004_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_004_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_004_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_004_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_004_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_004_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_004_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_004_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_004_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_004_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_004_SetOverlayTexture, 3, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_004_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_004_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_004_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_004_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_004_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_004_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_004_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_004_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_004_ShowDashboard, 1, FALSE, FALSE);
    for (i = 0; i < 48; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_004_FnTable(void *object)
{
    winIVROverlay_IVROverlay_004 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_005.h"

typedef struct __winIVROverlay_IVROverlay_005 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_005;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayGamma, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_PollNextOverlayEvent, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_IsFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayTexture, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_ShowKeyboard, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_005_HideKeyboard, 4)

VROverlayError __thiscall winIVROverlay_IVROverlay_005_FindOverlay(winIVROverlay_IVROverlay_005 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_CreateOverlay(winIVROverlay_IVROverlay_005 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_DestroyOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetHighQualityOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_005_GetHighQualityOverlay(winIVROverlay_IVROverlay_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_005_GetOverlayKey(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, VROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_005_GetOverlayName(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, VROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayImageData(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_005 *_this, VROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayFlag(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayFlag(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayColor(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayColor(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayAlpha(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayAlpha(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayGamma(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayGamma(_this->linux_side, ulOverlayHandle, fGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayGamma(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float *pfGamma)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayGamma(_this->linux_side, ulOverlayHandle, pfGamma);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTextureBounds(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayTextureBounds(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayTransformType(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_ShowOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_HideOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_005_IsOverlayVisible(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_005_PollNextOverlayEvent(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayInputMethod(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayInputMethod(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetOverlayMouseScale(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayMouseScale(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_005_ComputeOverlayIntersection(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_005_IsFocusOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_IsFocusOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayTexture(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_005_set_overlay_texture(cppIVROverlay_IVROverlay_005_SetOverlayTexture, _this->linux_side, ulOverlayHandle, eTextureType, pTexture, 5);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_ClearOverlayTexture(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayRaw(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetOverlayFromFile(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_CreateDashboardOverlay(winIVROverlay_IVROverlay_005 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_005_IsDashboardVisible(winIVROverlay_IVROverlay_005 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_005_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_005 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_005_ShowDashboard(winIVROverlay_IVROverlay_005 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_005_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

VROverlayError __thiscall winIVROverlay_IVROverlay_005_ShowKeyboard(winIVROverlay_IVROverlay_005 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode);
}

uint32_t __thiscall winIVROverlay_IVROverlay_005_GetKeyboardText(winIVROverlay_IVROverlay_005 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_005_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_005_HideKeyboard(winIVROverlay_IVROverlay_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_005_HideKeyboard(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_005,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayGamma)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_IsFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_005_HideKeyboard)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_005 *create_winIVROverlay_IVROverlay_005(void *linux_side)
{
    winIVROverlay_IVROverlay_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_005));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_005_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_005(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_005 *create_winIVROverlay_IVROverlay_005_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_005));
    struct thunk *thunks = alloc_thunks(52);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 52 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_005_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_005_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_005_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_005_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_005_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_005_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_005_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_005_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_005_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_005_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_005_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_005_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_005_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_005_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_005_SetOverlayGamma, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_005_GetOverlayGamma, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_005_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_005_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_005_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_005_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_005_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_005_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_005_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_005_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_005_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_005_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_005_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_005_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_005_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_005_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_005_IsFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_005_SetOverlayTexture, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_005_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_005_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_005_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_005_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_005_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_005_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_005_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_005_ShowKeyboard, 6, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_005_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_005_HideKeyboard, 0, FALSE, FALSE);
    for (i = 0; i < 52; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_005_FnTable(void *object)
{
    winIVROverlay_IVROverlay_005 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_007.h"

typedef struct __winIVROverlay_IVROverlay_007 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_007;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_PollNextOverlayEvent, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_007_HideKeyboard, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_FindOverlay(winIVROverlay_IVROverlay_007 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_CreateOverlay(winIVROverlay_IVROverlay_007 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_DestroyOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetHighQualityOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_007_GetHighQualityOverlay(winIVROverlay_IVROverlay_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_007_GetOverlayKey(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_007_GetOverlayName(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayImageData(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_007 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayFlag(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayFlag(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayColor(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayColor(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayAlpha(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayAlpha(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTextureBounds(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTextureBounds(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTransformType(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_ShowOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_HideOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_007_IsOverlayVisible(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_007_PollNextOverlayEvent(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayInputMethod(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayInputMethod(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetOverlayMouseScale(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayMouseScale(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_007_ComputeOverlayIntersection(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_007_IsHoverTargetOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_007_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayNeighbor(winIVROverlay_IVROverlay_007 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_007 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayTexture(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_007_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 7);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_ClearOverlayTexture(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayRaw(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetOverlayFromFile(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_CreateDashboardOverlay(winIVROverlay_IVROverlay_007 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_007_IsDashboardVisible(winIVROverlay_IVROverlay_007 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_007_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_007_ShowDashboard(winIVROverlay_IVROverlay_007 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_007_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_ShowKeyboard(winIVROverlay_IVROverlay_007 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_007_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_007 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_007_GetKeyboardText(winIVROverlay_IVROverlay_007 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_007_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_007_HideKeyboard(winIVROverlay_IVROverlay_007 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_007_HideKeyboard(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_007,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_007_HideKeyboard)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_007 *create_winIVROverlay_IVROverlay_007(void *linux_side)
{
    winIVROverlay_IVROverlay_007 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_007));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_007_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_007(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_007 *create_winIVROverlay_IVROverlay_007_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_007 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_007));
    struct thunk *thunks = alloc_thunks(57);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 57 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_007_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_007_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_007_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_007_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_007_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_007_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_007_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_007_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_007_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_007_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_007_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_007_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_007_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_007_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_007_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_007_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_007_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_007_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_007_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_007_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_007_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_007_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_007_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_007_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_007_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_007_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_007_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_007_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_007_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_007_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_007_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_007_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_007_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_007_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_007_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_007_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_007_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_007_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_007_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_007_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_007_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_007_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_007_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_007_HideKeyboard, 0, FALSE, FALSE);
    for (i = 0; i < 57; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_007_FnTable(void *object)
{
    winIVROverlay_IVROverlay_007 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_008.h"

typedef struct __winIVROverlay_IVROverlay_008 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_008;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_PollNextOverlayEvent, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay, 28)

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_FindOverlay(winIVROverlay_IVROverlay_008 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_CreateOverlay(winIVROverlay_IVROverlay_008 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_DestroyOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetHighQualityOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_008_GetHighQualityOverlay(winIVROverlay_IVROverlay_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_008_GetOverlayKey(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_008_GetOverlayName(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayImageData(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_008 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayFlag(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayFlag(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayColor(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayColor(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayAlpha(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayAlpha(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTextureBounds(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTextureBounds(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTransformType(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_ShowOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_HideOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_008_IsOverlayVisible(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_008_PollNextOverlayEvent(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayInputMethod(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayInputMethod(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetOverlayMouseScale(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayMouseScale(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_008_ComputeOverlayIntersection(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_008_IsHoverTargetOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_008_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayNeighbor(winIVROverlay_IVROverlay_008 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_008 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayTexture(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_008_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 8);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_ClearOverlayTexture(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayRaw(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetOverlayFromFile(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_CreateDashboardOverlay(winIVROverlay_IVROverlay_008 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_008_IsDashboardVisible(winIVROverlay_IVROverlay_008 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_008_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_008_ShowDashboard(winIVROverlay_IVROverlay_008 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_008_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_ShowKeyboard(winIVROverlay_IVROverlay_008 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_008_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_008_GetKeyboardText(winIVROverlay_IVROverlay_008 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_008_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_008_HideKeyboard(winIVROverlay_IVROverlay_008 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_008_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_008 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_008 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

extern vtable_ptr winIVROverlay_IVROverlay_008_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_008,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_008 *create_winIVROverlay_IVROverlay_008(void *linux_side)
{
    winIVROverlay_IVROverlay_008 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_008));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_008_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_008(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_008 *create_winIVROverlay_IVROverlay_008_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_008 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_008));
    struct thunk *thunks = alloc_thunks(60);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 60 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_008_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_008_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_008_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_008_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_008_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_008_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_008_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_008_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_008_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_008_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_008_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_008_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_008_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_008_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_008_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_008_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_008_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_008_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_008_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_008_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_008_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_008_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_008_PollNextOverlayEvent, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_008_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_008_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_008_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_008_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_008_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_008_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_008_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_008_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_008_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_008_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_008_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_008_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_008_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_008_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_008_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_008_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_008_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_008_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_008_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_008_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_008_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    for (i = 0; i < 60; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_008_FnTable(void *object)
{
    winIVROverlay_IVROverlay_008 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_010.h"

typedef struct __winIVROverlay_IVROverlay_010 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_010;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay, 28)

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_FindOverlay(winIVROverlay_IVROverlay_010 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_CreateOverlay(winIVROverlay_IVROverlay_010 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_DestroyOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetHighQualityOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_010_GetHighQualityOverlay(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_010_GetOverlayKey(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_010_GetOverlayName(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayImageData(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_010 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayFlag(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayFlag(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayColor(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayColor(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayAlpha(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayAlpha(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTextureBounds(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTextureBounds(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTransformType(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_ShowOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_HideOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_010_IsOverlayVisible(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_010_PollNextOverlayEvent(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_0918 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayInputMethod(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayInputMethod(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetOverlayMouseScale(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayMouseScale(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_010_ComputeOverlayIntersection(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_010_IsHoverTargetOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_010_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayNeighbor(winIVROverlay_IVROverlay_010 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_010 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayTexture(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_010_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 10);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_ClearOverlayTexture(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayRaw(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetOverlayFromFile(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_CreateDashboardOverlay(winIVROverlay_IVROverlay_010 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_010_IsDashboardVisible(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_010_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_010_ShowDashboard(winIVROverlay_IVROverlay_010 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_010_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_ShowKeyboard(winIVROverlay_IVROverlay_010 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_010_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_010_GetKeyboardText(winIVROverlay_IVROverlay_010 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_010_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_010_HideKeyboard(winIVROverlay_IVROverlay_010 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_010_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_010 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_010 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

extern vtable_ptr winIVROverlay_IVROverlay_010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_010,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_010 *create_winIVROverlay_IVROverlay_010(void *linux_side)
{
    winIVROverlay_IVROverlay_010 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_010));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_010_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_010(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_010 *create_winIVROverlay_IVROverlay_010_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_010 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_010));
    struct thunk *thunks = alloc_thunks(63);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 63 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_010_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_010_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_010_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_010_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_010_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_010_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_010_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_010_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_010_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_010_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_010_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_010_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_010_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_010_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_010_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_010_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_010_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_010_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_010_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_010_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_010_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_010_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_010_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_010_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_010_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_010_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_010_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_010_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_010_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_010_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_010_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_010_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_010_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_010_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_010_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_010_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_010_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_010_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_010_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_010_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_010_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_010_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_010_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_010_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_010_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_010_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_010_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_010_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_010_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_010_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_010_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_010_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_010_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_010_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_010_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_010_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_010_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_010_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_010_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_010_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_010_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    for (i = 0; i < 63; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_010_FnTable(void *object)
{
    winIVROverlay_IVROverlay_010 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_011.h"

typedef struct __winIVROverlay_IVROverlay_011 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_011;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetOverlayTexture, 40)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay, 28)

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_FindOverlay(winIVROverlay_IVROverlay_011 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_CreateOverlay(winIVROverlay_IVROverlay_011 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_DestroyOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetHighQualityOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_011_GetHighQualityOverlay(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_011_GetOverlayKey(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_011_GetOverlayName(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayImageData(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_011 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayRenderingPid(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_011_GetOverlayRenderingPid(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayFlag(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayFlag(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayColor(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayColor(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayAlpha(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayAlpha(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTextureBounds(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTextureBounds(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTransformType(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ShowOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_HideOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_011_IsOverlayVisible(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_011_PollNextOverlayEvent(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_0920 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayInputMethod(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayInputMethod(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayMouseScale(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayMouseScale(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_011_ComputeOverlayIntersection(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_011_IsHoverTargetOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_011_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayNeighbor(winIVROverlay_IVROverlay_011 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_011 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayTexture(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_011_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 11);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ClearOverlayTexture(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayRaw(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetOverlayFromFile(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetOverlayTexture(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, EGraphicsAPIConvention *pAPI, EColorSpace *pColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPI, pColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_CreateDashboardOverlay(winIVROverlay_IVROverlay_011 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_011_IsDashboardVisible(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_011_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_011_ShowDashboard(winIVROverlay_IVROverlay_011 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_011_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ShowKeyboard(winIVROverlay_IVROverlay_011 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_011_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_011_GetKeyboardText(winIVROverlay_IVROverlay_011 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_011_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_011_HideKeyboard(winIVROverlay_IVROverlay_011 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_011_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_011 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_011 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

extern vtable_ptr winIVROverlay_IVROverlay_011_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_011,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_011 *create_winIVROverlay_IVROverlay_011(void *linux_side)
{
    winIVROverlay_IVROverlay_011 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_011));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_011_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_011(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_011 *create_winIVROverlay_IVROverlay_011_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_011 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_011));
    struct thunk *thunks = alloc_thunks(67);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 67 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_011_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_011_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_011_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_011_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_011_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_011_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_011_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_011_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_011_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_011_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_011_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_011_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_011_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_011_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_011_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_011_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_011_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_011_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_011_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_011_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_011_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_011_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_011_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_011_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_011_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_011_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_011_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_011_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_011_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_011_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_011_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_011_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_011_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_011_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_011_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_011_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_011_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_011_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_011_GetOverlayTexture, 8, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_011_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_011_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_011_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_011_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_011_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_011_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_011_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_011_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    for (i = 0; i < 67; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_011_FnTable(void *object)
{
    winIVROverlay_IVROverlay_011 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_012.h"

typedef struct __winIVROverlay_IVROverlay_012 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_012;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTexture, 40)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay, 28)

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_FindOverlay(winIVROverlay_IVROverlay_012 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_CreateOverlay(winIVROverlay_IVROverlay_012 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_DestroyOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetHighQualityOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_012_GetHighQualityOverlay(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_012_GetOverlayKey(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_012_GetOverlayName(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayImageData(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_012 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayRenderingPid(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_012_GetOverlayRenderingPid(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayFlag(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayFlag(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayColor(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayColor(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayAlpha(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayAlpha(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTextureBounds(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTextureBounds(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTransformType(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ShowOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_HideOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_012_IsOverlayVisible(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_012_PollNextOverlayEvent(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_101 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayInputMethod(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayInputMethod(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayMouseScale(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayMouseScale(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_012_ComputeOverlayIntersection(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_012_IsHoverTargetOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_012_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayNeighbor(winIVROverlay_IVROverlay_012 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_012 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayTexture(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_012_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 12);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ClearOverlayTexture(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayRaw(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetOverlayFromFile(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTexture(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, EGraphicsAPIConvention *pAPI, EColorSpace *pColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPI, pColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetOverlayTextureSize(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_CreateDashboardOverlay(winIVROverlay_IVROverlay_012 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_012_IsDashboardVisible(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_012_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_012_ShowDashboard(winIVROverlay_IVROverlay_012 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_012_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ShowKeyboard(winIVROverlay_IVROverlay_012 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_012_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_012_GetKeyboardText(winIVROverlay_IVROverlay_012 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_012_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_012_HideKeyboard(winIVROverlay_IVROverlay_012 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_012_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_012 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_012 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

extern vtable_ptr winIVROverlay_IVROverlay_012_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_012,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_012 *create_winIVROverlay_IVROverlay_012(void *linux_side)
{
    winIVROverlay_IVROverlay_012 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_012));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_012_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_012(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_012 *create_winIVROverlay_IVROverlay_012_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_012 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_012));
    struct thunk *thunks = alloc_thunks(68);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 68 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_012_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_012_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_012_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_012_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_012_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_012_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_012_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_012_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_012_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_012_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_012_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_012_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_012_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_012_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_012_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_012_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_012_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_012_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_012_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_012_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_012_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_012_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_012_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_012_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_012_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_012_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_012_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_012_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_012_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_012_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_012_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_012_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_012_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_012_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_012_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_012_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_012_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_012_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_012_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_012_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_012_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_012_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_012_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_012_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_012_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_012_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_012_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_012_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_012_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_012_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_012_GetOverlayTexture, 8, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_012_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_012_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_012_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_012_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_012_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_012_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_012_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_012_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_012_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_012_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_012_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_012_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_012_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_012_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_012_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    for (i = 0; i < 68; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_012_FnTable(void *object)
{
    winIVROverlay_IVROverlay_012 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_013.h"

typedef struct __winIVROverlay_IVROverlay_013 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_013;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTexture, 40)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_013_SetOverlayIntersectionMask, 24)

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_FindOverlay(winIVROverlay_IVROverlay_013 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_CreateOverlay(winIVROverlay_IVROverlay_013 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_DestroyOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetHighQualityOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_013_GetHighQualityOverlay(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_013_GetOverlayKey(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_013_GetOverlayName(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayImageData(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_013 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayRenderingPid(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_013_GetOverlayRenderingPid(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayFlag(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayFlag(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayColor(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayColor(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayAlpha(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayAlpha(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTexelAspect(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTexelAspect(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlaySortOrder(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlaySortOrder(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTextureBounds(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTextureBounds(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTransformType(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ShowOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_HideOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_013_IsOverlayVisible(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_013_PollNextOverlayEvent(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_104 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayInputMethod(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayInputMethod(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayMouseScale(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayMouseScale(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_013_ComputeOverlayIntersection(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_013_IsHoverTargetOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_013_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayNeighbor(winIVROverlay_IVROverlay_013 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_013 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayTexture(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_013_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 13);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ClearOverlayTexture(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayRaw(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayFromFile(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTexture(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, EGraphicsAPIConvention *pAPI, EColorSpace *pColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPI, pColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetOverlayTextureSize(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_CreateDashboardOverlay(winIVROverlay_IVROverlay_013 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_013_IsDashboardVisible(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_013_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_013_ShowDashboard(winIVROverlay_IVROverlay_013 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_013_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ShowKeyboard(winIVROverlay_IVROverlay_013 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_013_GetKeyboardText(winIVROverlay_IVROverlay_013 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_013_HideKeyboard(winIVROverlay_IVROverlay_013 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_013_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_013 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_013_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_013 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_013_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

extern vtable_ptr winIVROverlay_IVROverlay_013_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_013,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_013_SetOverlayIntersectionMask)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_013 *create_winIVROverlay_IVROverlay_013(void *linux_side)
{
    winIVROverlay_IVROverlay_013 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_013));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_013_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_013(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_013 *create_winIVROverlay_IVROverlay_013_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_013 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_013));
    struct thunk *thunks = alloc_thunks(73);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 73 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_013_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_013_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_013_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_013_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_013_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_013_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_013_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_013_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_013_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_013_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_013_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_013_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_013_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_013_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_013_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_013_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_013_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_013_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_013_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_013_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_013_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_013_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_013_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_013_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_013_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_013_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_013_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_013_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_013_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_013_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_013_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_013_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_013_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_013_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_013_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_013_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_013_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_013_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_013_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_013_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_013_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_013_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_013_GetOverlayTexture, 8, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_013_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_013_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_013_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_013_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_013_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_013_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_013_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_013_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_013_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_013_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    for (i = 0; i < 73; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_013_FnTable(void *object)
{
    winIVROverlay_IVROverlay_013 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_014.h"

typedef struct __winIVROverlay_IVROverlay_014 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_014;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_014_ShowMessageOverlay, 28)

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_FindOverlay(winIVROverlay_IVROverlay_014 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_CreateOverlay(winIVROverlay_IVROverlay_014 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_DestroyOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetHighQualityOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_014_GetHighQualityOverlay(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_014_GetOverlayKey(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_014_GetOverlayName(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayImageData(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_014 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayRenderingPid(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_014_GetOverlayRenderingPid(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayFlag(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayFlag(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayColor(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayColor(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayAlpha(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayAlpha(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTexelAspect(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTexelAspect(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlaySortOrder(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlaySortOrder(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTextureBounds(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTextureBounds(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTransformType(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ShowOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_HideOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_014_IsOverlayVisible(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_014_PollNextOverlayEvent(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_106 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayInputMethod(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayInputMethod(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayMouseScale(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayMouseScale(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_014_ComputeOverlayIntersection(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_014_IsHoverTargetOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_014_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayNeighbor(winIVROverlay_IVROverlay_014 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_014 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayTexture(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_014_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 14);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ClearOverlayTexture(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayRaw(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayFromFile(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTexture(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayTextureSize(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_CreateDashboardOverlay(winIVROverlay_IVROverlay_014 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_014_IsDashboardVisible(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_014_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_014_ShowDashboard(winIVROverlay_IVROverlay_014 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_014_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ShowKeyboard(winIVROverlay_IVROverlay_014 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_014_GetKeyboardText(winIVROverlay_IVROverlay_014 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_014_HideKeyboard(winIVROverlay_IVROverlay_014 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_014_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_014 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_014_GetOverlayFlags(winIVROverlay_IVROverlay_014 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_014_ShowMessageOverlay(winIVROverlay_IVROverlay_014 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_014_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

extern vtable_ptr winIVROverlay_IVROverlay_014_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_014,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_014_ShowMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_014 *create_winIVROverlay_IVROverlay_014(void *linux_side)
{
    winIVROverlay_IVROverlay_014 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_014));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_014_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_014(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_014 *create_winIVROverlay_IVROverlay_014_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_014 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_014));
    struct thunk *thunks = alloc_thunks(75);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 75 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_014_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_014_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_014_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_014_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_014_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_014_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_014_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_014_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_014_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_014_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_014_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_014_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_014_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_014_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_014_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_014_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_014_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_014_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_014_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_014_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_014_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_014_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_014_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_014_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_014_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_014_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_014_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_014_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_014_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_014_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_014_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_014_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_014_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_014_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_014_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_014_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_014_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_014_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_014_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_014_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_014_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_014_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_014_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_014_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_014_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_014_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_014_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_014_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_014_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_014_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_014_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_014_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_014_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_014_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_014_ShowMessageOverlay, 6, FALSE, FALSE);
    for (i = 0; i < 75; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_014_FnTable(void *object)
{
    winIVROverlay_IVROverlay_014 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_016.h"

typedef struct __winIVROverlay_IVROverlay_016 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_016;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayRenderModel, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayRenderModel, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_016_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_FindOverlay(winIVROverlay_IVROverlay_016 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_CreateOverlay(winIVROverlay_IVROverlay_016 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_DestroyOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetHighQualityOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_016_GetHighQualityOverlay(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_016_GetOverlayKey(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_016_GetOverlayName(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayName(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayImageData(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_016 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayRenderingPid(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_016_GetOverlayRenderingPid(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayFlag(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayFlag(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayColor(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayColor(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayAlpha(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayAlpha(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTexelAspect(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTexelAspect(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlaySortOrder(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlaySortOrder(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTextureBounds(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTextureBounds(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

uint32_t __thiscall winIVROverlay_IVROverlay_016_GetOverlayRenderModel(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, HmdColor_t *pColor, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayRenderModel(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchRenderModel, HmdColor_t *pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformType(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ShowOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_HideOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_016_IsOverlayVisible(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_016_PollNextOverlayEvent(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1010 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayInputMethod(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayInputMethod(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayMouseScale(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayMouseScale(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_016_ComputeOverlayIntersection(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_016_IsHoverTargetOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_016_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayNeighbor(winIVROverlay_IVROverlay_016 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_016 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayTexture(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_016_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 16);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ClearOverlayTexture(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayRaw(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayFromFile(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTexture(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayTextureSize(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_CreateDashboardOverlay(winIVROverlay_IVROverlay_016 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_016_IsDashboardVisible(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_016_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_016_ShowDashboard(winIVROverlay_IVROverlay_016 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ShowKeyboard(winIVROverlay_IVROverlay_016 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_016_GetKeyboardText(winIVROverlay_IVROverlay_016 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_016_HideKeyboard(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_016 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_016_GetOverlayFlags(winIVROverlay_IVROverlay_016 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_016_ShowMessageOverlay(winIVROverlay_IVROverlay_016 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_016_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_016_CloseMessageOverlay(winIVROverlay_IVROverlay_016 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_016_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_016_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_016,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_016_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_016 *create_winIVROverlay_IVROverlay_016(void *linux_side)
{
    winIVROverlay_IVROverlay_016 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_016));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_016_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_016(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_016 *create_winIVROverlay_IVROverlay_016_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_016 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_016));
    struct thunk *thunks = alloc_thunks(81);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 81 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_016_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_016_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_016_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_016_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_016_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_016_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_016_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_016_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_016_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_016_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_016_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_016_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_016_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_016_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_016_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_016_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_016_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_016_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_016_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_016_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_016_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_016_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_016_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_016_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_016_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_016_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_016_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_016_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_016_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_016_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_016_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_016_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_016_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_016_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_016_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_016_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_016_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_016_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_016_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_016_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_016_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_016_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_016_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_016_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_016_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_016_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_016_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_016_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_016_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_016_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_016_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_016_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_016_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_016_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_016_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_016_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_016_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_016_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_016_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_016_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_016_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_016_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_016_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_016_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_016_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_016_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_016_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_016_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_016_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_016_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_016_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_016_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_016_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_016_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_016_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_016_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_016_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_016_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_016_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 81; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_016_FnTable(void *object)
{
    winIVROverlay_IVROverlay_016 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_017.h"

typedef struct __winIVROverlay_IVROverlay_017 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_017;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayRenderModel, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayRenderModel, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_017_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_FindOverlay(winIVROverlay_IVROverlay_017 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_CreateOverlay(winIVROverlay_IVROverlay_017 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_DestroyOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetHighQualityOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_017_GetHighQualityOverlay(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_017_GetOverlayKey(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_017_GetOverlayName(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayName(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayImageData(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_017 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayRenderingPid(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_017_GetOverlayRenderingPid(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayFlag(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayFlag(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayColor(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayColor(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayAlpha(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayAlpha(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTexelAspect(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTexelAspect(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlaySortOrder(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlaySortOrder(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTextureBounds(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTextureBounds(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

uint32_t __thiscall winIVROverlay_IVROverlay_017_GetOverlayRenderModel(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, HmdColor_t *pColor, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayRenderModel(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchRenderModel, HmdColor_t *pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformType(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ShowOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_HideOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_017_IsOverlayVisible(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_017_PollNextOverlayEvent(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1011 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayInputMethod(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayInputMethod(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayMouseScale(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayMouseScale(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_017_ComputeOverlayIntersection(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse(_this->linux_side, ulOverlayHandle, unControllerDeviceIndex);
}

bool __thiscall winIVROverlay_IVROverlay_017_IsHoverTargetOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_017_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayNeighbor(winIVROverlay_IVROverlay_017 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_017 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *vCenter, float fRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, vCenter, fRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float *pfRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, pfRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayTexture(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_017_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 17);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ClearOverlayTexture(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayRaw(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayFromFile(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTexture(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayTextureSize(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_CreateDashboardOverlay(winIVROverlay_IVROverlay_017 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_017_IsDashboardVisible(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_017_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_017_ShowDashboard(winIVROverlay_IVROverlay_017 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ShowKeyboard(winIVROverlay_IVROverlay_017 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_017_GetKeyboardText(winIVROverlay_IVROverlay_017 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_017_HideKeyboard(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_017 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_017_GetOverlayFlags(winIVROverlay_IVROverlay_017 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_017_ShowMessageOverlay(winIVROverlay_IVROverlay_017 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_017_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_017_CloseMessageOverlay(winIVROverlay_IVROverlay_017 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_017_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_017_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_017,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_017_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_017 *create_winIVROverlay_IVROverlay_017(void *linux_side)
{
    winIVROverlay_IVROverlay_017 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_017));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_017_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_017(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_017 *create_winIVROverlay_IVROverlay_017_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_017 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_017));
    struct thunk *thunks = alloc_thunks(83);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 83 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_017_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_017_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_017_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_017_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_017_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_017_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_017_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_017_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_017_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_017_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_017_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_017_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_017_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_017_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_017_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_017_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_017_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_017_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_017_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_017_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_017_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_017_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_017_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_017_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_017_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_017_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_017_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_017_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_017_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_017_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_017_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_017_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_017_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_017_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_017_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_017_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_017_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_017_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_017_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_017_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_017_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_017_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_017_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_017_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_017_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_017_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_017_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_017_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_017_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_017_HandleControllerOverlayInteractionAsMouse, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_017_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_017_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_017_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_017_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_017_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_017_SetOverlayDualAnalogTransform, 4, TRUE, TRUE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_017_GetOverlayDualAnalogTransform, 4, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_017_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_017_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_017_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_017_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_017_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_017_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_017_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_017_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_017_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_017_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_017_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_017_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_017_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_017_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_017_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_017_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_017_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_017_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_017_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_017_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_017_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_017_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[81], r, winIVROverlay_IVROverlay_017_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[82], r, winIVROverlay_IVROverlay_017_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 83; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_017_FnTable(void *object)
{
    winIVROverlay_IVROverlay_017 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_018.h"

typedef struct __winIVROverlay_IVROverlay_018 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_018;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayRenderModel, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayRenderModel, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_018_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_FindOverlay(winIVROverlay_IVROverlay_018 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_CreateOverlay(winIVROverlay_IVROverlay_018 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_DestroyOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetHighQualityOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_018_GetHighQualityOverlay(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_018_GetOverlayKey(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_018_GetOverlayName(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayName(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayImageData(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_018 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayRenderingPid(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_018_GetOverlayRenderingPid(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayFlag(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayFlag(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayColor(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayColor(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayAlpha(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayAlpha(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTexelAspect(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTexelAspect(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlaySortOrder(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlaySortOrder(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTextureBounds(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTextureBounds(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

uint32_t __thiscall winIVROverlay_IVROverlay_018_GetOverlayRenderModel(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, HmdColor_t *pColor, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayRenderModel(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchRenderModel, HmdColor_t *pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformType(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ShowOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_HideOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_018_IsOverlayVisible(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_018_PollNextOverlayEvent(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1017 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayInputMethod(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayInputMethod(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayMouseScale(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayMouseScale(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_018_ComputeOverlayIntersection(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_018_IsHoverTargetOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_018_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayNeighbor(winIVROverlay_IVROverlay_018 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_018 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *vCenter, float fRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, vCenter, fRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float *pfRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, pfRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayTexture(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_018_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 18);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ClearOverlayTexture(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayRaw(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayFromFile(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTexture(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayTextureSize(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_CreateDashboardOverlay(winIVROverlay_IVROverlay_018 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_018_IsDashboardVisible(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_018_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_018_ShowDashboard(winIVROverlay_IVROverlay_018 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ShowKeyboard(winIVROverlay_IVROverlay_018 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_018_GetKeyboardText(winIVROverlay_IVROverlay_018 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_018_HideKeyboard(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_018 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_018_GetOverlayFlags(winIVROverlay_IVROverlay_018 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_018_ShowMessageOverlay(winIVROverlay_IVROverlay_018 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_018_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_018_CloseMessageOverlay(winIVROverlay_IVROverlay_018 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_018_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_018_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_018,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_018_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_018 *create_winIVROverlay_IVROverlay_018(void *linux_side)
{
    winIVROverlay_IVROverlay_018 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_018));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_018_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_018(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_018 *create_winIVROverlay_IVROverlay_018_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_018 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_018));
    struct thunk *thunks = alloc_thunks(82);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 82 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_018_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_018_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_018_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_018_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_018_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_018_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_018_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_018_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_018_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_018_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_018_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_018_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_018_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_018_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_018_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_018_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_018_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_018_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_018_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_018_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_018_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_018_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_018_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_018_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_018_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_018_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_018_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_018_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_018_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_018_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_018_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_018_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_018_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_018_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_018_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_018_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_018_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_018_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_018_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_018_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_018_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform, 4, TRUE, TRUE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform, 4, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_018_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_018_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_018_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_018_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_018_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_018_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_018_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_018_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_018_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_018_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_018_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_018_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_018_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_018_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_018_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_018_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_018_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[81], r, winIVROverlay_IVROverlay_018_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 82; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_018_FnTable(void *object)
{
    winIVROverlay_IVROverlay_018 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_019.h"

typedef struct __winIVROverlay_IVROverlay_019 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_019;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetHighQualityOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetHighQualityOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayRenderModel, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayRenderModel, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_019_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_FindOverlay(winIVROverlay_IVROverlay_019 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_CreateOverlay(winIVROverlay_IVROverlay_019 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_DestroyOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetHighQualityOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetHighQualityOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_019_GetHighQualityOverlay(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetHighQualityOverlay(_this->linux_side);
}

uint32_t __thiscall winIVROverlay_IVROverlay_019_GetOverlayKey(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_019_GetOverlayName(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayName(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayImageData(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_019 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayRenderingPid(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_019_GetOverlayRenderingPid(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayFlag(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayFlag(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayColor(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayColor(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayAlpha(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayAlpha(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTexelAspect(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTexelAspect(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlaySortOrder(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlaySortOrder(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTextureBounds(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTextureBounds(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

uint32_t __thiscall winIVROverlay_IVROverlay_019_GetOverlayRenderModel(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, HmdColor_t *pColor, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayRenderModel(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchRenderModel, HmdColor_t *pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformType(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ShowOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_HideOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_019_IsOverlayVisible(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_019_PollNextOverlayEvent(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1610 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayInputMethod(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayInputMethod(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayMouseScale(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayMouseScale(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_019_ComputeOverlayIntersection(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_019_IsHoverTargetOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_019_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayNeighbor(winIVROverlay_IVROverlay_019 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_019 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float fRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, fRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float *pfRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, pfRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayTexture(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_019_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 19);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ClearOverlayTexture(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayRaw(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayFromFile(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTexture(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayTextureSize(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_CreateDashboardOverlay(winIVROverlay_IVROverlay_019 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_019_IsDashboardVisible(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_019_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_019_ShowDashboard(winIVROverlay_IVROverlay_019 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ShowKeyboard(winIVROverlay_IVROverlay_019 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_019_GetKeyboardText(winIVROverlay_IVROverlay_019 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_019_HideKeyboard(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_019 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_019_GetOverlayFlags(winIVROverlay_IVROverlay_019 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_019_ShowMessageOverlay(winIVROverlay_IVROverlay_019 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_019_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_019_CloseMessageOverlay(winIVROverlay_IVROverlay_019 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_019_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_019_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_019,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetHighQualityOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_019_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_019 *create_winIVROverlay_IVROverlay_019(void *linux_side)
{
    winIVROverlay_IVROverlay_019 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_019));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_019_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_019(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_019 *create_winIVROverlay_IVROverlay_019_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_019 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_019));
    struct thunk *thunks = alloc_thunks(82);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 82 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_019_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_019_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_019_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_019_SetHighQualityOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_019_GetHighQualityOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_019_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_019_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_019_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_019_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_019_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_019_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_019_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_019_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_019_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_019_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_019_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_019_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_019_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_019_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_019_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_019_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_019_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_019_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_019_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_019_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_019_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_019_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_019_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_019_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_019_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_019_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_019_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_019_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_019_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_019_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_019_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_019_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_019_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_019_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_019_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_019_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_019_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_019_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_019_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_019_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_019_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_019_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_019_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_019_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_019_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_019_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_019_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_019_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_019_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_019_SetOverlayDualAnalogTransform, 4, TRUE, TRUE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_019_GetOverlayDualAnalogTransform, 4, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_019_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_019_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_019_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_019_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_019_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_019_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_019_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_019_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_019_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_019_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_019_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_019_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_019_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_019_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_019_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_019_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_019_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_019_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_019_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_019_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_019_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_019_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_019_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[81], r, winIVROverlay_IVROverlay_019_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 82; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_019_FnTable(void *object)
{
    winIVROverlay_IVROverlay_019 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_020.h"

typedef struct __winIVROverlay_IVROverlay_020 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_020;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayRenderModel, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayRenderModel, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetGamepadFocusOverlay, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetGamepadFocusOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayNeighbor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_020_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_FindOverlay(winIVROverlay_IVROverlay_020 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_CreateOverlay(winIVROverlay_IVROverlay_020 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_DestroyOverlay(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

uint32_t __thiscall winIVROverlay_IVROverlay_020_GetOverlayKey(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_020_GetOverlayName(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayName(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayImageData(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_020 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayRenderingPid(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_020_GetOverlayRenderingPid(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayFlag(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayFlag(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayColor(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayColor(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayAlpha(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayAlpha(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTexelAspect(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTexelAspect(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlaySortOrder(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlaySortOrder(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters(_this->linux_side, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTextureBounds(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTextureBounds(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

uint32_t __thiscall winIVROverlay_IVROverlay_020_GetOverlayRenderModel(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, HmdColor_t *pColor, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayRenderModel(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchRenderModel, HmdColor_t *pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTransformType(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_ShowOverlay(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_HideOverlay(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_020_IsOverlayVisible(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_020_PollNextOverlayEvent(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1715 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayInputMethod(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayInputMethod(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayMouseScale(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayMouseScale(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_020_ComputeOverlayIntersection(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_020_IsHoverTargetOverlay(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

VROverlayHandle_t __thiscall winIVROverlay_IVROverlay_020_GetGamepadFocusOverlay(winIVROverlay_IVROverlay_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetGamepadFocusOverlay(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetGamepadFocusOverlay(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulNewFocusOverlay)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetGamepadFocusOverlay(_this->linux_side, ulNewFocusOverlay);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayNeighbor(winIVROverlay_IVROverlay_020 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayNeighbor(_this->linux_side, eDirection, ulFrom, ulTo);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor(winIVROverlay_IVROverlay_020 *_this, EOverlayDirection eDirection, VROverlayHandle_t ulFrom)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor(_this->linux_side, eDirection, ulFrom);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float fRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, fRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float *pfRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, pfRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayTexture(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_020_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 20);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_ClearOverlayTexture(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayRaw(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayFromFile(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTexture(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayTextureSize(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_CreateDashboardOverlay(winIVROverlay_IVROverlay_020 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_020_IsDashboardVisible(winIVROverlay_IVROverlay_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_020_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_020_ShowDashboard(winIVROverlay_IVROverlay_020 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_020_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_020 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_ShowKeyboard(winIVROverlay_IVROverlay_020 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_020_GetKeyboardText(winIVROverlay_IVROverlay_020 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_020_HideKeyboard(winIVROverlay_IVROverlay_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_020_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_020 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_020_GetOverlayFlags(winIVROverlay_IVROverlay_020 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_020_ShowMessageOverlay(winIVROverlay_IVROverlay_020 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_020_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_020_CloseMessageOverlay(winIVROverlay_IVROverlay_020 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_020_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_020_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_020,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetGamepadFocusOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_020_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_020 *create_winIVROverlay_IVROverlay_020(void *linux_side)
{
    winIVROverlay_IVROverlay_020 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_020));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_020_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_020(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_020 *create_winIVROverlay_IVROverlay_020_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_020 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_020));
    struct thunk *thunks = alloc_thunks(80);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 80 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_020_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_020_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_020_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_020_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_020_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_020_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_020_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_020_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_020_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_020_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_020_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_020_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_020_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_020_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_020_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_020_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_020_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_020_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_020_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_020_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_020_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_020_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_020_SetOverlayAutoCurveDistanceRangeInMeters, 3, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_020_GetOverlayAutoCurveDistanceRangeInMeters, 3, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_020_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_020_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_020_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_020_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_020_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_020_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_020_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_020_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_020_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_020_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_020_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_020_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_020_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_020_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_020_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_020_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_020_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_020_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_020_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_020_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_020_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_020_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_020_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_020_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_020_GetGamepadFocusOverlay, 0, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_020_SetGamepadFocusOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_020_SetOverlayNeighbor, 3, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_020_MoveGamepadFocusToNeighbor, 2, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_020_SetOverlayDualAnalogTransform, 4, TRUE, TRUE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_020_GetOverlayDualAnalogTransform, 4, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_020_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_020_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_020_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_020_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_020_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_020_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_020_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_020_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_020_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_020_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_020_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_020_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_020_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_020_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_020_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_020_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_020_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_020_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_020_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_020_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_020_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_020_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_020_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_020_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 80; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_020_FnTable(void *object)
{
    winIVROverlay_IVROverlay_020 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_021.h"

typedef struct __winIVROverlay_IVROverlay_021 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_021;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayRenderModel, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayRenderModel, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_021_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_FindOverlay(winIVROverlay_IVROverlay_021 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_CreateOverlay(winIVROverlay_IVROverlay_021 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_DestroyOverlay(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

uint32_t __thiscall winIVROverlay_IVROverlay_021_GetOverlayKey(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_021_GetOverlayName(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayName(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayImageData(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_021 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayRenderingPid(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_021_GetOverlayRenderingPid(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayFlag(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayFlag(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayColor(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayColor(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayAlpha(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayAlpha(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTexelAspect(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTexelAspect(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlaySortOrder(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlaySortOrder(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayCurvature(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float fCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayCurvature(_this->linux_side, ulOverlayHandle, fCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayCurvature(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, float *pfCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayCurvature(_this->linux_side, ulOverlayHandle, pfCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTextureBounds(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTextureBounds(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

uint32_t __thiscall winIVROverlay_IVROverlay_021_GetOverlayRenderModel(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, HmdColor_t *pColor, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayRenderModel(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchRenderModel, HmdColor_t *pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTransformType(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_ShowOverlay(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_HideOverlay(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_021_IsOverlayVisible(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_021_PollNextOverlayEvent(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1819 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayInputMethod(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayInputMethod(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayMouseScale(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayMouseScale(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_021_ComputeOverlayIntersection(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_021_IsHoverTargetOverlay(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float fRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, fRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float *pfRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, pfRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayTexture(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_021_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 21);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_ClearOverlayTexture(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayRaw(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayFromFile(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTexture(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayTextureSize(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_CreateDashboardOverlay(winIVROverlay_IVROverlay_021 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_021_IsDashboardVisible(winIVROverlay_IVROverlay_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_021_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_021_ShowDashboard(winIVROverlay_IVROverlay_021 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_021_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_021 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_ShowKeyboard(winIVROverlay_IVROverlay_021 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_021_GetKeyboardText(winIVROverlay_IVROverlay_021 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_021_HideKeyboard(winIVROverlay_IVROverlay_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_021_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_021 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_021_GetOverlayFlags(winIVROverlay_IVROverlay_021 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_021_ShowMessageOverlay(winIVROverlay_IVROverlay_021 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_021_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_021_CloseMessageOverlay(winIVROverlay_IVROverlay_021 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_021_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_021_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_021,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_021_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_021 *create_winIVROverlay_IVROverlay_021(void *linux_side)
{
    winIVROverlay_IVROverlay_021 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_021));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_021_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_021(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_021 *create_winIVROverlay_IVROverlay_021_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_021 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_021));
    struct thunk *thunks = alloc_thunks(76);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 76 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_021_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_021_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_021_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_021_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_021_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_021_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_021_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_021_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_021_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_021_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_021_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_021_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_021_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_021_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_021_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_021_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_021_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_021_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_021_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_021_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_021_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_021_SetOverlayCurvature, 2, TRUE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_021_GetOverlayCurvature, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_021_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_021_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_021_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_021_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_021_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_021_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_021_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_021_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_021_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_021_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_021_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_021_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_021_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_021_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_021_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform, 4, TRUE, TRUE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform, 4, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_021_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_021_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_021_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_021_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_021_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_021_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_021_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_021_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_021_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_021_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_021_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_021_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_021_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_021_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_021_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_021_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_021_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_021_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 76; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_021_FnTable(void *object)
{
    winIVROverlay_IVROverlay_021 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_022.h"

typedef struct __winIVROverlay_IVROverlay_022 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_022;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayRenderModel, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayRenderModel, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayCursor, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_022_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_FindOverlay(winIVROverlay_IVROverlay_022 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_CreateOverlay(winIVROverlay_IVROverlay_022 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_DestroyOverlay(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

uint32_t __thiscall winIVROverlay_IVROverlay_022_GetOverlayKey(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_022_GetOverlayName(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayName(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayImageData(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_022 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayRenderingPid(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_022_GetOverlayRenderingPid(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayFlag(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayFlag(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayFlags(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayColor(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayColor(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayAlpha(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayAlpha(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTexelAspect(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTexelAspect(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlaySortOrder(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlaySortOrder(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayCurvature(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float fCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayCurvature(_this->linux_side, ulOverlayHandle, fCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayCurvature(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float *pfCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayCurvature(_this->linux_side, ulOverlayHandle, pfCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTextureBounds(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTextureBounds(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

uint32_t __thiscall winIVROverlay_IVROverlay_022_GetOverlayRenderModel(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, HmdColor_t *pColor, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayRenderModel(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchRenderModel, HmdColor_t *pColor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayRenderModel(_this->linux_side, ulOverlayHandle, pchRenderModel, pColor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTransformType(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTransformCursor(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulCursorOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayTransformCursor(_this->linux_side, ulCursorOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTransformCursor(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTransformCursor(_this->linux_side, ulOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_ShowOverlay(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_HideOverlay(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_022_IsOverlayVisible(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_022_PollNextOverlayEvent(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1916 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayInputMethod(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayInputMethod(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayMouseScale(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayMouseScale(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_022_ComputeOverlayIntersection(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_022_IsHoverTargetOverlay(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float fRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, fRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float *pfRadius)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform(_this->linux_side, ulOverlay, eWhich, pvCenter, pfRadius);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration(_this->linux_side, ulOverlayHandle, fDurationSeconds, fFrequency, fAmplitude);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayCursor(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulCursorHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayCursor(_this->linux_side, ulOverlayHandle, ulCursorHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvCursor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle, pvCursor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayTexture(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_022_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 22);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_ClearOverlayTexture(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayRaw(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unBytesPerPixel)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unBytesPerPixel);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetOverlayFromFile(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTexture(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetOverlayTextureSize(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_CreateDashboardOverlay(winIVROverlay_IVROverlay_022 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_022_IsDashboardVisible(winIVROverlay_IVROverlay_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_022_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_022_ShowDashboard(winIVROverlay_IVROverlay_022 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_022_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_022_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_022 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_ShowKeyboard(winIVROverlay_IVROverlay_022 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_022_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_022_GetKeyboardText(winIVROverlay_IVROverlay_022 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_022_HideKeyboard(winIVROverlay_IVROverlay_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_022_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_022 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_022 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_022_ShowMessageOverlay(winIVROverlay_IVROverlay_022 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_022_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_022_CloseMessageOverlay(winIVROverlay_IVROverlay_022 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_022_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_022_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_022,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayRenderModel)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_022_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_022 *create_winIVROverlay_IVROverlay_022(void *linux_side)
{
    winIVROverlay_IVROverlay_022 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_022));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_022_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_022(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_022 *create_winIVROverlay_IVROverlay_022_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_022 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_022));
    struct thunk *thunks = alloc_thunks(82);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 82 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_022_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_022_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_022_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_022_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_022_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_022_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_022_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_022_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_022_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_022_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_022_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_022_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_022_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_022_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_022_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_022_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_022_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_022_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_022_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_022_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_022_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_022_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_022_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_022_SetOverlayCurvature, 2, TRUE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_022_GetOverlayCurvature, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_022_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_022_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_022_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_022_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_022_GetOverlayRenderModel, 5, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_022_SetOverlayRenderModel, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_022_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_022_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_022_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_022_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_022_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_022_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_022_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_022_SetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_022_GetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_022_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_022_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_022_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_022_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_022_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_022_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_022_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_022_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_022_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_022_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_022_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_022_SetOverlayDualAnalogTransform, 4, TRUE, TRUE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_022_GetOverlayDualAnalogTransform, 4, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_022_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_022_TriggerLaserMouseHapticVibration, 4, TRUE, TRUE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_022_SetOverlayCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_022_SetOverlayCursorPositionOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_022_ClearOverlayCursorPositionOverride, 1, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_022_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_022_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_022_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_022_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_022_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_022_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_022_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_022_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_022_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_022_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_022_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_022_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_022_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_022_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_022_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_022_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_022_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_022_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_022_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_022_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_022_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[81], r, winIVROverlay_IVROverlay_022_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 82; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_022_FnTable(void *object)
{
    winIVROverlay_IVROverlay_022 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_024.h"

typedef struct __winIVROverlay_IVROverlay_024 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_024;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_TriggerLaserMouseHapticVibration, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayCursor, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayCursorPositionOverride, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_ClearOverlayCursorPositionOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_024_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_FindOverlay(winIVROverlay_IVROverlay_024 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_CreateOverlay(winIVROverlay_IVROverlay_024 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_DestroyOverlay(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

uint32_t __thiscall winIVROverlay_IVROverlay_024_GetOverlayKey(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_024_GetOverlayName(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayName(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayImageData(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_024_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_024 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayRenderingPid(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_024_GetOverlayRenderingPid(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayFlag(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayFlag(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayFlags(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayColor(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayColor(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayAlpha(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayAlpha(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTexelAspect(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTexelAspect(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlaySortOrder(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlaySortOrder(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayCurvature(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float fCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayCurvature(_this->linux_side, ulOverlayHandle, fCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayCurvature(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float *pfCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayCurvature(_this->linux_side, ulOverlayHandle, pfCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTextureBounds(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTextureBounds(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTransformType(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTransformCursor(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulCursorOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayTransformCursor(_this->linux_side, ulCursorOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTransformCursor(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTransformCursor(_this->linux_side, ulOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_ShowOverlay(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_HideOverlay(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_024_IsOverlayVisible(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_024_PollNextOverlayEvent(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_11415 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayInputMethod(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayInputMethod(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayMouseScale(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayMouseScale(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_024_ComputeOverlayIntersection(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_024_IsHoverTargetOverlay(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_TriggerLaserMouseHapticVibration(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_TriggerLaserMouseHapticVibration(_this->linux_side, ulOverlayHandle, fDurationSeconds, fFrequency, fAmplitude);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayCursor(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulCursorHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayCursor(_this->linux_side, ulOverlayHandle, ulCursorHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayCursorPositionOverride(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvCursor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle, pvCursor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_ClearOverlayCursorPositionOverride(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_ClearOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayTexture(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_024_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 24);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_ClearOverlayTexture(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayRaw(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unBytesPerPixel)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unBytesPerPixel);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetOverlayFromFile(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTexture(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetOverlayTextureSize(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_CreateDashboardOverlay(winIVROverlay_IVROverlay_024 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_024_IsDashboardVisible(winIVROverlay_IVROverlay_024 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_024_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_024_ShowDashboard(winIVROverlay_IVROverlay_024 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_024_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_024_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_024 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_ShowKeyboard(winIVROverlay_IVROverlay_024 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, unFlags, pchDescription, unCharMax, pchExistingText, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_024_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, unFlags, pchDescription, unCharMax, pchExistingText, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_024_GetKeyboardText(winIVROverlay_IVROverlay_024 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_024_HideKeyboard(winIVROverlay_IVROverlay_024 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_024_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_024_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_024 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_024_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_024_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_024 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_024_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_024_ShowMessageOverlay(winIVROverlay_IVROverlay_024 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_024_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_024_CloseMessageOverlay(winIVROverlay_IVROverlay_024 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_024_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_024_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_024,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_TriggerLaserMouseHapticVibration)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_ClearOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_024_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_024 *create_winIVROverlay_IVROverlay_024(void *linux_side)
{
    winIVROverlay_IVROverlay_024 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_024));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_024_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_024(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_024 *create_winIVROverlay_IVROverlay_024_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_024 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_024));
    struct thunk *thunks = alloc_thunks(78);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 78 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_024_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_024_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_024_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_024_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_024_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_024_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_024_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_024_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_024_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_024_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_024_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_024_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_024_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_024_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_024_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_024_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_024_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_024_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_024_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_024_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_024_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_024_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_024_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_024_SetOverlayCurvature, 2, TRUE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_024_GetOverlayCurvature, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_024_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_024_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_024_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_024_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_024_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_024_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_024_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_024_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_024_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_024_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_024_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_024_SetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_024_GetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_024_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_024_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_024_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_024_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_024_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_024_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_024_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_024_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_024_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_024_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_024_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_024_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_024_TriggerLaserMouseHapticVibration, 4, TRUE, TRUE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_024_SetOverlayCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_024_SetOverlayCursorPositionOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_024_ClearOverlayCursorPositionOverride, 1, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_024_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_024_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_024_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_024_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_024_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_024_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_024_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_024_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_024_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_024_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_024_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_024_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_024_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_024_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_024_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_024_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_024_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_024_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_024_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_024_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_024_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_024_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 78; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_024_FnTable(void *object)
{
    winIVROverlay_IVROverlay_024 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_025.h"

typedef struct __winIVROverlay_IVROverlay_025 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_025;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTransformProjection, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayCursor, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_025_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_FindOverlay(winIVROverlay_IVROverlay_025 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_CreateOverlay(winIVROverlay_IVROverlay_025 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_DestroyOverlay(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

uint32_t __thiscall winIVROverlay_IVROverlay_025_GetOverlayKey(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_025_GetOverlayName(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayName(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayImageData(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_025 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayRenderingPid(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_025_GetOverlayRenderingPid(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayFlag(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayFlag(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayFlags(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayColor(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayColor(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayAlpha(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayAlpha(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTexelAspect(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTexelAspect(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlaySortOrder(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlaySortOrder(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayCurvature(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float fCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayCurvature(_this->linux_side, ulOverlayHandle, fCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayCurvature(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float *pfCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayCurvature(_this->linux_side, ulOverlayHandle, pfCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTextureBounds(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTextureBounds(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTransformType(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTransformCursor(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulCursorOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayTransformCursor(_this->linux_side, ulCursorOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTransformCursor(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTransformCursor(_this->linux_side, ulOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTransformProjection(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform, VROverlayProjection_t *pProjection, EVREye eEye)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayTransformProjection(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, pProjection, eEye);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_ShowOverlay(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_HideOverlay(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_025_IsOverlayVisible(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

bool __thiscall winIVROverlay_IVROverlay_025_PollNextOverlayEvent(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1168 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayInputMethod(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayInputMethod(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayMouseScale(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayMouseScale(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_025_ComputeOverlayIntersection(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_025_IsHoverTargetOverlay(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration(_this->linux_side, ulOverlayHandle, fDurationSeconds, fFrequency, fAmplitude);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayCursor(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulCursorHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayCursor(_this->linux_side, ulOverlayHandle, ulCursorHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvCursor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle, pvCursor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayTexture(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_025_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 25);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_ClearOverlayTexture(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayRaw(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unBytesPerPixel)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unBytesPerPixel);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetOverlayFromFile(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTexture(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetOverlayTextureSize(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_CreateDashboardOverlay(winIVROverlay_IVROverlay_025 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_025_IsDashboardVisible(winIVROverlay_IVROverlay_025 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_025_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_025_ShowDashboard(winIVROverlay_IVROverlay_025 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_025_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_025 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_ShowKeyboard(winIVROverlay_IVROverlay_025 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, unFlags, pchDescription, unCharMax, pchExistingText, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_025_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, unFlags, pchDescription, unCharMax, pchExistingText, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_025_GetKeyboardText(winIVROverlay_IVROverlay_025 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_025_HideKeyboard(winIVROverlay_IVROverlay_025 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_025_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_025 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_025 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_025_ShowMessageOverlay(winIVROverlay_IVROverlay_025 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_025_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_025_CloseMessageOverlay(winIVROverlay_IVROverlay_025 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_025_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_025_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_025,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTransformProjection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_025_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_025 *create_winIVROverlay_IVROverlay_025(void *linux_side)
{
    winIVROverlay_IVROverlay_025 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_025));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_025_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_025(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_025 *create_winIVROverlay_IVROverlay_025_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_025 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_025));
    struct thunk *thunks = alloc_thunks(79);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 79 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_025_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_025_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_025_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_025_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_025_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_025_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_025_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_025_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_025_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_025_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_025_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_025_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_025_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_025_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_025_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_025_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_025_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_025_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_025_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_025_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_025_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_025_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_025_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_025_SetOverlayCurvature, 2, TRUE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_025_GetOverlayCurvature, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_025_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_025_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_025_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_025_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_025_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_025_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_025_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_025_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_025_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_025_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_025_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_025_SetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_025_GetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_025_SetOverlayTransformProjection, 5, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_025_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_025_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_025_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_025_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_025_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_025_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_025_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_025_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_025_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_025_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_025_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_025_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_025_TriggerLaserMouseHapticVibration, 4, TRUE, TRUE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_025_SetOverlayCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_025_SetOverlayCursorPositionOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_025_ClearOverlayCursorPositionOverride, 1, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_025_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_025_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_025_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_025_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_025_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_025_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_025_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_025_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_025_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_025_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_025_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_025_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_025_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_025_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_025_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_025_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_025_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_025_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_025_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_025_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_025_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_025_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 79; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_025_FnTable(void *object)
{
    winIVROverlay_IVROverlay_025 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_026.h"

typedef struct __winIVROverlay_IVROverlay_026 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_026;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTransformProjection, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_WaitFrameSync, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayCursor, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_026_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_FindOverlay(winIVROverlay_IVROverlay_026 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_CreateOverlay(winIVROverlay_IVROverlay_026 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_DestroyOverlay(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

uint32_t __thiscall winIVROverlay_IVROverlay_026_GetOverlayKey(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_026_GetOverlayName(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayName(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayImageData(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_026 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayRenderingPid(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_026_GetOverlayRenderingPid(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayFlag(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayFlag(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayFlags(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayColor(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayColor(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayAlpha(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayAlpha(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTexelAspect(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTexelAspect(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlaySortOrder(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlaySortOrder(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayCurvature(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float fCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayCurvature(_this->linux_side, ulOverlayHandle, fCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayCurvature(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float *pfCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayCurvature(_this->linux_side, ulOverlayHandle, pfCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float fRadians)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch(_this->linux_side, ulOverlayHandle, fRadians);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRadians)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch(_this->linux_side, ulOverlayHandle, pfRadians);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTextureBounds(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTextureBounds(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTransformType(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative(_this->linux_side, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTransformCursor(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulCursorOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayTransformCursor(_this->linux_side, ulCursorOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTransformCursor(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTransformCursor(_this->linux_side, ulOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTransformProjection(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform, VROverlayProjection_t *pProjection, EVREye eEye)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayTransformProjection(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, pProjection, eEye);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_ShowOverlay(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_HideOverlay(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_026_IsOverlayVisible(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_WaitFrameSync(winIVROverlay_IVROverlay_026 *_this, uint32_t nTimeoutMs)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_WaitFrameSync(_this->linux_side, nTimeoutMs);
}

bool __thiscall winIVROverlay_IVROverlay_026_PollNextOverlayEvent(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1237 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayInputMethod(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayInputMethod(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayMouseScale(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayMouseScale(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_026_ComputeOverlayIntersection(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_026_IsHoverTargetOverlay(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration(_this->linux_side, ulOverlayHandle, fDurationSeconds, fFrequency, fAmplitude);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayCursor(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulCursorHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayCursor(_this->linux_side, ulOverlayHandle, ulCursorHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvCursor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle, pvCursor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayTexture(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_026_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 26);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_ClearOverlayTexture(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayRaw(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unBytesPerPixel)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unBytesPerPixel);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetOverlayFromFile(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTexture(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetOverlayTextureSize(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_CreateDashboardOverlay(winIVROverlay_IVROverlay_026 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_026_IsDashboardVisible(winIVROverlay_IVROverlay_026 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_026_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_026_ShowDashboard(winIVROverlay_IVROverlay_026 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_026_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_026 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_ShowKeyboard(winIVROverlay_IVROverlay_026 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, unFlags, pchDescription, unCharMax, pchExistingText, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_026_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, unFlags, pchDescription, unCharMax, pchExistingText, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_026_GetKeyboardText(winIVROverlay_IVROverlay_026 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_026_HideKeyboard(winIVROverlay_IVROverlay_026 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_026_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_026 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_026 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_026_ShowMessageOverlay(winIVROverlay_IVROverlay_026 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_026_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_026_CloseMessageOverlay(winIVROverlay_IVROverlay_026 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_026_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_026_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_026,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTransformProjection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_WaitFrameSync)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_026_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_026 *create_winIVROverlay_IVROverlay_026(void *linux_side)
{
    winIVROverlay_IVROverlay_026 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_026));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_026_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_026(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_026 *create_winIVROverlay_IVROverlay_026_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_026 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_026));
    struct thunk *thunks = alloc_thunks(82);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 82 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_026_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_026_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_026_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_026_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_026_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_026_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_026_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_026_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_026_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_026_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_026_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_026_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_026_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_026_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_026_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_026_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_026_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_026_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_026_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_026_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_026_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_026_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_026_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_026_SetOverlayCurvature, 2, TRUE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_026_GetOverlayCurvature, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_026_SetOverlayPreCurvePitch, 2, TRUE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_026_GetOverlayPreCurvePitch, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_026_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_026_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_026_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_026_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_026_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_026_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_026_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_026_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_026_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_026_GetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_026_SetOverlayTransformOverlayRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_026_SetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_026_GetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_026_SetOverlayTransformProjection, 5, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_026_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_026_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_026_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_026_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_026_WaitFrameSync, 1, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_026_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_026_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_026_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_026_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_026_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_026_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_026_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_026_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_026_TriggerLaserMouseHapticVibration, 4, TRUE, TRUE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_026_SetOverlayCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_026_SetOverlayCursorPositionOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_026_ClearOverlayCursorPositionOverride, 1, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_026_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_026_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_026_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_026_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_026_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_026_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_026_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_026_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_026_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_026_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_026_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_026_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_026_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_026_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_026_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_026_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_026_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_026_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_026_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_026_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[80], r, winIVROverlay_IVROverlay_026_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[81], r, winIVROverlay_IVROverlay_026_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 82; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_026_FnTable(void *object)
{
    winIVROverlay_IVROverlay_026 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVROverlay_IVROverlay_027.h"

typedef struct __winIVROverlay_IVROverlay_027 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVROverlay_IVROverlay_027;

DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_FindOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_CreateOverlay, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_DestroyOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayKey, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayName, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayName, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayImageData, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayRenderingPid, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayRenderingPid, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayFlag, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayFlags, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayColor, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayAlpha, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTexelAspect, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlaySortOrder, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayWidthInMeters, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayCurvature, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayPreCurvePitch, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayPreCurvePitch, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTextureColorSpace, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTextureBounds, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTransformType, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTransformAbsolute, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTransformCursor, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayTransformProjection, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_ShowOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_HideOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_IsOverlayVisible, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_WaitFrameSync, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_PollNextOverlayEvent, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayInputMethod, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayMouseScale, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_ComputeOverlayIntersection, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_IsHoverTargetOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayIntersectionMask, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration, 24)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayCursor, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayTexture, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_ClearOverlayTexture, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayRaw, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetOverlayFromFile, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTexture, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetOverlayTextureSize, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_CreateDashboardOverlay, 20)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_IsDashboardVisible, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_IsActiveDashboardOverlay, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess, 16)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_ShowDashboard, 8)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetPrimaryDashboardDevice, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_ShowKeyboard, 36)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_ShowKeyboardForOverlay, 44)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_GetKeyboardText, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_HideKeyboard, 4)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute, 12)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_ShowMessageOverlay, 28)
DEFINE_THISCALL_WRAPPER(winIVROverlay_IVROverlay_027_CloseMessageOverlay, 4)

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_FindOverlay(winIVROverlay_IVROverlay_027 *_this, const char *pchOverlayKey, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_FindOverlay(_this->linux_side, pchOverlayKey, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_CreateOverlay(winIVROverlay_IVROverlay_027 *_this, const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t *pOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_CreateOverlay(_this->linux_side, pchOverlayKey, pchOverlayName, pOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_DestroyOverlay(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_DestroyOverlay(_this->linux_side, ulOverlayHandle);
}

uint32_t __thiscall winIVROverlay_IVROverlay_027_GetOverlayKey(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayKey(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

uint32_t __thiscall winIVROverlay_IVROverlay_027_GetOverlayName(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, char *pchValue, uint32_t unBufferSize, EVROverlayError *pError)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayName(_this->linux_side, ulOverlayHandle, pchValue, unBufferSize, pError);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayName(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayName(_this->linux_side, ulOverlayHandle, pchName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayImageData(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayImageData(_this->linux_side, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}

const char * __thiscall winIVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum(winIVROverlay_IVROverlay_027 *_this, EVROverlayError error)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum(_this->linux_side, error);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayRenderingPid(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unPID)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayRenderingPid(_this->linux_side, ulOverlayHandle, unPID);
}

uint32_t __thiscall winIVROverlay_IVROverlay_027_GetOverlayRenderingPid(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayRenderingPid(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayFlag(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, bEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayFlag(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayFlag(_this->linux_side, ulOverlayHandle, eOverlayFlag, pbEnabled);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayFlags(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayFlags(_this->linux_side, ulOverlayHandle, pFlags);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayColor(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayColor(_this->linux_side, ulOverlayHandle, fRed, fGreen, fBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayColor(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayColor(_this->linux_side, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayAlpha(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float fAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayAlpha(_this->linux_side, ulOverlayHandle, fAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayAlpha(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float *pfAlpha)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayAlpha(_this->linux_side, ulOverlayHandle, pfAlpha);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTexelAspect(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float fTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, fTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTexelAspect(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTexelAspect(_this->linux_side, ulOverlayHandle, pfTexelAspect);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlaySortOrder(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlaySortOrder(_this->linux_side, ulOverlayHandle, unSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlaySortOrder(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlaySortOrder(_this->linux_side, ulOverlayHandle, punSortOrder);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayWidthInMeters(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float fWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, fWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayWidthInMeters(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayWidthInMeters(_this->linux_side, ulOverlayHandle, pfWidthInMeters);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayCurvature(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float fCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayCurvature(_this->linux_side, ulOverlayHandle, fCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayCurvature(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float *pfCurvature)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayCurvature(_this->linux_side, ulOverlayHandle, pfCurvature);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayPreCurvePitch(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float fRadians)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayPreCurvePitch(_this->linux_side, ulOverlayHandle, fRadians);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayPreCurvePitch(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float *pfRadians)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayPreCurvePitch(_this->linux_side, ulOverlayHandle, pfRadians);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTextureColorSpace(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, eTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTextureColorSpace(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTextureColorSpace(_this->linux_side, ulOverlayHandle, peTextureColorSpace);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTextureBounds(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTextureBounds(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTextureBounds(_this->linux_side, ulOverlayHandle, pOverlayTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTransformType(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTransformType(_this->linux_side, ulOverlayHandle, peTransformType);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTransformAbsolute(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTransformAbsolute(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTransformAbsolute(_this->linux_side, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative(_this->linux_side, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, unDeviceIndex, pchComponentName);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, char *pchComponentName, uint32_t unComponentNameSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent(_this->linux_side, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTransformCursor(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulCursorOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayTransformCursor(_this->linux_side, ulCursorOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTransformCursor(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvHotspot)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTransformCursor(_this->linux_side, ulOverlayHandle, pvHotspot);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTransformProjection(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform, VROverlayProjection_t *pProjection, EVREye eEye)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayTransformProjection(_this->linux_side, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, pProjection, eEye);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_ShowOverlay(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_ShowOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_HideOverlay(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_HideOverlay(_this->linux_side, ulOverlayHandle);
}

bool __thiscall winIVROverlay_IVROverlay_027_IsOverlayVisible(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_IsOverlayVisible(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates(_this->linux_side, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_WaitFrameSync(winIVROverlay_IVROverlay_027 *_this, uint32_t nTimeoutMs)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_WaitFrameSync(_this->linux_side, nTimeoutMs);
}

bool __thiscall winIVROverlay_IVROverlay_027_PollNextOverlayEvent(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, winVREvent_t_1267 *pEvent, uint32_t uncbVREvent)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_PollNextOverlayEvent(_this->linux_side, ulOverlayHandle, pEvent, uncbVREvent);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayInputMethod(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayInputMethod(_this->linux_side, ulOverlayHandle, peInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayInputMethod(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayInputMethod(_this->linux_side, ulOverlayHandle, eInputMethod);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayMouseScale(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayMouseScale(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayMouseScale(_this->linux_side, ulOverlayHandle, pvecMouseScale);
}

bool __thiscall winIVROverlay_IVROverlay_027_ComputeOverlayIntersection(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_ComputeOverlayIntersection(_this->linux_side, ulOverlayHandle, pParams, pResults);
}

bool __thiscall winIVROverlay_IVROverlay_027_IsHoverTargetOverlay(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_IsHoverTargetOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayIntersectionMask(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayIntersectionMask(_this->linux_side, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration(_this->linux_side, ulOverlayHandle, fDurationSeconds, fFrequency, fAmplitude);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayCursor(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulCursorHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayCursor(_this->linux_side, ulOverlayHandle, ulCursorHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvCursor)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle, pvCursor);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayTexture(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, Texture_t *pTexture)
{
    TRACE("%p\n", _this);
    return ivroverlay_set_overlay_texture(cppIVROverlay_IVROverlay_027_SetOverlayTexture, _this->linux_side, ulOverlayHandle, pTexture, 27);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_ClearOverlayTexture(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_ClearOverlayTexture(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayRaw(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unBytesPerPixel)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayRaw(_this->linux_side, ulOverlayHandle, pvBuffer, unWidth, unHeight, unBytesPerPixel);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetOverlayFromFile(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, const char *pchFilePath)
{
    char lin_pchFilePath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchFilePath, lin_pchFilePath);
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetOverlayFromFile(_this->linux_side, ulOverlayHandle, pchFilePath ? lin_pchFilePath : NULL);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTexture(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTexture(_this->linux_side, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle(_this->linux_side, ulOverlayHandle, pNativeTextureHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetOverlayTextureSize(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetOverlayTextureSize(_this->linux_side, ulOverlayHandle, pWidth, pHeight);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_CreateDashboardOverlay(winIVROverlay_IVROverlay_027 *_this, const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t *pMainHandle, VROverlayHandle_t *pThumbnailHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_CreateDashboardOverlay(_this->linux_side, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}

bool __thiscall winIVROverlay_IVROverlay_027_IsDashboardVisible(winIVROverlay_IVROverlay_027 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_IsDashboardVisible(_this->linux_side);
}

bool __thiscall winIVROverlay_IVROverlay_027_IsActiveDashboardOverlay(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_IsActiveDashboardOverlay(_this->linux_side, ulOverlayHandle);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, unProcessId);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess(_this->linux_side, ulOverlayHandle, punProcessId);
}

void __thiscall winIVROverlay_IVROverlay_027_ShowDashboard(winIVROverlay_IVROverlay_027 *_this, const char *pchOverlayToShow)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_027_ShowDashboard(_this->linux_side, pchOverlayToShow);
}

TrackedDeviceIndex_t __thiscall winIVROverlay_IVROverlay_027_GetPrimaryDashboardDevice(winIVROverlay_IVROverlay_027 *_this)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetPrimaryDashboardDevice(_this->linux_side);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_ShowKeyboard(winIVROverlay_IVROverlay_027 *_this, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_ShowKeyboard(_this->linux_side, eInputMode, eLineInputMode, unFlags, pchDescription, unCharMax, pchExistingText, uUserValue);
}

EVROverlayError __thiscall winIVROverlay_IVROverlay_027_ShowKeyboardForOverlay(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, uint32_t unFlags, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, uint64_t uUserValue)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_ShowKeyboardForOverlay(_this->linux_side, ulOverlayHandle, eInputMode, eLineInputMode, unFlags, pchDescription, unCharMax, pchExistingText, uUserValue);
}

uint32_t __thiscall winIVROverlay_IVROverlay_027_GetKeyboardText(winIVROverlay_IVROverlay_027 *_this, char *pchText, uint32_t cchText)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_GetKeyboardText(_this->linux_side, pchText, cchText);
}

void __thiscall winIVROverlay_IVROverlay_027_HideKeyboard(winIVROverlay_IVROverlay_027 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_027_HideKeyboard(_this->linux_side);
}

void __thiscall winIVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute(winIVROverlay_IVROverlay_027 *_this, ETrackingUniverseOrigin eTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute(_this->linux_side, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}

void __thiscall winIVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay(winIVROverlay_IVROverlay_027 *_this, VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay(_this->linux_side, ulOverlayHandle, avoidRect);
}

VRMessageOverlayResponse __thiscall winIVROverlay_IVROverlay_027_ShowMessageOverlay(winIVROverlay_IVROverlay_027 *_this, const char *pchText, const char *pchCaption, const char *pchButton0Text, const char *pchButton1Text, const char *pchButton2Text, const char *pchButton3Text)
{
    TRACE("%p\n", _this);
    return cppIVROverlay_IVROverlay_027_ShowMessageOverlay(_this->linux_side, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text);
}

void __thiscall winIVROverlay_IVROverlay_027_CloseMessageOverlay(winIVROverlay_IVROverlay_027 *_this)
{
    TRACE("%p\n", _this);
    cppIVROverlay_IVROverlay_027_CloseMessageOverlay(_this->linux_side);
}

extern vtable_ptr winIVROverlay_IVROverlay_027_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVROverlay_IVROverlay_027,
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_FindOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_CreateOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_DestroyOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayKey)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayName)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayImageData)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayRenderingPid)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayFlag)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayFlags)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayColor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayAlpha)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTexelAspect)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlaySortOrder)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayWidthInMeters)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayCurvature)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayPreCurvePitch)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayPreCurvePitch)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTextureColorSpace)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTextureBounds)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTransformType)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTransformCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayTransformProjection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_ShowOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_HideOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_IsOverlayVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_WaitFrameSync)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_PollNextOverlayEvent)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayInputMethod)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayMouseScale)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_ComputeOverlayIntersection)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_IsHoverTargetOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayIntersectionMask)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayCursor)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_ClearOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayRaw)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetOverlayFromFile)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTexture)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetOverlayTextureSize)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_CreateDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_IsDashboardVisible)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_IsActiveDashboardOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_ShowDashboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetPrimaryDashboardDevice)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_ShowKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_ShowKeyboardForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_GetKeyboardText)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_HideKeyboard)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_ShowMessageOverlay)
        VTABLE_ADD_FUNC(winIVROverlay_IVROverlay_027_CloseMessageOverlay)
    );
#ifndef __GNUC__
}
#endif

winIVROverlay_IVROverlay_027 *create_winIVROverlay_IVROverlay_027(void *linux_side)
{
    winIVROverlay_IVROverlay_027 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_027));
    TRACE("-> %p\n", r);
    r->vtable = &winIVROverlay_IVROverlay_027_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVROverlay_IVROverlay_027(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVROverlay_IVROverlay_027 *create_winIVROverlay_IVROverlay_027_FnTable(void *linux_side)
{
    winIVROverlay_IVROverlay_027 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVROverlay_IVROverlay_027));
    struct thunk *thunks = alloc_thunks(80);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 80 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVROverlay_IVROverlay_027_FindOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVROverlay_IVROverlay_027_CreateOverlay, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVROverlay_IVROverlay_027_DestroyOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVROverlay_IVROverlay_027_GetOverlayKey, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVROverlay_IVROverlay_027_GetOverlayName, 4, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVROverlay_IVROverlay_027_SetOverlayName, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVROverlay_IVROverlay_027_GetOverlayImageData, 5, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVROverlay_IVROverlay_027_GetOverlayErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVROverlay_IVROverlay_027_SetOverlayRenderingPid, 2, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVROverlay_IVROverlay_027_GetOverlayRenderingPid, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVROverlay_IVROverlay_027_SetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVROverlay_IVROverlay_027_GetOverlayFlag, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVROverlay_IVROverlay_027_GetOverlayFlags, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVROverlay_IVROverlay_027_SetOverlayColor, 4, TRUE, TRUE);
    init_thunk(&thunks[14], r, winIVROverlay_IVROverlay_027_GetOverlayColor, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVROverlay_IVROverlay_027_SetOverlayAlpha, 2, TRUE, FALSE);
    init_thunk(&thunks[16], r, winIVROverlay_IVROverlay_027_GetOverlayAlpha, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVROverlay_IVROverlay_027_SetOverlayTexelAspect, 2, TRUE, FALSE);
    init_thunk(&thunks[18], r, winIVROverlay_IVROverlay_027_GetOverlayTexelAspect, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVROverlay_IVROverlay_027_SetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVROverlay_IVROverlay_027_GetOverlaySortOrder, 2, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVROverlay_IVROverlay_027_SetOverlayWidthInMeters, 2, TRUE, FALSE);
    init_thunk(&thunks[22], r, winIVROverlay_IVROverlay_027_GetOverlayWidthInMeters, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVROverlay_IVROverlay_027_SetOverlayCurvature, 2, TRUE, FALSE);
    init_thunk(&thunks[24], r, winIVROverlay_IVROverlay_027_GetOverlayCurvature, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVROverlay_IVROverlay_027_SetOverlayPreCurvePitch, 2, TRUE, FALSE);
    init_thunk(&thunks[26], r, winIVROverlay_IVROverlay_027_GetOverlayPreCurvePitch, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVROverlay_IVROverlay_027_SetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVROverlay_IVROverlay_027_GetOverlayTextureColorSpace, 2, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVROverlay_IVROverlay_027_SetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVROverlay_IVROverlay_027_GetOverlayTextureBounds, 2, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVROverlay_IVROverlay_027_GetOverlayTransformType, 2, FALSE, FALSE);
    init_thunk(&thunks[32], r, winIVROverlay_IVROverlay_027_SetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[33], r, winIVROverlay_IVROverlay_027_GetOverlayTransformAbsolute, 3, FALSE, FALSE);
    init_thunk(&thunks[34], r, winIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[35], r, winIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceRelative, 3, FALSE, FALSE);
    init_thunk(&thunks[36], r, winIVROverlay_IVROverlay_027_SetOverlayTransformTrackedDeviceComponent, 3, FALSE, FALSE);
    init_thunk(&thunks[37], r, winIVROverlay_IVROverlay_027_GetOverlayTransformTrackedDeviceComponent, 4, FALSE, FALSE);
    init_thunk(&thunks[38], r, winIVROverlay_IVROverlay_027_SetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[39], r, winIVROverlay_IVROverlay_027_GetOverlayTransformCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[40], r, winIVROverlay_IVROverlay_027_SetOverlayTransformProjection, 5, FALSE, FALSE);
    init_thunk(&thunks[41], r, winIVROverlay_IVROverlay_027_ShowOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[42], r, winIVROverlay_IVROverlay_027_HideOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[43], r, winIVROverlay_IVROverlay_027_IsOverlayVisible, 1, FALSE, FALSE);
    init_thunk(&thunks[44], r, winIVROverlay_IVROverlay_027_GetTransformForOverlayCoordinates, 4, FALSE, FALSE);
    init_thunk(&thunks[45], r, winIVROverlay_IVROverlay_027_WaitFrameSync, 1, FALSE, FALSE);
    init_thunk(&thunks[46], r, winIVROverlay_IVROverlay_027_PollNextOverlayEvent, 3, FALSE, FALSE);
    init_thunk(&thunks[47], r, winIVROverlay_IVROverlay_027_GetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[48], r, winIVROverlay_IVROverlay_027_SetOverlayInputMethod, 2, FALSE, FALSE);
    init_thunk(&thunks[49], r, winIVROverlay_IVROverlay_027_GetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[50], r, winIVROverlay_IVROverlay_027_SetOverlayMouseScale, 2, FALSE, FALSE);
    init_thunk(&thunks[51], r, winIVROverlay_IVROverlay_027_ComputeOverlayIntersection, 3, FALSE, FALSE);
    init_thunk(&thunks[52], r, winIVROverlay_IVROverlay_027_IsHoverTargetOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[53], r, winIVROverlay_IVROverlay_027_SetOverlayIntersectionMask, 4, FALSE, FALSE);
    init_thunk(&thunks[54], r, winIVROverlay_IVROverlay_027_TriggerLaserMouseHapticVibration, 4, TRUE, TRUE);
    init_thunk(&thunks[55], r, winIVROverlay_IVROverlay_027_SetOverlayCursor, 2, FALSE, FALSE);
    init_thunk(&thunks[56], r, winIVROverlay_IVROverlay_027_SetOverlayCursorPositionOverride, 2, FALSE, FALSE);
    init_thunk(&thunks[57], r, winIVROverlay_IVROverlay_027_ClearOverlayCursorPositionOverride, 1, FALSE, FALSE);
    init_thunk(&thunks[58], r, winIVROverlay_IVROverlay_027_SetOverlayTexture, 2, FALSE, FALSE);
    init_thunk(&thunks[59], r, winIVROverlay_IVROverlay_027_ClearOverlayTexture, 1, FALSE, FALSE);
    init_thunk(&thunks[60], r, winIVROverlay_IVROverlay_027_SetOverlayRaw, 5, FALSE, FALSE);
    init_thunk(&thunks[61], r, winIVROverlay_IVROverlay_027_SetOverlayFromFile, 2, FALSE, FALSE);
    init_thunk(&thunks[62], r, winIVROverlay_IVROverlay_027_GetOverlayTexture, 9, FALSE, FALSE);
    init_thunk(&thunks[63], r, winIVROverlay_IVROverlay_027_ReleaseNativeOverlayHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[64], r, winIVROverlay_IVROverlay_027_GetOverlayTextureSize, 3, FALSE, FALSE);
    init_thunk(&thunks[65], r, winIVROverlay_IVROverlay_027_CreateDashboardOverlay, 4, FALSE, FALSE);
    init_thunk(&thunks[66], r, winIVROverlay_IVROverlay_027_IsDashboardVisible, 0, FALSE, FALSE);
    init_thunk(&thunks[67], r, winIVROverlay_IVROverlay_027_IsActiveDashboardOverlay, 1, FALSE, FALSE);
    init_thunk(&thunks[68], r, winIVROverlay_IVROverlay_027_SetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[69], r, winIVROverlay_IVROverlay_027_GetDashboardOverlaySceneProcess, 2, FALSE, FALSE);
    init_thunk(&thunks[70], r, winIVROverlay_IVROverlay_027_ShowDashboard, 1, FALSE, FALSE);
    init_thunk(&thunks[71], r, winIVROverlay_IVROverlay_027_GetPrimaryDashboardDevice, 0, FALSE, FALSE);
    init_thunk(&thunks[72], r, winIVROverlay_IVROverlay_027_ShowKeyboard, 7, FALSE, FALSE);
    init_thunk(&thunks[73], r, winIVROverlay_IVROverlay_027_ShowKeyboardForOverlay, 8, FALSE, FALSE);
    init_thunk(&thunks[74], r, winIVROverlay_IVROverlay_027_GetKeyboardText, 2, FALSE, FALSE);
    init_thunk(&thunks[75], r, winIVROverlay_IVROverlay_027_HideKeyboard, 0, FALSE, FALSE);
    init_thunk(&thunks[76], r, winIVROverlay_IVROverlay_027_SetKeyboardTransformAbsolute, 2, FALSE, FALSE);
    init_thunk(&thunks[77], r, winIVROverlay_IVROverlay_027_SetKeyboardPositionForOverlay, 2, FALSE, FALSE);
    init_thunk(&thunks[78], r, winIVROverlay_IVROverlay_027_ShowMessageOverlay, 6, FALSE, FALSE);
    init_thunk(&thunks[79], r, winIVROverlay_IVROverlay_027_CloseMessageOverlay, 0, FALSE, FALSE);
    for (i = 0; i < 80; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVROverlay_IVROverlay_027_FnTable(void *object)
{
    winIVROverlay_IVROverlay_027 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

