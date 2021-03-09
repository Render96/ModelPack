Lights1 checkerboard_platform_checkerboard_platform_dark_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 checkerboard_platform_checkerboard_platform_light_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx checkerboard_platform_checkerboard_platform_dark_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 checkerboard_platform_checkerboard_platform_dark_rgba32[] = "actors/checkerboard_platform/checkerboard_platform_dark.rgba32";

Gfx checkerboard_platform_checkerboard_platform_light_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 checkerboard_platform_checkerboard_platform_light_rgba32[] = "actors/checkerboard_platform/checkerboard_platform_light.rgba32";

Gfx checkerboard_platform_checkerboard_platform_ball_side_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 checkerboard_platform_checkerboard_platform_ball_side_rgba32[] = "actors/checkerboard_platform/checkerboard_platform_ball_side.rgba32";

Vtx checkerboard_platform_000_displaylist_mesh_vtx_0[104] = {
	{{{255, -26, 51},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, 26, 153},0, {4080, 4080},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, -26, 153},0, {4080, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, 26, 51},0, {-16, 4080},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, -26, 153},0, {-16, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{255, 26, 153},0, {4080, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{153, 26, 153},0, {4080, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{153, -26, 153},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-153, -26, 153},0, {-16, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-255, 26, 153},0, {4080, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-255, -26, 153},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-153, 26, 153},0, {4080, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-255, -26, 153},0, {4080, 4080},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, 26, 153},0, {4080, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, 26, 51},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, -26, 51},0, {-16, 4080},{0x81, 0x0, 0x0, 0xFF}}},
	{{{153, -26, -153},0, {-16, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{255, 26, -153},0, {4080, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{255, -26, -153},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{153, 26, -153},0, {4080, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{255, -26, -153},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, 26, -153},0, {-16, 4080},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, 26, -51},0, {4080, 4080},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, -26, -51},0, {4080, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-255, -26, -51},0, {4080, 4080},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, 26, -153},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, -26, -153},0, {-16, 4080},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, 26, -51},0, {4080, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, -26, -153},0, {-16, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-255, 26, -153},0, {4080, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-153, 26, -153},0, {4080, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-153, -26, -153},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{51, -26, 153},0, {-16, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-51, 26, 153},0, {4080, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-51, -26, 153},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{51, 26, 153},0, {4080, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-51, -26, -153},0, {-16, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{51, 26, -153},0, {4080, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{51, -26, -153},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-51, 26, -153},0, {4080, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{153, -26, -51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{255, -26, -153},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{255, -26, -51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, -153},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, 153},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, 51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{255, -26, 51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{255, -26, 153},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-255, -26, 153},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-255, -26, 51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, 51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, 153},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-255, -26, -51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-255, -26, -153},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, -153},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, -51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, 26, 51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, 153},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{255, 26, 153},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{255, 26, 51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-255, 26, 51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-255, 26, 153},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, 153},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, 51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, -153},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{255, 26, -51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{255, 26, -153},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, -51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-255, 26, -153},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-255, 26, -51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, -51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, -153},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, 51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, 153},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, 153},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, 51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, -153},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, -51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, -51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, -153},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, -51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, 51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, 51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, -51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, -51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, 51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, 51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, -51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, -26, 153},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, 51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, 51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, 153},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, -51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, -153},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, -153},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, -51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, 51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, -51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, -51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, 51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, 51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, -51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, -51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, 51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx checkerboard_platform_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_0 + 96, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};Vtx checkerboard_platform_000_displaylist_mesh_vtx_1[80] = {
	{{{-255, -26, 51},0, {4080, 4080},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, 26, -51},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, -26, -51},0, {-16, 4080},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-255, 26, 51},0, {4080, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{255, -26, -51},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, 26, 51},0, {4080, 4080},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, -26, 51},0, {4080, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{255, 26, -51},0, {-16, 4080},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-51, -26, 153},0, {-16, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-153, 26, 153},0, {4080, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-153, -26, 153},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-51, 26, 153},0, {4080, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{153, -26, 153},0, {-16, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{51, 26, 153},0, {4080, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{51, -26, 153},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{153, 26, 153},0, {4080, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{51, -26, -153},0, {-16, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{153, 26, -153},0, {4080, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{153, -26, -153},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{51, 26, -153},0, {4080, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-153, -26, -153},0, {-16, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-51, 26, -153},0, {4080, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-51, -26, -153},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-153, 26, -153},0, {4080, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{153, -26, 51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, -51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{255, -26, -51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{255, -26, 51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-255, -26, 51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-255, -26, -51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, -51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, 51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-255, 26, -51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-255, 26, 51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, 51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, -51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, -51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{255, 26, 51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{255, 26, -51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, 51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, 51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, 153},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, 153},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, 51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, 51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, 153},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, 153},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, 51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, -153},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, 26, -51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, -51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, -153},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, -153},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, -51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, -51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{153, 26, -153},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, -51},0, {-16, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-51, 26, 51},0, {4080, 4080},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, 51},0, {4080, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{51, 26, -51},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-153, -26, 153},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, 51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, 51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, 153},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, 153},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, 51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, 51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, 153},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, -51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, -153},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, -153},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{153, -26, -51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, -51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-153, -26, -153},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, -153},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, -51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, 51},0, {4080, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-51, -26, -51},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, -51},0, {-16, 4080},{0x0, 0x81, 0x0, 0xFF}}},
	{{{51, -26, 51},0, {4080, 4080},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx checkerboard_platform_000_displaylist_mesh_tri_1[] = {
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_1 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_1 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};Vtx checkerboard_platform_000_displaylist_mesh_vtx_2[211] = {
	{{{-255, -6, 113},0, {741, 229},{0x0, 0x96, 0x47, 0xFF}}},
	{{{-267, 0, 113},0, {1008, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-265, -5, 110},0, {752, -16},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{-255, 0, 117},0, {1008, 236},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-245, -5, 110},0, {667, 411},{0x39, 0x9E, 0x39, 0xFF}}},
	{{{-242, 0, 113},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-242, -6, 100},0, {738, 752},{0x47, 0x96, 0x0, 0xFF}}},
	{{{-255, -9, 100},0, {492, 752},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-255, -6, 113},0, {485, 485},{0x0, 0x96, 0x47, 0xFF}}},
	{{{-267, -6, 100},0, {240, 752},{0xB9, 0x96, 0x0, 0xFF}}},
	{{{-265, -5, 110},0, {240, 496},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{-265, -5, 90},0, {240, 1008},{0xC7, 0x9E, 0xC7, 0xFF}}},
	{{{-255, -6, 88},0, {485, 1019},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{-245, -5, 90},0, {667, 1093},{0x39, 0x9E, 0xC7, 0xFF}}},
	{{{-237, 0, 100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-242, 0, 88},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-255, -6, 88},0, {741, 1275},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{-242, 0, 88},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-245, -5, 90},0, {667, 1093},{0x39, 0x9E, 0xC7, 0xFF}}},
	{{{-255, 0, 83},0, {1008, 1268},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-265, -5, 90},0, {752, 1520},{0xC7, 0x9E, 0xC7, 0xFF}}},
	{{{-267, 0, 88},0, {1008, 1520},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-267, -6, 100},0, {752, 1776},{0xB9, 0x96, 0x0, 0xFF}}},
	{{{-272, 0, 100},0, {1008, 1776},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-265, -5, 110},0, {752, 2032},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{-267, 0, 113},0, {1008, 2032},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-267, 6, 100},0, {1264, 1776},{0xB9, 0x6A, 0x0, 0xFF}}},
	{{{-265, 5, 110},0, {1264, 2032},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{-265, 5, 90},0, {1264, 1520},{0xC7, 0x62, 0xC7, 0xFF}}},
	{{{-255, 6, 88},0, {1275, 1275},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{-245, 5, 90},0, {1349, 1093},{0x39, 0x62, 0xC7, 0xFF}}},
	{{{-242, 6, 100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{-245, 5, 90},0, {1349, 1093},{0x39, 0x62, 0xC7, 0xFF}}},
	{{{-255, 9, 100},0, {1524, 752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-242, 6, 100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{-255, 6, 88},0, {1531, 1019},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{-267, 6, 100},0, {1776, 752},{0xB9, 0x6A, 0x0, 0xFF}}},
	{{{-265, 5, 90},0, {1776, 1008},{0xC7, 0x62, 0xC7, 0xFF}}},
	{{{-265, 5, 110},0, {1776, 496},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{-255, 6, 113},0, {1531, 485},{0x0, 0x6A, 0x47, 0xFF}}},
	{{{-245, 5, 110},0, {1349, 411},{0x39, 0x62, 0x39, 0xFF}}},
	{{{-237, 0, 100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-242, 0, 113},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-255, 6, 113},0, {1275, 229},{0x0, 0x6A, 0x47, 0xFF}}},
	{{{-255, 0, 117},0, {1008, 236},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-265, 5, 110},0, {1264, -16},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{-267, 0, 113},0, {1008, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-242, -6, 100},0, {738, 752},{0x47, 0x96, 0x0, 0xFF}}},
	{{{-242, 0, 88},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-242, 6, 100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{-237, 0, 100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-255, -6, -88},0, {741, 229},{0x0, 0x96, 0x47, 0xFF}}},
	{{{-267, 0, -88},0, {1008, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-265, -5, -90},0, {752, -16},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{-255, 0, -83},0, {1008, 236},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-245, -5, -90},0, {667, 411},{0x39, 0x9E, 0x39, 0xFF}}},
	{{{-242, 0, -88},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-242, -6, -100},0, {738, 752},{0x47, 0x96, 0x0, 0xFF}}},
	{{{-255, -9, -100},0, {492, 752},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-255, -6, -88},0, {485, 485},{0x0, 0x96, 0x47, 0xFF}}},
	{{{-267, -6, -100},0, {240, 752},{0xB9, 0x96, 0x0, 0xFF}}},
	{{{-265, -5, -90},0, {240, 496},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{-265, -5, -110},0, {240, 1008},{0xC7, 0x9E, 0xC7, 0xFF}}},
	{{{-255, -6, -112},0, {485, 1019},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{-255, -6, -112},0, {485, 1019},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{-245, -5, -110},0, {667, 1093},{0x39, 0x9E, 0xC7, 0xFF}}},
	{{{-242, -6, -100},0, {738, 752},{0x47, 0x96, 0x0, 0xFF}}},
	{{{-237, 0, -100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-242, 0, -112},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-255, -6, -112},0, {741, 1275},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{-255, 0, -117},0, {1008, 1268},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-265, -5, -110},0, {752, 1520},{0xC7, 0x9E, 0xC7, 0xFF}}},
	{{{-267, 0, -112},0, {1008, 1520},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-267, -6, -100},0, {752, 1776},{0xB9, 0x96, 0x0, 0xFF}}},
	{{{-272, 0, -100},0, {1008, 1776},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-265, -5, -90},0, {752, 2032},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{-267, 0, -88},0, {1008, 2032},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-267, 6, -100},0, {1264, 1776},{0xB9, 0x6A, 0x0, 0xFF}}},
	{{{-265, 5, -90},0, {1264, 2032},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{-265, 5, -110},0, {1264, 1520},{0xC7, 0x62, 0xC7, 0xFF}}},
	{{{-267, 0, -112},0, {1008, 1520},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-265, 5, -110},0, {1264, 1520},{0xC7, 0x62, 0xC7, 0xFF}}},
	{{{-255, 6, -112},0, {1275, 1275},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{-255, 0, -117},0, {1008, 1268},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-245, 5, -110},0, {1349, 1093},{0x39, 0x62, 0xC7, 0xFF}}},
	{{{-242, 0, -112},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-242, 6, -100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{-255, 9, -100},0, {1524, 752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-255, 6, -112},0, {1531, 1019},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{-267, 6, -100},0, {1776, 752},{0xB9, 0x6A, 0x0, 0xFF}}},
	{{{-265, 5, -110},0, {1776, 1008},{0xC7, 0x62, 0xC7, 0xFF}}},
	{{{-265, 5, -90},0, {1776, 496},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{-255, 6, -88},0, {1531, 485},{0x0, 0x6A, 0x47, 0xFF}}},
	{{{-245, 5, -90},0, {1349, 411},{0x39, 0x62, 0x39, 0xFF}}},
	{{{-237, 0, -100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-242, 0, -88},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-242, 0, -88},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-245, 5, -90},0, {1349, 411},{0x39, 0x62, 0x39, 0xFF}}},
	{{{-255, 6, -88},0, {1275, 229},{0x0, 0x6A, 0x47, 0xFF}}},
	{{{-255, 0, -83},0, {1008, 236},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-265, 5, -90},0, {1264, -16},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{-267, 0, -88},0, {1008, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-242, -6, -100},0, {738, 752},{0x47, 0x96, 0x0, 0xFF}}},
	{{{-237, 0, -100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-242, 0, -112},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-242, 6, -100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{254, -6, -88},0, {741, 229},{0x0, 0x96, 0x47, 0xFF}}},
	{{{241, 0, -88},0, {1008, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{243, -5, -90},0, {752, -16},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{254, 0, -83},0, {1008, 236},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{264, -5, -90},0, {667, 411},{0x39, 0x9E, 0x39, 0xFF}}},
	{{{266, 0, -88},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{266, -6, -100},0, {738, 752},{0x47, 0x96, 0x0, 0xFF}}},
	{{{266, 0, -88},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{264, -5, -90},0, {667, 411},{0x39, 0x9E, 0x39, 0xFF}}},
	{{{254, -9, -100},0, {492, 752},{0x0, 0x81, 0x0, 0xFF}}},
	{{{254, -6, -88},0, {485, 485},{0x0, 0x96, 0x47, 0xFF}}},
	{{{241, -6, -100},0, {240, 752},{0xB9, 0x96, 0x0, 0xFF}}},
	{{{243, -5, -90},0, {240, 496},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{243, -5, -110},0, {240, 1008},{0xC7, 0x9E, 0xC7, 0xFF}}},
	{{{254, -6, -112},0, {485, 1019},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{264, -5, -110},0, {667, 1093},{0x39, 0x9E, 0xC7, 0xFF}}},
	{{{271, 0, -100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{266, 0, -112},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{254, -6, -112},0, {741, 1275},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{254, 0, -117},0, {1008, 1268},{0x0, 0x0, 0x81, 0xFF}}},
	{{{243, -5, -110},0, {752, 1520},{0xC7, 0x9E, 0xC7, 0xFF}}},
	{{{241, 0, -112},0, {1008, 1520},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{241, -6, -100},0, {752, 1776},{0xB9, 0x96, 0x0, 0xFF}}},
	{{{241, 0, -112},0, {1008, 1520},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{243, -5, -110},0, {752, 1520},{0xC7, 0x9E, 0xC7, 0xFF}}},
	{{{236, 0, -100},0, {1008, 1776},{0x81, 0x0, 0x0, 0xFF}}},
	{{{243, -5, -90},0, {752, 2032},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{241, 0, -88},0, {1008, 2032},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{241, 6, -100},0, {1264, 1776},{0xB9, 0x6A, 0x0, 0xFF}}},
	{{{243, 5, -90},0, {1264, 2032},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{243, 5, -110},0, {1264, 1520},{0xC7, 0x62, 0xC7, 0xFF}}},
	{{{254, 6, -112},0, {1275, 1275},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{254, 0, -117},0, {1008, 1268},{0x0, 0x0, 0x81, 0xFF}}},
	{{{264, 5, -110},0, {1349, 1093},{0x39, 0x62, 0xC7, 0xFF}}},
	{{{266, 0, -112},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{266, 6, -100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{254, 9, -100},0, {1524, 752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{254, 6, -112},0, {1531, 1019},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{254, 6, -112},0, {1531, 1019},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{241, 6, -100},0, {1776, 752},{0xB9, 0x6A, 0x0, 0xFF}}},
	{{{254, 9, -100},0, {1524, 752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{243, 5, -110},0, {1776, 1008},{0xC7, 0x62, 0xC7, 0xFF}}},
	{{{243, 5, -90},0, {1776, 496},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{254, 6, -88},0, {1531, 485},{0x0, 0x6A, 0x47, 0xFF}}},
	{{{266, 6, -100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{264, 5, -90},0, {1349, 411},{0x39, 0x62, 0x39, 0xFF}}},
	{{{271, 0, -100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{266, 0, -88},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{254, 6, -88},0, {1275, 229},{0x0, 0x6A, 0x47, 0xFF}}},
	{{{254, 0, -83},0, {1008, 236},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{243, 5, -90},0, {1264, -16},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{241, 0, -88},0, {1008, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{266, -6, -100},0, {738, 752},{0x47, 0x96, 0x0, 0xFF}}},
	{{{266, 0, -112},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{254, -6, 112},0, {741, 229},{0x0, 0x96, 0x47, 0xFF}}},
	{{{241, 0, 112},0, {1008, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{243, -5, 110},0, {752, -16},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{254, 0, 117},0, {1008, 236},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{264, -5, 110},0, {667, 411},{0x39, 0x9E, 0x39, 0xFF}}},
	{{{266, 0, 112},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{266, -6, 100},0, {738, 752},{0x47, 0x96, 0x0, 0xFF}}},
	{{{254, -9, 100},0, {492, 752},{0x0, 0x81, 0x0, 0xFF}}},
	{{{254, -6, 112},0, {485, 485},{0x0, 0x96, 0x47, 0xFF}}},
	{{{241, -6, 100},0, {240, 752},{0xB9, 0x96, 0x0, 0xFF}}},
	{{{243, -5, 110},0, {240, 496},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{243, -5, 90},0, {240, 1008},{0xC7, 0x9E, 0xC7, 0xFF}}},
	{{{254, -6, 88},0, {485, 1019},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{264, -5, 90},0, {667, 1093},{0x39, 0x9E, 0xC7, 0xFF}}},
	{{{271, 0, 100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{266, 0, 88},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{254, -6, 88},0, {741, 1275},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{266, 0, 88},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{264, -5, 90},0, {667, 1093},{0x39, 0x9E, 0xC7, 0xFF}}},
	{{{254, 0, 83},0, {1008, 1268},{0x0, 0x0, 0x81, 0xFF}}},
	{{{243, -5, 90},0, {752, 1520},{0xC7, 0x9E, 0xC7, 0xFF}}},
	{{{241, 0, 88},0, {1008, 1520},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{241, -6, 100},0, {752, 1776},{0xB9, 0x96, 0x0, 0xFF}}},
	{{{236, 0, 100},0, {1008, 1776},{0x81, 0x0, 0x0, 0xFF}}},
	{{{243, -5, 110},0, {752, 2032},{0xC7, 0x9E, 0x39, 0xFF}}},
	{{{241, 0, 112},0, {1008, 2032},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{241, 6, 100},0, {1264, 1776},{0xB9, 0x6A, 0x0, 0xFF}}},
	{{{243, 5, 110},0, {1264, 2032},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{243, 5, 90},0, {1264, 1520},{0xC7, 0x62, 0xC7, 0xFF}}},
	{{{254, 6, 88},0, {1275, 1275},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{264, 5, 90},0, {1349, 1093},{0x39, 0x62, 0xC7, 0xFF}}},
	{{{266, 6, 100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{264, 5, 90},0, {1349, 1093},{0x39, 0x62, 0xC7, 0xFF}}},
	{{{254, 9, 100},0, {1524, 752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{266, 6, 100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{254, 6, 88},0, {1531, 1019},{0x0, 0x6A, 0xB9, 0xFF}}},
	{{{241, 6, 100},0, {1776, 752},{0xB9, 0x6A, 0x0, 0xFF}}},
	{{{243, 5, 90},0, {1776, 1008},{0xC7, 0x62, 0xC7, 0xFF}}},
	{{{243, 5, 110},0, {1776, 496},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{254, 6, 112},0, {1531, 485},{0x0, 0x6A, 0x47, 0xFF}}},
	{{{264, 5, 110},0, {1349, 411},{0x39, 0x62, 0x39, 0xFF}}},
	{{{271, 0, 100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{266, 0, 112},0, {1008, 482},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{254, 6, 112},0, {1275, 229},{0x0, 0x6A, 0x47, 0xFF}}},
	{{{254, 0, 117},0, {1008, 236},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{243, 5, 110},0, {1264, -16},{0xC7, 0x62, 0x39, 0xFF}}},
	{{{241, 0, 112},0, {1008, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{266, -6, 100},0, {738, 752},{0x47, 0x96, 0x0, 0xFF}}},
	{{{266, 0, 88},0, {1008, 1022},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{266, 6, 100},0, {1278, 752},{0x47, 0x6A, 0x0, 0xFF}}},
	{{{271, 0, 100},0, {1008, 752},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx checkerboard_platform_000_displaylist_mesh_tri_2[] = {
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(7, 4, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 7, 9, 0),
	gsSP1Triangle(11, 12, 7, 0),
	gsSP1Triangle(12, 6, 7, 0),
	gsSP1Triangle(12, 13, 6, 0),
	gsSP1Triangle(13, 14, 6, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(7, 10, 12, 0),
	gsSP1Triangle(7, 12, 5, 0),
	gsSP1Triangle(5, 12, 13, 0),
	gsSP1Triangle(5, 13, 3, 0),
	gsSP1Triangle(3, 13, 14, 0),
	gsSP1Triangle(3, 14, 1, 0),
	gsSP1Triangle(1, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(1, 4, 6, 0),
	gsSP1Triangle(1, 6, 7, 0),
	gsSP1Triangle(2, 1, 7, 0),
	gsSP1Triangle(2, 7, 8, 0),
	gsSP1Triangle(9, 2, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 9, 10, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 6, 4, 0),
	gsSP1Triangle(7, 6, 3, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(10, 9, 7, 0),
	gsSP1Triangle(10, 7, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 10, 12, 0),
	gsSP1Triangle(14, 15, 10, 0),
	gsSP1Triangle(15, 9, 10, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(5, 4, 1, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(12, 13, 10, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(10, 13, 15, 0),
	gsSP1Triangle(10, 15, 8, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(4, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(7, 9, 11, 0),
	gsSP1Triangle(7, 11, 12, 0),
	gsSP1Triangle(6, 7, 12, 0),
	gsSP1Triangle(6, 12, 13, 0),
	gsSP1Triangle(14, 6, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 96, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 0, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 13, 11, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 112, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 3, 5, 0),
	gsSP1Triangle(7, 8, 3, 0),
	gsSP1Triangle(8, 0, 3, 0),
	gsSP1Triangle(8, 9, 0, 0),
	gsSP1Triangle(9, 10, 0, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 11, 9, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 128, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(3, 6, 8, 0),
	gsSP1Triangle(3, 8, 1, 0),
	gsSP1Triangle(1, 8, 9, 0),
	gsSP1Triangle(1, 9, 10, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(11, 14, 13, 0),
	gsSP1Triangle(11, 15, 14, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 144, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(2, 1, 4, 0),
	gsSP1Triangle(2, 4, 5, 0),
	gsSP1Triangle(6, 2, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 8, 9, 0),
	gsSP1Triangle(15, 6, 8, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 160, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(7, 4, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 7, 9, 0),
	gsSP1Triangle(11, 12, 7, 0),
	gsSP1Triangle(12, 6, 7, 0),
	gsSP1Triangle(12, 13, 6, 0),
	gsSP1Triangle(13, 14, 6, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 176, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(7, 10, 12, 0),
	gsSP1Triangle(7, 12, 5, 0),
	gsSP1Triangle(5, 12, 13, 0),
	gsSP1Triangle(5, 13, 3, 0),
	gsSP1Triangle(3, 13, 14, 0),
	gsSP1Triangle(3, 14, 1, 0),
	gsSP1Triangle(1, 14, 15, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 192, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(1, 4, 6, 0),
	gsSP1Triangle(1, 6, 7, 0),
	gsSP1Triangle(2, 1, 7, 0),
	gsSP1Triangle(2, 7, 8, 0),
	gsSP1Triangle(9, 2, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 9, 10, 0),
	gsSPVertex(checkerboard_platform_000_displaylist_mesh_vtx_2 + 208, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};


Gfx mat_checkerboard_platform_checkerboard_platform_dark[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 128, checkerboard_platform_checkerboard_platform_dark_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 508, 508),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPSetTileSize(0, 0, 0, 508, 508),
	gsSPSetLights1(checkerboard_platform_checkerboard_platform_dark_lights),
	gsSPEndDisplayList(),
};


Gfx mat_checkerboard_platform_checkerboard_platform_light[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 128, checkerboard_platform_checkerboard_platform_light_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 508, 508),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPSetTileSize(0, 0, 0, 508, 508),
	gsSPSetLights1(checkerboard_platform_checkerboard_platform_light_lights),
	gsSPEndDisplayList(),
};


Gfx mat_checkerboard_platform_checkerboard_platform_ball_side[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(4031, 4031, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 64, checkerboard_platform_checkerboard_platform_ball_side_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 16, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_checkerboard_platform_checkerboard_platform_ball_side[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsSPEndDisplayList(),
};


Gfx checkerboard_platform_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_checkerboard_platform_checkerboard_platform_dark),
	gsSPDisplayList(checkerboard_platform_000_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_checkerboard_platform_checkerboard_platform_light),
	gsSPDisplayList(checkerboard_platform_000_displaylist_mesh_tri_1),
	gsSPDisplayList(mat_checkerboard_platform_checkerboard_platform_ball_side),
	gsSPDisplayList(checkerboard_platform_000_displaylist_mesh_tri_2),
	gsSPDisplayList(mat_revert_checkerboard_platform_checkerboard_platform_ball_side),
	gsSPEndDisplayList(),
};



Gfx checkerboard_platform_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
