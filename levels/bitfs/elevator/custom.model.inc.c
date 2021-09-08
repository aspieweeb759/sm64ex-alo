#include "custom.model.inc.h"
Vtx VB_bitfs_geo_000678_0x700f238[] = {
{{{ -204, 154, 205 }, 0, { 650, 990 }, { 188, 202, 191, 255}}},
{{{ 205, 154, -204 }, 0, { 2012, 990 }, { 188, 202, 191, 255}}},
{{{ -204, 154, -204 }, 0, { 1330, 1670 }, { 188, 202, 191, 255}}},
{{{ 205, 154, 205 }, 0, { 1330, 308 }, { 188, 202, 191, 255}}},
};

Vtx VB_bitfs_geo_000678_0x700f278[] = {
{{{ 184, 0, -183 }, 0, { 938, 480 }, { 103, 118, 100, 255}}},
{{{ 205, 154, -204 }, 0, { 990, 0 }, { 103, 118, 100, 255}}},
{{{ 205, 154, 205 }, 0, { 0, 0 }, { 103, 118, 100, 255}}},
{{{ 184, 0, 184 }, 0, { 20, 480 }, { 103, 118, 100, 255}}},
{{{ -183, 0, 184 }, 0, { 938, 480 }, { 103, 118, 100, 255}}},
{{{ -204, 154, 205 }, 0, { 990, 0 }, { 103, 118, 100, 255}}},
{{{ -204, 154, -204 }, 0, { 0, 0 }, { 103, 118, 100, 255}}},
{{{ -183, 0, -183 }, 0, { 20, 480 }, { 103, 118, 100, 255}}},
{{{ -204, 154, -204 }, 0, { 990, 0 }, { 116, 134, 117, 255}}},
{{{ 184, 0, -183 }, 0, { 20, 480 }, { 116, 134, 117, 255}}},
{{{ -183, 0, -183 }, 0, { 938, 480 }, { 116, 134, 117, 255}}},
{{{ 205, 154, -204 }, 0, { 0, 0 }, { 116, 134, 117, 255}}},
{{{ 205, 154, 205 }, 0, { 990, 0 }, { 116, 134, 117, 255}}},
{{{ -204, 154, 205 }, 0, { 0, 0 }, { 116, 134, 117, 255}}},
{{{ -183, 0, 184 }, 0, { 20, 478 }, { 116, 134, 117, 255}}},
{{{ 184, 0, 184 }, 0, { 938, 478 }, { 116, 134, 117, 255}}},
};

Vtx VB_bitfs_geo_000678_0x700f378[] = {
{{{ -183, 0, -183 }, 0, { 0, 990 }, { 67, 86, 55, 255}}},
{{{ 184, 0, 184 }, 0, { 2176, 254 }, { 67, 86, 55, 255}}},
{{{ -183, 0, 184 }, 0, { 704, -482 }, { 67, 86, 55, 255}}},
{{{ 184, 0, -183 }, 0, { 1440, 1724 }, { 67, 86, 55, 255}}},
};

Vtx VB_bitfs_geo_000678_0x700f3b8[] = {
{{{ 205, 154, -204 }, 0, { 990, 0 }, { 121, 178, 235, 255}}},
{{{ -183, 0, -183 }, 0, { 20, 20 }, { 121, 178, 235, 255}}},
{{{ 184, 0, -183 }, 0, { 938, 20 }, { 121, 178, 235, 255}}},
{{{ -204, 154, -204 }, 0, { 0, 0 }, { 121, 178, 235, 255}}},
};

Gfx DL_bitfs_geo_000678_0x700f508[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bitfs_geo_000678_0x700f3f8),
gsSPDisplayList(DL_bitfs_geo_000678_0x700f430),
gsSPDisplayList(DL_bitfs_geo_000678_0x700f498),
gsSPDisplayList(DL_bitfs_geo_000678_0x700f4d0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000678_0x700f3f8[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_000678__texture_09001800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bitfs_geo_000678_0x700f238, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000678_0x700f430[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_000678__texture_09001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bitfs_geo_000678_0x700f278, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSP2Triangles(12, 13, 14, 0,12, 14, 15, 0),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000678_0x700f498[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_000678__texture_09007000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bitfs_geo_000678_0x700f378, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000678_0x700f4d0[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_000678__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bitfs_geo_000678_0x700f3b8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

