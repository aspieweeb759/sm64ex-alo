#include "custom.model.inc.h"
Vtx VB_wf_geo_000BE0_0x700f770[] = {
{{{ 0, 0, -107 }, 0, { 186, 990 }, { 129, 0, 0, 255}}},
{{{ 0, 0, 108 }, 0, { 722, 990 }, { 129, 0, 0, 255}}},
{{{ 0, 205, 108 }, 0, { 722, 0 }, { 129, 0, 0, 255}}},
{{{ 0, 205, -107 }, 0, { 186, 0 }, { 129, 0, 0, 255}}},
};

Light_t Light_wf_geo_000BE0_0x700f760 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000BE0_0x700f758 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000BE0_0x700f7f8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000BE0_0x700f7b0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000BE0_0x700f7b0[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000BE0__texture_09007000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000BE0_0x700f760.col, 1),
gsSPLight(&Light_wf_geo_000BE0_0x700f758.col, 2),
gsSPVertex(VB_wf_geo_000BE0_0x700f770, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

