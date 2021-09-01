#include "custom.model.inc.h"
Vtx VB_lll_geo_000EA8_0x7025c00[] = {
{{{ -306, 614, 0 }, 0, { 0, 864 }, { 119, 119, 119, 255}}},
{{{ -306, -101, 0 }, 0, { 0, 3184 }, { 119, 119, 119, 255}}},
{{{ -306, -101, 102 }, 0, { 300, 3184 }, { 119, 119, 119, 255}}},
{{{ -306, 614, 102 }, 0, { 300, 864 }, { 119, 119, 119, 255}}},
{{{ 307, -101, 0 }, 0, { 3086, 3184 }, { 119, 119, 119, 255}}},
{{{ 307, 614, 102 }, 0, { 2754, 864 }, { 119, 119, 119, 255}}},
{{{ 307, -101, 102 }, 0, { 2754, 3184 }, { 119, 119, 119, 255}}},
{{{ 307, 614, 0 }, 0, { 3086, 864 }, { 119, 119, 119, 255}}},
{{{ -306, -101, 0 }, 0, { 5078, 3184 }, { 255, 255, 255, 255}}},
{{{ -306, 614, 0 }, 0, { 5078, 864 }, { 255, 255, 255, 255}}},
{{{ 307, 614, 0 }, 0, { 3086, 864 }, { 255, 255, 255, 255}}},
{{{ 307, -101, 0 }, 0, { 3086, 3184 }, { 255, 255, 255, 255}}},
{{{ 307, 614, 102 }, 0, { 3086, 830 }, { 255, 255, 255, 255}}},
{{{ -306, 614, 102 }, 0, { 5078, 830 }, { 255, 255, 255, 255}}},
};

Vtx VB_lll_geo_000EA8_0x7025ce0[] = {
{{{ 307, -101, 102 }, 0, { -2584, -4120 }, { 119, 119, 119, 255}}},
{{{ 307, 614, 102 }, 0, { -2584, 3032 }, { 119, 119, 119, 255}}},
{{{ 307, -101, 700 }, 0, { -2584, -4120 }, { 119, 119, 119, 255}}},
{{{ -306, 614, 102 }, 0, { 3544, 3032 }, { 119, 119, 119, 255}}},
{{{ -306, -101, 102 }, 0, { 3546, -4120 }, { 119, 119, 119, 255}}},
{{{ -306, -101, 700 }, 0, { 3544, -4120 }, { 119, 119, 119, 255}}},
{{{ 307, -101, 700 }, 0, { -2584, -4120 }, { 255, 255, 255, 255}}},
{{{ -306, 614, 102 }, 0, { 3544, 3032 }, { 255, 255, 255, 255}}},
{{{ -306, -101, 700 }, 0, { 3544, -4120 }, { 255, 255, 255, 255}}},
{{{ 307, 614, 102 }, 0, { -2584, 3032 }, { 255, 255, 255, 255}}},
};

Gfx DL_lll_geo_000EA8_0x7025e30[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(0, 0, 0, 255),
gsMoveWd(G_MW_FOG, 0, 139851947),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_000EA8_0x7025d80),
gsSPDisplayList(DL_lll_geo_000EA8_0x7025de8),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000EA8_0x7025d80[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000EA8__texture_0700DC00),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000EA8_0x7025c00, 14, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 10, 11, 0),
gsSP2Triangles(9, 12, 10, 0,9, 13, 12, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000EA8_0x7025de8[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_000EA8__texture_0900A000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_000EA8_0x7025ce0, 10, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,6, 9, 7, 0),
gsSPEndDisplayList(),
};

