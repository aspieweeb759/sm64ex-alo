#include "custom.model.inc.h"
Vtx VB_wf_geo_000860_0x7006680[] = {
{{{ 256, 1075, -255 }, 0, { -9228, 990 }, { 0, 127, 0, 255}}},
{{{ -255, 1075, -255 }, 0, { -9228, -1054 }, { 0, 127, 0, 255}}},
{{{ -255, 1075, 256 }, 0, { -11272, -1054 }, { 0, 127, 0, 255}}},
{{{ 256, 1075, 256 }, 0, { -11272, 990 }, { 0, 127, 0, 255}}},
};

Vtx VB_wf_geo_000860_0x70066c0[] = {
{{{ 256, 1075, 256 }, 0, { 3034, 0 }, { 127, 0, 0, 255}}},
{{{ 256, 0, -255 }, 0, { 5078, 4258 }, { 127, 0, 0, 255}}},
{{{ 256, 1075, -255 }, 0, { 5078, 0 }, { 127, 0, 0, 255}}},
{{{ 256, 0, 256 }, 0, { 3034, 4258 }, { 127, 0, 0, 255}}},
{{{ -255, 1075, 256 }, 0, { -1052, 0 }, { 0, 0, 127, 255}}},
{{{ 256, 0, 256 }, 0, { 990, 4258 }, { 0, 0, 127, 255}}},
{{{ 256, 1075, 256 }, 0, { 990, 0 }, { 0, 0, 127, 255}}},
{{{ -255, 0, 256 }, 0, { -1052, 4258 }, { 0, 0, 127, 255}}},
{{{ 256, 1075, -255 }, 0, { -1052, 0 }, { 0, 0, 129, 255}}},
{{{ -255, 0, -255 }, 0, { 990, 4258 }, { 0, 0, 129, 255}}},
{{{ -255, 1075, -255 }, 0, { 990, 0 }, { 0, 0, 129, 255}}},
{{{ 256, 0, -255 }, 0, { -1052, 4258 }, { 0, 0, 129, 255}}},
};

Light_t Light_wf_geo_000860_0x7006670 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000860_0x7006668 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000860_0x7006820[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000860_0x7006780),
gsSPDisplayList(DL_wf_geo_000860_0x70067c8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000860_0x7006780[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000860__texture_09001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000860_0x7006670.col, 1),
gsSPLight(&Light_wf_geo_000860_0x7006668.col, 2),
gsSPVertex(VB_wf_geo_000860_0x7006680, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000860_0x70067c8[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000860__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_wf_geo_000860_0x70066c0, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSPEndDisplayList(),
};

