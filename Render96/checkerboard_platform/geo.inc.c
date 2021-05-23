#include "src/game/envfx_snow.h"

const GeoLayout checkerboard_platform_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(85106),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, checkerboard_platform_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, checkerboard_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, checkerboard_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, checkerboard_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, checkerboard_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, checkerboard_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, checkerboard_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, checkerboard_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, checkerboard_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
