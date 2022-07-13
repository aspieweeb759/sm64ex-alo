#include "custom.model.inc.h"
Vtx VB_bitfs_geo_0005E8_0x700aa78[] = {
{{{ 410, 51, -306 }, 0, { 2012, 1340 }, { 175, 175, 175, 255}}},
{{{ 72, 205, 307 }, 0, { 0, 0 }, { 175, 175, 175, 255}}},
{{{ 410, 51, 307 }, 0, { 0, 1340 }, { 175, 175, 175, 255}}},
{{{ 72, 205, -306 }, 0, { 2012, 0 }, { 175, 175, 175, 255}}},
{{{ -409, 205, 307 }, 0, { 0, -542 }, { 200, 200, 200, 255}}},
{{{ 72, 205, 307 }, 0, { 0, 990 }, { 200, 200, 200, 255}}},
{{{ 72, 205, -306 }, 0, { 2012, 990 }, { 200, 200, 200, 255}}},
{{{ -409, 205, -306 }, 0, { 2012, -544 }, { 200, 200, 200, 255}}},
{{{ 410, 0, -306 }, 0, { 1500, -1258 }, { 125, 125, 125, 255}}},
{{{ 410, 51, 307 }, 0, { 2012, 786 }, { 125, 125, 125, 255}}},
{{{ 410, 0, 307 }, 0, { 1500, 786 }, { 125, 125, 125, 255}}},
{{{ 410, 51, -306 }, 0, { 2012, -1258 }, { 125, 125, 125, 255}}},
};

Gfx DL_bitfs_geo_0005E8_0x700ab90[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_bitfs_geo_0005E8_0x700ab38),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_0005E8_0x700ab38[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_0005E8__texture_09003800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsSPVertex(VB_bitfs_geo_0005E8_0x700aa78, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSPEndDisplayList(),
};

