#include "custom.model.inc.h"
const GeoLayout toad_geo[]= {
GEO_CULLING_RADIUS(1000),
GEO_OPEN_NODE(),
GEO_SHADOW(0,150,100),
GEO_OPEN_NODE(),
GEO_SCALE(0,16384),
GEO_OPEN_NODE(),
GEO_ASM(10, geo_update_layer_transparency),
GEO_SWITCH_CASE(2, geo_switch_anim_state),
GEO_OPEN_NODE(),
GEO_BRANCH(1,Geo_toad_geo_0x1e4d04),
GEO_BRANCH(1,Geo_toad_geo_0x1e4e6c),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};
#include "custom.model.inc.h"
const GeoLayout Geo_toad_geo_0x1e4d04[]= {
GEO_NODE_START(),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,83,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,126,65499,0,DL_toad_geo_0x6007710),
GEO_CLOSE_NODE(),
GEO_ANIMATED_PART(1,25,8,0,DL_toad_geo_0x6007ac8),
GEO_ANIMATED_PART(1,34,8,0,DL_toad_geo_0x6007f58),
GEO_ANIMATED_PART(1,4,7,38,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,37,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,9,65511,3,DL_toad_geo_0x6008980),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_ANIMATED_PART(1,4,7,65498,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,37,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,9,65511,65533,DL_toad_geo_0x6008cc8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_ANIMATED_PART(1,61,65533,52,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,17,0,4,DL_toad_geo_0x60082a0),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_ANIMATED_PART(1,61,65533,65484,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,17,0,65532,DL_toad_geo_0x60085c8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_RETURN(),
};
#include "custom.model.inc.h"
const GeoLayout Geo_toad_geo_0x1e4e6c[]= {
GEO_NODE_START(),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,83,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,126,65499,0,DL_toad_geo_0x6007788),
GEO_CLOSE_NODE(),
GEO_ANIMATED_PART(5,25,8,0,DL_toad_geo_0x6007b00),
GEO_ANIMATED_PART(1,34,8,0,DL_toad_geo_0x6007f58),
GEO_ANIMATED_PART(5,4,7,38,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,37,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,9,65511,3,DL_toad_geo_0x6008980),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_ANIMATED_PART(5,4,7,65498,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,37,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,9,65511,65533,DL_toad_geo_0x6008cc8),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_ANIMATED_PART(5,61,65533,52,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(1,17,0,4,DL_toad_geo_0x60082a0),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_ANIMATED_PART(5,61,65533,65484,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,0,0,0,0),
GEO_OPEN_NODE(),
GEO_ANIMATED_PART(5,17,0,65532,DL_toad_geo_0x6008608),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_RETURN(),
};
