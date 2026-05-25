/* Ghidra decompiled: sound.dll */
/* Function: delete_device @ 0x100021FD */


/* protected: static enum SNDERR __cdecl Dll_Wave_In_Device::delete_device(void) */

SNDERR __cdecl Dll_Wave_In_Device::delete_device(void)

{
                    /* 0x21fd  10  ?delete_device@Dll_Wave_In_Device@@KA?AW4SNDERR@@XZ */
  if (DAT_100b4a24 != (undefined4 *)0x0) {
    (**(code **)*DAT_100b4a24)(1);
  }
  DAT_100b4a24 = (undefined4 *)0x0;
  return 0;
}

