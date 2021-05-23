#include "src/game/envfx_snow.h"

const GeoLayout cannon_barrel_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, cannon_barrel_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, cannon_barrel_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, cannon_barrel_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, cannon_barrel_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, cannon_barrel_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, cannon_barrel_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, cannon_barrel_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, cannon_barrel_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, cannon_barrel_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
