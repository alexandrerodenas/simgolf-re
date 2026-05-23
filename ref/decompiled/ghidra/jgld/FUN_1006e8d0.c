/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006e8d0 @ 0x1006E8D0 */
/* Body size: 237 addresses */


undefined4 __cdecl
FUN_1006e8d0(int param_1,int param_2,double *param_3,double *param_4,double *param_5,double *param_6
            ,double *param_7,double *param_8,double *param_9,double *param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [16];
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 4) == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_3 != (double *)0x0) {
      *param_3 = (double)*(float *)(param_2 + 0x80);
    }
    if (param_4 != (double *)0x0) {
      *param_4 = (double)*(float *)(param_2 + 0x84);
    }
    if (param_5 != (double *)0x0) {
      *param_5 = (double)*(float *)(param_2 + 0x88);
    }
    if (param_6 != (double *)0x0) {
      *param_6 = (double)*(float *)(param_2 + 0x8c);
    }
    if (param_7 != (double *)0x0) {
      *param_7 = (double)*(float *)(param_2 + 0x90);
    }
    if (param_8 != (double *)0x0) {
      *param_8 = (double)*(float *)(param_2 + 0x94);
    }
    if (param_9 != (double *)0x0) {
      *param_9 = (double)*(float *)(param_2 + 0x98);
    }
    if (param_10 != (double *)0x0) {
      *param_10 = (double)*(float *)(param_2 + 0x9c);
    }
    uVar1 = 4;
  }
  return uVar1;
}

