/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e8e0 @ 0x1001E8E0 */


void __fastcall FUN_1001e8e0(int param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffd;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x10;
  *(undefined1 *)(param_1 + 0x30) = 0;
  thunk_FUN_1001bc00(param_1);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x14) = iVar1;
  if ((iVar1 != 0) && (piVar3 = *(int **)(iVar1 + 8), piVar3 != (int *)0x0)) {
    while( true ) {
      if (piVar3[7] == 5) {
        (**(code **)(*piVar3 + 0x10))(0);
        if (*(char *)((int)piVar3 + 0x19) == '\x01') {
          bVar2 = *(byte *)(param_1 + 0x38) | 1;
        }
        else {
          bVar2 = *(byte *)(param_1 + 0x38) & 0xfe;
        }
        *(byte *)(param_1 + 0x38) = bVar2;
      }
      if (*(int *)(param_1 + 0x14) == 0) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 == 0) {
        return;
      }
      piVar3 = *(int **)(iVar1 + 8);
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
  }
  return;
}

