"""Mapping des thunk_FUN_ de Terrain.dll vers des noms lisibles.

Basé sur l'analyse du code décompilé (Ghidra).
Chaque thunk est un wrapper qui appelle une FUN_ interne.
Le mapping est déduit du contexte d'appel dans les fonctions nommées.
"""

THUNK_MAP = {
    # === Getter/Setters Tile ===
    "thunk_FUN_10006810": "tile_get_x",
    "thunk_FUN_10005960": "tile_get_y",
    "thunk_FUN_10001e40": "tile_get_elevation_internal",
    "thunk_FUN_10001f60": "tile_get_type_internal",
    "thunk_FUN_10001fa0": "tile_get_variation_internal",
    "thunk_FUN_10001fe0": "tile_get_wall_internal",
    "thunk_FUN_10002010": "tile_set_type_internal",
    "thunk_FUN_10002060": "tile_set_variation_internal",
    "thunk_FUN_10002510": "tile_set_elevation_internal",
    "thunk_FUN_10001b60": "tile_get_connected_path",
    
    # === Rendu ===
    "thunk_FUN_1000e6c0": "render_single_tile_internal",
    "thunk_FUN_1000adc0": "setup_fog",
    "thunk_FUN_10015460": "is_tile_visible",
    "thunk_FUN_10006850": "is_tile_in_frustum",
    "thunk_FUN_1000a130": "init_tile_array",
    "thunk_FUN_100380a0": "render_clear_all_tiles",
    "thunk_FUN_100381a0": "render_sort_tiles_by_distance",
    "thunk_FUN_10038900": "render_batch_submit",
    "thunk_FUN_10037930": "render_pop_tile_attributes",
    "thunk_FUN_1001b262": "render_push_tile_attributes",
    "thunk_FUN_1000ccc0": "render_apply_billboard_transform",
    "thunk_FUN_1000b690": "render_apply_rotation",
    "thunk_FUN_1000b6e0": "render_apply_translation",
    "thunk_FUN_1000b710": "render_apply_scaling",
    "thunk_FUN_1000b750": "render_setup_projection",
    "thunk_FUN_1000b7a0": "render_clear_buffers",
    "thunk_FUN_1000b800": "render_swap_buffers",
    "thunk_FUN_1000b910": "render_set_clear_color",
    "thunk_FUN_1000b960": "render_set_viewport",
    "thunk_FUN_1000b9b0": "render_begin_frame",
    "thunk_FUN_1000b9f0": "render_end_frame",
    
    # === Vertex Arrays ===
    "thunk_FUN_100032b0": "get_vertex_array",
    "thunk_FUN_10003270": "get_normal_array",
    
    # === Éclairage ===
    "thunk_FUN_10003a50": "set_light",
    "thunk_FUN_10037c80": "set_light_position",
    
    # === Édition terrain ===
    "thunk_FUN_1000c7b0": "elevate_tile_internal",
    "thunk_FUN_10012cf0": "calc_tile_normals_internal",
    
    # === Path système ===
    "thunk_FUN_10002ae0": "path_find_neighbors",
    "thunk_FUN_10002f80": "path_calculate_a_star",
    "thunk_FUN_1000aed0": "path_clear_all",
    
    # === Couleurs ===
    "thunk_FUN_1000c3d0": "color_blend_tiles",
    "thunk_FUN_1000c2c0": "color_set_tile_color",
    "thunk_FUN_1000c520": "color_get_tile_color",
    "thunk_FUN_1000c560": "color_update_vertex_colors",
    
    # === Blob tiling ===
    "thunk_FUN_10013f00": "blob_tile_override_for",
    "thunk_FUN_10015650": "blob_tile_fill_quadrants",
    "thunk_FUN_10013fc0": "blob_tile_get_quadrant",
    "thunk_FUN_10013ff0": "blob_tile_set_quadrant",
    "thunk_FUN_10014020": "blob_tile_process_texture",
    "thunk_FUN_10013dd0": "blob_allocate_texture_data",
    "thunk_FUN_10014190": "blob_fill_tile_texture",
    "thunk_FUN_100149e0": "blob_process_transform",
    "thunk_FUN_1000ae60": "blob_get_tile_pattern",
    "thunk_FUN_1000b500": "blob_calculate_border_map",
    
    # === Heap ===
    "thunk_FUN_10001880": "heap_alloc_tile_grid",
    "thunk_FUN_100018b0": "heap_free_tile_grid",
    "thunk_FUN_100016a0": "heap_alloc_vertex_buffer",
    
    # === Système ===
    "thunk_FUN_100033e0": "system_init_sub",
    "thunk_FUN_100037e0": "system_set_render_mode",
    "thunk_FUN_10003830": "system_get_render_mode",
    "thunk_FUN_10003980": "system_update_viewport",
    "thunk_FUN_10003f80": "system_initialize_opengl",
    "thunk_FUN_100046a0": "system_initialize_fonts",
    "thunk_FUN_10005090": "system_initialize_textures",
    "thunk_FUN_10005750": "system_initialize_input",
    "thunk_FUN_10005840": "system_initialize_audio",
    "thunk_FUN_100058a0": "system_initialize_network",
    "thunk_FUN_10006dd0": "system_initialize_particles",
    "thunk_FUN_10007380": "system_initialize_weather",
    "thunk_FUN_100076e0": "system_initialize_physics",
    
    # === Mémoire ===
    "thunk_FUN_1000af70": "memory_clear_block",
    "thunk_FUN_1000afe0": "memory_copy_block",
    "thunk_FUN_1000b040": "memory_fill_block",
    "thunk_FUN_1000b090": "memory_compare_blocks",
    
    # === Font ===
    "thunk_FUN_1000b100": "font_render_string",
    "thunk_FUN_1000b210": "font_get_string_width",
    
    # === Texture ===
    "thunk_FUN_1000b280": "texture_load_tile_texture",
    "thunk_FUN_1000b2d0": "texture_bind_tile_texture",
    "thunk_FUN_1000b320": "texture_get_tile_texture_coords",
    "thunk_FUN_1000b380": "texture_calculate_uv",
    "thunk_FUN_1000b3d0": "texture_update_tile_uv",
    "thunk_FUN_1000b430": "texture_get_texture_array",
    "thunk_FUN_1000b470": "texture_select_texture_set",
    
    # === Zoom ===
    "thunk_FUN_1000b5b0": "zoom_get_level",
    "thunk_FUN_1000b600": "zoom_set_level",
    "thunk_FUN_1000b630": "zoom_get_scale_factor",
    "thunk_FUN_1000b660": "zoom_update_matrix",
    
    # === Vent/Physique ===
    "thunk_FUN_1000ba40": "wind_get_current",
    "thunk_FUN_1000bab0": "wind_set_direction",
    "thunk_FUN_1000bae0": "wind_get_speed",
    "thunk_FUN_1000bb40": "wind_randomize",
    "thunk_FUN_1000bbd0": "physics_projectile_trajectory",
    
    # === Timer ===
    "thunk_FUN_1000be30": "timer_get_delta_time",
    "thunk_FUN_1000c210": "timer_get_frame_count",
    
    # === Load/Save ===
    "thunk_FUN_1000d480": "serialize_terrain_to_buffer",
    "thunk_FUN_1000d540": "deserialize_terrain_from_buffer",
    "thunk_FUN_1000de60": "terrain_calculate_memory_usage",
    
    # === Divers terrain ===
    "thunk_FUN_1000ea30": "terrain_process_visibility",
    "thunk_FUN_1000f690": "terrain_get_bounds_min_x",
    "thunk_FUN_1000f6e0": "terrain_get_bounds_max_x",
    "thunk_FUN_1000f750": "terrain_get_bounds_min_y",
    "thunk_FUN_1000f7a0": "terrain_get_bounds_max_y",
    "thunk_FUN_1000f7f0": "terrain_create_collision_data",
    "thunk_FUN_10010590": "terrain_calculate_lighting_cache",
    "thunk_FUN_100108f0": "terrain_update_ambient_cache",
    
    # === Normales ===
    "thunk_FUN_10012e70": "normal_get_vertex_normal",
    "thunk_FUN_10012ec0": "normal_set_vertex_normal",
    "thunk_FUN_10013320": "normal_calculate_face_normal",
    "thunk_FUN_10013360": "normal_calculate_smooth_normals",
    "thunk_FUN_100133a0": "normal_average_normals",
    "thunk_FUN_10013400": "normal_update_all_normals",
    "thunk_FUN_10013500": "normal_calculate_lighting",
    "thunk_FUN_10013670": "normal_calculate_shadow",
    
    # === Collision ===
    "thunk_FUN_10015230": "collision_ray_tile_intersect",
    "thunk_FUN_10015340": "collision_get_tile_at_point",
    "thunk_FUN_10015380": "collision_get_tile_at_screen",
    "thunk_FUN_100153c0": "collision_get_tile_at_mouse",
    "thunk_FUN_10015400": "collision_project_screen_to_world",
    "thunk_FUN_100154a0": "collision_is_point_visible",
    "thunk_FUN_10015500": "collision_is_tile_hittable",
    "thunk_FUN_100155b0": "collision_cast_ray",
    "thunk_FUN_10011d60": "collision_get_world_bounds",
    "thunk_FUN_10011ef0": "collision_rebuild_grid",
    
    # === Spline ===
    "thunk_FUN_100116d0": "spline_update_control_points",
    
    # === Wind (duplicate check) ===
    "thunk_FUN_1000bae0_dup": "wind_apply_transform",
}
