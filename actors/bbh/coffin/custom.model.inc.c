#include "custom.model.inc.h"
Vtx VB_geo_bbh_000658_0x7020380[] = {
{{{ 58, 0, 0 }, 0, { 990, 479 }, { 0, 0, 127, 255}}},
{{{ -57, 77, 0 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -57, 0, 0 }, 0, { 0, 479 }, { 0, 0, 127, 255}}},
{{{ 58, 77, 0 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ 115, 0, -306 }, 0, { 2006, 479 }, { 124, 0, 23, 255}}},
{{{ 58, 77, 0 }, 0, { 0, 0 }, { 124, 0, 23, 255}}},
{{{ 58, 0, 0 }, 0, { 0, 479 }, { 124, 0, 23, 255}}},
{{{ 115, 77, -306 }, 0, { 2006, 0 }, { 124, 0, 23, 255}}},
{{{ 58, 0, -460 }, 0, { 990, 479 }, { 119, 0, 212, 255}}},
{{{ 115, 77, -306 }, 0, { -30, 0 }, { 119, 0, 212, 255}}},
{{{ 115, 0, -306 }, 0, { -30, 479 }, { 119, 0, 212, 255}}},
{{{ 58, 77, -460 }, 0, { 990, 0 }, { 119, 0, 212, 255}}},
{{{ -57, 0, -460 }, 0, { 0, 479 }, { 0, 0, 129, 255}}},
{{{ 58, 77, -460 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 58, 0, -460 }, 0, { 990, 479 }, { 0, 0, 129, 255}}},
{{{ -57, 77, -460 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
};

Vtx VB_geo_bbh_000658_0x7020480[] = {
{{{ -114, 0, -306 }, 0, { -30, 479 }, { 137, 0, 212, 255}}},
{{{ -114, 77, -306 }, 0, { -30, 0 }, { 137, 0, 212, 255}}},
{{{ -57, 77, -460 }, 0, { 990, 0 }, { 137, 0, 212, 255}}},
{{{ -57, 0, -460 }, 0, { 990, 479 }, { 137, 0, 212, 255}}},
{{{ -57, 0, 0 }, 0, { 0, 479 }, { 132, 0, 23, 255}}},
{{{ -114, 77, -306 }, 0, { 2006, 0 }, { 132, 0, 23, 255}}},
{{{ -114, 0, -306 }, 0, { 2006, 479 }, { 132, 0, 23, 255}}},
{{{ -57, 77, 0 }, 0, { 0, 0 }, { 132, 0, 23, 255}}},
};

Vtx VB_geo_bbh_000658_0x7020500[] = {
{{{ -57, 0, -460 }, 0, { 3034, 1117 }, { 0, 129, 0, 255}}},
{{{ 58, 0, -460 }, 0, { 3034, 351 }, { 0, 129, 0, 255}}},
{{{ 115, 0, -306 }, 0, { 2012, 0 }, { 0, 129, 0, 255}}},
{{{ -114, 0, -306 }, 0, { 2012, 1500 }, { 0, 129, 0, 255}}},
{{{ -57, 0, 0 }, 0, { 0, 1117 }, { 0, 129, 0, 255}}},
{{{ 58, 0, 0 }, 0, { 0, 351 }, { 0, 129, 0, 255}}},
};

Vtx VB_geo_bbh_000658_0x7020560[] = {
{{{ -57, 77, 0 }, 0, { 224, 2012 }, { 0, 127, 0, 255}}},
{{{ 115, 77, -306 }, 0, { 990, 648 }, { 0, 127, 0, 255}}},
{{{ -114, 77, -306 }, 0, { 0, 648 }, { 0, 127, 0, 255}}},
{{{ 58, 77, 0 }, 0, { 734, 2012 }, { 0, 127, 0, 255}}},
{{{ 58, 77, -460 }, 0, { 734, 0 }, { 0, 127, 0, 255}}},
{{{ -57, 77, -460 }, 0, { 224, 0 }, { 0, 127, 0, 255}}},
};

Light_t Light_geo_bbh_000658_0x7020370 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_geo_bbh_000658_0x7020368 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_geo_bbh_000658_0x70206f0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 4, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 60),
gsSPDisplayList(DL_geo_bbh_000658_0x70205c0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 4, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 60),
gsSPDisplayList(DL_geo_bbh_000658_0x7020660),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_geo_bbh_000658_0x70206a8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_000658_0x70205c0[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_000658__texture_07004400),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 511, 256),
gsSPLight(&Light_geo_bbh_000658_0x7020370.col, 1),
gsSPLight(&Light_geo_bbh_000658_0x7020368.col, 2),
gsSPVertex(VB_geo_bbh_000658_0x7020380, 16, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSP2Triangles(12, 13, 14, 0,12, 15, 13, 0),
gsSPVertex(VB_geo_bbh_000658_0x7020480, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_000658_0x7020660[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_000658__texture_07003000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 511, 256),
gsSPVertex(VB_geo_bbh_000658_0x7020500, 6, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(2, 4, 3, 0,2, 5, 4, 0),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_000658_0x70206a8[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_000658__texture_07003400),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_geo_bbh_000658_0x7020560, 6, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(1, 4, 5, 0,1, 5, 2, 0),
gsSPEndDisplayList(),
};

