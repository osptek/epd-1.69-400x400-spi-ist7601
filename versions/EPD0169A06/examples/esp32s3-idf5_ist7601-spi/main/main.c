/*
 * SPDX-FileCopyrightText: Copyright 2026 OSPTEK
 * SPDX-License-Identifier: CC-BY-4.0
 *
 * https://github.com/osptek
 */

#include "esp_log.h"
#include "screen_driver.h"

static const char *TAG = "main";

static uint8_t s_frame[SCREEN_FRAME_BYTES];

static void make_color_bars(void)
{
    static const screen_color_t colors[] = {
        SCREEN_COLOR_BLACK,
        SCREEN_COLOR_WHITE,
        SCREEN_COLOR_YELLOW,
        SCREEN_COLOR_RED,
        SCREEN_COLOR_BLUE,
        SCREEN_COLOR_GREEN,
    };

    /*
     * 帧格式为列优先，每字节包含同一列的两个纵向像素。
     * 竖向色条整列同色，因此可以直接填充每列的 200 字节。
     */
    for (int x = 0; x < SCREEN_WIDTH; x++) {
        const screen_color_t color = colors[x * 6 / SCREEN_WIDTH];
        const uint8_t packed = (uint8_t)((color << 4) | color);

        for (int y = 0; y < SCREEN_HEIGHT / 2; y++) {
            s_frame[x * (SCREEN_HEIGHT / 2) + y] = packed;
        }
    }
}

void app_main(void)
{
    ESP_LOGI(TAG, "initializing IST7601");
    ESP_ERROR_CHECK(screen_driver_init());

    ESP_LOGI(TAG, "displaying color bars");
    make_color_bars();
    ESP_ERROR_CHECK(screen_driver_show_frame(s_frame, sizeof(s_frame)));
    ESP_LOGI(TAG, "color bars displayed");
}
