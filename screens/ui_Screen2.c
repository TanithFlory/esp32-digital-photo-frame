// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Screen2, &ui_img_832136546, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button2, 100);
    lv_obj_set_height(ui_Button2, 69);
    lv_obj_set_x(ui_Button2, -338);
    lv_obj_set_y(ui_Button2, -115);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button2, &ui_img_home_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image1, &ui_img_gallery_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 64
    lv_obj_set_x(ui_Image1, -337);
    lv_obj_set_y(ui_Image1, -21);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button4 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button4, 100);
    lv_obj_set_height(ui_Button4, 69);
    lv_obj_set_x(ui_Button4, -338);
    lv_obj_set_y(ui_Button4, -23);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image27 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image27, &ui_img_166634345);
    lv_obj_set_width(ui_Image27, LV_SIZE_CONTENT);   /// 196
    lv_obj_set_height(ui_Image27, LV_SIZE_CONTENT);    /// 196
    lv_obj_set_x(ui_Image27, 18);
    lv_obj_set_y(ui_Image27, -7);
    lv_obj_set_align(ui_Image27, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image27, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image27, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);

}
