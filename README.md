# STM32 OLED Kun Animation

如果你能驱动一个 OLED 屏，那么你会得到：

<a href="https://www.bilibili.com/video/BV17M411E7Mb/"><img src="assets/preview.gif" width="300" alt="点击观看演示视频"></a>

```c
#include "ikun_frames.h"

OLED_DrawBMP(0, 0, IKUN_FRAME_WIDTH, IKUN_FRAME_PAGES, ikun_frames[6]);
Delay_ms(600);
OLED_DrawBMP(0, 0, IKUN_FRAME_WIDTH, IKUN_FRAME_PAGES, ikun_frames[7]);
Delay_ms(400);
OLED_DrawBMP(0, 0, IKUN_FRAME_WIDTH, IKUN_FRAME_PAGES, ikun_frames[8]);
Delay_ms(300);

while (1)
{
    OLED_DrawBMP(0, 0, IKUN_FRAME_WIDTH, IKUN_FRAME_PAGES, ikun_frames[0]);
    Delay_ms(150);
    OLED_DrawBMP(0, 0, IKUN_FRAME_WIDTH, IKUN_FRAME_PAGES, ikun_frames[1]);
    Delay_ms(150);
    OLED_DrawBMP(0, 0, IKUN_FRAME_WIDTH, IKUN_FRAME_PAGES, ikun_frames[2]);
    Delay_ms(150);
    OLED_DrawBMP(0, 0, IKUN_FRAME_WIDTH, IKUN_FRAME_PAGES, ikun_frames[3]);
    Delay_ms(150);
    OLED_DrawBMP(0, 0, IKUN_FRAME_WIDTH, IKUN_FRAME_PAGES, ikun_frames[4]);
    Delay_ms(150);
    OLED_DrawBMP(0, 0, IKUN_FRAME_WIDTH, IKUN_FRAME_PAGES, ikun_frames[5]);
    Delay_ms(200);
}
```

共 9 帧，每帧 115 × 64 像素、920 字节。数组使用 `const` 声明，存放在 Flash/ROM。
