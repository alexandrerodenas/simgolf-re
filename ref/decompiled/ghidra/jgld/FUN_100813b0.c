/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100813b0 @ 0x100813B0 */


BOOL __cdecl FUN_100813b0(int param_1)

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
    else if (DAT_10129fb0 == 3) {
      local_8 = FUN_100868b0(param_1 + -0x20);
      if (local_8 == 0) {
        if ((DAT_10128754 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_10129fa0,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_10086910(local_8,param_1 + -0x20);
      }
    }
    else if (DAT_10129fb0 == 2) {
      local_10 = (char *)FUN_100888d0((undefined *)(param_1 + -0x20),&local_14,&local_c);
      if (local_10 == (char *)0x0) {
        if ((DAT_10128754 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_10129fa0,0,(LPCVOID)(param_1 + -0x20));
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
      BVar1 = HeapValidate(DAT_10129fa0,0,(LPCVOID)(param_1 + -0x20));
    }
  }
  return BVar1;
}

