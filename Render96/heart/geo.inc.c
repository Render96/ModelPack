#include "src/game/envfx_snow.h"

const GeoLayout heart_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 100, 100),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, heart_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, heart_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, heart_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, heart_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, heart_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, heart_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, heart_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, heart_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, heart_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
