#include "custom.model.inc.h"
Vtx VB_jrb_geo_000948_0x7007b88[] = {
{{{ -255, -63, 640 }, 0, { -882, 990 }, { 129, 0, 0, 255}}},
{{{ -255, 64, 640 }, 0, { -882, 848 }, { 129, 0, 0, 255}}},
{{{ -255, 64, -639 }, 0, { 3374, 848 }, { 129, 0, 0, 255}}},
{{{ 256, -63, 640 }, 0, { 138, 990 }, { 0, 0, 127, 255}}},
{{{ 256, 64, 640 }, 0, { 138, 848 }, { 0, 0, 127, 255}}},
{{{ -255, 64, 640 }, 0, { 990, 848 }, { 0, 0, 127, 255}}},
{{{ -255, -63, 640 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
{{{ 256, -63, -639 }, 0, { 3374, 990 }, { 127, 0, 0, 255}}},
{{{ 256, 64, 640 }, 0, { -882, 848 }, { 127, 0, 0, 255}}},
{{{ 256, -63, 640 }, 0, { -882, 990 }, { 127, 0, 0, 255}}},
{{{ 256, 64, -639 }, 0, { 3374, 848 }, { 127, 0, 0, 255}}},
{{{ -255, -63, -639 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ -255, 64, -639 }, 0, { 990, 848 }, { 0, 0, 129, 255}}},
{{{ 256, 64, -639 }, 0, { 138, 848 }, { 0, 0, 129, 255}}},
{{{ 256, -63, -639 }, 0, { 138, 990 }, { 0, 0, 129, 255}}},
{{{ -255, -63, -639 }, 0, { 3374, 990 }, { 129, 0, 0, 255}}},
};

Vtx VB_jrb_geo_000948_0x7007c88[] = {
{{{ 256, -63, 640 }, 0, { -2328, 990 }, { 0, 129, 0, 255}}},
{{{ -255, -63, 640 }, 0, { -2328, -1566 }, { 0, 129, 0, 255}}},
{{{ -255, -63, -639 }, 0, { 4056, -1566 }, { 0, 129, 0, 255}}},
{{{ 256, -63, -639 }, 0, { 4056, 990 }, { 0, 129, 0, 255}}},
{{{ 256, 64, -639 }, 0, { 4056, 990 }, { 0, 127, 0, 255}}},
{{{ -255, 64, 640 }, 0, { -2328, -1566 }, { 0, 127, 0, 255}}},
{{{ 256, 64, 640 }, 0, { -2328, 990 }, { 0, 127, 0, 255}}},
{{{ -255, 64, -639 }, 0, { 4056, -1566 }, { 0, 127, 0, 255}}},
};

Light_t Light_jrb_geo_000948_0x7007b78 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_jrb_geo_000948_0x7007b70 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_jrb_geo_000948_0x7007dc8[] = {
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_2CYCLE),
gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
gsDPSetDepthSource(0),
gsDPSetFogColor(5, 80, 75, 255),
gsMoveWd(G_MW_FOG, 0, 83950592),
gsSPGeometryMode(0, G_FOG),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_jrb_geo_000948_0x7007d08),
gsDPTileSync(),
gsDPSetTile(0, 2, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
gsDPSetTileSize(0, 0, 0, 252, 124),
gsSPDisplayList(DL_jrb_geo_000948_0x7007d80),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCycleType(G_CYC_1CYCLE),
gsDPSetRenderMode(0, 4464760),
gsSPGeometryMode(G_FOG, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_jrb_geo_000948_0x7007d08[] = {
gsDPSetTextureImage(0, 2, 1, jrb_geo_000948__texture_0900A000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_jrb_geo_000948_0x7007b78.col, 1),
gsSPLight(&Light_jrb_geo_000948_0x7007b70.col, 2),
gsSPVertex(VB_jrb_geo_000948_0x7007b88, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 13, 14, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

Gfx DL_jrb_geo_000948_0x7007d80[] = {
gsDPSetTextureImage(0, 2, 1, jrb_geo_000948__texture_0900A800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 128),
gsSPVertex(VB_jrb_geo_000948_0x7007c88, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSPEndDisplayList(),
};

