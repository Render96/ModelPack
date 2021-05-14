#include "src/game/envfx_snow.h"

const GeoLayout bowser_bomb_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(1000),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 196608),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, bomb_000_displaylist_mesh),
				GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
				GEO_OPEN_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bomb_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
