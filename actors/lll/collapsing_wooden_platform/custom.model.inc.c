#include "custom.model.inc.h"
Vtx VB_lll_geo_000B80_0x7018f70[] = {
{{{ -255, 154, 64 }, 0, { 990, -4120 }, { 0, 127, 0, 255}}},
{{{ 256, 154, 64 }, 0, { 0, -4120 }, { 0, 127, 0, 255}}},
{{{ 256, 154, -63 }, 0, { 0, -3098 }, { 0, 127, 0, 255}}},
{{{ -255, 154, -63 }, 0, { 990, -3098 }, { 0, 127, 0, 255}}},
};

Vtx VB_lll_geo_000B80_0x7018fb0[] = {
{{{ 256, 0, 64 }, 0, { 1330, 990 }, { 0, 0, 127, 255}}},
{{{ 256, 154, 64 }, 0, { 1330, 0 }, { 0, 0, 127, 255}}},
{{{ -255, 154, 64 }, 0, { -2074, 0 }, { 0, 0, 127, 255}}},
{{{ -255, 0, -63 }, 0, { -2074, 990 }, { 0, 0, 129, 255}}},
{{{ -255, 154, -63 }, 0, { -2074, 0 }, { 0, 0, 129, 255}}},
{{{ 256, 154, -63 }, 0, { 1330, 0 }, { 0, 0, 129, 255}}},
{{{ 256, 0, -63 }, 0, { 1330, 990 }, { 0, 0, 129, 255}}},
{{{ 256, 154, -63 }, 0, { -9058, 0 }, { 127, 0, 0, 255}}},
{{{ 256, 154, 64 }, 0, { -10250, 0 }, { 127, 0, 0, 255}}},
{{{ 256, 0, 64 }, 0, { -10250, 990 }, { 127, 0, 0, 255}}},
{{{ 256, 0, -63 }, 0, { -9058, 990 }, { 127, 0, 0, 255}}},
{{{ -255, 0, 64 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -255, 154, -63 }, 0, { -200, 0 }, { 129, 0, 0, 255}}},
{{{ -255, 0, -63 }, 0, { -200, 990 }, { 129, 0, 0, 255}}},
{{{ -255, 154, 64 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ -255, 0, 64 }, 0, { -2074, 990 }, { 0, 0, 127, 255}}},
};

Light_t Light_lll_geo_000B80_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000B80_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000B80_0x7019160[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000B80_0x70190b0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000B80_0x70190f8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B80_0x70190b0[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B80__texture_0900B800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_000B80_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_000B80_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_000B80_0x7018f70, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000B80_0x70190f8[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000B80__texture_09007800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000B80_0x7018fb0, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

