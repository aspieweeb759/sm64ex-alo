#include "custom.model.inc.h"
Vtx VB_bowser_3_geo_000290_0x7002030[] = {
{{{ -1945, -1340, -2661 }, 0, { 5282, 786 }, { 196, 153, 215, 255}}},
{{{ -2364, -1852, -787 }, 0, { 3412, 1202 }, { 196, 153, 215, 255}}},
{{{ -3071, -1340, -1023 }, 0, { 3648, 1908 }, { 196, 153, 215, 255}}},
{{{ -1945, -1340, -2661 }, 0, { 5282, 786 }, { 214, 144, 216, 255}}},
{{{ -787, -2364, -1024 }, 0, { 3648, -370 }, { 214, 144, 216, 255}}},
{{{ -2364, -1852, -787 }, 0, { 3412, 1202 }, { 214, 144, 216, 255}}},
};

Vtx VB_bowser_3_geo_000290_0x7002090[] = {
{{{ -3071, 307, -1023 }, 0, { -1052, -1872 }, { 0, 127, 0, 255}}},
{{{ -787, 307, -1024 }, 0, { 466, -1872 }, { 0, 127, 0, 255}}},
{{{ -1945, 307, -2661 }, 0, { -302, -2962 }, { 0, 127, 0, 255}}},
{{{ -2364, 307, -787 }, 0, { -582, -1714 }, { 0, 127, 0, 255}}},
};

Vtx VB_bowser_3_geo_000290_0x70020d0[] = {
{{{ -1945, -1340, -2661 }, 0, { 990, 2012 }, { 103, 0, 183, 255}}},
{{{ -1945, 307, -2661 }, 0, { 990, 0 }, { 103, 0, 183, 255}}},
{{{ -787, -2364, -1024 }, 0, { -1010, 2012 }, { 103, 0, 183, 255}}},
{{{ -2364, 307, -787 }, 0, { 494, 0 }, { 216, 0, 120, 255}}},
{{{ -3071, 307, -1023 }, 0, { 990, 0 }, { 216, 0, 120, 255}}},
{{{ -3071, -1340, -1023 }, 0, { 990, 2012 }, { 216, 0, 120, 255}}},
{{{ -2364, -1852, -787 }, 0, { 494, 2012 }, { 216, 0, 120, 255}}},
{{{ -787, -2364, -1024 }, 0, { -504, 2012 }, { 18, 0, 125, 255}}},
{{{ -787, 307, -1024 }, 0, { -506, 0 }, { 18, 0, 125, 255}}},
{{{ -2364, -1852, -787 }, 0, { 1048, 2012 }, { 18, 0, 125, 255}}},
{{{ -2364, 307, -787 }, 0, { 1046, 0 }, { 18, 0, 125, 255}}},
{{{ -3071, -1340, -1023 }, 0, { 14512, 1816 }, { 152, 0, 185, 255}}},
{{{ -3071, 307, -1023 }, 0, { 14512, 172 }, { 152, 0, 185, 255}}},
{{{ -1945, -1340, -2661 }, 0, { 13006, 1816 }, { 152, 0, 185, 255}}},
{{{ -1945, 307, -2661 }, 0, { 13006, 172 }, { 152, 0, 185, 255}}},
{{{ -787, 307, -1024 }, 0, { -1010, 0 }, { 103, 0, 183, 255}}},
};

Light_t Light_bowser_3_geo_000290_0x7002008 = {
{ 137, 137, 138}, 0, { 137, 137, 138}, 0, { 40, 40, 40}, 0
};

Light_t Light_bowser_3_geo_000290_0x7002020 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_bowser_3_geo_000290_0x7002000 = {
{34, 34, 34}, 0, {34, 34, 34}, 0
};

Ambient_t Light_bowser_3_geo_000290_0x7002018 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_bowser_3_geo_000290_0x70022a8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_bowser_3_geo_000290_0x70021d0),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_bowser_3_geo_000290_0x7002240),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_bowser_3_geo_000290_0x70021d0[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000290__texture_07000800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_bowser_3_geo_000290_0x7002008.col, 1),
gsSPLight(&Light_bowser_3_geo_000290_0x7002000.col, 2),
gsSPVertex(VB_bowser_3_geo_000290_0x7002030, 6, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSPLight(&Light_bowser_3_geo_000290_0x7002020.col, 1),
gsSPLight(&Light_bowser_3_geo_000290_0x7002018.col, 2),
gsSPVertex(VB_bowser_3_geo_000290_0x7002090, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSPEndDisplayList(),
};

Gfx DL_bowser_3_geo_000290_0x7002240[] = {
gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000290__texture_07001000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_bowser_3_geo_000290_0x70020d0, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(8, 10, 9, 0,11, 12, 13, 0),
gsSP2Triangles(12, 14, 13, 0,1, 15, 2, 0),
gsSPEndDisplayList(),
};
