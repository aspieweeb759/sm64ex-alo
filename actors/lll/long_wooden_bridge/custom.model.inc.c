#include "custom.model.inc.h"
Vtx VB_lll_geo_000B98_0x70191f0[] = {
{{{ -255, 154, -575 }, 0, { 998, 1012 }, { 0, 127, 0, 255}}},
{{{ -255, 154, 576 }, 0, { 998, -8258 }, { 0, 127, 0, 255}}},
{{{ 256, 154, 576 }, 0, { 0, -8258 }, { 0, 127, 0, 255}}},
{{{ 256, 154, -575 }, 0, { 0, 1012 }, { 0, 127, 0, 255}}},
};

Vtx VB_lll_geo_000B98_0x7019230[] = {
{{{ -255, 0, -575 }, 0, { 3374, 990 }, { 0, 0, 129, 255}}},
{{{ -255, 154, -575 }, 0, { 3374, 0 }, { 0, 0, 129, 255}}},
{{{ 256, 154, -575 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ -255, 0, 576 }, 0, { 7634, 990 }, { 129, 0, 0, 255}}},
{{{ -255, 154, -575 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -255, 0, -575 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ -255, 154, 576 }, 0, { 7634, 0 }, { 129, 0, 0, 255}}},
{{{ 256, 0, 576 }, 0, { 3374, 990 }, { 0, 0, 127, 255}}},
{{{ -255, 154, 576 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -255, 0, 576 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ 256, 154, 576 }, 0, { 3374, 0 }, { 0, 0, 127, 255}}},
{{{ 256, 0, -575 }, 0, { 7122, 990 }, { 127, 0, 0, 255}}},
{{{ 256, 154, 576 }, 0, { -540, 0 }, { 127, 0, 0, 255}}},
{{{ 256, 0, 576 }, 0, { -540, 990 }, { 127, 0, 0, 255}}},
{{{ 256, 154, -575 }, 0, { 7122, 0 }, { 127, 0, 0, 255}}},
{{{ 256, 0, -575 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
};

Light_t Light_lll_geo_000B98_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000B98_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000B98_0x70193e0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000B98_0x7019330),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000B98_0x7019378),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B98_0x7019330[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B98__texture_0900B800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_000B98_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000B98_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000B98_0x70191f0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B98_0x7019378[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B98__texture_09007800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000B98_0x7019230, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

