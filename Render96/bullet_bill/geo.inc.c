#include "src/game/envfx_snow.h"

const GeoLayout bullet_bill_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_SHADOW(0, 150, 400),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, bullet_bill_000_displaylist_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, bullet_bill_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, bullet_bill_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, bullet_bill_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, bullet_bill_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, bullet_bill_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, bullet_bill_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, bullet_bill_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, bullet_bill_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
