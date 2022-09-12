/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <lvgl.h>
#include <kernel.h>

struct nemm_luna_widget {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_anim_t anim;
};

int nemm_luna_widget_init(struct nemm_luna_widget *widget, lv_obj_t *parent);
lv_obj_t *nemm_luna_widget_obj(struct nemm_luna_widget *widget);