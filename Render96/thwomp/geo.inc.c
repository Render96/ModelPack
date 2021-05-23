#include "src/game/envfx_snow.h"

const GeoLayout thwomp_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 300),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, thwomp_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, thwomp_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, thwomp_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, thwomp_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, thwomp_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, thwomp_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, thwomp_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, thwomp_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, thwomp_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
