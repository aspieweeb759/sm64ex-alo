#include "custom.model.inc.h"
Vtx VB_geo_bitdw_000438_0x7004390[] = {
{{{ 979, 307, -1022 }, 0, { 7430, 990 }, { 175, 206, 22, 255}}},
{{{ 253, 255, -1018 }, 0, { 240, -14 }, { 175, 206, 22, 255}}},
{{{ 258, 153, -1027 }, 0, { 70, 990 }, { 175, 206, 22, 255}}},
{{{ 49, 205, -1632 }, 0, { 172, 990 }, { 175, 206, 22, 255}}},
{{{ 979, 307, -1637 }, 0, { 9510, 990 }, { 175, 206, 22, 255}}},
{{{ 979, 410, -1637 }, 0, { 9510, 0 }, { 175, 206, 22, 255}}},
{{{ 49, 307, -1632 }, 0, { 238, -30 }, { 175, 206, 22, 255}}},
{{{ 49, 205, -1632 }, 0, { 20784, 990 }, { 175, 206, 22, 255}}},
{{{ 49, 307, -1632 }, 0, { 20784, 0 }, { 175, 206, 22, 255}}},
{{{ -874, 102, 214 }, 0, { 172, 0 }, { 175, 206, 22, 255}}},
{{{ -869, 0, 205 }, 0, { 172, 990 }, { 175, 206, 22, 255}}},
{{{ -874, 102, 214 }, 0, { 17900, -6 }, { 175, 206, 22, 255}}},
{{{ -44, -413, 1770 }, 0, { -438, 0 }, { 175, 206, 22, 255}}},
{{{ -50, -511, 1741 }, 0, { -438, 990 }, { 175, 206, 22, 255}}},
{{{ -869, 0, 205 }, 0, { 17670, 990 }, { 175, 206, 22, 255}}},
};

Vtx VB_geo_bitdw_000438_0x7004480[] = {
{{{ 33, -135, 544 }, 0, { -438, 0 }, { 175, 206, 22, 255}}},
{{{ -255, 0, 0 }, 0, { 5772, 990 }, { 175, 206, 22, 255}}},
{{{ -258, 102, 8 }, 0, { 6092, 20 }, { 175, 206, 22, 255}}},
{{{ 979, 307, -1022 }, 0, { 7430, 990 }, { 175, 206, 22, 255}}},
{{{ 979, 410, -1023 }, 0, { 7644, -10 }, { 175, 206, 22, 255}}},
{{{ 253, 255, -1018 }, 0, { 240, -14 }, { 175, 206, 22, 255}}},
{{{ 258, 153, -1027 }, 0, { 11336, 990 }, { 175, 206, 22, 255}}},
{{{ 253, 255, -1018 }, 0, { 11370, 0 }, { 175, 206, 22, 255}}},
{{{ -258, 102, 8 }, 0, { -186, -30 }, { 175, 206, 22, 255}}},
{{{ -255, 0, 0 }, 0, { -234, 990 }, { 175, 206, 22, 255}}},
{{{ 21, -230, 508 }, 0, { -438, 990 }, { 175, 206, 22, 255}}},
};

Gfx DL_geo_bitdw_000438_0x70045c0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_geo_bitdw_000438_0x7004530),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_geo_bitdw_000438_0x7004530[] = {
gsDPSetTextureImage(0, 2, 1, geo_bitdw_000438__texture_09005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_geo_bitdw_000438_0x7004390, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(5, 6, 3, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP1Triangle(14, 11, 13, 0),
gsSPVertex(VB_geo_bitdw_000438_0x7004480, 11, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,6, 8, 9, 0),
gsSP1Triangle(0, 10, 1, 0),
gsSPEndDisplayList(),
};

