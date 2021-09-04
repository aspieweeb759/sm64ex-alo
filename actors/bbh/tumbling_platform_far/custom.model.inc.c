#include "custom.model.inc.h"
Vtx VB_geo_bbh_0005E0_0x701f6c0[] = {
{{{ -101, 0, -460 }, 0, { 990, 9164 }, { 129, 0, 0, 255}}},
{{{ -101, -101, 461 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -101, 0, 461 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ -101, -101, -460 }, 0, { 0, 9164 }, { 129, 0, 0, 255}}},
{{{ 102, 0, 461 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 102, -101, -460 }, 0, { 0, 9164 }, { 127, 0, 0, 255}}},
{{{ 102, 0, -460 }, 0, { 990, 9164 }, { 127, 0, 0, 255}}},
{{{ 102, -101, 461 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 102, 0, -460 }, 0, { 990, -8208 }, { 0, 127, 0, 255}}},
{{{ -101, 0, 461 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ 102, 0, 461 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
{{{ -101, 0, -460 }, 0, { 0, -8208 }, { 0, 127, 0, 255}}},
};

Light_t Light_geo_bbh_0005E0_0x701f6b0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_geo_bbh_0005E0_0x701f6a8 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_geo_bbh_0005E0_0x701f7e8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_geo_bbh_0005E0_0x701f780),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_0005E0_0x701f780[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_0005E0__texture_09004800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_geo_bbh_0005E0_0x701f6b0.col, 1),
gsSPLight(&Light_geo_bbh_0005E0_0x701f6a8.col, 2),
gsSPVertex(VB_geo_bbh_0005E0_0x701f6c0, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSPEndDisplayList(),
};

