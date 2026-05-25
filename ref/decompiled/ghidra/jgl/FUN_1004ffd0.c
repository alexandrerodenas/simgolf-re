/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004ffd0 @ 0x1004FFD0 */


void __cdecl FUN_1004ffd0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_1[0xd] != 0) {
    *param_3 = param_1[0xe];
  }
  if ((*param_1 == 4) || (*param_1 == 5)) {
    (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[3]);
  }
  if (*param_1 == 6) {
    FUN_10051f30(param_1[3],param_2);
    FUN_10051720(param_1[2],param_2);
    FUN_10051720(param_1[1],param_2);
  }
  *param_1 = 0;
  param_1[0xc] = param_1[9];
  param_1[0xb] = param_1[9];
  param_1[7] = 0;
  param_1[8] = 0;
  if ((code *)param_1[0xd] != (code *)0x0) {
    iVar1 = (*(code *)param_1[0xd])(0,0,0);
    param_1[0xe] = iVar1;
    *(int *)(param_2 + 0x30) = iVar1;
  }
  return;
}

