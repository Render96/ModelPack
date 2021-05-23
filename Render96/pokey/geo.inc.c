#include "src/game/envfx_snow.h"

const GeoLayout pokey_head_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(4, pokey_000_displaylist_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};

const GeoLayout pokey_body_part_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(4, pokey_body_part_000_displaylist_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
