#ifndef IKUN_FRAMES_H
#define IKUN_FRAMES_H

#include <stdint.h>

#define IKUN_FRAME_COUNT  9U
#define IKUN_FRAME_WIDTH  115U
#define IKUN_FRAME_PAGES  8U
#define IKUN_FRAME_SIZE   (IKUN_FRAME_WIDTH * IKUN_FRAME_PAGES)

extern const uint8_t ikun_frames[IKUN_FRAME_COUNT][IKUN_FRAME_SIZE];

#endif
