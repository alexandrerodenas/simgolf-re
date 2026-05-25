/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100173d0 @ 0x100173D0 */


void __cdecl FUN_100173d0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  void *in_ECX;
  undefined4 *local_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005fb38;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_14;
    FUN_10019e10(in_ECX,9);
    local_8 = 0;
    *param_1 = DAT_10110774;
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      param_1[local_20 + 6] = 0;
      param_1[local_20 + 1] = 0;
    }
    local_24 = DAT_10110774;
    do {
      if (local_24 == (undefined4 *)0x0) {
        param_1[0xb] = DAT_1011077c;
        param_1[0xc] = DAT_10110770;
        local_8 = 0xffffffff;
        FUN_10017558();
        FUN_10017563();
        return;
      }
      if ((local_24[5] & 0xffff) < 5) {
        param_1[(local_24[5] & 0xffff) + 1] = param_1[(local_24[5] & 0xffff) + 1] + 1;
        param_1[(local_24[5] & 0xffff) + 6] = param_1[(local_24[5] & 0xffff) + 6] + local_24[4];
      }
      else {
        iVar2 = FUN_1001a320(0,0,0,0,(byte *)"Bad memory block found at 0x%08X.\n");
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
  iVar2 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_10017563();
  return;
}

