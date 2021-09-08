#include "custom.model.inc.h"
Vtx VB_bitfs_geo_000728_0x70111a8[] = {
{{{ 307, 307, -306 }, 0, { 5078, -4120 }, { 224, 245, 201, 255}}},
{{{ -306, 307, 307 }, 0, { 0, 990 }, { 224, 245, 201, 255}}},
{{{ 307, 307, 307 }, 0, { 5078, 990 }, { 224, 245, 201, 255}}},
{{{ -306, 307, -306 }, 0, { 0, -4120 }, { 224, 245, 201, 255}}},
};

Vtx VB_bitfs_geo_000728_0x70111e8[] = {
{{{ 307, 307, -306 }, 0, { 0, 1604 }, { 255, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 990, -132 }, { 255, 0, 0, 255}}},
{{{ -306, 307, -306 }, 0, { 2012, 1604 }, { 255, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 734, -132 }, { 255, 0, 0, 255}}},
{{{ 307, 307, 307 }, 0, { 1500, 1604 }, { 255, 0, 0, 255}}},
{{{ -306, 307, 307 }, 0, { 0, 1604 }, { 255, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 990, -132 }, { 150, 0, 0, 255}}},
{{{ 307, 307, -306 }, 0, { 2012, 1604 }, { 150, 0, 0, 255}}},
{{{ 307, 307, 307 }, 0, { 0, 1604 }, { 150, 0, 0, 255}}},
{{{ -306, 307, 307 }, 0, { 2012, 1604 }, { 150, 0, 0, 255}}},
{{{ -306, 307, -306 }, 0, { 0, 1604 }, { 150, 0, 0, 255}}},
};

Gfx DL_bitfs_geo_000728_0x7011318[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bitfs_geo_000728_0x7011298),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bitfs_geo_000728_0x70112d0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000728_0x7011298[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_000728__texture_09007800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bitfs_geo_000728_0x70111a8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000728_0x70112d0[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_000728__texture_09002000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bitfs_geo_000728_0x70111e8, 11, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,9, 10, 6, 0),
gsSPEndDisplayList(),
};

