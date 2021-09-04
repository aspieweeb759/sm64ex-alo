#include "custom.model.inc.h"
Vtx VB_wf_geo_000A98_0x700ea40[] = {
{{{ 256, 0, 256 }, 0, { 0, -236 }, { 127, 0, 0, 255}}},
{{{ 256, -50, 256 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 256, -50, -255 }, 0, { 2012, 0 }, { 127, 0, 0, 255}}},
{{{ 256, 0, -255 }, 0, { 2012, -236 }, { 127, 0, 0, 255}}},
};

Vtx VB_wf_geo_000A98_0x700ea80[] = {
{{{ 256, 0, 256 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
{{{ -255, 0, -255 }, 0, { 2012, -1054 }, { 0, 127, 0, 255}}},
{{{ -255, 0, 256 }, 0, { 0, -1054 }, { 0, 127, 0, 255}}},
{{{ 256, 0, -255 }, 0, { 2012, 990 }, { 0, 127, 0, 255}}},
};

Light_t Light_wf_geo_000A98_0x700ea30 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000A98_0x700ea28 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000A98_0x700eb40[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000A98_0x700eac0),
gsSPDisplayList(DL_wf_geo_000A98_0x700eb08),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000A98_0x700eac0[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000A98__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000A98_0x700ea30.col, 1),
gsSPLight(&Light_wf_geo_000A98_0x700ea28.col, 2),
gsSPVertex(VB_wf_geo_000A98_0x700ea40, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000A98_0x700eb08[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000A98__texture_09001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_wf_geo_000A98_0x700ea80, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

