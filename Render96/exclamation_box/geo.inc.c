
const GeoLayout exclamation_box_geo[] = {
   GEO_CULLING_RADIUS(300),
   GEO_OPEN_NODE(),
      GEO_SHADOW(SHADOW_SQUARE_PERMANENT, 0xB4, 70),
      GEO_OPEN_NODE(),
         GEO_SWITCH_CASE(4, geo_switch_anim_state),
         GEO_OPEN_NODE(),
            GEO_DISPLAY_LIST(1, exclamation_box_000_displaylist_mesh_mat_override_fly_0),
            GEO_DISPLAY_LIST(1, exclamation_box_000_displaylist_mesh_mat_override_metal_1),
            GEO_DISPLAY_LIST(1, exclamation_box_000_displaylist_mesh_mat_override_invis_2),
            GEO_DISPLAY_LIST(1, exclamation_box_000_displaylist_mesh_mat_override_yellow_3),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
