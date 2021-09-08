#include "custom.model.inc.h"
Vtx VB_jrb_geo_000960_0x7007eb8[] = {
{{{ 102, 0, 77 }, 0, { 990, 990 }, { 51, 205, 103, 255}}},
{{{ 102, 154, 77 }, 0, { 990, 0 }, { 84, 84, 42, 255}}},
{{{ -101, 154, 77 }, 0, { 0, 0 }, { 205, 51, 103, 255}}},
{{{ 102, 0, -76 }, 0, { 990, 990 }, { 84, 172, 214, 255}}},
{{{ 102, 154, 77 }, 0, { 0, 0 }, { 84, 84, 42, 255}}},
{{{ 102, 0, 77 }, 0, { 0, 990 }, { 51, 205, 103, 255}}},
{{{ 102, 154, -76 }, 0, { 990, 0 }, { 51, 51, 153, 255}}},
{{{ -101, 0, -76 }, 0, { 990, 990 }, { 205, 205, 153, 255}}},
{{{ 102, 154, -76 }, 0, { 0, 0 }, { 51, 51, 153, 255}}},
{{{ 102, 0, -76 }, 0, { 0, 990 }, { 84, 172, 214, 255}}},
{{{ -101, 154, -76 }, 0, { 990, 0 }, { 172, 84, 214, 255}}},
{{{ -101, 0, 77 }, 0, { 990, 990 }, { 172, 172, 42, 255}}},
{{{ -101, 154, 77 }, 0, { 990, 0 }, { 205, 51, 103, 255}}},
{{{ -101, 154, -76 }, 0, { 0, 0 }, { 172, 84, 214, 255}}},
{{{ -101, 0, -76 }, 0, { 0, 990 }, { 205, 205, 153, 255}}},
{{{ -101, 0, 77 }, 0, { 0, 990 }, { 172, 172, 42, 255}}},
};

Vtx VB_jrb_geo_000960_0x7007fb8[] = {
{{{ -101, 0, 77 }, 0, { 0, 0 }, { 172, 172, 42, 255}}},
{{{ 102, 0, -76 }, 0, { 990, 990 }, { 84, 172, 214, 255}}},
{{{ 102, 0, 77 }, 0, { 990, 0 }, { 51, 205, 103, 255}}},
{{{ -101, 0, -76 }, 0, { 0, 990 }, { 205, 205, 153, 255}}},
{{{ 102, 154, 77 }, 0, { 990, 990 }, { 84, 84, 42, 255}}},
{{{ 102, 154, -76 }, 0, { 990, 0 }, { 51, 51, 153, 255}}},
{{{ -101, 154, -76 }, 0, { 0, 0 }, { 172, 84, 214, 255}}},
{{{ -101, 154, 77 }, 0, { 0, 990 }, { 205, 51, 103, 255}}},
};

Light_t Light_jrb_geo_000960_0x7007ea8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_jrb_geo_000960_0x7007ea0 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_jrb_geo_000960_0x70080f8[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(5, 80, 75, 255),
gsMoveWd(G_MW_FOG, 0, 83950592),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_jrb_geo_000960_0x7008038),
gsSPDisplayList(DL_jrb_geo_000960_0x70080b0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_jrb_geo_000960_0x7008038[] = {
gsDPSetTextureImage(0, 2, 1, jrb_geo_000960__texture_07001800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_jrb_geo_000960_0x7007ea8.col, 1),
gsSPLight(&Light_jrb_geo_000960_0x7007ea0.col, 2),
gsSPVertex(VB_jrb_geo_000960_0x7007eb8, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 13, 14, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

Gfx DL_jrb_geo_000960_0x70080b0[] = {
gsDPSetTextureImage(0, 2, 1, jrb_geo_000960__texture_07002000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_jrb_geo_000960_0x7007fb8, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 6, 7, 0),
gsSPEndDisplayList(),
};

