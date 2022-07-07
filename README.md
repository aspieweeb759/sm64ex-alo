# sm64ex_alo
Fork of [sm64pc/sm64ex](https://github.com/sm64pc/sm64ex/tree/nightly) with additional features. 

## Additional Pre reqs

 * pypng
 * bitstring

## Changes
 * Restored N64 build.
 * Additional backends merged from other forks (3DS, Wii U, Switch) (more incoming)

## Hackporting

This repo has been forked from sm64ex_alo to be optimized for porting romhacks from binary to every possible target.

Each branch of this repository should be a hack that has finished being ported or is currently being ported.

### Install RM2C in "C:/Users/Your_Name" to use in windows Command Prompt
### RM2C tool developed by jesusyoshi54: [RM2C](https://gitlab.com/scuttlebugraiser/rom-manger-2-c)

### Changes to Master Branch

 * CI texture support
 * Custom version of Puppycam
 * Extended Bounds
 * Various Bugfixes
 * Skip Intro
 * Separated Custom Leveldata From Vanilla Leveldata
 * Various defines added to accept RM2C output configurations in single config file
 * Fixed External Data Support

### Dependencies
bistring, capstone, pypng, PIL, and pyhull.

### Installation

* pip install bitstring
* pip install capstone
* pip install pypng
* pip install pillow
* pip install pyhull (may require microsoft visual studio C++ build tools alongside it)

### Usage
Type these commands in cmd

* cd rom-manager-2-c
* python RM2C.py rom='rom_name.z64' levels='all' actors='all' Textures=1 Title=1

### If your hack was made in editor, add editor=1 to the command

You must use my fork of sm64ex-alo for RM2C

For most romhacks, the start level should be changed to 16 in "src/game/tweaks.inc.c"

To enable Kaze's MOP models, set MOP to 1 in "src/game/tweaks.inc.c"

If your romhack has fog related graphics bugs, they can be fixed relatively easily
All you need to do is paste the line of code below in between "gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING)," and "gsSPEndDisplayList(),"
at the bottom of custom.model.inc.c in "name_of_level/areas/1/"

gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE,TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_NOOP2),

## Building

### Recommended BUILD cmds

 1. WINDOWS_BUILD
	* make -j4 TARGET_N64=0 TARGET_ARCH=native WINDOWS_BUILD=1 TARGET_GAME_CONSOLE=0 DEBUG=1 NODRAWINGDISTANCE=1 RM2C=1
	
    TEXTURE PACK SUPPORT (You will need to run this command twice due to a weird compiler error)
	* make -j4 TARGET_N64=0 TARGET_ARCH=native WINDOWS_BUILD=1 TARGET_GAME_CONSOLE=0 DEBUG=1 NODRAWINGDISTANCE=1 RM2C=1 EXTERNAL_DATA=1
        

 * To build for sm64ex platforms, [click here](https://github.com/sm64pc/sm64ex/blob/nightly/README.md).
 * To build for N64, [click here](https://github.com/n64decomp/sm64/blob/master/README.md). (TARGET_N64=1)
 * To build for Wii U, [click here](https://github.com/aboood40091/sm64-port/blob/master/README.md). (TARGET_WII_U=1)
 * To build for N3DS, [click here](https://github.com/sm64-port/sm64_3ds/blob/master/README.md). (TARGET_N3DS=1)
 * To build for Switch, [click here](https://github.com/fgsfdsfgs/sm64ex/blob/switch/README.md). (TARGET_SWITCH=1)
