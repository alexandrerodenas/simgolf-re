/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007af0 @ 0x30007AF0 */


void FUN_30007af0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar3 = param_1[7];
  if (0x7fff < iVar3) {
    iVar3 = 0x7fff;
  }
  if (param_1[8] < 0x10001) {
    iVar2 = param_1[8] * 0x7f + 0x8000;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 0xffffU)) >> 0x10;
    if (0x40 < iVar2) {
      iVar2 = -(int)*(short *)(&PTR_LAB_3003dc40 + -iVar2);
      goto LAB_30007b6e;
    }
    if (iVar2 < 0x40) {
      iVar2 = (int)(&DAT_3003da44)[iVar2 * 2];
      goto LAB_30007b6e;
    }
  }
  else {
    iVar2 = -(int)DAT_3003da44;
LAB_30007b6e:
    if ((iVar2 < -0x18) || (0x18 < iVar2)) goto LAB_30007b7a;
  }
  iVar2 = 0;
LAB_30007b7a:
  (**(code **)(*piVar1 + 0x44))(piVar1,param_1[4]);
  (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,iVar2);
  (**(code **)(*(int *)*param_1 + 0x3c))
            ((int *)*param_1,(int)(&DAT_3003da44)[(iVar3 * 0x7f) / 0x7fff]);
  return;
}

