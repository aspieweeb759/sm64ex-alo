#include "custom.model.inc.h"
Vtx VB_wf_geo_000B90_0x700f238[] = {
{{{ 0, 384, -378 }, 0, { 10188, 8162 }, { 0, 127, 0, 255}}},
{{{ -168, 384, -378 }, 0, { 9514, 8162 }, { 0, 127, 0, 255}}},
{{{ 0, 384, 128 }, 0, { 10188, 10186 }, { 0, 127, 0, 255}}},
};

Vtx VB_wf_geo_000B90_0x700f268[] = {
{{{ 0, -383, 128 }, 0, { 1080, 3032 }, { 136, 0, 40, 255}}},
{{{ 0, 384, 128 }, 0, { 1080, 0 }, { 136, 0, 40, 255}}},
{{{ -168, 384, -378 }, 0, { -1052, 0 }, { 136, 0, 40, 255}}},
{{{ 0, 384, -378 }, 0, { 1992, 0 }, { 127, 0, 0, 255}}},
{{{ 0, 384, 128 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 0, -383, 128 }, 0, { 0, 3032 }, { 127, 0, 0, 255}}},
};

Light_t Light_wf_geo_000B90_0x700f228 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000B90_0x700f220 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000B90_0x700f340[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000B90_0x700f2c8),
gsSPDisplayList(DL_wf_geo_000B90_0x700f308),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000B90_0x700f2c8[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000B90__texture_09001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000B90_0x700f228.col, 1),
gsSPLight(&Light_wf_geo_000B90_0x700f220.col, 2),
gsSPVertex(VB_wf_geo_000B90_0x700f238, 3, 0),
gsSP1Triangle(0, 1, 2, 0),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000B90_0x700f308[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000B90__texture_09000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_wf_geo_000B90_0x700f268, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPEndDisplayList(),
};

