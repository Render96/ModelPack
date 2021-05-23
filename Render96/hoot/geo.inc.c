#include "src/game/envfx_snow.h"

const GeoLayout hoot_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 255, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 147, -5, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, hoot_000_offset_mesh),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 96, 0, 0, hoot_000_offset_001_mesh),
						GEO_ANIMATED_PART(1, 34, -35, 31, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(4, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(4, 91, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(4, 121, 0, 0, NULL),
									GEO_ANIMATED_PART(1, 121, 0, 0, NULL),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(1, 91, 0, 0, NULL),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(4, 0, 0, 0, hoot_002_offset_001_mesh),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, -31, 5, 37, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, hoot_000_offset_005_mesh),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 42, 0, 0, hoot_000_offset_006_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, -31, 5, -37, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, hoot_000_offset_007_mesh),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 42, 0, 0, hoot_000_offset_008_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 34, -35, -31, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(4, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(4, 91, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(4, 121, 0, 0, NULL),
									GEO_ANIMATED_PART(1, 121, 0, 0, NULL),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(1, 91, 0, 0, NULL),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(4, 0, 0, 0, hoot_002_offset_003_mesh),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
							GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, hoot_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, hoot_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, hoot_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, hoot_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, hoot_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, hoot_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, hoot_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, hoot_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};