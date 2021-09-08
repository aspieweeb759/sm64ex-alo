#include "custom.model.inc.h"
Vtx VB_wf_geo_000BC8_0x700f3d0[] = {
{{{ -96, 0, 0 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -96, 1178, 77 }, 0, { 0, -54 }, { 129, 0, 0, 255}}},
{{{ -96, 1178, 0 }, 0, { 990, -54 }, { 129, 0, 0, 255}}},
{{{ -96, 1178, 0 }, 0, { 0, -54 }, { 0, 0, 129, 255}}},
{{{ 95, 1178, 0 }, 0, { 990, -54 }, { 0, 0, 129, 255}}},
{{{ 95, 0, 0 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
{{{ -96, 0, 0 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ 95, 1178, 0 }, 0, { 990, -54 }, { 127, 0, 0, 255}}},
{{{ 95, 1178, 77 }, 0, { 0, -54 }, { 127, 0, 0, 255}}},
{{{ 95, 0, 77 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
{{{ 95, 0, 0 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
{{{ 95, 1178, 77 }, 0, { 990, -54 }, { 0, 0, 127, 255}}},
{{{ -96, 1178, 77 }, 0, { 0, -54 }, { 0, 0, 127, 255}}},
{{{ -96, 0, 77 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
{{{ 95, 0, 77 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
};

Vtx VB_wf_geo_000BC8_0x700f4c0[] = {
{{{ 95, 0, 0 }, 0, { -152, 0 }, { 0, 129, 0, 255}}},
{{{ -96, 0, 77 }, 0, { 1122, 990 }, { 0, 129, 0, 255}}},
{{{ -96, 0, 0 }, 0, { 1122, 0 }, { 0, 129, 0, 255}}},
{{{ -96, 0, 0 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
{{{ -96, 0, 77 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ -96, 1178, 77 }, 0, { 0, -54 }, { 129, 0, 0, 255}}},
{{{ -96, 1178, 0 }, 0, { 1122, 0 }, { 0, 127, 0, 255}}},
{{{ -96, 1178, 77 }, 0, { 1122, 990 }, { 0, 127, 0, 255}}},
{{{ 95, 1178, 77 }, 0, { -152, 990 }, { 0, 127, 0, 255}}},
{{{ 95, 1178, 0 }, 0, { -152, 0 }, { 0, 127, 0, 255}}},
{{{ 95, 0, 77 }, 0, { -152, 990 }, { 0, 129, 0, 255}}},
};

Vtx VB_wf_geo_000BC8_0x700f680[] = {
{{{ -96, 0, 300 }, 0, { -480, -480 }, { 0, 0, 0, 150}}},
{{{ 95, 0, 300 }, 0, { 480, -480 }, { 0, 0, 0, 150}}},
{{{ 95, 0, 0 }, 0, { 480, 480 }, { 0, 0, 0, 150}}},
{{{ -96, 0, 0 }, 0, { -480, 480 }, { 0, 0, 0, 150}}},
};

Light_t Light_wf_geo_000BA8_0x700f3c0 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000BA8_0x700f3b8 = {
{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000BA8_0x700f610[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000BA8_0x700f570),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000BA8_0x700f570[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000BA8__texture_09006800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000BA8_0x700f3c0.col, 1),
gsSPLight(&Light_wf_geo_000BA8_0x700f3b8.col, 2),
gsSPVertex(VB_wf_geo_000BA8_0x700f3d0, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP1Triangle(11, 13, 14, 0),
gsSPVertex(VB_wf_geo_000BA8_0x700f4c0, 11, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,6, 8, 9, 0),
gsSP1Triangle(0, 10, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000BA8_0x700f6c0[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPSetTextureImage(3, 2, 1, wf_geo_000BA8__texture_07002800),
gsDPSetTile(3, 2, 0, 0, 7, 0, 1, 4, 0, 1, 4, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 127, 1024),
gsDPPipeSync(),
gsDPSetTile(3, 1, 2, 0, 0, 0, 1, 4, 0, 1, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 60),
gsSPVertex(VB_wf_geo_000BA8_0x700f680, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

