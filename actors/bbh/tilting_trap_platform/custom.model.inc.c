#include "custom.model.inc.h"
Vtx VB_geo_bbh_0005C8_0x701f390[] = {
{{{ 307, -101, 256 }, 0, { 698, 260 }, { 0, 129, 0, 255}}},
{{{ -306, -101, 256 }, 0, { 260, 260 }, { 0, 129, 0, 255}}},
{{{ -306, -101, -255 }, 0, { 260, 624 }, { 0, 129, 0, 255}}},
{{{ 307, -101, -255 }, 0, { 698, 624 }, { 0, 129, 0, 255}}},
};

Vtx VB_geo_bbh_0005C8_0x701f3d0[] = {
{{{ 307, 0, 256 }, 0, { 2522, 0 }, { 127, 0, 0, 255}}},
{{{ 307, -101, -255 }, 0, { 0, 988 }, { 127, 0, 0, 255}}},
{{{ 307, 0, -255 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 307, 0, -255 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ -306, -101, -255 }, 0, { 3034, 992 }, { 0, 0, 129, 255}}},
{{{ -306, 0, -255 }, 0, { 3034, 0 }, { 0, 0, 129, 255}}},
{{{ 307, -101, -255 }, 0, { 0, 992 }, { 0, 0, 129, 255}}},
{{{ -306, 0, -255 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -306, -101, -255 }, 0, { 0, 988 }, { 129, 0, 0, 255}}},
{{{ -306, -101, 256 }, 0, { 2522, 988 }, { 129, 0, 0, 255}}},
{{{ -306, 0, 256 }, 0, { 2522, 0 }, { 129, 0, 0, 255}}},
{{{ -306, 0, 256 }, 0, { 3034, 0 }, { 0, 0, 127, 255}}},
{{{ -306, -101, 256 }, 0, { 3034, 992 }, { 0, 0, 127, 255}}},
{{{ 307, -101, 256 }, 0, { 0, 992 }, { 0, 0, 127, 255}}},
{{{ 307, 0, 256 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ 307, -101, 256 }, 0, { 2522, 988 }, { 127, 0, 0, 255}}},
};

Vtx VB_geo_bbh_0005C8_0x701f4d0[] = {
{{{ 307, 0, -255 }, 0, { 5080, 990 }, { 0, 127, 0, 255}}},
{{{ -306, 0, 256 }, 0, { 0, -5142 }, { 0, 127, 0, 255}}},
{{{ 307, 0, 256 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ -306, 0, -255 }, 0, { 5076, -5142 }, { 0, 127, 0, 255}}},
};

Light_t Light_geo_bbh_0005C8_0x701f380 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_geo_bbh_0005C8_0x701f378 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_geo_bbh_0005C8_0x701f5f8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_geo_bbh_0005C8_0x701f510),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_geo_bbh_0005C8_0x701f558),
gsDPTileSync(),
gsDPSetTile(0, 2, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_geo_bbh_0005C8_0x701f5c0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_0005C8_0x701f510[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_0005C8__texture_09008800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_geo_bbh_0005C8_0x701f380.col, 1),
gsSPLight(&Light_geo_bbh_0005C8_0x701f378.col, 2),
gsSPVertex(VB_geo_bbh_0005C8_0x701f390, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_0005C8_0x701f558[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_0005C8__texture_09005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_geo_bbh_0005C8_0x701f3d0, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP2Triangles(11, 13, 14, 0,0, 15, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_0005C8_0x701f5c0[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_0005C8__texture_09009000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsSPVertex(VB_geo_bbh_0005C8_0x701f4d0, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

