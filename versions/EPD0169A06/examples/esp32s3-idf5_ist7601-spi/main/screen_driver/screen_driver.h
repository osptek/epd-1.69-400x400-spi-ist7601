#ifndef SCREEN_DRIVER_H
#define SCREEN_DRIVER_H

#include "esp_err.h"
#include <stddef.h>
#include <stdint.h>

#define SCREEN_WIDTH       400
#define SCREEN_HEIGHT      400
#define SCREEN_FRAME_BYTES (SCREEN_WIDTH * SCREEN_HEIGHT / 2)

/* 6-color E6；每像素 4bit */
typedef enum {
    SCREEN_COLOR_BLACK  = 0x0,
    SCREEN_COLOR_WHITE  = 0x1,
    SCREEN_COLOR_YELLOW = 0x2,
    SCREEN_COLOR_RED    = 0x3,
    SCREEN_COLOR_BLUE   = 0x5,
    SCREEN_COLOR_GREEN  = 0x6,
} screen_color_t;

esp_err_t screen_driver_init(void);
esp_err_t screen_driver_fill(screen_color_t color);
/* 推送与面板同格式的帧：列优先，每字节 2 个纵向像素（高半字节=偶 y） */
esp_err_t screen_driver_show_frame(const uint8_t *frame, size_t len);
esp_err_t screen_driver_deep_sleep(void);

#endif /* SCREEN_DRIVER_H */
