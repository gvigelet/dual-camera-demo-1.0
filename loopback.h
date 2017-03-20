#ifndef LOOPBACK_H
#define LOOPBACK_H

#ifdef __cplusplus
extern "C" {
#endif

typedef	void (*drm_page_flip_handler)(int fd,
				                      unsigned int sequence,
				                      unsigned int tv_sec,
				                      unsigned int tv_usec,
				                      void *user_data);

typedef int  (*drm_plane_set_req)(uint32_t plane_id,
                                  uint32_t prop_fbid,
                                  uint32_t buffer_id,
                                  drm_page_flip_handler handler,
                                  void* user_data);

struct control {
    unsigned int main_cam;
    unsigned int num_cams;
    unsigned int num_jpeg;
    unsigned int display_xres, display_yres;
    bool pip;
    bool jpeg;
    bool exit;
    int drm_fd;
    drm_plane_set_req drm_plane_set_req_handler;
};

extern struct control status;

int init_loopback(void);
void process_frame(void);
void end_streaming(void);
void exit_devices(void);
void drm_disable_pip(void);
void drm_enable_pip(void);
void set_plane_properties(void);

#ifdef __cplusplus
}
#endif

#endif // LOOPBACK_H
