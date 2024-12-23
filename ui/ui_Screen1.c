// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Screen1, &ui_img_832136546, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Quotes = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Quotes, 238);
    lv_obj_set_height(ui_Quotes, 309);
    lv_obj_set_x(ui_Quotes, -141);
    lv_obj_set_y(ui_Quotes, 1);
    lv_obj_set_align(ui_Quotes, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Quotes, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Maadhu = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Maadhu, 238);
    lv_obj_set_height(ui_Maadhu, 309);
    lv_obj_set_x(ui_Maadhu, 193);
    lv_obj_set_y(ui_Maadhu, 2);
    lv_obj_set_align(ui_Maadhu, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Maadhu, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button3 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button3, 100);
    lv_obj_set_height(ui_Button3, 69);
    lv_obj_set_x(ui_Button3, -338);
    lv_obj_set_y(ui_Button3, -115);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button3, &ui_img_home_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image26 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image26, &ui_img_gallery_png);
    lv_obj_set_width(ui_Image26, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_height(ui_Image26, LV_SIZE_CONTENT);    /// 64
    lv_obj_set_x(ui_Image26, -337);
    lv_obj_set_y(ui_Image26, -21);
    lv_obj_set_align(ui_Image26, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image26, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image26, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button1, 100);
    lv_obj_set_height(ui_Button1, 69);
    lv_obj_set_x(ui_Button1, -338);
    lv_obj_set_y(ui_Button1, -23);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);

}
