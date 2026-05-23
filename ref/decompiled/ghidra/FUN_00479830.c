/* Ghidra decompiled: golf.exe */
/* Function: FUN_00479830 @ 0x00479830 */
/* Body size: 144 addresses */


byte __thiscall FUN_00479830(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (ushort *)FUN_004796a0(param_2,param_3);
  if (puVar2 != (ushort *)0x0) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe4))();
    }
    iVar4 = *piVar3;
    if (iVar4 == 0x10) {
      uVar1 = *puVar2;
      iVar4 = (**(code **)(*DAT_0083ad50 + 0xb4))();
      if (iVar4 == 1) {
        param_4 = (byte)(uVar1 >> 8) & 0xf8;
      }
      else {
        param_4 = (byte)((int)(uint)uVar1 >> 7) & 0xf8;
      }
    }
    else if ((iVar4 == 0x18) || (iVar4 == 0x20)) {
      param_4 = (byte)puVar2[1];
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
    }
    return param_4;
  }
  return param_4;
}

