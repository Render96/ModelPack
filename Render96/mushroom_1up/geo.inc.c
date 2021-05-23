#include "src/game/envfx_snow.h"

const GeoLayout mushroom_1up_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 80),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(4, mushroom_1up_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, mushroom_1up_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, mushroom_1up_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, mushroom_1up_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, mushroom_1up_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, mushroom_1up_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, mushroom_1up_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, mushroom_1up_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, mushroom_1up_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
