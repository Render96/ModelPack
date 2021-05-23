#include "src/game/envfx_snow.h"

const GeoLayout purple_switch_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(63830),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, purple_switch_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, purple_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, purple_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, purple_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, purple_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, purple_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, purple_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, purple_switch_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, purple_switch_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
