/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkOpenMiles@4 @ 0x30008180 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * _BinkOpenMiles_4(int param_1)

{
  UINT uMode;
  
                    /* 0x8180  36  _BinkOpenMiles@4 */
  if (param_1 == 0) {
    return (undefined1 *)0x0;
  }
  if (DAT_3003db44 != -1) {
    if (DAT_3003db44 == param_1) goto LAB_300081ad;
    if (DAT_30041c18 != 0) {
      return (undefined1 *)0x0;
    }
  }
  DAT_3003db44 = param_1;
LAB_300081ad:
  if (DAT_30041c1c == (FARPROC)0x0) {
    if (DAT_30041c14 == (HMODULE)0x0) {
      uMode = SetErrorMode(0x8000);
      DAT_30041c14 = LoadLibraryA("MSS32.DLL");
      SetErrorMode(uMode);
    }
    if ((HMODULE)0x1f < DAT_30041c14) {
      DAT_30041c1c = GetProcAddress(DAT_30041c14,"_AIL_minimum_sample_buffer_size@12");
      DAT_30041c08 = GetProcAddress(DAT_30041c14,"_AIL_allocate_sample_handle@4");
      DAT_30041be0 = GetProcAddress(DAT_30041c14,"_AIL_init_sample@4");
      DAT_30041bec = GetProcAddress(DAT_30041c14,"_AIL_stop_sample@4");
      DAT_30041c04 = GetProcAddress(DAT_30041c14,"_AIL_resume_sample@4");
      DAT_30041bdc = GetProcAddress(DAT_30041c14,"_AIL_set_sample_type@12");
      DAT_30041be8 = GetProcAddress(DAT_30041c14,"_AIL_set_sample_playback_rate@8");
      DAT_30041bfc = GetProcAddress(DAT_30041c14,"_AIL_set_sample_user_data@12");
      DAT_30041be4 = GetProcAddress(DAT_30041c14,"_AIL_set_sample_volume@8");
      DAT_30041c10 = GetProcAddress(DAT_30041c14,"_AIL_set_sample_pan@8");
      _DAT_30041bf8 = GetProcAddress(DAT_30041c14,"_AIL_serve@0");
      DAT_30041bd4 = GetProcAddress(DAT_30041c14,"_AIL_sample_buffer_ready@4");
      DAT_30041bd8 = GetProcAddress(DAT_30041c14,"_AIL_load_sample_buffer@16");
      _DAT_30041c0c = GetProcAddress(DAT_30041c14,"_AIL_end_sample@4");
      DAT_30041bf4 = GetProcAddress(DAT_30041c14,"_AIL_release_sample_handle@4");
      _DAT_30041bf0 = GetProcAddress(DAT_30041c14,"_AIL_sample_status@4");
      DAT_30041bbc = GetProcAddress(DAT_30041c14,"_AIL_sample_buffer_info@20");
      DAT_30041c00 = GetProcAddress(DAT_30041c14,"_AIL_mem_alloc_lock@4");
      DAT_30041bc8 = GetProcAddress(DAT_30041c14,"_AIL_mem_free_lock@4");
      _DAT_30041bc4 = GetProcAddress(DAT_30041c14,"_AIL_get_preference@4");
      DAT_30041bfc = GetProcAddress(DAT_30041c14,"_AIL_set_sample_user_data@12");
      DAT_30041bcc = GetProcAddress(DAT_30041c14,"_AIL_sample_user_data@8");
      DAT_30041bd0 = GetProcAddress(DAT_30041c14,"_AIL_register_EOB_callback@8");
      DAT_30041bbc = GetProcAddress(DAT_30041c14,"_AIL_sample_buffer_info@20");
      DAT_30041bc0 = GetProcAddress(DAT_30041c14,"_AIL_digital_latency@4");
      if (DAT_30041bc0 == (FARPROC)0x0) {
        DAT_30041bc0 = (FARPROC)&LAB_30008820;
      }
    }
    if (DAT_30041c1c == (FARPROC)0x0) {
      return (undefined1 *)0x0;
    }
  }
  return &LAB_300083f0;
}

