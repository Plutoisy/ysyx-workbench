#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
const int disp_w = 400, disp_h = 300;

void __am_gpu_init() {
  int i;
  int w = io_read(AM_GPU_CONFIG).width;
  int h = io_read(AM_GPU_CONFIG).height;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = 0x00FFFFFF;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = disp_w, .height = disp_h,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  // int x = ctl->x;
  // int y = ctl->y;
  // int w = ctl->w;
  // int h = ctl->h;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (int i = 1; i <= 16; i ++){
    for (int j = 1; j <= 16; j ++){
      fb[400*(i-1)+j] = 0x00000000;
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
