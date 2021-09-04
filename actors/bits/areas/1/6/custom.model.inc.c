#include "custom.model.inc.h"
Vtx VB_bits_geo_000490_0x7007b60[] = {
{{{ -716, 0, -306 }, 0, { 480, 990 }, { 255, 212, 0, 255}}},
{{{ 717, 0, -306 }, 0, { 14788, 990 }, { 255, 212, 0, 255}}},
{{{ 717, 102, -306 }, 0, { 14788, 0 }, { 255, 212, 0, 255}}},
{{{ -716, 102, -306 }, 0, { 480, 0 }, { 255, 212, 0, 255}}},
{{{ -716, 0, 307 }, 0, { 480, 990 }, { 255, 212, 0, 255}}},
{{{ 717, 0, 307 }, 0, { 14788, 990 }, { 255, 212, 0, 255}}},
{{{ 717, 102, 307 }, 0, { 14788, 0 }, { 255, 212, 0, 255}}},
{{{ -716, 102, 307 }, 0, { 480, 0 }, { 255, 212, 0, 255}}},
};

Gfx DL_bits_geo_000490_0x7007c28[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bits_geo_000490_0x7007be0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_bits_geo_000490_0x7007be0[] = {
gsDPSetTextureImage(0, 2, 1, bits_geo_000490__texture_09005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_bits_geo_000490_0x7007b60, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPEndDisplayList(),
};

