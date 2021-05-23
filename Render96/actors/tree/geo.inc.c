#include "src/game/envfx_snow.h"

// 0x16000FE8
const GeoLayout bubbly_tree_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, bubble_tree_mdl),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001000
const GeoLayout spiky_tree_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, spiky_tree_mdl),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001018
const GeoLayout snow_tree_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, snow_tree_mdl),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001030
const GeoLayout spiky_tree1_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, spiky_tree_mdl),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16001048
const GeoLayout palm_tree_geo[] = {
   GEO_CULLING_RADIUS(800),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_ALPHA, palm_tree_mdl),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
