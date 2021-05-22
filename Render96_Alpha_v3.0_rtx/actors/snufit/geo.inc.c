#include "src/game/envfx_snow.h"

const GeoLayout snufit_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_snufit_move_mask),
				GEO_TRANSLATE_NODE(LAYER_FORCE, 0, 0, 0),
				GEO_OPEN_NODE(),
				GEO_CLOSE_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, snufit_003_displaylist_mesh),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, snufit_004_displaylist_mesh),
				GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ASM(0, geo_snufit_scale_body),
					GEO_SCALE(LAYER_FORCE, 1),
					GEO_OPEN_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, snufit_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};