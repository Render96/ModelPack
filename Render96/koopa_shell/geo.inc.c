#include "src/game/envfx_snow.h"

const GeoLayout koopa_shell_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 70),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 65536),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, koopa_shell_000_displaylist_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(0, koopa_shell_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, koopa_shell_material_revert_render_settings),
		GEO_DISPLAY_LIST(2, koopa_shell_material_revert_render_settings),
		GEO_DISPLAY_LIST(3, koopa_shell_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, koopa_shell_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, koopa_shell_material_revert_render_settings),
		GEO_DISPLAY_LIST(6, koopa_shell_material_revert_render_settings),
		GEO_DISPLAY_LIST(7, koopa_shell_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
