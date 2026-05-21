#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

#define SYS_LOGO_IMG_HEIGHT 140
#define SYS_STATUS_WIDTH 20
#define SYS_STATUS_IMG_WIDTH 160
#define SYS_STATUS_IMG_HEIGHT 68
#define CANVAS_SIZE 20

struct status_state {
    uint8_t battery;
    bool charging;
    bool connected;
};

struct zmk_widget_status {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_color_t cbuf[CANVAS_SIZE * CANVAS_SIZE];
    struct status_state state;
};

int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget);
