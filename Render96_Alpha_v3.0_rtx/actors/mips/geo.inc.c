#include "src/game/envfx_snow.h"

const GeoLayout mips_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 0, 0, 0, mips_000_offset_mesh),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 64, 0, 0, mips_000_offset_001_mesh),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 52, -24, -32, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 0, 0, 0, mips_000_offset_003_mesh),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(1, mips_000_offset_004_skinned),
									GEO_ANIMATED_PART(1, 79, 0, 0, mips_000_offset_004_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(1, 52, -24, 32, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 0, 0, 0, mips_000_offset_005_mesh),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(1, mips_000_offset_006_skinned),
									GEO_ANIMATED_PART(1, 79, 0, 0, mips_000_offset_006_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, -31, 4, -39, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, mips_000_offset_007_mesh),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 45, 0, 0, mips_000_offset_008_mesh),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(1, mips_000_offset_009_skinned),
									GEO_ANIMATED_PART(1, 52, 0, 0, mips_000_offset_009_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, -31, 4, 40, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 0, 0, 0, mips_000_offset_010_mesh),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 45, 0, 0, mips_000_offset_011_mesh),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(1, mips_000_offset_012_skinned),
									GEO_ANIMATED_PART(1, 52, 0, 0, mips_000_offset_012_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, mips_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, mips_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, mips_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, mips_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, mips_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, mips_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, mips_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, mips_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};