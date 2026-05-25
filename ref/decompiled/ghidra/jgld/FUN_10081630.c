/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10081630 @ 0x10081630 */


void __cdecl FUN_10081630(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f2f0;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_14;
    FUN_100833f0(9);
    local_8 = 0;
    *param_1 = DAT_101287a0;
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      param_1[local_20 + 6] = 0;
      param_1[local_20 + 1] = 0;
    }
    local_24 = DAT_101287a0;
    do {
      if (local_24 == (undefined4 *)0x0) {
        param_1[0xb] = DAT_101287a8;
        param_1[0xc] = DAT_1012879c;
        local_8 = 0xffffffff;
        FUN_100817b8();
        FUN_100817c3();
        return;
      }
      if ((local_24[5] & 0xffff) < 5) {
        param_1[(local_24[5] & 0xffff) + 1] = param_1[(local_24[5] & 0xffff) + 1] + 1;
        param_1[(local_24[5] & 0xffff) + 6] = param_1[(local_24[5] & 0xffff) + 6] + local_24[4];
      }
      else {
        iVar2 = FUN_10081f90(0,0,0,0,(byte *)"Bad memory block found at 0x%08X.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_24 = (undefined4 *)*local_24;
    } while( true );
  }
  ExceptionList = &pvStack_14;
  iVar2 = FUN_10081f90(0,0,0,0,&DAT_1011d528);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_100817c3();
  return;
}

