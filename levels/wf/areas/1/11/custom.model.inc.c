#include "custom.model.inc.h"
Vtx VB_wf_geo_0008E8_0x7009088[] = {
{{{ -127, 0, -127 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ 128, 256, -127 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 128, 0, -127 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ -127, 256, -127 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
};

Vtx VB_wf_geo_0008E8_0x70090c8[] = {
{{{ -127, 0, 179 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -127, 256, 179 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ -127, 256, -127 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ 128, 0, -127 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
{{{ 128, 256, -127 }, 0, { 990, -30 }, { 127, 0, 0, 255}}},
{{{ 128, 256, 179 }, 0, { 0, -30 }, { 127, 0, 0, 255}}},
{{{ 128, 0, 179 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
{{{ -127, 256, -127 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ -127, 256, 179 }, 0, { 990, 0 }, { 0, 127, 0, 255}}},
{{{ 128, 256, 179 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ 128, 256, -127 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 128, 0, 179 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ -127, 256, 179 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -127, 0, 179 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ 128, 256, 179 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -127, 0, -127 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
};

Light_t Light_wf_geo_0008E8_0x7009078 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_0008E8_0x7009070 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_0008E8_0x7009278[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_0008E8_0x70091c8),
gsSPDisplayList(DL_wf_geo_0008E8_0x7009210),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_0008E8_0x70091c8[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_0008E8__texture_07000000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_0008E8_0x7009078.col, 1),
gsSPLight(&Light_wf_geo_0008E8_0x7009070.col, 2),
gsSPVertex(VB_wf_geo_0008E8_0x7009088, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_0008E8_0x7009210[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_0008E8__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_wf_geo_0008E8_0x70090c8, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

