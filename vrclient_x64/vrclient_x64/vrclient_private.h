#include <stdint.h>
#include <linux/limits.h>

#if __cplusplus
extern "C" {
#endif

char *json_convert_paths(const char *input);
char *json_convert_startup_info(const char *startup_info);

bool vrclient_dos_path_to_unix_path(const char *src, char *dst);

#if __cplusplus
}
#endif

/* TODO these should be generated */
typedef struct __winISteamClient winISteamClient;
typedef struct __winISteamUser winISteamUser;
typedef struct __winISteamGameServer winISteamGameServer;
typedef struct __winISteamFriends winISteamFriends;
typedef struct __winISteamUtils winISteamUtils;
typedef struct __winISteamMatchmaking winISteamMatchmaking;
typedef struct __winISteamMatchmakingServers winISteamMatchmakingServers;
typedef struct __winISteamUserStats winISteamUserStats;
typedef struct __winISteamGameServerStats winISteamGameServerStats;
typedef struct __winISteamApps winISteamApps;
typedef struct __winISteamNetworking winISteamNetworking;
typedef struct __winISteamRemoteStorage winISteamRemoteStorage;
typedef struct __winISteamRemoteScreenshots winISteamRemoteScreenshots;
typedef struct __winISteamScreenshots winISteamScreenshots;
typedef struct __winISteamHTTP winISteamHTTP;
typedef struct __winISteamUnifiedMessages winISteamUnifiedMessages;
typedef struct __winISteamController winISteamController;
typedef struct __winISteamUGC winISteamUGC;
typedef struct __winISteamAppList winISteamAppList;
typedef struct __winISteamMusic winISteamMusic;
typedef struct __winISteamMusicRemote winISteamMusicRemote;
typedef struct __winISteamHTMLSurface winISteamHTMLSurface;
typedef struct __winISteamInventory winISteamInventory;
typedef struct __winISteamVideo winISteamVideo;
typedef struct __winISteamMasterServerUpdater winISteamMasterServerUpdater;
typedef struct __winISteamContentServer winISteamContentServer;
typedef struct __winX winX;
typedef struct __winX winX;

void *create_win_interface(const char *name, void *linux_side);
unsigned int vrclient_unix_path_to_dos_path(bool api_result, const char *src, char *dst, uint32_t dst_bytes);
void *create_LinuxMatchmakingServerListResponse(void *win);

#ifndef __cplusplus
typedef struct ID3D11Device ID3D11Device;
typedef struct IDXGIVkInteropDevice IDXGIVkInteropDevice;

struct generic_interface
{
    void *object;
    void (*dtor)(void *);
};

struct client_core_data
{
    CRITICAL_SECTION critical_section;
    struct generic_interface *created_interfaces;
    SIZE_T created_interface_count;
    SIZE_T created_interfaces_size;
};

bool ivrclientcore_is_hmd_present(bool (*cpp_func)(void *), void *linux_side, unsigned int version,
        struct client_core_data *user_data);
EVRInitError ivrclientcore_002_init(EVRInitError (*cpp_func)(void *, EVRApplicationType),
        void *linux_side, EVRApplicationType application_type,
        unsigned int version, struct client_core_data *user_data);
EVRInitError ivrclientcore_init(EVRInitError (*cpp_func)(void *, EVRApplicationType, const char *),
        void *linux_side, EVRApplicationType application_type, const char *startup_info,
        unsigned int version, struct client_core_data *user_data);

void *ivrclientcore_get_generic_interface(void *(*cpp_func)(void *, const char *, EVRInitError *),
        void *linux_side, const char *name_and_version, EVRInitError *error,
        unsigned int version, struct client_core_data *user_data);

void ivrclientcore_cleanup(void (*cpp_func)(void *), void *linux_side,
        unsigned int version, struct client_core_data *user_data);

void get_dxgi_output_info(void *cpp_func, void *linux_side,
        int32_t *adapter_idx, unsigned int version);
void get_dxgi_output_info2(void *cpp_func, void *linux_side,
        int32_t *adapter_idx, int32_t *output_idx, unsigned int version);
void ivrsystem_016_get_output_device(
        void (*cpp_func)(void *, uint64_t *, ETextureType),
        void *linux_side, uint64_t *out_device, ETextureType type,
        unsigned int version);
void ivrsystem_get_output_device(
        void (*cpp_func)(void *, uint64_t *, ETextureType, VkInstance_T *),
        void *linux_side, uint64_t *out_device, ETextureType type,
        VkInstance_T *wrapped_instance, unsigned int version);

void ivrcompositor_005_submit(
        void (*cpp_func)(void *, Hmd_Eye, void *, Compositor_TextureBounds *),
        void *linux_side, Hmd_Eye eye, void *texture, Compositor_TextureBounds *bounds,
        unsigned int version);
VRCompositorError ivrcompositor_006_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, void *texture, VRTextureBounds_t *bounds,
        unsigned int version);
VRCompositorError ivrcompositor_007_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *, VRTextureBounds_t *),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention api, void *texture, VRTextureBounds_t *bounds,
        unsigned int version);
VRCompositorError ivrcompositor_008_submit(
        VRCompositorError (*cpp_func)(void *, Hmd_Eye, GraphicsAPIConvention, void *,
        VRTextureBounds_t *, VRSubmitFlags_t),
        void *linux_side, Hmd_Eye eye, GraphicsAPIConvention texture_type, void *texture,
        VRTextureBounds_t *bounds, VRSubmitFlags_t submit_flags,
        unsigned int version);
EVRCompositorError ivrcompositor_submit(
        EVRCompositorError (*cpp_func)(void *, EVREye, Texture_t *, VRTextureBounds_t *, EVRSubmitFlags),
        void *linux_side, EVREye eye, Texture_t *texture, VRTextureBounds_t *bounds, EVRSubmitFlags flags,
        unsigned int version);

void ivrcompositor_008_set_skybox_override(
        void (*cpp_func)(void *, GraphicsAPIConvention, void *, void *, void *, void *, void *, void *),
        void *linux_side, GraphicsAPIConvention api, void *front, void *back, void *left, void *right, void *top, void *bottom,
        unsigned int version);
EVRCompositorError ivrcompositor_set_skybox_override(
        EVRCompositorError (*cpp_func)(void *, Texture_t *textures, uint32_t count),
        void *linux_side, Texture_t *textures, uint32_t count,
        unsigned int version);

void ivrcompositor_post_present_handoff(void (*cpp_func)(void *),
        void *linux_side, unsigned int version);

EVRCompositorError ivrcompositor_wait_get_poses(
        EVRCompositorError (cpp_func)(void *, TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t),
        void *linux_side, TrackedDevicePose_t *render_poses, uint32_t render_pose_count,
        TrackedDevicePose_t *game_poses, uint32_t game_pose_count,
        unsigned int version);

uint32_t ivrcompositor_get_vulkan_device_extensions_required(
        uint32_t (*cpp_func)(void *, VkPhysicalDevice_T *, char *, uint32_t),
        void *linux_side, VkPhysicalDevice_T *phys_dev, char *value, uint32_t bufsize,
        unsigned int version);

EVRRenderModelError ivrrendermodels_load_texture_d3d11_async(
        EVRRenderModelError (*cpp_func)(void *, TextureID_t, void *, void **),
        void *linux_side, TextureID_t texture_id, void *d3d11_device, void **dst_texture, unsigned int version);
EVRRenderModelError ivrrendermodels_load_into_texture_d3d11_async(
        EVRRenderModelError (*cpp_func)(void *, TextureID_t, void *),
        void *linux_side, TextureID_t texture_id, void *dst_texture, unsigned int version);
void ivrrendermodels_free_texture_d3d11(
        void (*cpp_func)(void *, void *),
        void *linux_side, void *dst_texture, unsigned int version);

EVROverlayError ivroverlay_set_overlay_texture(
        EVROverlayError (*cpp_func)(void *, VROverlayHandle_t, Texture_t *),
        void *linux_side, VROverlayHandle_t overlayHandle, Texture_t *texture,
        unsigned int version);

EVROverlayError ivroverlay_005_set_overlay_texture(
        EVROverlayError (*cpp_func)(void *, VROverlayHandle_t, GraphicsAPIConvention, void *),
        void *linux_side, VROverlayHandle_t overlayHandle, GraphicsAPIConvention api, void *texture,
        unsigned int version);

EVROverlayError ivroverlay_001_set_overlay_texture(
        EVROverlayError (*cpp_func)(void *, VROverlayHandle_t, void *),
        void *linux_side, VROverlayHandle_t overlayHandle, void *texture,
        unsigned int version);

EVRInputError ivrinput_get_digital_action_data(
        void *func,
        void *linux_side, VRActionHandle_t action_handle, void *action_data, uint32_t action_data_size,
        VRInputValueHandle_t restrict_to_device, unsigned int version);

#endif  /* __cplusplus */
