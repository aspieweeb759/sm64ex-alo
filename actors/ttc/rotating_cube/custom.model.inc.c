#include "custom.model.inc.h"
Vtx VB_ttc_geo_000240_0x700e980[] = {
{{{ -199, 200, -199 }, 0, { 2012, 0 }, { 214, 84, 172, 255}}},
{{{ 0, 0, -199 }, 0, { 478, 1340 }, { 0, 0, 129, 255}}},
{{{ -199, -199, -199 }, 0, { -1052, 0 }, { 172, 214, 172, 255}}},
{{{ 200, -199, -199 }, 0, { 2012, 0 }, { 42, 172, 172, 255}}},
{{{ 200, 200, -199 }, 0, { -1052, 0 }, { 84, 42, 172, 255}}},
{{{ 200, 200, 200 }, 0, { -1052, 0 }, { 42, 84, 84, 255}}},
{{{ 0, 0, 200 }, 0, { 478, 1340 }, { 0, 0, 127, 255}}},
{{{ 200, -199, 200 }, 0, { 2012, 0 }, { 84, 214, 84, 255}}},
{{{ -199, -199, 200 }, 0, { -1052, 0 }, { 214, 172, 84, 255}}},
{{{ -199, 200, 200 }, 0, { 2012, 0 }, { 172, 42, 84, 255}}},
};

Vtx VB_ttc_geo_000240_0x700ea20[] = {
{{{ -199, -199, -199 }, 0, { 2012, 0 }, { 172, 214, 172, 255}}},
{{{ 0, 0, -199 }, 0, { 478, 1340 }, { 0, 0, 129, 255}}},
{{{ 200, -199, -199 }, 0, { -1052, 0 }, { 42, 172, 172, 255}}},
{{{ 200, 200, -199 }, 0, { 2012, 0 }, { 84, 42, 172, 255}}},
{{{ -199, 200, -199 }, 0, { -1052, 0 }, { 214, 84, 172, 255}}},
{{{ 200, -199, 200 }, 0, { -1052, 0 }, { 84, 214, 84, 255}}},
{{{ 0, 0, 200 }, 0, { 478, 1340 }, { 0, 0, 127, 255}}},
{{{ -199, -199, 200 }, 0, { 2012, 0 }, { 214, 172, 84, 255}}},
{{{ -199, 200, 200 }, 0, { -1052, 0 }, { 172, 42, 84, 255}}},
{{{ 200, 200, 200 }, 0, { 2012, 0 }, { 42, 84, 84, 255}}},
};

Vtx VB_ttc_geo_000240_0x700eac0[] = {
{{{ 200, -199, -199 }, 0, { 0, 990 }, { 42, 172, 172, 255}}},
{{{ 200, -199, 200 }, 0, { 990, 990 }, { 84, 214, 84, 255}}},
{{{ -199, -199, 200 }, 0, { 990, 0 }, { 214, 172, 84, 255}}},
{{{ -199, 200, -199 }, 0, { 0, 990 }, { 214, 84, 172, 255}}},
{{{ -199, 200, 200 }, 0, { 990, 990 }, { 172, 42, 84, 255}}},
{{{ 200, 200, 200 }, 0, { 990, 0 }, { 42, 84, 84, 255}}},
{{{ 200, 200, -199 }, 0, { 0, 0 }, { 84, 42, 172, 255}}},
{{{ -199, 200, 200 }, 0, { 990, 0 }, { 172, 42, 84, 255}}},
{{{ -199, -199, -199 }, 0, { 0, 990 }, { 172, 214, 172, 255}}},
{{{ -199, -199, 200 }, 0, { 990, 990 }, { 214, 172, 84, 255}}},
{{{ -199, 200, -199 }, 0, { 0, 0 }, { 214, 84, 172, 255}}},
{{{ 200, 200, -199 }, 0, { 0, 990 }, { 84, 42, 172, 255}}},
{{{ 200, -199, 200 }, 0, { 990, 0 }, { 84, 214, 84, 255}}},
{{{ 200, -199, -199 }, 0, { 0, 0 }, { 42, 172, 172, 255}}},
{{{ 200, 200, 200 }, 0, { 990, 990 }, { 42, 84, 84, 255}}},
{{{ -199, -199, -199 }, 0, { 0, 0 }, { 172, 214, 172, 255}}},
};

Light_t Light_ttc_geo_000240_0x700e958 = {
{ 170, 170, 170}, 0, { 170, 170, 170}, 0, { 40, 40, 40}, 0
};

Light_t Light_ttc_geo_000240_0x700e970 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttc_geo_000240_0x700e950 = {
{85, 85, 85}, 0, {85, 85, 85}, 0
};

Ambient_t Light_ttc_geo_000240_0x700e968 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ttc_geo_000240_0x700ecb8[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(200, 255, 255, 255),
gsMoveWd(G_MW_FOG, 0, 83950592),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttc_geo_000240_0x700ebc0),
gsSPDisplayList(DL_ttc_geo_000240_0x700ec50),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_000240_0x700ebc0[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_000240__texture_09001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttc_geo_000240_0x700e958.col, 1),
gsSPLight(&Light_ttc_geo_000240_0x700e950.col, 2),
gsSPVertex(VB_ttc_geo_000240_0x700e980, 10, 0),
gsSP2Triangles(0, 1, 2, 0,3, 1, 4, 0),
gsSP2Triangles(5, 6, 7, 0,8, 6, 9, 0),
gsSPLight(&Light_ttc_geo_000240_0x700e970.col, 1),
gsSPLight(&Light_ttc_geo_000240_0x700e968.col, 2),
gsSPVertex(VB_ttc_geo_000240_0x700ea20, 10, 0),
gsSP2Triangles(0, 1, 2, 0,3, 1, 4, 0),
gsSP2Triangles(5, 6, 7, 0,8, 6, 9, 0),
gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_000240_0x700ec50[] = {
gsDPSetTextureImage(0, 2, 1, ttc_geo_000240__texture_09005000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_ttc_geo_000240_0x700eac0, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

