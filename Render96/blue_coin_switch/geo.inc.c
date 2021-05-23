#include "src/game/envfx_snow.h"

const GeoLayout blue_coin_switch_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(2128),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, blue_coin_switch_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, blue_coin_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, blue_coin_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, blue_coin_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, blue_coin_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, blue_coin_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, blue_coin_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, blue_coin_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, blue_coin_switch_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
