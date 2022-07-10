#include "custom.model.inc.h"
Vtx VB_ttm_1_0xe001010[] = {
{{{ -375, -4, 375 }, 0, { 1024, 0 }, { 0, 0, 127, 255}}},
{{{ 375, -4, 375 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ -375, 4, 375 }, 0, { 1024, -13 }, { 0, 0, 127, 255}}},
{{{ 375, 4, 375 }, 0, { 0, -13 }, { 0, 0, 127, 255}}},
{{{ -375, 4, 375 }, 0, { 1024, -13 }, { 0, 0, 127, 255}}},
{{{ 375, -4, 375 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
{{{ 375, -4, -375 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 375, 4, -375 }, 0, { 0, -13 }, { 127, 0, 0, 255}}},
{{{ 375, -4, 375 }, 0, { 1024, 0 }, { 127, 0, 0, 255}}},
{{{ 375, 4, 375 }, 0, { 1024, -13 }, { 127, 0, 0, 255}}},
{{{ 375, -4, 375 }, 0, { 1024, 0 }, { 127, 0, 0, 255}}},
{{{ 375, 4, -375 }, 0, { 0, -13 }, { 127, 0, 0, 255}}},
{{{ 375, -4, -375 }, 0, { 1024, 0 }, { 0, 0, 129, 255}}},
{{{ -375, -4, -375 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 375, 4, -375 }, 0, { 1024, -13 }, { 0, 0, 129, 255}}},
};

Vtx VB_ttm_1_0xe001100[] = {
{{{ -375, 4, -375 }, 0, { 0, -13 }, { 0, 0, 129, 255}}},
{{{ 375, 4, -375 }, 0, { 1024, -13 }, { 0, 0, 129, 255}}},
{{{ -375, -4, -375 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ -375, 4, -375 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
{{{ -375, 4, 375 }, 0, { 0, -1024 }, { 0, 127, 0, 255}}},
{{{ 375, 4, -375 }, 0, { 1024, 0 }, { 0, 127, 0, 255}}},
{{{ 375, 4, 375 }, 0, { 1024, -1024 }, { 0, 127, 0, 255}}},
{{{ 375, 4, -375 }, 0, { 1024, 0 }, { 0, 127, 0, 255}}},
{{{ -375, 4, 375 }, 0, { 0, -1024 }, { 0, 127, 0, 255}}},
{{{ -375, 4, -375 }, 0, { 1024, -13 }, { 129, 0, 0, 255}}},
{{{ -375, -4, -375 }, 0, { 1024, 0 }, { 129, 0, 0, 255}}},
{{{ -375, 4, 375 }, 0, { 0, -13 }, { 129, 0, 0, 255}}},
{{{ -375, -4, 375 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -375, 4, 375 }, 0, { 0, -13 }, { 129, 0, 0, 255}}},
{{{ -375, -4, -375 }, 0, { 1024, 0 }, { 129, 0, 0, 255}}},
};

Vtx VB_ttm_1_0xe0011f0[] = {
{{{ -375, -4, 375 }, 0, { 1024, -1024 }, { 0, 129, 0, 255}}},
{{{ -375, -4, -375 }, 0, { 1024, 0 }, { 0, 129, 0, 255}}},
{{{ 375, -4, 375 }, 0, { 0, -1024 }, { 0, 129, 0, 255}}},
{{{ 375, -4, -375 }, 0, { 0, 0 }, { 0, 129, 0, 255}}},
{{{ 375, -4, 375 }, 0, { 0, -1024 }, { 0, 129, 0, 255}}},
{{{ -375, -4, -375 }, 0, { 1024, 0 }, { 0, 129, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
};

Light_t Light_ttm_1_0xe000000 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 127, 127, 127}, 0
};

Ambient_t Light_ttm_1_0xe000008 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ttm_1_0xe0012e0[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE,TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPLoadSync(),
gsSPLight(&Light_ttm_1_0xe000000.col, 1),
gsSPLight(&Light_ttm_1_0xe000008.col, 2),
gsDPSetTextureImage(0, 2, 1, ttm_1__texture_0E000810),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_ttm_1_0xe001010, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,9, 10, 11, 0),
gsSP1Triangle(12, 13, 14, 0),
gsSPVertex(VB_ttm_1_0xe001100, 15, 0),
gsSP1Triangle(0, 1, 2, 0),
gsDPSetTextureImage(0, 2, 1, ttm_1__texture_0E000810),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_ttm_1_0xe001100, 15, 0),
gsSP2Triangles(9, 10, 11, 0,12, 13, 14, 0),
gsDPSetTextureImage(0, 2, 1, ttm_1__texture_0E000010),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_ttm_1_0xe0011f0, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,9, 10, 11, 0),
gsSP1Triangle(12, 13, 14, 0),
gsSPVertex(VB_ttm_1_0xe001100, 15, 0),
gsSP2Triangles(3, 4, 5, 0,6, 7, 8, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsSPEndDisplayList(),
};

