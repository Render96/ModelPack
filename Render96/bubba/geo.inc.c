#include "src/game/envfx_snow.h"

const GeoLayout bubba_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(2, geo_switch_anim_state),
			GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(1, bubba_000_displaylist_mesh),
					GEO_DISPLAY_LIST(1, bubba_000_switch_bigmouth_mesh),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
	GEO_END(),
};
