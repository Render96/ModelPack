const GeoLayout cap_switch_geo[] = {
   GEO_CULLING_RADIUS(600),
   GEO_OPEN_NODE(),
      GEO_SWITCH_CASE(4, geo_switch_anim_state),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, capswitch_000_displaylist_001_mesh_mat_override_fly_0),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, capswitch_000_displaylist_001_mesh_mat_override_metal_2),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, capswitch_000_displaylist_001_mesh_mat_override_invis_1),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, capswitch_000_displaylist_001_mesh_mat_override_fly_0),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
