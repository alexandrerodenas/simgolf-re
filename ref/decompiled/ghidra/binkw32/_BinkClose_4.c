/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkClose@4 @ 0x30005E60 */


void _BinkClose_4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x5e60  16  _BinkClose@4 */
  if (param_1 == (int *)0x0) {
    return;
  }
  _BinkPause_8(param_1,1);
  if (param_1[0x95] == 1) {
    param_1[0x95] = 0;
    iVar1 = param_1[0x95];
    while (iVar1 == 0) {
      Sleep(0);
      iVar1 = param_1[0x95];
    }
  }
  if (param_1[0x40] != 0) {
    FUN_3001c180(param_1[0x40]);
  }
  if (param_1[0x7b] != -1) {
    (*(code *)param_1[0xb1])(param_1 + 0xaa);
    FUN_3001c0f0(param_1[0xa6]);
  }
  iVar1 = param_1[0x42];
  if (iVar1 == 0) {
    (*(code *)param_1[0x49])(param_1 + 0x44);
    iVar1 = param_1[0x77];
  }
  else if ((param_1[8] & 0x4000000U) != 0) goto LAB_30005f07;
  radfree(iVar1);
LAB_30005f07:
  if (param_1[0xa2] != 0) {
    radfree(param_1[0xa2]);
  }
  if (param_1[0x2f] != 0) {
    radfree(param_1[0x2f]);
  }
  piVar2 = param_1;
  for (iVar1 = 0xe9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  radfree((int)param_1);
  return;
}

