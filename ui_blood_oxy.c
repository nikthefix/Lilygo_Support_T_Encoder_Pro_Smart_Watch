// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Smartwatch

#include "ui.h"

void ui_blood_oxy_screen_init(void)
{
    ui_blood_oxy = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_blood_oxy, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_blood_oxy, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blood_oxy, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bg6 = lv_img_create(ui_blood_oxy);
    lv_img_set_src(ui_bg6, &ui_img_bg3_png);
    lv_obj_set_width(ui_bg6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_bg6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_bg6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bg6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_title_group_1 = ui_titlegroup_create(ui_blood_oxy);
    lv_obj_set_x(ui_title_group_1, 0);
    lv_obj_set_y(ui_title_group_1, -303);
    lv_obj_set_align(ui_title_group_1, LV_ALIGN_BOTTOM_MID);

    lv_obj_set_x(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), 0);
    lv_obj_set_y(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), 0);
    lv_obj_set_align(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), "SpO2");
    lv_obj_set_style_text_font(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), &ui_font_Subtitle,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_label_set_text(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_SUBTITLE), "Blood Oxygen");

    ui_button_down5 = ui_buttondown_create(ui_blood_oxy);
    lv_obj_set_x(ui_button_down5, 146);
    lv_obj_set_y(ui_button_down5, 102);

    lv_img_set_src(ui_comp_get_child(ui_button_down5, UI_COMP_BUTTONDOWN_BUTTON_DOWN_ICON), &ui_img_house_png);

    ui_button_round = ui_buttonround_create(ui_blood_oxy);
    lv_obj_set_x(ui_button_round, 0);
    lv_obj_set_y(ui_button_round, -45);

    ui_blood_presure_group = lv_obj_create(ui_blood_oxy);
    lv_obj_set_height(ui_blood_presure_group, 106);
    lv_obj_set_width(ui_blood_presure_group, LV_SIZE_CONTENT);   /// 186
    lv_obj_set_x(ui_blood_presure_group, 0);
    lv_obj_set_y(ui_blood_presure_group, -15);
    lv_obj_set_align(ui_blood_presure_group, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_blood_presure_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_blood_presure_group, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_blood_presure_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_blood_presure_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blood_presure_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blood_oxygen = lv_label_create(ui_blood_presure_group);
    lv_obj_set_height(ui_blood_oxygen, lv_pct(80));
    lv_obj_set_width(ui_blood_oxygen, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_blood_oxygen, LV_ALIGN_CENTER);
    lv_label_set_text(ui_blood_oxygen, "91");
    lv_obj_set_style_text_color(ui_blood_oxygen, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_blood_oxygen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_blood_oxygen, &ui_font_Number_big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_percent = lv_label_create(ui_blood_presure_group);
    lv_obj_set_width(ui_percent, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_percent, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_percent, LV_ALIGN_CENTER);
    lv_label_set_text(ui_percent, "%");
    lv_obj_set_style_text_color(ui_percent, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_percent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_percent, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pulse_group = ui_pulsegroup_create(ui_blood_oxy);
    lv_obj_set_x(ui_pulse_group, 0);
    lv_obj_set_y(ui_pulse_group, 53);
    lv_obj_set_style_border_color(ui_pulse_group, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pulse_group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pulse_group, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pulse_group, LV_BORDER_SIDE_TOP, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_arc_spo2 = lv_arc_create(ui_blood_oxy);
    lv_obj_set_width(ui_arc_spo2, 370);
    lv_obj_set_height(ui_arc_spo2, 370);
    lv_obj_set_align(ui_arc_spo2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_spo2, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_arc_set_value(ui_arc_spo2, 91);
    lv_arc_set_bg_angles(ui_arc_spo2, 145, 335);
    lv_obj_set_style_arc_color(ui_arc_spo2, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_spo2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_spo2, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_spo2, lv_color_hex(0x41A1E6), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_spo2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_spo2, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_arc_spo2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_spo2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_precent_70 = lv_label_create(ui_blood_oxy);
    lv_obj_set_width(ui_precent_70, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_precent_70, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_precent_70, 53);
    lv_obj_set_y(ui_precent_70, -65);
    lv_obj_set_align(ui_precent_70, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_precent_70, "70%");
    lv_obj_set_style_text_color(ui_precent_70, lv_color_hex(0x6A6D6A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_precent_70, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_precent_70, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_precent_100 = lv_label_create(ui_blood_oxy);
    lv_obj_set_width(ui_precent_100, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_precent_100, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_precent_100, -19);
    lv_obj_set_y(ui_precent_100, -58);
    lv_obj_set_align(ui_precent_100, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_precent_100, "100%");
    lv_obj_set_style_text_color(ui_precent_100, lv_color_hex(0x6A6D6A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_precent_100, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_precent_100, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_health_dots_group = lv_obj_create(ui_blood_oxy);
    lv_obj_set_width(ui_health_dots_group, 102);
    lv_obj_set_height(ui_health_dots_group, 18);
    lv_obj_set_x(ui_health_dots_group, 0);
    lv_obj_set_y(ui_health_dots_group, -15);
    lv_obj_set_align(ui_health_dots_group, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_health_dots_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_health_dots_group, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_health_dots_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_health_dots_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_health_dots_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_health_dots_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_health_dots_group, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot7 = lv_obj_create(ui_health_dots_group);
    lv_obj_set_width(ui_dot7, 10);
    lv_obj_set_height(ui_dot7, 10);
    lv_obj_set_align(ui_dot7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dot7, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot6 = lv_obj_create(ui_health_dots_group);
    lv_obj_set_width(ui_dot6, 6);
    lv_obj_set_height(ui_dot6, 6);
    lv_obj_set_align(ui_dot6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dot6, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot6, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot5 = lv_obj_create(ui_health_dots_group);
    lv_obj_set_width(ui_dot5, 6);
    lv_obj_set_height(ui_dot5, 6);
    lv_obj_set_align(ui_dot5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dot5, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot5, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dots_group1 = lv_obj_create(ui_blood_oxy);
    lv_obj_set_width(ui_dots_group1, 20);
    lv_obj_set_height(ui_dots_group1, 50);
    lv_obj_set_x(ui_dots_group1, -10);
    lv_obj_set_y(ui_dots_group1, 0);
    lv_obj_set_align(ui_dots_group1, LV_ALIGN_RIGHT_MID);
    lv_obj_set_flex_flow(ui_dots_group1, LV_FLEX_FLOW_COLUMN_REVERSE);
    lv_obj_set_flex_align(ui_dots_group1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dots_group1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_dots_group1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dots_group1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_dots_group1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_dots_group1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot18 = lv_obj_create(ui_dots_group1);
    lv_obj_set_width(ui_dot18, 10);
    lv_obj_set_height(ui_dot18, 10);
    lv_obj_set_align(ui_dot18, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot18, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dot18, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot19 = lv_obj_create(ui_dots_group1);
    lv_obj_set_width(ui_dot19, 6);
    lv_obj_set_height(ui_dot19, 6);
    lv_obj_set_align(ui_dot19, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot19, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dot19, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot19, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_button_down5, ui_event_button_down5_buttondown, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_button_round, ui_event_button_round_buttonround, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_blood_oxy, ui_event_blood_oxy, LV_EVENT_ALL, NULL);

}
