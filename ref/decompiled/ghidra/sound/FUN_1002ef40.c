/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ef40 @ 0x1002EF40 */


void __fastcall FUN_1002ef40(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10058fe0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_1005c234;
  local_4 = 0;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
    param_1[0x10] = 0;
  }
  if ((undefined *)param_1[0x14] != (undefined *)0x0) {
    FUN_1004249a((undefined *)param_1[0x14]);
    param_1[0x14] = 0;
  }
  *param_1 = &PTR_LAB_1005bae0;
  local_4 = 1;
  if ((undefined *)param_1[0x14] != (undefined *)0x0) {
    FUN_1004249a((undefined *)param_1[0x14]);
    param_1[0x14] = 0;
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    delete_sound((int *)param_1[0x10]);
    param_1[0x10] = 0;
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    if (param_1[0x12] == 0) {
      DAT_100b5070 = param_1[0x13];
    }
    else {
      *(undefined4 *)(param_1[0x12] + 0x4c) = param_1[0x13];
    }
    if (param_1[0x13] == 0) {
      DAT_100b506c = param_1[0x12];
    }
    else {
      *(undefined4 *)(param_1[0x13] + 0x48) = param_1[0x12];
    }
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = param_1[0x11] & 0xfffffffd;
  }
  *param_1 = &PTR_LAB_1005bb80;
  ExceptionList = pvStack_c;
  return;
}

