#include "custom.model.inc.h"
Vtx VB_wf_geo_000B78_0x700f0a0[] = {
{{{ 0, 384, 128 }, 0, { 16320, 10186 }, { 0, 127, 0, 255}}},
{{{ 184, 384, -378 }, 0, { 17056, 8162 }, { 0, 127, 0, 255}}},
{{{ 0, 384, -378 }, 0, { 16320, 8162 }, { 0, 127, 0, 255}}},
};

Vtx VB_wf_geo_000B78_0x700f0d0[] = {
{{{ 0, -383, 128 }, 0, { 990, 3032 }, { 129, 0, 0, 255}}},
{{{ 0, 384, 128 }, 0, { 990, 0 }, { 129, 0, 0, 255}}},
{{{ 0, 384, -378 }, 0, { -1032, 0 }, { 129, 0, 0, 255}}},
{{{ 0, -383, 128 }, 0, { 0, 3032 }, { 119, 0, 43, 255}}},
{{{ 184, 384, -378 }, 0, { 2122, 0 }, { 119, 0, 43, 255}}},
{{{ 0, 384, 128 }, 0, { 0, 0 }, { 119, 0, 43, 255}}},
};

Light_t Light_wf_geo_000B78_0x700f090 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000B78_0x700f088 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000B78_0x700f1a8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000B78_0x700f130),
gsSPDisplayList(DL_wf_geo_000B78_0x700f170),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000B78_0x700f130[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000B78__texture_09001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000B78_0x700f090.col, 1),
gsSPLight(&Light_wf_geo_000B78_0x700f088.col, 2),
gsSPVertex(VB_wf_geo_000B78_0x700f0a0, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000B78_0x700f170[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000B78__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_wf_geo_000B78_0x700f0d0, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPEndDisplayList(),
};

