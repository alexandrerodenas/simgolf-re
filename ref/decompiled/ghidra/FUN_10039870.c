/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039870 @ 0x10039870 */
/* Body size: 196 addresses */


void __fastcall FUN_10039870(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1005936f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_1005c7e8;
  iVar2 = 1;
  local_4 = 1;
  if (1 < (int)param_1[0x50e]) {
    piVar3 = param_1 + 0x510;
    do {
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar3)(1);
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < (int)param_1[0x50e]);
  }
  if ((*(byte *)(param_1 + 0x32) & 2) != 0) {
    thunk_FUN_100340b0(param_1 + 0x1c);
  }
  if ((undefined *)param_1[0x50c] != (undefined *)0x0) {
    FUN_1004249a((undefined *)param_1[0x50c]);
    param_1[0x50c] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 0x1c;
  }
  thunk_FUN_10033c70(puVar1);
  local_4 = 0xffffffff;
  thunk_FUN_1002b620(param_1);
  ExceptionList = pvStack_c;
  return;
}

