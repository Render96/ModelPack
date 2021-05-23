#include "src/game/envfx_snow.h"

const GeoLayout wooden_signpost_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 60),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wooden_signpost_000_displaylist_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, wooden_signpost_001_displaylist_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wooden_signpost_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
