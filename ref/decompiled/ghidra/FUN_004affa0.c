/* Ghidra decompiled: golf.exe */
/* Function: FUN_004affa0 @ 0x004AFFA0 */
/* Body size: 184 addresses */


void FUN_004affa0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004afbf0(param_1,param_2);
  FUN_004afc10(param_1,param_1[0xd] * 3 + 8);
  if ((0xffff < param_1[7]) || (0xffff < param_1[6])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x28;
    *(undefined4 *)(*param_1 + 0x18) = 0xffff;
    (**(code **)*param_1)(param_1);
  }
  FUN_004afbb0(param_1,param_1[0xc]);
  FUN_004afc10(param_1,param_1[7]);
  FUN_004afc10(param_1,param_1[6]);
  FUN_004afbb0(param_1,param_1[0xd]);
  puVar2 = (undefined4 *)param_1[0xf];
  iVar1 = 0;
  if (0 < param_1[0xd]) {
    do {
      FUN_004afbb0(param_1,*puVar2);
      FUN_004afbb0(param_1,puVar2[2] * 0x10 + puVar2[3]);
      FUN_004afbb0(param_1,puVar2[4]);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x15;
    } while (iVar1 < param_1[0xd]);
  }
  return;
}

