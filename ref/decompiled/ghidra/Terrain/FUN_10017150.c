/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10017150 @ 0x10017150 */


BOOL __cdecl FUN_10017150(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_14;
  char *local_10;
  uint local_c;
  uint local_8;
  
  if (param_1 == 0) {
    BVar1 = 0;
  }
  else {
    iVar2 = __CrtIsValidPointer((void *)(param_1 + -0x20),0x20,1);
    if (iVar2 == 0) {
      BVar1 = 0;
    }
    else if (DAT_101122d0 == 3) {
      local_8 = FUN_1001b480(param_1 + -0x20);
      if (local_8 == 0) {
        if ((DAT_10110814 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_101122c0,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_1001b4e0(local_8,param_1 + -0x20);
      }
    }
    else if (DAT_101122d0 == 2) {
      local_10 = (char *)FUN_1001d4a0((undefined *)(param_1 + -0x20),&local_14,&local_c);
      if (local_10 == (char *)0x0) {
        if ((DAT_10110814 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_101122c0,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else if (*local_10 == '\0') {
        BVar1 = 0;
      }
      else {
        BVar1 = 1;
      }
    }
    else {
      BVar1 = HeapValidate(DAT_101122c0,0,(LPCVOID)(param_1 + -0x20));
    }
  }
  return BVar1;
}

