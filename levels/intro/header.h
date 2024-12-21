#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_splash_screen[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_debug_level_select[];

// leveldata
extern Lights1 SuperNotMario64Logo_Material_002_Logo_grp_png_f3d_lights;
extern Lights1 SuperNotMario64Logo_f3dlite_material_lights;
extern Lights1 SuperNotMario64Logo_f3dlite_material_002_lights;
extern Lights1 SuperNotMario64Logo_f3dlite_material_005_lights;
extern Lights1 SuperNotMario64Logo_f3dlite_material_006_lights;
extern u8 SuperNotMario64Logo_AB9BB93_c_ci8[];
extern u8 SuperNotMario64Logo_AB9BB93_c_pal_rgba16[];
extern Vtx SuperNotMario64Logo_Logo_mesh_vtx_cull[8];
extern Vtx SuperNotMario64Logo_Logo_mesh_vtx_0[922];
extern Gfx SuperNotMario64Logo_Logo_mesh_tri_0[];
extern Vtx SuperNotMario64Logo_Logo_mesh_vtx_1[260];
extern Gfx SuperNotMario64Logo_Logo_mesh_tri_1[];
extern Vtx SuperNotMario64Logo_Logo_mesh_vtx_2[184];
extern Gfx SuperNotMario64Logo_Logo_mesh_tri_2[];
extern Vtx SuperNotMario64Logo_Logo_mesh_vtx_3[425];
extern Gfx SuperNotMario64Logo_Logo_mesh_tri_3[];
extern Vtx SuperNotMario64Logo_Logo_mesh_vtx_4[120];
extern Gfx SuperNotMario64Logo_Logo_mesh_tri_4[];
extern Gfx mat_SuperNotMario64Logo_Material_002_Logo_grp_png_f3d[];
extern Gfx mat_revert_SuperNotMario64Logo_Material_002_Logo_grp_png_f3d[];
extern Gfx mat_SuperNotMario64Logo_f3dlite_material[];
extern Gfx mat_revert_SuperNotMario64Logo_f3dlite_material[];
extern Gfx mat_SuperNotMario64Logo_f3dlite_material_002[];
extern Gfx mat_revert_SuperNotMario64Logo_f3dlite_material_002[];
extern Gfx mat_SuperNotMario64Logo_f3dlite_material_005[];
extern Gfx mat_revert_SuperNotMario64Logo_f3dlite_material_005[];
extern Gfx mat_SuperNotMario64Logo_f3dlite_material_006[];
extern Gfx mat_revert_SuperNotMario64Logo_f3dlite_material_006[];
extern Gfx SuperNotMario64Logo_Logo_mesh[];


extern const Gfx intro_seg7_dl_copyright_trademark[];
extern const f32 intro_seg7_table_scale_1[];
extern const f32 intro_seg7_table_scale_2[];

// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_level_select[];
extern const LevelScript script_intro_file_select[];
extern const LevelScript script_intro_level_select[];
extern const LevelScript script_intro_main_level_entry_stop_music[];
extern const LevelScript script_intro_main_level_entry[];
extern const LevelScript script_intro_splash_screen[];

#endif
