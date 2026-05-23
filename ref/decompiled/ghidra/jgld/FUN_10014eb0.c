/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10014eb0 @ 0x10014EB0 */
/* Body size: 248 addresses */


void __fastcall FUN_10014eb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  if (*(int *)(param_1 + 0x14) != 0) {
    if ((*(uint *)(param_1 + 0x18) & 1) != 0) {
      DAT_101284cc = DAT_101284cc -
                     ((*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34) -
                      *(int *)(param_1 + 0x24)) + *(int *)(param_1 + 0x34) * -4);
    }
    DAT_101284c8 = DAT_101284c8 - *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34);
    thunk_FUN_10014a90(*(void **)(param_1 + 0x14));
    *(undefined4 *)(local_8 + 0x14) = 0;
  }
  if (*(int *)(local_8 + 0x1c) != 0) {
    thunk_FUN_10014a90(*(void **)(local_8 + 0x1c));
    *(undefined4 *)(local_8 + 0x1c) = 0;
  }
  *(undefined4 *)(local_8 + 0x2c) = 0;
  *(undefined4 *)(local_8 + 0x30) = 0;
  *(undefined4 *)(local_8 + 0x34) = 0;
  *(undefined4 *)(local_8 + 0x18) = 0;
  *(undefined4 *)(local_8 + 0x24) = 0;
  local_8 = 0x10014fa4;
  __chkesp();
  return;
}

