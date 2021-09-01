#include "custom.model.inc.h"
Vtx VB_bitfs_geo_000690_0x700f590[] = {
{{{ 307, 152, -288 }, 0, { -3092, -2076 }, { 173, 187, 209, 255}}},
{{{ -306, 154, -288 }, 0, { 0, -2076 }, { 173, 187, 209, 255}}},
{{{ -306, 154, 307 }, 0, { 0, 990 }, { 173, 187, 209, 255}}},
{{{ 307, 152, 307 }, 0, { -3092, 990 }, { 173, 187, 209, 255}}},
{{{ 307, 154, -286 }, 0, { 3060, -722 }, { 140, 152, 216, 255}}},
{{{ -306, 0, -286 }, 0, { -8, 44 }, { 140, 152, 216, 255}}},
{{{ 307, 0, -286 }, 0, { 3060, 44 }, { 140, 152, 216, 255}}},
{{{ -306, 154, -286 }, 0, { -8, -722 }, { 140, 152, 216, 255}}},
{{{ 307, 154, 307 }, 0, { 3060, -722 }, { 140, 152, 216, 255}}},
{{{ -306, 0, 307 }, 0, { -8, 44 }, { 140, 152, 216, 255}}},
{{{ 307, 0, 307 }, 0, { 3060, 44 }, { 140, 152, 216, 255}}},
{{{ -306, 154, 307 }, 0, { -8, -722 }, { 140, 152, 216, 255}}},
};

Gfx DL_bitfs_geo_000690_0x700f6a8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bitfs_geo_000690_0x700f650),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000690_0x700f650[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_000690__texture_07000000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsSPVertex(VB_bitfs_geo_000690_0x700f590, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSPEndDisplayList(),
};

