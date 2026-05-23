/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004f950 @ 0x1004F950 */
/* Body size: 270 addresses */


undefined4 __cdecl FUN_1004f950(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != s_1_0_2_10055230[0])) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_10050f80;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 **)(param_1 + 0x24) = &LAB_10050fa0;
  }
  iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x18);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    return 0xfffffffc;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 0;
  if (param_2 < 0) {
    param_2 = -param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 1;
  }
  if ((7 < param_2) && (param_2 < 0x10)) {
    *(int *)(*(int *)(param_1 + 0x1c) + 0x10) = param_2;
    piVar2 = FUN_10050070(param_1,~-(uint)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0) &
                                  0x10050e50,1 << ((byte)param_2 & 0x1f));
    *(int **)(*(int *)(param_1 + 0x1c) + 0x14) = piVar2;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) == 0) {
      FUN_1004f900(param_1);
      return 0xfffffffc;
    }
    FUN_1004f8b0(param_1);
    return 0;
  }
  FUN_1004f900(param_1);
  return 0xfffffffe;
}

