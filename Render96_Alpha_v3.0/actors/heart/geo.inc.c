#include "src/game/envfx_snow.h"

const GeoLayout heart_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 100, 100),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, heart_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, heart_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
