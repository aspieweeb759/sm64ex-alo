#include "custom.model.inc.h"
Vtx VB_bitfs_geo_000648_0x700ecf0[] = {
{{{ 0, 0, -306 }, 0, { 334, 528 }, { 255, 255, 0, 255}}},
{{{ -278, 0, 283 }, 0, { 362, 620 }, { 255, 255, 0, 255}}},
{{{ -7, 0, 135 }, 0, { 336, 530 }, { 255, 255, 0, 255}}},
{{{ 262, 0, 283 }, 0, { 310, 440 }, { 255, 255, 0, 255}}},
{{{ 326, 0, -118 }, 0, { 304, 420 }, { 255, 255, 0, 255}}},
{{{ -330, 0, -118 }, 0, { 366, 638 }, { 255, 255, 0, 255}}},
};

Gfx DL_bitfs_geo_000648_0x700ed90[] = {
gsDPPipeSync(),
gsDPSetEnvColor(255, 255, 255, 100),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bitfs_geo_000648_0x700ed50),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000648_0x700ed50[] = {
gsDPSetTextureImage(0, 2, 1, bitfs_geo_000648__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bitfs_geo_000648_0x700ecf0, 6, 0),
gsSP2Triangles(0, 1, 2, 0,2, 3, 0, 0),
gsSP1Triangle(2, 4, 5, 0),
gsSPEndDisplayList(),
};

