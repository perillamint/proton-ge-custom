#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.15/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRRenderModels_IVRRenderModels_002.h"
#ifdef __cplusplus
extern "C" {
#endif
bool cppIVRRenderModels_IVRRenderModels_002_LoadRenderModel(void *linux_side, const char *pchRenderModelName, winRenderModel_t_0915 **ppRenderModel)
{
    RenderModel_t *lin;
    bool _ret;
    _ret = ((IVRRenderModels*)linux_side)->LoadRenderModel((const char *)pchRenderModelName, ppRenderModel ? &lin : nullptr);
    if(_ret == 0)
        *ppRenderModel = struct_RenderModel_t_0915_wrap(lin);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_002_FreeRenderModel(void *linux_side, winRenderModel_t_0915 *pRenderModel)
{
    ((IVRRenderModels*)linux_side)->FreeRenderModel(struct_RenderModel_t_0915_unwrap(pRenderModel));
}

bool cppIVRRenderModels_IVRRenderModels_002_LoadTexture(void *linux_side, TextureID_t textureId, winRenderModel_TextureMap_t_0915 **ppTexture)
{
    RenderModel_TextureMap_t *lin;
    bool _ret;
    _ret = ((IVRRenderModels*)linux_side)->LoadTexture((vr::TextureID_t)textureId, ppTexture ? &lin : nullptr);
    if(_ret == 0)
        *ppTexture = struct_RenderModel_TextureMap_t_0915_wrap(lin);
    return _ret;
}

void cppIVRRenderModels_IVRRenderModels_002_FreeTexture(void *linux_side, winRenderModel_TextureMap_t_0915 *pTexture)
{
    ((IVRRenderModels*)linux_side)->FreeTexture(struct_RenderModel_TextureMap_t_0915_unwrap(pTexture));
}

uint32_t cppIVRRenderModels_IVRRenderModels_002_GetRenderModelName(void *linux_side, uint32_t unRenderModelIndex, char *pchRenderModelName, uint32_t unRenderModelNameLen)
{
    return ((IVRRenderModels*)linux_side)->GetRenderModelName((uint32_t)unRenderModelIndex, (char *)pchRenderModelName, (uint32_t)unRenderModelNameLen);
}

uint32_t cppIVRRenderModels_IVRRenderModels_002_GetRenderModelCount(void *linux_side)
{
    return ((IVRRenderModels*)linux_side)->GetRenderModelCount();
}

uint32_t cppIVRRenderModels_IVRRenderModels_002_GetComponentCount(void *linux_side, const char *pchRenderModelName)
{
    return ((IVRRenderModels*)linux_side)->GetComponentCount((const char *)pchRenderModelName);
}

uint32_t cppIVRRenderModels_IVRRenderModels_002_GetComponentName(void *linux_side, const char *pchRenderModelName, uint32_t unComponentIndex, char *pchComponentName, uint32_t unComponentNameLen)
{
    return ((IVRRenderModels*)linux_side)->GetComponentName((const char *)pchRenderModelName, (uint32_t)unComponentIndex, (char *)pchComponentName, (uint32_t)unComponentNameLen);
}

uint64_t cppIVRRenderModels_IVRRenderModels_002_GetComponentButtonMask(void *linux_side, const char *pchRenderModelName, const char *pchComponentName)
{
    return ((IVRRenderModels*)linux_side)->GetComponentButtonMask((const char *)pchRenderModelName, (const char *)pchComponentName);
}

uint32_t cppIVRRenderModels_IVRRenderModels_002_GetComponentRenderModelName(void *linux_side, const char *pchRenderModelName, const char *pchComponentName, char *pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen)
{
    return ((IVRRenderModels*)linux_side)->GetComponentRenderModelName((const char *)pchRenderModelName, (const char *)pchComponentName, (char *)pchComponentRenderModelName, (uint32_t)unComponentRenderModelNameLen);
}

bool cppIVRRenderModels_IVRRenderModels_002_GetComponentState(void *linux_side, const char *pchRenderModelName, const char *pchComponentName, VRControllerState_t *pControllerState, RenderModel_ComponentState_t *pComponentState)
{
    VRControllerState001_t lin;
    bool _ret;
    if(pControllerState)
        struct_VRControllerState001_t_0915_win_to_lin(pControllerState, &lin);
    _ret = ((IVRRenderModels*)linux_side)->GetComponentState((const char *)pchRenderModelName, (const char *)pchComponentName, pControllerState ? &lin : nullptr, (vr::RenderModel_ComponentState_t *)pComponentState);
    return _ret;
}

bool cppIVRRenderModels_IVRRenderModels_002_RenderModelHasComponent(void *linux_side, const char *pchRenderModelName, const char *pchComponentName)
{
    return ((IVRRenderModels*)linux_side)->RenderModelHasComponent((const char *)pchRenderModelName, (const char *)pchComponentName);
}

#ifdef __cplusplus
}
#endif
