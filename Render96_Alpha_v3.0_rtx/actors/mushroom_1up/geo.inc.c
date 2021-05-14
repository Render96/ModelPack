#include "src/game/envfx_snow.h"

const GeoLayout mushroom_1up_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 80),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, mushroom_1up_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, mushroom_1up_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
