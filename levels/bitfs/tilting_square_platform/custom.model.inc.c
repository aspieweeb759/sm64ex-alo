#include "custom.model.inc.h"
Vtx VB_bitfs_geo_0006C0_0x700fba8[] = {
{{{ 307, 307, -306 }, 0, { 2420, 990 }, { 112, 127, 96, 255}}},
{{{ -306, 307, 307 }, 0, { 0, 990 }, { 112, 127, 96, 255}}},
{{{ 307, 307, 307 }, 0, { 1194, -236 }, { 112, 127, 96, 255}}},
{{{ -306, 307, -306 }, 0, { 1194, 2214 }, { 112, 127, 96, 255}}},
};

Vtx VB_bitfs_geo_0006C0_0x700fbe8[] = {
{{{ 307, 307, -306 }, 0, { 478, 1498 }, { 255, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 990 }, { 255, 0, 0, 255}}},
{{{ -306, 307, -306 }, 0, { 478, 480 }, { 255, 0, 0, 255}}},
{{{ 307, 307, 307 }, 0, { -540, 1498 }, { 255, 0, 0, 255}}},
{{{ -306, 307, 307 }, 0, { -542, 480 }, { 255, 0, 0, 255}}},
{{{ -306, 307, 307 }, 0, { -542, 480 }, { 150, 0, 0, 255}}},
{{{ -306, 307, -306 }, 0, { 478, 480 }, { 150, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 990 }, { 150, 0, 0, 255}}},
{{{ 307, 307, -306 }, 0, { 478, 1498 }, { 150, 0, 0, 255}}},
{{{ 307, 307, 307 }, 0, { -540, 1498 }, { 150, 0, 0, 255}}},
};

Gfx DL_bitfs_geo_0006C0_0x700fd08[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bitfs_geo_0006C0_0x700fc88),
gsSPDisplayList(DL_bitfs_geo_0006C0_0x700fcc0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_0006C0_0x700fc88[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_0006C0__texture_09007000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bitfs_geo_0006C0_0x700fba8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_0006C0_0x700fcc0[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_0006C0__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bitfs_geo_0006C0_0x700fbe8, 10, 0),
gsSP2Triangles(0, 1, 2, 0,1, 3, 4, 0),
gsSP2Triangles(5, 6, 7, 0,7, 8, 9, 0),
gsSPEndDisplayList(),
};

