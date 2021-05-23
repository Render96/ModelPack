#include "src/game/envfx_snow.h"

const GeoLayout lakitu_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, lakitu_cameraman_000_offset_mesh),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 132, 0, 0, lakitu_cameraman_000_offset_001_mesh),
						GEO_OPEN_NODE(),
							GEO_SWITCH_CASE(2, geo_switch_anim_state),
							GEO_OPEN_NODE(),
								GEO_NODE_START(),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(4, NULL),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 87, 18, 72, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, lakitu_cameraman_000_offset_002_mesh),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 87, 18, -72, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, lakitu_cameraman_000_offset_003_mesh),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 334, -214, -50, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(1, 0, 0, 0, lakitu_cameraman_000_offset_005_mesh),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(1, 191, 0, 0, lakitu_cameraman_000_offset_006_mesh),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, lakitu_cameraman_002_offset_002_mesh),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, lakitu_cameraman_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, lakitu_cameraman_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, lakitu_cameraman_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, lakitu_cameraman_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, lakitu_cameraman_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, lakitu_cameraman_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, lakitu_cameraman_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, lakitu_cameraman_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};