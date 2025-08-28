// WARNING: This is a generated file, do not edit it!
// clang-format off

#include <kbelf.h>

extern char const symbol_asp_device_get_name[] asm("asp_device_get_name");
extern char const symbol_asp_device_get_manufacturer[] asm("asp_device_get_manufacturer");
extern char const symbol_asp_disp_get_params[] asm("asp_disp_get_params");
extern char const symbol_asp_disp_get_fb[] asm("asp_disp_get_fb");
extern char const symbol_asp_disp_get_pax_buf[] asm("asp_disp_get_pax_buf");
extern char const symbol_asp_disp_init_pax_buf[] asm("asp_disp_init_pax_buf");
extern char const symbol_asp_disp_write[] asm("asp_disp_write");
extern char const symbol_asp_disp_write_pax[] asm("asp_disp_write_pax");
extern char const symbol_asp_disp_write_part[] asm("asp_disp_write_part");
extern char const symbol_asp_disp_write_part_pax[] asm("asp_disp_write_part_pax");
extern char const symbol_asp_err_id[] asm("asp_err_id");
extern char const symbol_asp_err_desc[] asm("asp_err_desc");
extern char const symbol_asp_input_poll[] asm("asp_input_poll");
extern char const symbol_asp_input_get_nav[] asm("asp_input_get_nav");
extern char const symbol_asp_input_get_action[] asm("asp_input_get_action");
extern char const symbol_asp_input_needs_on_screen_keyboard[] asm("asp_input_needs_on_screen_keyboard");
extern char const symbol_asp_input_set_backlight[] asm("asp_input_set_backlight");
extern char const symbol_asp_input_get_backlight[] asm("asp_input_get_backlight");
extern char const symbol_sched_yield[] asm("sched_yield");
extern char const symbol_sched_get_priority_min[] asm("sched_get_priority_min");
extern char const symbol_sched_get_priority_max[] asm("sched_get_priority_max");
extern char const symbol_pthread_mutexattr_init[] asm("pthread_mutexattr_init");
extern char const symbol_pthread_mutexattr_destroy[] asm("pthread_mutexattr_destroy");
extern char const symbol_pthread_mutexattr_gettype[] asm("pthread_mutexattr_gettype");
extern char const symbol_pthread_mutexattr_settype[] asm("pthread_mutexattr_settype");
extern char const symbol_pthread_mutex_init[] asm("pthread_mutex_init");
extern char const symbol_pthread_mutex_destroy[] asm("pthread_mutex_destroy");
extern char const symbol_pthread_mutex_lock[] asm("pthread_mutex_lock");
extern char const symbol_pthread_mutex_trylock[] asm("pthread_mutex_trylock");
extern char const symbol_pthread_mutex_unlock[] asm("pthread_mutex_unlock");
extern char const symbol_pthread_mutex_timedlock[] asm("pthread_mutex_timedlock");
extern char const symbol_pthread_condattr_init[] asm("pthread_condattr_init");
extern char const symbol_pthread_condattr_destroy[] asm("pthread_condattr_destroy");
extern char const symbol_pthread_condattr_getclock[] asm("pthread_condattr_getclock");
extern char const symbol_pthread_condattr_setclock[] asm("pthread_condattr_setclock");
extern char const symbol_pthread_condattr_getpshared[] asm("pthread_condattr_getpshared");
extern char const symbol_pthread_condattr_setpshared[] asm("pthread_condattr_setpshared");
extern char const symbol_pthread_cond_init[] asm("pthread_cond_init");
extern char const symbol_pthread_cond_destroy[] asm("pthread_cond_destroy");
extern char const symbol_pthread_cond_signal[] asm("pthread_cond_signal");
extern char const symbol_pthread_cond_broadcast[] asm("pthread_cond_broadcast");
extern char const symbol_pthread_cond_wait[] asm("pthread_cond_wait");
extern char const symbol_pthread_cond_timedwait[] asm("pthread_cond_timedwait");
extern char const symbol_pthread_attr_init[] asm("pthread_attr_init");
extern char const symbol_pthread_attr_destroy[] asm("pthread_attr_destroy");
extern char const symbol_pthread_attr_getstacksize[] asm("pthread_attr_getstacksize");
extern char const symbol_pthread_attr_setstacksize[] asm("pthread_attr_setstacksize");
extern char const symbol_pthread_attr_getdetachstate[] asm("pthread_attr_getdetachstate");
extern char const symbol_pthread_attr_setdetachstate[] asm("pthread_attr_setdetachstate");
extern char const symbol_pthread_getschedparam[] asm("pthread_getschedparam");
extern char const symbol_pthread_setschedparam[] asm("pthread_setschedparam");
extern char const symbol_pthread_create[] asm("pthread_create");
extern char const symbol_pthread_join[] asm("pthread_join");
extern char const symbol_pthread_detach[] asm("pthread_detach");
extern char const symbol_pthread_exit[] asm("pthread_exit");
extern char const symbol_pthread_self[] asm("pthread_self");
extern char const symbol_pthread_equal[] asm("pthread_equal");
extern char const symbol_pthread_once[] asm("pthread_once");
extern char const symbol_pthread_key_create[] asm("pthread_key_create");
extern char const symbol_pthread_key_delete[] asm("pthread_key_delete");
extern char const symbol_pthread_getspecific[] asm("pthread_getspecific");
extern char const symbol_pthread_setspecific[] asm("pthread_setspecific");
extern char const symbol_pthread_cancel[] asm("pthread_cancel");
extern char const symbol_pthread_setcancelstate[] asm("pthread_setcancelstate");
extern char const symbol_pthread_rwlock_rdlock[] asm("pthread_rwlock_rdlock");
extern char const symbol_pthread_rwlock_tryrdlock[] asm("pthread_rwlock_tryrdlock");
extern char const symbol_pthread_rwlock_unlock[] asm("pthread_rwlock_unlock");
extern char const symbol_pthread_rwlock_wrlock[] asm("pthread_rwlock_wrlock");
extern char const symbol_pthread_rwlock_trywrlock[] asm("pthread_rwlock_trywrlock");
extern char const symbol_pax_precalc_circle_8[] asm("pax_precalc_circle_8");
extern char const symbol_pax_precalc_uv_circle_8[] asm("pax_precalc_uv_circle_8");
extern char const symbol_pax_precalc_circle_16[] asm("pax_precalc_circle_16");
extern char const symbol_pax_precalc_uv_circle_16[] asm("pax_precalc_uv_circle_16");
extern char const symbol_pax_precalc_circle_24[] asm("pax_precalc_circle_24");
extern char const symbol_pax_precalc_uv_circle_24[] asm("pax_precalc_uv_circle_24");
extern char const symbol_pax_precalc_circle_32[] asm("pax_precalc_circle_32");
extern char const symbol_pax_precalc_uv_circle_32[] asm("pax_precalc_uv_circle_32");
extern char const symbol_PRIVATE_pax_font_sky[] asm("PRIVATE_pax_font_sky");
extern char const symbol_PRIVATE_pax_font_sky_mono[] asm("PRIVATE_pax_font_sky_mono");
extern char const symbol_PRIVATE_pax_font_marker[] asm("PRIVATE_pax_font_marker");
extern char const symbol_PRIVATE_pax_font_saira_condensed[] asm("PRIVATE_pax_font_saira_condensed");
extern char const symbol_PRIVATE_pax_font_saira_regular[] asm("PRIVATE_pax_font_saira_regular");
extern char const symbol_pax_join[] asm("pax_join");
extern char const symbol_pax_buf_init[] asm("pax_buf_init");
extern char const symbol_pax_buf_reversed[] asm("pax_buf_reversed");
extern char const symbol_pax_buf_destroy[] asm("pax_buf_destroy");
extern char const symbol_pax_buf_get_width[] asm("pax_buf_get_width");
extern char const symbol_pax_buf_get_height[] asm("pax_buf_get_height");
extern char const symbol_pax_buf_get_widthf[] asm("pax_buf_get_widthf");
extern char const symbol_pax_buf_get_heightf[] asm("pax_buf_get_heightf");
extern char const symbol_pax_buf_get_type[] asm("pax_buf_get_type");
extern char const symbol_pax_buf_get_pixels[] asm("pax_buf_get_pixels");
extern char const symbol_pax_buf_get_pixels_rw[] asm("pax_buf_get_pixels_rw");
extern char const symbol_pax_buf_get_size[] asm("pax_buf_get_size");
extern char const symbol_pax_buf_set_orientation[] asm("pax_buf_set_orientation");
extern char const symbol_pax_buf_get_orientation[] asm("pax_buf_get_orientation");
extern char const symbol_pax_buf_scroll[] asm("pax_buf_scroll");
extern char const symbol_pax_clip[] asm("pax_clip");
extern char const symbol_pax_get_clip[] asm("pax_get_clip");
extern char const symbol_pax_noclip[] asm("pax_noclip");
extern char const symbol_pax_is_dirty[] asm("pax_is_dirty");
extern char const symbol_pax_get_dirty[] asm("pax_get_dirty");
extern char const symbol_pax_mark_clean[] asm("pax_mark_clean");
extern char const symbol_pax_mark_dirty0[] asm("pax_mark_dirty0");
extern char const symbol_pax_mark_dirty1[] asm("pax_mark_dirty1");
extern char const symbol_pax_mark_dirty2[] asm("pax_mark_dirty2");
extern char const symbol_pax_col_hsv[] asm("pax_col_hsv");
extern char const symbol_pax_col_ahsv[] asm("pax_col_ahsv");
extern char const symbol_pax_col_hsv_alt[] asm("pax_col_hsv_alt");
extern char const symbol_pax_col_ahsv_alt[] asm("pax_col_ahsv_alt");
extern char const symbol_pax_undo_ahsv[] asm("pax_undo_ahsv");
extern char const symbol_pax_undo_hsv[] asm("pax_undo_hsv");
extern char const symbol_pax_undo_ahsv_alt[] asm("pax_undo_ahsv_alt");
extern char const symbol_pax_undo_hsv_alt[] asm("pax_undo_hsv_alt");
extern char const symbol_pax_col_lerp[] asm("pax_col_lerp");
extern char const symbol_pax_col_merge[] asm("pax_col_merge");
extern char const symbol_pax_col_tint[] asm("pax_col_tint");
extern char const symbol_pax_apply_2d[] asm("pax_apply_2d");
extern char const symbol_pax_push_2d[] asm("pax_push_2d");
extern char const symbol_pax_pop_2d[] asm("pax_pop_2d");
extern char const symbol_pax_reset_2d[] asm("pax_reset_2d");
extern char const symbol_pax_merge_pixel[] asm("pax_merge_pixel");
extern char const symbol_pax_set_pixel[] asm("pax_set_pixel");
extern char const symbol_pax_get_pixel[] asm("pax_get_pixel");
extern char const symbol_pax_set_pixel_raw[] asm("pax_set_pixel_raw");
extern char const symbol_pax_get_pixel_raw[] asm("pax_get_pixel_raw");
extern char const symbol_pax_shade_rect[] asm("pax_shade_rect");
extern char const symbol_pax_shade_line[] asm("pax_shade_line");
extern char const symbol_pax_shade_tri[] asm("pax_shade_tri");
extern char const symbol_pax_shade_arc[] asm("pax_shade_arc");
extern char const symbol_pax_shade_circle[] asm("pax_shade_circle");
extern char const symbol_pax_draw_image[] asm("pax_draw_image");
extern char const symbol_pax_draw_image_sized[] asm("pax_draw_image_sized");
extern char const symbol_pax_draw_image_op[] asm("pax_draw_image_op");
extern char const symbol_pax_draw_image_sized_op[] asm("pax_draw_image_sized_op");
extern char const symbol_pax_draw_rect[] asm("pax_draw_rect");
extern char const symbol_pax_draw_line[] asm("pax_draw_line");
extern char const symbol_pax_draw_tri[] asm("pax_draw_tri");
extern char const symbol_pax_draw_arc[] asm("pax_draw_arc");
extern char const symbol_pax_draw_circle[] asm("pax_draw_circle");
extern char const symbol_pax_background[] asm("pax_background");
extern char const symbol_pax_simple_rect[] asm("pax_simple_rect");
extern char const symbol_pax_simple_line[] asm("pax_simple_line");
extern char const symbol_pax_simple_tri[] asm("pax_simple_tri");
extern char const symbol_pax_simple_arc[] asm("pax_simple_arc");
extern char const symbol_pax_simple_circle[] asm("pax_simple_circle");
extern char const symbol_matrix_2d_rotate[] asm("matrix_2d_rotate");
extern char const symbol_matrix_2d_multiply[] asm("matrix_2d_multiply");
extern char const symbol_matrix_2d_transform[] asm("matrix_2d_transform");
extern char const symbol_pax_shader_font_bmp_hi_pal[] asm("pax_shader_font_bmp_hi_pal");
extern char const symbol_pax_shader_font_bmp_hi[] asm("pax_shader_font_bmp_hi");
extern char const symbol_pax_shader_font_bmp_hi_aa[] asm("pax_shader_font_bmp_hi_aa");
extern char const symbol_pax_shader_font_bmp_pal[] asm("pax_shader_font_bmp_pal");
extern char const symbol_pax_shader_font_bmp[] asm("pax_shader_font_bmp");
extern char const symbol_pax_shader_font_bmp_aa[] asm("pax_shader_font_bmp_aa");
extern char const symbol_pax_shader_texture[] asm("pax_shader_texture");
extern char const symbol_pax_shader_texture_aa[] asm("pax_shader_texture_aa");
extern char const symbol_pax_vectorise_bezier_part[] asm("pax_vectorise_bezier_part");
extern char const symbol_pax_vectorise_bezier[] asm("pax_vectorise_bezier");
extern char const symbol_pax_draw_bezier_part[] asm("pax_draw_bezier_part");
extern char const symbol_pax_draw_bezier[] asm("pax_draw_bezier");
extern char const symbol_pax_vectorise_arc[] asm("pax_vectorise_arc");
extern char const symbol_pax_vectorise_circle[] asm("pax_vectorise_circle");
extern char const symbol_pax_draw_round_rect[] asm("pax_draw_round_rect");
extern char const symbol_pax_draw_hollow_circle[] asm("pax_draw_hollow_circle");
extern char const symbol_pax_draw_hollow_arc[] asm("pax_draw_hollow_arc");
extern char const symbol_pax_draw_round_hollow_arc[] asm("pax_draw_round_hollow_arc");
extern char const symbol_pax_outline_round_rect[] asm("pax_outline_round_rect");
extern char const symbol_pax_outline_hollow_circle[] asm("pax_outline_hollow_circle");
extern char const symbol_pax_outline_hollow_arc[] asm("pax_outline_hollow_arc");
extern char const symbol_pax_outline_round_hollow_arc[] asm("pax_outline_round_hollow_arc");
extern char const symbol_pax_outline_rect[] asm("pax_outline_rect");
extern char const symbol_pax_outline_tri[] asm("pax_outline_tri");
extern char const symbol_pax_outline_arc[] asm("pax_outline_arc");
extern char const symbol_pax_outline_circle[] asm("pax_outline_circle");
extern char const symbol_pax_shade_outline_rect[] asm("pax_shade_outline_rect");
extern char const symbol_pax_shade_outline_tri[] asm("pax_shade_outline_tri");
extern char const symbol_pax_shade_outline_arc[] asm("pax_shade_outline_arc");
extern char const symbol_pax_shade_outline_circle[] asm("pax_shade_outline_circle");
extern char const symbol_pax_outline_shape_part[] asm("pax_outline_shape_part");
extern char const symbol_pax_outline_shape[] asm("pax_outline_shape");
extern char const symbol_pax_outline_shape_part_cl[] asm("pax_outline_shape_part_cl");
extern char const symbol_pax_outline_shape_cl[] asm("pax_outline_shape_cl");
extern char const symbol_pax_transform_shape[] asm("pax_transform_shape");
extern char const symbol_pax_round_shape_uniform[] asm("pax_round_shape_uniform");
extern char const symbol_pax_round_shape[] asm("pax_round_shape");
extern char const symbol_pax_triang_complete[] asm("pax_triang_complete");
extern char const symbol_pax_triang_concave[] asm("pax_triang_concave");
extern char const symbol_pax_draw_shape[] asm("pax_draw_shape");
extern char const symbol_pax_draw_shape_triang[] asm("pax_draw_shape_triang");
extern char const symbol_pax_load_font[] asm("pax_load_font");
extern char const symbol_pax_store_font[] asm("pax_store_font");
extern char const symbol_pax_draw_text[] asm("pax_draw_text");
extern char const symbol_pax_text_size[] asm("pax_text_size");
extern char const symbol___errno[] asm("__errno");
extern char const symbol_open[] asm("open");
extern char const symbol_creat[] asm("creat");
extern char const symbol_fcntl[] asm("fcntl");
extern char const symbol_usleep[] asm("usleep");
extern char const symbol_rmdir[] asm("rmdir");
extern char const symbol_unlink[] asm("unlink");
extern char const symbol_mkdir[] asm("mkdir");
extern char const symbol_fstat[] asm("fstat");
extern char const symbol_stat[] asm("stat");
extern char const symbol_memchr[] asm("memchr");
extern char const symbol_memcmp[] asm("memcmp");
extern char const symbol_memcpy[] asm("memcpy");
extern char const symbol_memmove[] asm("memmove");
extern char const symbol_memset[] asm("memset");
extern char const symbol_strcat[] asm("strcat");
extern char const symbol_strchr[] asm("strchr");
extern char const symbol_strcmp[] asm("strcmp");
extern char const symbol_strcoll[] asm("strcoll");
extern char const symbol_strcpy[] asm("strcpy");
extern char const symbol_strcspn[] asm("strcspn");
extern char const symbol_strerror[] asm("strerror");
extern char const symbol_strlen[] asm("strlen");
extern char const symbol_strncat[] asm("strncat");
extern char const symbol_strncmp[] asm("strncmp");
extern char const symbol_strncpy[] asm("strncpy");
extern char const symbol_strpbrk[] asm("strpbrk");
extern char const symbol_strrchr[] asm("strrchr");
extern char const symbol_strspn[] asm("strspn");
extern char const symbol_strstr[] asm("strstr");
extern char const symbol_strtok[] asm("strtok");
extern char const symbol_strxfrm[] asm("strxfrm");
extern char const symbol_strcoll_l[] asm("strcoll_l");
extern char const symbol_strerror_l[] asm("strerror_l");
extern char const symbol_strxfrm_l[] asm("strxfrm_l");
extern char const symbol_strtok_r[] asm("strtok_r");
extern char const symbol_timingsafe_bcmp[] asm("timingsafe_bcmp");
extern char const symbol_timingsafe_memcmp[] asm("timingsafe_memcmp");
extern char const symbol_memccpy[] asm("memccpy");
extern char const symbol_mempcpy[] asm("mempcpy");
extern char const symbol_memmem[] asm("memmem");
extern char const symbol_memrchr[] asm("memrchr");
extern char const symbol_rawmemchr[] asm("rawmemchr");
extern char const symbol_stpcpy[] asm("stpcpy");
extern char const symbol_stpncpy[] asm("stpncpy");
extern char const symbol_strcasestr[] asm("strcasestr");
extern char const symbol_strchrnul[] asm("strchrnul");
extern char const symbol_strdup[] asm("strdup");
extern char const symbol_strndup[] asm("strndup");
extern char const symbol_strlcat[] asm("strlcat");
extern char const symbol_strlcpy[] asm("strlcpy");
extern char const symbol_strnlen[] asm("strnlen");
extern char const symbol_strsep[] asm("strsep");
extern char const symbol_strnstr[] asm("strnstr");
extern char const symbol_strlwr[] asm("strlwr");
extern char const symbol_strupr[] asm("strupr");
extern char const symbol_strsignal[] asm("strsignal");
extern char const symbol_strverscmp[] asm("strverscmp");
extern char const symbol_malloc[] asm("malloc");
extern char const symbol_free[] asm("free");
extern char const symbol_realloc[] asm("realloc");
extern char const symbol_calloc[] asm("calloc");
extern char const symbol_memalign[] asm("memalign");
extern char const symbol_mallinfo[] asm("mallinfo");
extern char const symbol_malloc_stats[] asm("malloc_stats");
extern char const symbol_mallopt[] asm("mallopt");
extern char const symbol_malloc_usable_size[] asm("malloc_usable_size");
extern char const symbol___sinit[] asm("__sinit");
extern char const symbol___sglue[] asm("__sglue");
extern char const symbol__global_impure_ptr[] asm("_global_impure_ptr");
extern char const symbol___getreent[] asm("__getreent");
extern char const symbol___atexit[] asm("__atexit");
extern char const symbol___atexit0[] asm("__atexit0");
extern char const symbol__reclaim_reent[] asm("_reclaim_reent");
extern char const symbol__fwalk_sglue[] asm("_fwalk_sglue");
extern char const symbol_tmpfile[] asm("tmpfile");
extern char const symbol_tmpnam[] asm("tmpnam");
extern char const symbol_tempnam[] asm("tempnam");
extern char const symbol_fclose[] asm("fclose");
extern char const symbol_fflush[] asm("fflush");
extern char const symbol_freopen[] asm("freopen");
extern char const symbol_setbuf[] asm("setbuf");
extern char const symbol_setvbuf[] asm("setvbuf");
extern char const symbol_fprintf[] asm("fprintf");
extern char const symbol_fscanf[] asm("fscanf");
extern char const symbol_printf[] asm("printf");
extern char const symbol_scanf[] asm("scanf");
extern char const symbol_sscanf[] asm("sscanf");
extern char const symbol_vfprintf[] asm("vfprintf");
extern char const symbol_vprintf[] asm("vprintf");
extern char const symbol_vsprintf[] asm("vsprintf");
extern char const symbol_fgetc[] asm("fgetc");
extern char const symbol_fgets[] asm("fgets");
extern char const symbol_fputc[] asm("fputc");
extern char const symbol_fputs[] asm("fputs");
extern char const symbol_getc[] asm("getc");
extern char const symbol_getchar[] asm("getchar");
extern char const symbol_gets[] asm("gets");
extern char const symbol_putc[] asm("putc");
extern char const symbol_putchar[] asm("putchar");
extern char const symbol_puts[] asm("puts");
extern char const symbol_ungetc[] asm("ungetc");
extern char const symbol_fread[] asm("fread");
extern char const symbol_fwrite[] asm("fwrite");
extern char const symbol_fgetpos[] asm("fgetpos");
extern char const symbol_fseek[] asm("fseek");
extern char const symbol_fsetpos[] asm("fsetpos");
extern char const symbol_ftell[] asm("ftell");
extern char const symbol_rewind[] asm("rewind");
extern char const symbol_clearerr[] asm("clearerr");
extern char const symbol_feof[] asm("feof");
extern char const symbol_ferror[] asm("ferror");
extern char const symbol_perror[] asm("perror");
extern char const symbol_fopen[] asm("fopen");
extern char const symbol_sprintf[] asm("sprintf");
extern char const symbol_remove[] asm("remove");
extern char const symbol_rename[] asm("rename");
extern char const symbol_fseeko[] asm("fseeko");
extern char const symbol_ftello[] asm("ftello");
extern char const symbol_fcloseall[] asm("fcloseall");
extern char const symbol_snprintf[] asm("snprintf");
extern char const symbol_vsnprintf[] asm("vsnprintf");
extern char const symbol_vfscanf[] asm("vfscanf");
extern char const symbol_vscanf[] asm("vscanf");
extern char const symbol_vsscanf[] asm("vsscanf");
extern char const symbol_asprintf[] asm("asprintf");
extern char const symbol_vasprintf[] asm("vasprintf");
extern char const symbol_fdopen[] asm("fdopen");
extern char const symbol_fileno[] asm("fileno");
extern char const symbol_setbuffer[] asm("setbuffer");
extern char const symbol_setlinebuf[] asm("setlinebuf");
extern char const symbol_getw[] asm("getw");
extern char const symbol_putw[] asm("putw");
extern char const symbol_getc_unlocked[] asm("getc_unlocked");
extern char const symbol_getchar_unlocked[] asm("getchar_unlocked");
extern char const symbol_putc_unlocked[] asm("putc_unlocked");
extern char const symbol_putchar_unlocked[] asm("putchar_unlocked");
extern char const symbol_dprintf[] asm("dprintf");
extern char const symbol_fmemopen[] asm("fmemopen");
extern char const symbol_open_memstream[] asm("open_memstream");
extern char const symbol_vdprintf[] asm("vdprintf");
extern char const symbol__asiprintf_r[] asm("_asiprintf_r");
extern char const symbol__asniprintf_r[] asm("_asniprintf_r");
extern char const symbol__asnprintf_r[] asm("_asnprintf_r");
extern char const symbol__asprintf_r[] asm("_asprintf_r");
extern char const symbol__diprintf_r[] asm("_diprintf_r");
extern char const symbol__dprintf_r[] asm("_dprintf_r");
extern char const symbol__fclose_r[] asm("_fclose_r");
extern char const symbol__fcloseall_r[] asm("_fcloseall_r");
extern char const symbol__fdopen_r[] asm("_fdopen_r");
extern char const symbol__fflush_r[] asm("_fflush_r");
extern char const symbol__fgetc_r[] asm("_fgetc_r");
extern char const symbol__fgetc_unlocked_r[] asm("_fgetc_unlocked_r");
extern char const symbol__fgets_r[] asm("_fgets_r");
extern char const symbol__fgets_unlocked_r[] asm("_fgets_unlocked_r");
extern char const symbol__fgetpos_r[] asm("_fgetpos_r");
extern char const symbol__fsetpos_r[] asm("_fsetpos_r");
extern char const symbol__fiprintf_r[] asm("_fiprintf_r");
extern char const symbol__fiscanf_r[] asm("_fiscanf_r");
extern char const symbol__fmemopen_r[] asm("_fmemopen_r");
extern char const symbol__fopen_r[] asm("_fopen_r");
extern char const symbol__freopen_r[] asm("_freopen_r");
extern char const symbol__fprintf_r[] asm("_fprintf_r");
extern char const symbol__fpurge_r[] asm("_fpurge_r");
extern char const symbol__fputc_r[] asm("_fputc_r");
extern char const symbol__fputc_unlocked_r[] asm("_fputc_unlocked_r");
extern char const symbol__fputs_r[] asm("_fputs_r");
extern char const symbol__fputs_unlocked_r[] asm("_fputs_unlocked_r");
extern char const symbol__fread_r[] asm("_fread_r");
extern char const symbol__fread_unlocked_r[] asm("_fread_unlocked_r");
extern char const symbol__fscanf_r[] asm("_fscanf_r");
extern char const symbol__fseek_r[] asm("_fseek_r");
extern char const symbol__fseeko_r[] asm("_fseeko_r");
extern char const symbol__ftell_r[] asm("_ftell_r");
extern char const symbol__ftello_r[] asm("_ftello_r");
extern char const symbol__rewind_r[] asm("_rewind_r");
extern char const symbol__fwrite_r[] asm("_fwrite_r");
extern char const symbol__fwrite_unlocked_r[] asm("_fwrite_unlocked_r");
extern char const symbol__getc_r[] asm("_getc_r");
extern char const symbol__getc_unlocked_r[] asm("_getc_unlocked_r");
extern char const symbol__getchar_r[] asm("_getchar_r");
extern char const symbol__getchar_unlocked_r[] asm("_getchar_unlocked_r");
extern char const symbol__gets_r[] asm("_gets_r");
extern char const symbol__iprintf_r[] asm("_iprintf_r");
extern char const symbol__iscanf_r[] asm("_iscanf_r");
extern char const symbol__open_memstream_r[] asm("_open_memstream_r");
extern char const symbol__perror_r[] asm("_perror_r");
extern char const symbol__printf_r[] asm("_printf_r");
extern char const symbol__putc_r[] asm("_putc_r");
extern char const symbol__putc_unlocked_r[] asm("_putc_unlocked_r");
extern char const symbol__putchar_unlocked_r[] asm("_putchar_unlocked_r");
extern char const symbol__putchar_r[] asm("_putchar_r");
extern char const symbol__puts_r[] asm("_puts_r");
extern char const symbol__remove_r[] asm("_remove_r");
extern char const symbol__rename_r[] asm("_rename_r");
extern char const symbol__scanf_r[] asm("_scanf_r");
extern char const symbol__siprintf_r[] asm("_siprintf_r");
extern char const symbol__siscanf_r[] asm("_siscanf_r");
extern char const symbol__sniprintf_r[] asm("_sniprintf_r");
extern char const symbol__snprintf_r[] asm("_snprintf_r");
extern char const symbol__sprintf_r[] asm("_sprintf_r");
extern char const symbol__sscanf_r[] asm("_sscanf_r");
extern char const symbol__tempnam_r[] asm("_tempnam_r");
extern char const symbol__tmpfile_r[] asm("_tmpfile_r");
extern char const symbol__tmpnam_r[] asm("_tmpnam_r");
extern char const symbol__ungetc_r[] asm("_ungetc_r");
extern char const symbol__vasiprintf_r[] asm("_vasiprintf_r");
extern char const symbol__vasniprintf_r[] asm("_vasniprintf_r");
extern char const symbol__vasnprintf_r[] asm("_vasnprintf_r");
extern char const symbol__vasprintf_r[] asm("_vasprintf_r");
extern char const symbol__vdiprintf_r[] asm("_vdiprintf_r");
extern char const symbol__vdprintf_r[] asm("_vdprintf_r");
extern char const symbol__vfiprintf_r[] asm("_vfiprintf_r");
extern char const symbol__vfiscanf_r[] asm("_vfiscanf_r");
extern char const symbol__vfprintf_r[] asm("_vfprintf_r");
extern char const symbol__vfscanf_r[] asm("_vfscanf_r");
extern char const symbol__viprintf_r[] asm("_viprintf_r");
extern char const symbol__viscanf_r[] asm("_viscanf_r");
extern char const symbol__vprintf_r[] asm("_vprintf_r");
extern char const symbol__vscanf_r[] asm("_vscanf_r");
extern char const symbol__vsiprintf_r[] asm("_vsiprintf_r");
extern char const symbol__vsiscanf_r[] asm("_vsiscanf_r");
extern char const symbol__vsniprintf_r[] asm("_vsniprintf_r");
extern char const symbol__vsnprintf_r[] asm("_vsnprintf_r");
extern char const symbol__vsprintf_r[] asm("_vsprintf_r");
extern char const symbol__vsscanf_r[] asm("_vsscanf_r");
extern char const symbol_fpurge[] asm("fpurge");
extern char const symbol___getdelim[] asm("__getdelim");
extern char const symbol___getline[] asm("__getline");
extern char const symbol_clearerr_unlocked[] asm("clearerr_unlocked");
extern char const symbol_feof_unlocked[] asm("feof_unlocked");
extern char const symbol_ferror_unlocked[] asm("ferror_unlocked");
extern char const symbol_fileno_unlocked[] asm("fileno_unlocked");
extern char const symbol_fflush_unlocked[] asm("fflush_unlocked");
extern char const symbol_fgetc_unlocked[] asm("fgetc_unlocked");
extern char const symbol_fputc_unlocked[] asm("fputc_unlocked");
extern char const symbol_fread_unlocked[] asm("fread_unlocked");
extern char const symbol_fwrite_unlocked[] asm("fwrite_unlocked");
extern char const symbol_fgets_unlocked[] asm("fgets_unlocked");
extern char const symbol_fputs_unlocked[] asm("fputs_unlocked");
extern char const symbol___srget_r[] asm("__srget_r");
extern char const symbol___swbuf_r[] asm("__swbuf_r");
extern char const symbol_funopen[] asm("funopen");
extern char const symbol__funopen_r[] asm("_funopen_r");
extern char const symbol_fopencookie[] asm("fopencookie");
extern char const symbol__fopencookie_r[] asm("_fopencookie_r");

static kbelf_builtin_sym const symbols[] = {
    { .name = "asp_device_get_name", .vaddr = (size_t) symbol_asp_device_get_name },
    { .name = "asp_device_get_manufacturer", .vaddr = (size_t) symbol_asp_device_get_manufacturer },
    { .name = "asp_disp_get_params", .vaddr = (size_t) symbol_asp_disp_get_params },
    { .name = "asp_disp_get_fb", .vaddr = (size_t) symbol_asp_disp_get_fb },
    { .name = "asp_disp_get_pax_buf", .vaddr = (size_t) symbol_asp_disp_get_pax_buf },
    { .name = "asp_disp_init_pax_buf", .vaddr = (size_t) symbol_asp_disp_init_pax_buf },
    { .name = "asp_disp_write", .vaddr = (size_t) symbol_asp_disp_write },
    { .name = "asp_disp_write_pax", .vaddr = (size_t) symbol_asp_disp_write_pax },
    { .name = "asp_disp_write_part", .vaddr = (size_t) symbol_asp_disp_write_part },
    { .name = "asp_disp_write_part_pax", .vaddr = (size_t) symbol_asp_disp_write_part_pax },
    { .name = "asp_err_id", .vaddr = (size_t) symbol_asp_err_id },
    { .name = "asp_err_desc", .vaddr = (size_t) symbol_asp_err_desc },
    { .name = "asp_input_poll", .vaddr = (size_t) symbol_asp_input_poll },
    { .name = "asp_input_get_nav", .vaddr = (size_t) symbol_asp_input_get_nav },
    { .name = "asp_input_get_action", .vaddr = (size_t) symbol_asp_input_get_action },
    { .name = "asp_input_needs_on_screen_keyboard", .vaddr = (size_t) symbol_asp_input_needs_on_screen_keyboard },
    { .name = "asp_input_set_backlight", .vaddr = (size_t) symbol_asp_input_set_backlight },
    { .name = "asp_input_get_backlight", .vaddr = (size_t) symbol_asp_input_get_backlight },
    { .name = "sched_yield", .vaddr = (size_t) symbol_sched_yield },
    { .name = "sched_get_priority_min", .vaddr = (size_t) symbol_sched_get_priority_min },
    { .name = "sched_get_priority_max", .vaddr = (size_t) symbol_sched_get_priority_max },
    { .name = "pthread_mutexattr_init", .vaddr = (size_t) symbol_pthread_mutexattr_init },
    { .name = "pthread_mutexattr_destroy", .vaddr = (size_t) symbol_pthread_mutexattr_destroy },
    { .name = "pthread_mutexattr_gettype", .vaddr = (size_t) symbol_pthread_mutexattr_gettype },
    { .name = "pthread_mutexattr_settype", .vaddr = (size_t) symbol_pthread_mutexattr_settype },
    { .name = "pthread_mutex_init", .vaddr = (size_t) symbol_pthread_mutex_init },
    { .name = "pthread_mutex_destroy", .vaddr = (size_t) symbol_pthread_mutex_destroy },
    { .name = "pthread_mutex_lock", .vaddr = (size_t) symbol_pthread_mutex_lock },
    { .name = "pthread_mutex_trylock", .vaddr = (size_t) symbol_pthread_mutex_trylock },
    { .name = "pthread_mutex_unlock", .vaddr = (size_t) symbol_pthread_mutex_unlock },
    { .name = "pthread_mutex_timedlock", .vaddr = (size_t) symbol_pthread_mutex_timedlock },
    { .name = "pthread_condattr_init", .vaddr = (size_t) symbol_pthread_condattr_init },
    { .name = "pthread_condattr_destroy", .vaddr = (size_t) symbol_pthread_condattr_destroy },
    { .name = "pthread_condattr_getclock", .vaddr = (size_t) symbol_pthread_condattr_getclock },
    { .name = "pthread_condattr_setclock", .vaddr = (size_t) symbol_pthread_condattr_setclock },
    { .name = "pthread_condattr_getpshared", .vaddr = (size_t) symbol_pthread_condattr_getpshared },
    { .name = "pthread_condattr_setpshared", .vaddr = (size_t) symbol_pthread_condattr_setpshared },
    { .name = "pthread_cond_init", .vaddr = (size_t) symbol_pthread_cond_init },
    { .name = "pthread_cond_destroy", .vaddr = (size_t) symbol_pthread_cond_destroy },
    { .name = "pthread_cond_signal", .vaddr = (size_t) symbol_pthread_cond_signal },
    { .name = "pthread_cond_broadcast", .vaddr = (size_t) symbol_pthread_cond_broadcast },
    { .name = "pthread_cond_wait", .vaddr = (size_t) symbol_pthread_cond_wait },
    { .name = "pthread_cond_timedwait", .vaddr = (size_t) symbol_pthread_cond_timedwait },
    { .name = "pthread_attr_init", .vaddr = (size_t) symbol_pthread_attr_init },
    { .name = "pthread_attr_destroy", .vaddr = (size_t) symbol_pthread_attr_destroy },
    { .name = "pthread_attr_getstacksize", .vaddr = (size_t) symbol_pthread_attr_getstacksize },
    { .name = "pthread_attr_setstacksize", .vaddr = (size_t) symbol_pthread_attr_setstacksize },
    { .name = "pthread_attr_getdetachstate", .vaddr = (size_t) symbol_pthread_attr_getdetachstate },
    { .name = "pthread_attr_setdetachstate", .vaddr = (size_t) symbol_pthread_attr_setdetachstate },
    { .name = "pthread_getschedparam", .vaddr = (size_t) symbol_pthread_getschedparam },
    { .name = "pthread_setschedparam", .vaddr = (size_t) symbol_pthread_setschedparam },
    { .name = "pthread_create", .vaddr = (size_t) symbol_pthread_create },
    { .name = "pthread_join", .vaddr = (size_t) symbol_pthread_join },
    { .name = "pthread_detach", .vaddr = (size_t) symbol_pthread_detach },
    { .name = "pthread_exit", .vaddr = (size_t) symbol_pthread_exit },
    { .name = "pthread_self", .vaddr = (size_t) symbol_pthread_self },
    { .name = "pthread_equal", .vaddr = (size_t) symbol_pthread_equal },
    { .name = "pthread_once", .vaddr = (size_t) symbol_pthread_once },
    { .name = "pthread_key_create", .vaddr = (size_t) symbol_pthread_key_create },
    { .name = "pthread_key_delete", .vaddr = (size_t) symbol_pthread_key_delete },
    { .name = "pthread_getspecific", .vaddr = (size_t) symbol_pthread_getspecific },
    { .name = "pthread_setspecific", .vaddr = (size_t) symbol_pthread_setspecific },
    { .name = "pthread_cancel", .vaddr = (size_t) symbol_pthread_cancel },
    { .name = "pthread_setcancelstate", .vaddr = (size_t) symbol_pthread_setcancelstate },
    { .name = "pthread_rwlock_rdlock", .vaddr = (size_t) symbol_pthread_rwlock_rdlock },
    { .name = "pthread_rwlock_tryrdlock", .vaddr = (size_t) symbol_pthread_rwlock_tryrdlock },
    { .name = "pthread_rwlock_unlock", .vaddr = (size_t) symbol_pthread_rwlock_unlock },
    { .name = "pthread_rwlock_wrlock", .vaddr = (size_t) symbol_pthread_rwlock_wrlock },
    { .name = "pthread_rwlock_trywrlock", .vaddr = (size_t) symbol_pthread_rwlock_trywrlock },
    { .name = "pax_precalc_circle_8", .vaddr = (size_t) symbol_pax_precalc_circle_8 },
    { .name = "pax_precalc_uv_circle_8", .vaddr = (size_t) symbol_pax_precalc_uv_circle_8 },
    { .name = "pax_precalc_circle_16", .vaddr = (size_t) symbol_pax_precalc_circle_16 },
    { .name = "pax_precalc_uv_circle_16", .vaddr = (size_t) symbol_pax_precalc_uv_circle_16 },
    { .name = "pax_precalc_circle_24", .vaddr = (size_t) symbol_pax_precalc_circle_24 },
    { .name = "pax_precalc_uv_circle_24", .vaddr = (size_t) symbol_pax_precalc_uv_circle_24 },
    { .name = "pax_precalc_circle_32", .vaddr = (size_t) symbol_pax_precalc_circle_32 },
    { .name = "pax_precalc_uv_circle_32", .vaddr = (size_t) symbol_pax_precalc_uv_circle_32 },
    { .name = "PRIVATE_pax_font_sky", .vaddr = (size_t) symbol_PRIVATE_pax_font_sky },
    { .name = "PRIVATE_pax_font_sky_mono", .vaddr = (size_t) symbol_PRIVATE_pax_font_sky_mono },
    { .name = "PRIVATE_pax_font_marker", .vaddr = (size_t) symbol_PRIVATE_pax_font_marker },
    { .name = "PRIVATE_pax_font_saira_condensed", .vaddr = (size_t) symbol_PRIVATE_pax_font_saira_condensed },
    { .name = "PRIVATE_pax_font_saira_regular", .vaddr = (size_t) symbol_PRIVATE_pax_font_saira_regular },
    { .name = "pax_join", .vaddr = (size_t) symbol_pax_join },
    { .name = "pax_buf_init", .vaddr = (size_t) symbol_pax_buf_init },
    { .name = "pax_buf_reversed", .vaddr = (size_t) symbol_pax_buf_reversed },
    { .name = "pax_buf_destroy", .vaddr = (size_t) symbol_pax_buf_destroy },
    { .name = "pax_buf_get_width", .vaddr = (size_t) symbol_pax_buf_get_width },
    { .name = "pax_buf_get_height", .vaddr = (size_t) symbol_pax_buf_get_height },
    { .name = "pax_buf_get_widthf", .vaddr = (size_t) symbol_pax_buf_get_widthf },
    { .name = "pax_buf_get_heightf", .vaddr = (size_t) symbol_pax_buf_get_heightf },
    { .name = "pax_buf_get_type", .vaddr = (size_t) symbol_pax_buf_get_type },
    { .name = "pax_buf_get_pixels", .vaddr = (size_t) symbol_pax_buf_get_pixels },
    { .name = "pax_buf_get_pixels_rw", .vaddr = (size_t) symbol_pax_buf_get_pixels_rw },
    { .name = "pax_buf_get_size", .vaddr = (size_t) symbol_pax_buf_get_size },
    { .name = "pax_buf_set_orientation", .vaddr = (size_t) symbol_pax_buf_set_orientation },
    { .name = "pax_buf_get_orientation", .vaddr = (size_t) symbol_pax_buf_get_orientation },
    { .name = "pax_buf_scroll", .vaddr = (size_t) symbol_pax_buf_scroll },
    { .name = "pax_clip", .vaddr = (size_t) symbol_pax_clip },
    { .name = "pax_get_clip", .vaddr = (size_t) symbol_pax_get_clip },
    { .name = "pax_noclip", .vaddr = (size_t) symbol_pax_noclip },
    { .name = "pax_is_dirty", .vaddr = (size_t) symbol_pax_is_dirty },
    { .name = "pax_get_dirty", .vaddr = (size_t) symbol_pax_get_dirty },
    { .name = "pax_mark_clean", .vaddr = (size_t) symbol_pax_mark_clean },
    { .name = "pax_mark_dirty0", .vaddr = (size_t) symbol_pax_mark_dirty0 },
    { .name = "pax_mark_dirty1", .vaddr = (size_t) symbol_pax_mark_dirty1 },
    { .name = "pax_mark_dirty2", .vaddr = (size_t) symbol_pax_mark_dirty2 },
    { .name = "pax_col_hsv", .vaddr = (size_t) symbol_pax_col_hsv },
    { .name = "pax_col_ahsv", .vaddr = (size_t) symbol_pax_col_ahsv },
    { .name = "pax_col_hsv_alt", .vaddr = (size_t) symbol_pax_col_hsv_alt },
    { .name = "pax_col_ahsv_alt", .vaddr = (size_t) symbol_pax_col_ahsv_alt },
    { .name = "pax_undo_ahsv", .vaddr = (size_t) symbol_pax_undo_ahsv },
    { .name = "pax_undo_hsv", .vaddr = (size_t) symbol_pax_undo_hsv },
    { .name = "pax_undo_ahsv_alt", .vaddr = (size_t) symbol_pax_undo_ahsv_alt },
    { .name = "pax_undo_hsv_alt", .vaddr = (size_t) symbol_pax_undo_hsv_alt },
    { .name = "pax_col_lerp", .vaddr = (size_t) symbol_pax_col_lerp },
    { .name = "pax_col_merge", .vaddr = (size_t) symbol_pax_col_merge },
    { .name = "pax_col_tint", .vaddr = (size_t) symbol_pax_col_tint },
    { .name = "pax_apply_2d", .vaddr = (size_t) symbol_pax_apply_2d },
    { .name = "pax_push_2d", .vaddr = (size_t) symbol_pax_push_2d },
    { .name = "pax_pop_2d", .vaddr = (size_t) symbol_pax_pop_2d },
    { .name = "pax_reset_2d", .vaddr = (size_t) symbol_pax_reset_2d },
    { .name = "pax_merge_pixel", .vaddr = (size_t) symbol_pax_merge_pixel },
    { .name = "pax_set_pixel", .vaddr = (size_t) symbol_pax_set_pixel },
    { .name = "pax_get_pixel", .vaddr = (size_t) symbol_pax_get_pixel },
    { .name = "pax_set_pixel_raw", .vaddr = (size_t) symbol_pax_set_pixel_raw },
    { .name = "pax_get_pixel_raw", .vaddr = (size_t) symbol_pax_get_pixel_raw },
    { .name = "pax_shade_rect", .vaddr = (size_t) symbol_pax_shade_rect },
    { .name = "pax_shade_line", .vaddr = (size_t) symbol_pax_shade_line },
    { .name = "pax_shade_tri", .vaddr = (size_t) symbol_pax_shade_tri },
    { .name = "pax_shade_arc", .vaddr = (size_t) symbol_pax_shade_arc },
    { .name = "pax_shade_circle", .vaddr = (size_t) symbol_pax_shade_circle },
    { .name = "pax_draw_image", .vaddr = (size_t) symbol_pax_draw_image },
    { .name = "pax_draw_image_sized", .vaddr = (size_t) symbol_pax_draw_image_sized },
    { .name = "pax_draw_image_op", .vaddr = (size_t) symbol_pax_draw_image_op },
    { .name = "pax_draw_image_sized_op", .vaddr = (size_t) symbol_pax_draw_image_sized_op },
    { .name = "pax_draw_rect", .vaddr = (size_t) symbol_pax_draw_rect },
    { .name = "pax_draw_line", .vaddr = (size_t) symbol_pax_draw_line },
    { .name = "pax_draw_tri", .vaddr = (size_t) symbol_pax_draw_tri },
    { .name = "pax_draw_arc", .vaddr = (size_t) symbol_pax_draw_arc },
    { .name = "pax_draw_circle", .vaddr = (size_t) symbol_pax_draw_circle },
    { .name = "pax_background", .vaddr = (size_t) symbol_pax_background },
    { .name = "pax_simple_rect", .vaddr = (size_t) symbol_pax_simple_rect },
    { .name = "pax_simple_line", .vaddr = (size_t) symbol_pax_simple_line },
    { .name = "pax_simple_tri", .vaddr = (size_t) symbol_pax_simple_tri },
    { .name = "pax_simple_arc", .vaddr = (size_t) symbol_pax_simple_arc },
    { .name = "pax_simple_circle", .vaddr = (size_t) symbol_pax_simple_circle },
    { .name = "matrix_2d_rotate", .vaddr = (size_t) symbol_matrix_2d_rotate },
    { .name = "matrix_2d_multiply", .vaddr = (size_t) symbol_matrix_2d_multiply },
    { .name = "matrix_2d_transform", .vaddr = (size_t) symbol_matrix_2d_transform },
    { .name = "pax_shader_font_bmp_hi_pal", .vaddr = (size_t) symbol_pax_shader_font_bmp_hi_pal },
    { .name = "pax_shader_font_bmp_hi", .vaddr = (size_t) symbol_pax_shader_font_bmp_hi },
    { .name = "pax_shader_font_bmp_hi_aa", .vaddr = (size_t) symbol_pax_shader_font_bmp_hi_aa },
    { .name = "pax_shader_font_bmp_pal", .vaddr = (size_t) symbol_pax_shader_font_bmp_pal },
    { .name = "pax_shader_font_bmp", .vaddr = (size_t) symbol_pax_shader_font_bmp },
    { .name = "pax_shader_font_bmp_aa", .vaddr = (size_t) symbol_pax_shader_font_bmp_aa },
    { .name = "pax_shader_texture", .vaddr = (size_t) symbol_pax_shader_texture },
    { .name = "pax_shader_texture_aa", .vaddr = (size_t) symbol_pax_shader_texture_aa },
    { .name = "pax_vectorise_bezier_part", .vaddr = (size_t) symbol_pax_vectorise_bezier_part },
    { .name = "pax_vectorise_bezier", .vaddr = (size_t) symbol_pax_vectorise_bezier },
    { .name = "pax_draw_bezier_part", .vaddr = (size_t) symbol_pax_draw_bezier_part },
    { .name = "pax_draw_bezier", .vaddr = (size_t) symbol_pax_draw_bezier },
    { .name = "pax_vectorise_arc", .vaddr = (size_t) symbol_pax_vectorise_arc },
    { .name = "pax_vectorise_circle", .vaddr = (size_t) symbol_pax_vectorise_circle },
    { .name = "pax_draw_round_rect", .vaddr = (size_t) symbol_pax_draw_round_rect },
    { .name = "pax_draw_hollow_circle", .vaddr = (size_t) symbol_pax_draw_hollow_circle },
    { .name = "pax_draw_hollow_arc", .vaddr = (size_t) symbol_pax_draw_hollow_arc },
    { .name = "pax_draw_round_hollow_arc", .vaddr = (size_t) symbol_pax_draw_round_hollow_arc },
    { .name = "pax_outline_round_rect", .vaddr = (size_t) symbol_pax_outline_round_rect },
    { .name = "pax_outline_hollow_circle", .vaddr = (size_t) symbol_pax_outline_hollow_circle },
    { .name = "pax_outline_hollow_arc", .vaddr = (size_t) symbol_pax_outline_hollow_arc },
    { .name = "pax_outline_round_hollow_arc", .vaddr = (size_t) symbol_pax_outline_round_hollow_arc },
    { .name = "pax_outline_rect", .vaddr = (size_t) symbol_pax_outline_rect },
    { .name = "pax_outline_tri", .vaddr = (size_t) symbol_pax_outline_tri },
    { .name = "pax_outline_arc", .vaddr = (size_t) symbol_pax_outline_arc },
    { .name = "pax_outline_circle", .vaddr = (size_t) symbol_pax_outline_circle },
    { .name = "pax_shade_outline_rect", .vaddr = (size_t) symbol_pax_shade_outline_rect },
    { .name = "pax_shade_outline_tri", .vaddr = (size_t) symbol_pax_shade_outline_tri },
    { .name = "pax_shade_outline_arc", .vaddr = (size_t) symbol_pax_shade_outline_arc },
    { .name = "pax_shade_outline_circle", .vaddr = (size_t) symbol_pax_shade_outline_circle },
    { .name = "pax_outline_shape_part", .vaddr = (size_t) symbol_pax_outline_shape_part },
    { .name = "pax_outline_shape", .vaddr = (size_t) symbol_pax_outline_shape },
    { .name = "pax_outline_shape_part_cl", .vaddr = (size_t) symbol_pax_outline_shape_part_cl },
    { .name = "pax_outline_shape_cl", .vaddr = (size_t) symbol_pax_outline_shape_cl },
    { .name = "pax_transform_shape", .vaddr = (size_t) symbol_pax_transform_shape },
    { .name = "pax_round_shape_uniform", .vaddr = (size_t) symbol_pax_round_shape_uniform },
    { .name = "pax_round_shape", .vaddr = (size_t) symbol_pax_round_shape },
    { .name = "pax_triang_complete", .vaddr = (size_t) symbol_pax_triang_complete },
    { .name = "pax_triang_concave", .vaddr = (size_t) symbol_pax_triang_concave },
    { .name = "pax_draw_shape", .vaddr = (size_t) symbol_pax_draw_shape },
    { .name = "pax_draw_shape_triang", .vaddr = (size_t) symbol_pax_draw_shape_triang },
    { .name = "pax_load_font", .vaddr = (size_t) symbol_pax_load_font },
    { .name = "pax_store_font", .vaddr = (size_t) symbol_pax_store_font },
    { .name = "pax_draw_text", .vaddr = (size_t) symbol_pax_draw_text },
    { .name = "pax_text_size", .vaddr = (size_t) symbol_pax_text_size },
    { .name = "__errno", .vaddr = (size_t) symbol___errno },
    { .name = "open", .vaddr = (size_t) symbol_open },
    { .name = "creat", .vaddr = (size_t) symbol_creat },
    { .name = "fcntl", .vaddr = (size_t) symbol_fcntl },
    { .name = "usleep", .vaddr = (size_t) symbol_usleep },
    { .name = "rmdir", .vaddr = (size_t) symbol_rmdir },
    { .name = "unlink", .vaddr = (size_t) symbol_unlink },
    { .name = "mkdir", .vaddr = (size_t) symbol_mkdir },
    { .name = "fstat", .vaddr = (size_t) symbol_fstat },
    { .name = "stat", .vaddr = (size_t) symbol_stat },
    { .name = "memchr", .vaddr = (size_t) symbol_memchr },
    { .name = "memcmp", .vaddr = (size_t) symbol_memcmp },
    { .name = "memcpy", .vaddr = (size_t) symbol_memcpy },
    { .name = "memmove", .vaddr = (size_t) symbol_memmove },
    { .name = "memset", .vaddr = (size_t) symbol_memset },
    { .name = "strcat", .vaddr = (size_t) symbol_strcat },
    { .name = "strchr", .vaddr = (size_t) symbol_strchr },
    { .name = "strcmp", .vaddr = (size_t) symbol_strcmp },
    { .name = "strcoll", .vaddr = (size_t) symbol_strcoll },
    { .name = "strcpy", .vaddr = (size_t) symbol_strcpy },
    { .name = "strcspn", .vaddr = (size_t) symbol_strcspn },
    { .name = "strerror", .vaddr = (size_t) symbol_strerror },
    { .name = "strlen", .vaddr = (size_t) symbol_strlen },
    { .name = "strncat", .vaddr = (size_t) symbol_strncat },
    { .name = "strncmp", .vaddr = (size_t) symbol_strncmp },
    { .name = "strncpy", .vaddr = (size_t) symbol_strncpy },
    { .name = "strpbrk", .vaddr = (size_t) symbol_strpbrk },
    { .name = "strrchr", .vaddr = (size_t) symbol_strrchr },
    { .name = "strspn", .vaddr = (size_t) symbol_strspn },
    { .name = "strstr", .vaddr = (size_t) symbol_strstr },
    { .name = "strtok", .vaddr = (size_t) symbol_strtok },
    { .name = "strxfrm", .vaddr = (size_t) symbol_strxfrm },
    { .name = "strcoll_l", .vaddr = (size_t) symbol_strcoll_l },
    { .name = "strerror_l", .vaddr = (size_t) symbol_strerror_l },
    { .name = "strxfrm_l", .vaddr = (size_t) symbol_strxfrm_l },
    { .name = "strtok_r", .vaddr = (size_t) symbol_strtok_r },
    { .name = "timingsafe_bcmp", .vaddr = (size_t) symbol_timingsafe_bcmp },
    { .name = "timingsafe_memcmp", .vaddr = (size_t) symbol_timingsafe_memcmp },
    { .name = "memccpy", .vaddr = (size_t) symbol_memccpy },
    { .name = "mempcpy", .vaddr = (size_t) symbol_mempcpy },
    { .name = "memmem", .vaddr = (size_t) symbol_memmem },
    { .name = "memrchr", .vaddr = (size_t) symbol_memrchr },
    { .name = "rawmemchr", .vaddr = (size_t) symbol_rawmemchr },
    { .name = "stpcpy", .vaddr = (size_t) symbol_stpcpy },
    { .name = "stpncpy", .vaddr = (size_t) symbol_stpncpy },
    { .name = "strcasestr", .vaddr = (size_t) symbol_strcasestr },
    { .name = "strchrnul", .vaddr = (size_t) symbol_strchrnul },
    { .name = "strdup", .vaddr = (size_t) symbol_strdup },
    { .name = "strndup", .vaddr = (size_t) symbol_strndup },
    { .name = "strlcat", .vaddr = (size_t) symbol_strlcat },
    { .name = "strlcpy", .vaddr = (size_t) symbol_strlcpy },
    { .name = "strnlen", .vaddr = (size_t) symbol_strnlen },
    { .name = "strsep", .vaddr = (size_t) symbol_strsep },
    { .name = "strnstr", .vaddr = (size_t) symbol_strnstr },
    { .name = "strlwr", .vaddr = (size_t) symbol_strlwr },
    { .name = "strupr", .vaddr = (size_t) symbol_strupr },
    { .name = "strsignal", .vaddr = (size_t) symbol_strsignal },
    { .name = "strverscmp", .vaddr = (size_t) symbol_strverscmp },
    { .name = "malloc", .vaddr = (size_t) symbol_malloc },
    { .name = "free", .vaddr = (size_t) symbol_free },
    { .name = "realloc", .vaddr = (size_t) symbol_realloc },
    { .name = "calloc", .vaddr = (size_t) symbol_calloc },
    { .name = "memalign", .vaddr = (size_t) symbol_memalign },
    { .name = "mallinfo", .vaddr = (size_t) symbol_mallinfo },
    { .name = "malloc_stats", .vaddr = (size_t) symbol_malloc_stats },
    { .name = "mallopt", .vaddr = (size_t) symbol_mallopt },
    { .name = "malloc_usable_size", .vaddr = (size_t) symbol_malloc_usable_size },
    { .name = "__sinit", .vaddr = (size_t) symbol___sinit },
    { .name = "__sglue", .vaddr = (size_t) symbol___sglue },
    { .name = "_global_impure_ptr", .vaddr = (size_t) symbol__global_impure_ptr },
    { .name = "__getreent", .vaddr = (size_t) symbol___getreent },
    { .name = "__atexit", .vaddr = (size_t) symbol___atexit },
    { .name = "__atexit0", .vaddr = (size_t) symbol___atexit0 },
    { .name = "_reclaim_reent", .vaddr = (size_t) symbol__reclaim_reent },
    { .name = "_fwalk_sglue", .vaddr = (size_t) symbol__fwalk_sglue },
    { .name = "tmpfile", .vaddr = (size_t) symbol_tmpfile },
    { .name = "tmpnam", .vaddr = (size_t) symbol_tmpnam },
    { .name = "tempnam", .vaddr = (size_t) symbol_tempnam },
    { .name = "fclose", .vaddr = (size_t) symbol_fclose },
    { .name = "fflush", .vaddr = (size_t) symbol_fflush },
    { .name = "freopen", .vaddr = (size_t) symbol_freopen },
    { .name = "setbuf", .vaddr = (size_t) symbol_setbuf },
    { .name = "setvbuf", .vaddr = (size_t) symbol_setvbuf },
    { .name = "fprintf", .vaddr = (size_t) symbol_fprintf },
    { .name = "fscanf", .vaddr = (size_t) symbol_fscanf },
    { .name = "printf", .vaddr = (size_t) symbol_printf },
    { .name = "scanf", .vaddr = (size_t) symbol_scanf },
    { .name = "sscanf", .vaddr = (size_t) symbol_sscanf },
    { .name = "vfprintf", .vaddr = (size_t) symbol_vfprintf },
    { .name = "vprintf", .vaddr = (size_t) symbol_vprintf },
    { .name = "vsprintf", .vaddr = (size_t) symbol_vsprintf },
    { .name = "fgetc", .vaddr = (size_t) symbol_fgetc },
    { .name = "fgets", .vaddr = (size_t) symbol_fgets },
    { .name = "fputc", .vaddr = (size_t) symbol_fputc },
    { .name = "fputs", .vaddr = (size_t) symbol_fputs },
    { .name = "getc", .vaddr = (size_t) symbol_getc },
    { .name = "getchar", .vaddr = (size_t) symbol_getchar },
    { .name = "gets", .vaddr = (size_t) symbol_gets },
    { .name = "putc", .vaddr = (size_t) symbol_putc },
    { .name = "putchar", .vaddr = (size_t) symbol_putchar },
    { .name = "puts", .vaddr = (size_t) symbol_puts },
    { .name = "ungetc", .vaddr = (size_t) symbol_ungetc },
    { .name = "fread", .vaddr = (size_t) symbol_fread },
    { .name = "fwrite", .vaddr = (size_t) symbol_fwrite },
    { .name = "fgetpos", .vaddr = (size_t) symbol_fgetpos },
    { .name = "fseek", .vaddr = (size_t) symbol_fseek },
    { .name = "fsetpos", .vaddr = (size_t) symbol_fsetpos },
    { .name = "ftell", .vaddr = (size_t) symbol_ftell },
    { .name = "rewind", .vaddr = (size_t) symbol_rewind },
    { .name = "clearerr", .vaddr = (size_t) symbol_clearerr },
    { .name = "feof", .vaddr = (size_t) symbol_feof },
    { .name = "ferror", .vaddr = (size_t) symbol_ferror },
    { .name = "perror", .vaddr = (size_t) symbol_perror },
    { .name = "fopen", .vaddr = (size_t) symbol_fopen },
    { .name = "sprintf", .vaddr = (size_t) symbol_sprintf },
    { .name = "remove", .vaddr = (size_t) symbol_remove },
    { .name = "rename", .vaddr = (size_t) symbol_rename },
    { .name = "fseeko", .vaddr = (size_t) symbol_fseeko },
    { .name = "ftello", .vaddr = (size_t) symbol_ftello },
    { .name = "fcloseall", .vaddr = (size_t) symbol_fcloseall },
    { .name = "snprintf", .vaddr = (size_t) symbol_snprintf },
    { .name = "vsnprintf", .vaddr = (size_t) symbol_vsnprintf },
    { .name = "vfscanf", .vaddr = (size_t) symbol_vfscanf },
    { .name = "vscanf", .vaddr = (size_t) symbol_vscanf },
    { .name = "vsscanf", .vaddr = (size_t) symbol_vsscanf },
    { .name = "asprintf", .vaddr = (size_t) symbol_asprintf },
    { .name = "vasprintf", .vaddr = (size_t) symbol_vasprintf },
    { .name = "fdopen", .vaddr = (size_t) symbol_fdopen },
    { .name = "fileno", .vaddr = (size_t) symbol_fileno },
    { .name = "setbuffer", .vaddr = (size_t) symbol_setbuffer },
    { .name = "setlinebuf", .vaddr = (size_t) symbol_setlinebuf },
    { .name = "getw", .vaddr = (size_t) symbol_getw },
    { .name = "putw", .vaddr = (size_t) symbol_putw },
    { .name = "getc_unlocked", .vaddr = (size_t) symbol_getc_unlocked },
    { .name = "getchar_unlocked", .vaddr = (size_t) symbol_getchar_unlocked },
    { .name = "putc_unlocked", .vaddr = (size_t) symbol_putc_unlocked },
    { .name = "putchar_unlocked", .vaddr = (size_t) symbol_putchar_unlocked },
    { .name = "dprintf", .vaddr = (size_t) symbol_dprintf },
    { .name = "fmemopen", .vaddr = (size_t) symbol_fmemopen },
    { .name = "open_memstream", .vaddr = (size_t) symbol_open_memstream },
    { .name = "vdprintf", .vaddr = (size_t) symbol_vdprintf },
    { .name = "_asiprintf_r", .vaddr = (size_t) symbol__asiprintf_r },
    { .name = "_asniprintf_r", .vaddr = (size_t) symbol__asniprintf_r },
    { .name = "_asnprintf_r", .vaddr = (size_t) symbol__asnprintf_r },
    { .name = "_asprintf_r", .vaddr = (size_t) symbol__asprintf_r },
    { .name = "_diprintf_r", .vaddr = (size_t) symbol__diprintf_r },
    { .name = "_dprintf_r", .vaddr = (size_t) symbol__dprintf_r },
    { .name = "_fclose_r", .vaddr = (size_t) symbol__fclose_r },
    { .name = "_fcloseall_r", .vaddr = (size_t) symbol__fcloseall_r },
    { .name = "_fdopen_r", .vaddr = (size_t) symbol__fdopen_r },
    { .name = "_fflush_r", .vaddr = (size_t) symbol__fflush_r },
    { .name = "_fgetc_r", .vaddr = (size_t) symbol__fgetc_r },
    { .name = "_fgetc_unlocked_r", .vaddr = (size_t) symbol__fgetc_unlocked_r },
    { .name = "_fgets_r", .vaddr = (size_t) symbol__fgets_r },
    { .name = "_fgets_unlocked_r", .vaddr = (size_t) symbol__fgets_unlocked_r },
    { .name = "_fgetpos_r", .vaddr = (size_t) symbol__fgetpos_r },
    { .name = "_fsetpos_r", .vaddr = (size_t) symbol__fsetpos_r },
    { .name = "_fiprintf_r", .vaddr = (size_t) symbol__fiprintf_r },
    { .name = "_fiscanf_r", .vaddr = (size_t) symbol__fiscanf_r },
    { .name = "_fmemopen_r", .vaddr = (size_t) symbol__fmemopen_r },
    { .name = "_fopen_r", .vaddr = (size_t) symbol__fopen_r },
    { .name = "_freopen_r", .vaddr = (size_t) symbol__freopen_r },
    { .name = "_fprintf_r", .vaddr = (size_t) symbol__fprintf_r },
    { .name = "_fpurge_r", .vaddr = (size_t) symbol__fpurge_r },
    { .name = "_fputc_r", .vaddr = (size_t) symbol__fputc_r },
    { .name = "_fputc_unlocked_r", .vaddr = (size_t) symbol__fputc_unlocked_r },
    { .name = "_fputs_r", .vaddr = (size_t) symbol__fputs_r },
    { .name = "_fputs_unlocked_r", .vaddr = (size_t) symbol__fputs_unlocked_r },
    { .name = "_fread_r", .vaddr = (size_t) symbol__fread_r },
    { .name = "_fread_unlocked_r", .vaddr = (size_t) symbol__fread_unlocked_r },
    { .name = "_fscanf_r", .vaddr = (size_t) symbol__fscanf_r },
    { .name = "_fseek_r", .vaddr = (size_t) symbol__fseek_r },
    { .name = "_fseeko_r", .vaddr = (size_t) symbol__fseeko_r },
    { .name = "_ftell_r", .vaddr = (size_t) symbol__ftell_r },
    { .name = "_ftello_r", .vaddr = (size_t) symbol__ftello_r },
    { .name = "_rewind_r", .vaddr = (size_t) symbol__rewind_r },
    { .name = "_fwrite_r", .vaddr = (size_t) symbol__fwrite_r },
    { .name = "_fwrite_unlocked_r", .vaddr = (size_t) symbol__fwrite_unlocked_r },
    { .name = "_getc_r", .vaddr = (size_t) symbol__getc_r },
    { .name = "_getc_unlocked_r", .vaddr = (size_t) symbol__getc_unlocked_r },
    { .name = "_getchar_r", .vaddr = (size_t) symbol__getchar_r },
    { .name = "_getchar_unlocked_r", .vaddr = (size_t) symbol__getchar_unlocked_r },
    { .name = "_gets_r", .vaddr = (size_t) symbol__gets_r },
    { .name = "_iprintf_r", .vaddr = (size_t) symbol__iprintf_r },
    { .name = "_iscanf_r", .vaddr = (size_t) symbol__iscanf_r },
    { .name = "_open_memstream_r", .vaddr = (size_t) symbol__open_memstream_r },
    { .name = "_perror_r", .vaddr = (size_t) symbol__perror_r },
    { .name = "_printf_r", .vaddr = (size_t) symbol__printf_r },
    { .name = "_putc_r", .vaddr = (size_t) symbol__putc_r },
    { .name = "_putc_unlocked_r", .vaddr = (size_t) symbol__putc_unlocked_r },
    { .name = "_putchar_unlocked_r", .vaddr = (size_t) symbol__putchar_unlocked_r },
    { .name = "_putchar_r", .vaddr = (size_t) symbol__putchar_r },
    { .name = "_puts_r", .vaddr = (size_t) symbol__puts_r },
    { .name = "_remove_r", .vaddr = (size_t) symbol__remove_r },
    { .name = "_rename_r", .vaddr = (size_t) symbol__rename_r },
    { .name = "_scanf_r", .vaddr = (size_t) symbol__scanf_r },
    { .name = "_siprintf_r", .vaddr = (size_t) symbol__siprintf_r },
    { .name = "_siscanf_r", .vaddr = (size_t) symbol__siscanf_r },
    { .name = "_sniprintf_r", .vaddr = (size_t) symbol__sniprintf_r },
    { .name = "_snprintf_r", .vaddr = (size_t) symbol__snprintf_r },
    { .name = "_sprintf_r", .vaddr = (size_t) symbol__sprintf_r },
    { .name = "_sscanf_r", .vaddr = (size_t) symbol__sscanf_r },
    { .name = "_tempnam_r", .vaddr = (size_t) symbol__tempnam_r },
    { .name = "_tmpfile_r", .vaddr = (size_t) symbol__tmpfile_r },
    { .name = "_tmpnam_r", .vaddr = (size_t) symbol__tmpnam_r },
    { .name = "_ungetc_r", .vaddr = (size_t) symbol__ungetc_r },
    { .name = "_vasiprintf_r", .vaddr = (size_t) symbol__vasiprintf_r },
    { .name = "_vasniprintf_r", .vaddr = (size_t) symbol__vasniprintf_r },
    { .name = "_vasnprintf_r", .vaddr = (size_t) symbol__vasnprintf_r },
    { .name = "_vasprintf_r", .vaddr = (size_t) symbol__vasprintf_r },
    { .name = "_vdiprintf_r", .vaddr = (size_t) symbol__vdiprintf_r },
    { .name = "_vdprintf_r", .vaddr = (size_t) symbol__vdprintf_r },
    { .name = "_vfiprintf_r", .vaddr = (size_t) symbol__vfiprintf_r },
    { .name = "_vfiscanf_r", .vaddr = (size_t) symbol__vfiscanf_r },
    { .name = "_vfprintf_r", .vaddr = (size_t) symbol__vfprintf_r },
    { .name = "_vfscanf_r", .vaddr = (size_t) symbol__vfscanf_r },
    { .name = "_viprintf_r", .vaddr = (size_t) symbol__viprintf_r },
    { .name = "_viscanf_r", .vaddr = (size_t) symbol__viscanf_r },
    { .name = "_vprintf_r", .vaddr = (size_t) symbol__vprintf_r },
    { .name = "_vscanf_r", .vaddr = (size_t) symbol__vscanf_r },
    { .name = "_vsiprintf_r", .vaddr = (size_t) symbol__vsiprintf_r },
    { .name = "_vsiscanf_r", .vaddr = (size_t) symbol__vsiscanf_r },
    { .name = "_vsniprintf_r", .vaddr = (size_t) symbol__vsniprintf_r },
    { .name = "_vsnprintf_r", .vaddr = (size_t) symbol__vsnprintf_r },
    { .name = "_vsprintf_r", .vaddr = (size_t) symbol__vsprintf_r },
    { .name = "_vsscanf_r", .vaddr = (size_t) symbol__vsscanf_r },
    { .name = "fpurge", .vaddr = (size_t) symbol_fpurge },
    { .name = "__getdelim", .vaddr = (size_t) symbol___getdelim },
    { .name = "__getline", .vaddr = (size_t) symbol___getline },
    { .name = "clearerr_unlocked", .vaddr = (size_t) symbol_clearerr_unlocked },
    { .name = "feof_unlocked", .vaddr = (size_t) symbol_feof_unlocked },
    { .name = "ferror_unlocked", .vaddr = (size_t) symbol_ferror_unlocked },
    { .name = "fileno_unlocked", .vaddr = (size_t) symbol_fileno_unlocked },
    { .name = "fflush_unlocked", .vaddr = (size_t) symbol_fflush_unlocked },
    { .name = "fgetc_unlocked", .vaddr = (size_t) symbol_fgetc_unlocked },
    { .name = "fputc_unlocked", .vaddr = (size_t) symbol_fputc_unlocked },
    { .name = "fread_unlocked", .vaddr = (size_t) symbol_fread_unlocked },
    { .name = "fwrite_unlocked", .vaddr = (size_t) symbol_fwrite_unlocked },
    { .name = "fgets_unlocked", .vaddr = (size_t) symbol_fgets_unlocked },
    { .name = "fputs_unlocked", .vaddr = (size_t) symbol_fputs_unlocked },
    { .name = "__srget_r", .vaddr = (size_t) symbol___srget_r },
    { .name = "__swbuf_r", .vaddr = (size_t) symbol___swbuf_r },
    { .name = "funopen", .vaddr = (size_t) symbol_funopen },
    { .name = "_funopen_r", .vaddr = (size_t) symbol__funopen_r },
    { .name = "fopencookie", .vaddr = (size_t) symbol_fopencookie },
    { .name = "_fopencookie_r", .vaddr = (size_t) symbol__fopencookie_r },
};

kbelf_builtin_lib const badge_elf_lib = {
    .path        = "libbadge.so",
    .symbols_len = 440,
    .symbols     = symbols,
};
