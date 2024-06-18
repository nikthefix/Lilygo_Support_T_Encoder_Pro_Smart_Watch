// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Smartwatch

#include "ui.h"


// COMPONENT weathergroup1

lv_obj_t * ui_weathergroup1_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_weathergroup1;
    cui_weathergroup1 = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_weathergroup1, 106);
    lv_obj_set_height(cui_weathergroup1, 44);
    lv_obj_set_x(cui_weathergroup1, -55);
    lv_obj_set_y(cui_weathergroup1, 32);
    lv_obj_set_align(cui_weathergroup1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(cui_weathergroup1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(cui_weathergroup1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(cui_weathergroup1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_weathergroup1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_weathergroup1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_degree_1;
    cui_degree_1 = lv_label_create(cui_weathergroup1);
    lv_obj_set_width(cui_degree_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_degree_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_degree_1, LV_ALIGN_CENTER);
    lv_label_set_text(cui_degree_1, "25°");
    lv_obj_set_style_text_color(cui_degree_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_degree_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_degree_1, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_cloud_fog_1;
    cui_cloud_fog_1 = lv_img_create(cui_weathergroup1);
    lv_img_set_src(cui_cloud_fog_1, &ui_img_weather_sun_cloud_png);
    lv_obj_set_width(cui_cloud_fog_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_cloud_fog_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_cloud_fog_1, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_cloud_fog_1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_cloud_fog_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_WEATHERGROUP1_NUM);
    children[UI_COMP_WEATHERGROUP1_WEATHERGROUP1] = cui_weathergroup1;
    children[UI_COMP_WEATHERGROUP1_DEGREE_1] = cui_degree_1;
    children[UI_COMP_WEATHERGROUP1_CLOUD_FOG_1] = cui_cloud_fog_1;
    lv_obj_add_event_cb(cui_weathergroup1, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_weathergroup1, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_weathergroup1_create_hook(cui_weathergroup1);
    return cui_weathergroup1;
}

