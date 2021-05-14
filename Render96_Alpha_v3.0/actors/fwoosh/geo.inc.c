#include "src/game/envfx_snow.h"

const GeoLayout fwoosh_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(42553),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(5, fwoosh_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, fwoosh_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, fwoosh_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, fwoosh_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, fwoosh_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, fwoosh_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, fwoosh_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, fwoosh_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, fwoosh_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
