/**
 * @file scale_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "scale_gen.h"
#include "lvgl_test.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * scale_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t items;
    static lv_style_t indicator;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&items);
        lv_style_set_length(&items, 5);

        lv_style_init(&indicator);
        lv_style_set_length(&indicator, 10);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_align(lv_obj_0, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_obj_0, lv_pct(100));
    lv_obj_set_height(lv_obj_0, lv_pct(100));

    lv_obj_t * lv_scale_0 = lv_scale_create(lv_obj_0);
    static const char *lv_scale_0_text_src[] = {"my_string_array", NULL};
    lv_scale_set_text_src(lv_scale_0, lv_scale_0_text_src);
    lv_obj_set_align(lv_scale_0, LV_ALIGN_CENTER);
    lv_scale_set_mode(lv_scale_0, LV_SCALE_MODE_ROUND_OUTER);
    lv_scale_set_total_tick_count(lv_scale_0, 21);
    lv_scale_set_major_tick_every(lv_scale_0, 5);
    lv_scale_set_min_value(lv_scale_0, 0);
    lv_scale_set_max_value(lv_scale_0, 100);
    lv_scale_set_label_show(lv_scale_0, true);
    lv_scale_section_t * lv_scale_section_0 = lv_scale_add_section(lv_scale_0);
    lv_scale_set_section_style_items(lv_scale_0, lv_scale_section_0, &items);
    lv_scale_set_section_style_indicator(lv_scale_0, lv_scale_section_0, &indicator);
    lv_scale_add_section(lv_scale_0);

    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "scale_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

