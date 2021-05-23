#include "src/game/envfx_snow.h"

const GeoLayout warp_pipe_boo_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(74468),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, NULL),
			GEO_DISPLAY_LIST(1, warp_pipe_boo_001_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, warp_pipe_boo_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, warp_pipe_boo_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, warp_pipe_boo_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, warp_pipe_boo_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, warp_pipe_boo_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, warp_pipe_boo_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, warp_pipe_boo_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, warp_pipe_boo_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
