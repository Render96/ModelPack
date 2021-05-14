#include "src/game/envfx_snow.h"

const GeoLayout cannon_barrel_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, cannon_barrel_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, cannon_barrel_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
