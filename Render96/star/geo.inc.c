#include "src/game/envfx_snow.h"

const GeoLayout star_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 155, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 16384),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, star_000_displaylist_mesh),
				GEO_DISPLAY_LIST(4, star_001_displaylist_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, star_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, star_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, star_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, star_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, star_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, star_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, star_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, star_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
