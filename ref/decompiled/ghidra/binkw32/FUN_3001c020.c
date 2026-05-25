/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c020 @ 0x3001C020 */


void __cdecl FUN_3001c020(undefined2 *param_1,float *param_2,float param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar3 = param_4 >> 1;
  do {
    while( true ) {
      iVar1 = (int)ROUND(*param_2 * param_3);
      iVar2 = (int)ROUND(param_2[1] * param_3);
      param_2 = param_2 + 2;
      uVar4 = (undefined2)iVar2;
      if (iVar1 < 0x8000) break;
      *param_1 = 0x7fff;
      if (0x7fff < iVar2) goto LAB_3001c0c4;
      if (iVar2 < -0x8000) goto LAB_3001c0d6;
      param_1[1] = uVar4;
joined_r0x3001c0ce:
      uVar3 = uVar3 - 1;
      param_1 = param_1 + 2;
      if (uVar3 == 0) {
        return;
      }
    }
    if (iVar1 < -0x8000) {
      *param_1 = 0x8000;
      if (0x7fff < iVar2) goto LAB_3001c0c4;
      if (iVar2 < -0x8000) goto LAB_3001c0d6;
      param_1[1] = uVar4;
    }
    else {
      *param_1 = (short)iVar1;
      if (0x7fff < iVar2) {
LAB_3001c0c4:
        param_1[1] = 0x7fff;
        goto joined_r0x3001c0ce;
      }
      if (iVar2 < -0x8000) {
LAB_3001c0d6:
        param_1[1] = 0x8000;
      }
      else {
        param_1[1] = uVar4;
      }
    }
    uVar3 = uVar3 - 1;
    param_1 = param_1 + 2;
    if (uVar3 == 0) {
      return;
    }
  } while( true );
}

