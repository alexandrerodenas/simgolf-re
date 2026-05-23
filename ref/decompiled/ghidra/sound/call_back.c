/* Ghidra decompiled: sound.dll */
/* Function: call_back @ 0x1000179E */
/* Body size: 5 addresses */


/* public: static void __stdcall WaveInDeviceMgr::call_back(struct HWAVEIN__ *,unsigned
   short,unsigned long,unsigned long,unsigned long) */

void WaveInDeviceMgr::call_back
               (HWAVEIN__ *param_1,ushort param_2,ulong param_3,ulong param_4,ulong param_5)

{
                    /* 0x179e  12  ?call_back@WaveInDeviceMgr@@SGXPAUHWAVEIN__@@GKKK@Z */
  if (param_2 == 0x3c0) {
    if ((DAT_100b4a20 != 0) && ((*(uint *)(DAT_100b4a20 + 0x1a4) >> 5 & 1) != 0)) {
      PostMessageA(DAT_100b49c0,0x7f0,param_4,param_3);
      return;
    }
    thunk_FUN_1002aa90(&DAT_100b5038,0x7f0,param_4,param_3);
  }
  return;
}

