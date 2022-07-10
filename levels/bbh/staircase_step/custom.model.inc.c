#include "custom.model.inc.h"
Vtx VB_geo_bbh_0005B0_0x701f0f8[] = {
{{{ 154, 614, -101 }, 0, { 3034, 2010 }, { 0, 127, 0, 255}}},
{{{ -153, 614, -101 }, 0, { -3096, 2010 }, { 0, 127, 0, 255}}},
{{{ -153, 614, 102 }, 0, { -3096, 6098 }, { 0, 127, 0, 255}}},
{{{ 154, 614, 102 }, 0, { 3034, 6098 }, { 0, 127, 0, 255}}},
};

Vtx VB_geo_bbh_0005B0_0x701f138[] = {
{{{ 154, 0, -101 }, 0, { 990, 2012 }, { 0, 0, 129, 255}}},
{{{ -153, 0, -101 }, 0, { 0, 2012 }, { 0, 0, 129, 255}}},
{{{ 154, 614, -101 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 154, 614, 102 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -153, 0, 102 }, 0, { 0, 2012 }, { 0, 0, 127, 255}}},
{{{ 154, 0, 102 }, 0, { 990, 2012 }, { 0, 0, 127, 255}}},
{{{ -153, 614, 102 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -153, 0, -101 }, 0, { 308, 2012 }, { 129, 0, 0, 255}}},
{{{ -153, 614, 102 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ -153, 614, -101 }, 0, { 308, 0 }, { 129, 0, 0, 255}}},
{{{ -153, 0, 102 }, 0, { 990, 2012 }, { 129, 0, 0, 255}}},
{{{ 154, 0, -101 }, 0, { 308, 2012 }, { 127, 0, 0, 255}}},
{{{ 154, 614, -101 }, 0, { 308, 0 }, { 127, 0, 0, 255}}},
{{{ 154, 614, 102 }, 0, { 990, 0 }, { 127, 0, 0, 255}}},
{{{ 154, 0, 102 }, 0, { 990, 2012 }, { 127, 0, 0, 255}}},
{{{ -153, 614, -101 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
};

Light_t Light_geo_bbh_0005B0_0x701f0e8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_geo_bbh_0005B0_0x701f0e0 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_geo_bbh_0005B0_0x701f2e8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_geo_bbh_0005B0_0x701f238),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_geo_bbh_0005B0_0x701f280),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_0005B0_0x701f238[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_0005B0__texture_0900A000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_geo_bbh_0005B0_0x701f0e8.col, 1),
gsSPLight(&Light_geo_bbh_0005B0_0x701f0e0.col, 2),
gsSPVertex(VB_geo_bbh_0005B0_0x701f0f8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_0005B0_0x701f280[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_0005B0__texture_09005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_geo_bbh_0005B0_0x701f138, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 13, 14, 0,1, 15, 2, 0),
gsSPEndDisplayList(),
};

