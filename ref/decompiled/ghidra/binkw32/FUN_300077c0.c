/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300077c0 @ 0x300077C0 */


undefined4 FUN_300077c0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint unaff_EDI;
  undefined4 uVar4;
  undefined4 local_60 [24];
  
  DAT_30041bb8 = (code *)((int)DAT_30041bb8 + 1);
  if (DAT_30041bb8 == (code *)0x1) {
    if (DAT_30041b9c != 0) {
      if (DAT_30041ba8 == (code *)0x0) {
        DAT_30041bb8 = DAT_30041ba8;
        return 0;
      }
      iVar1 = (*DAT_30041ba8)(0,&DAT_3003da40,0);
      if (iVar1 < 0) {
        DAT_30041bb8 = (code *)((int)DAT_30041bb8 + -1);
        return 0;
      }
      iVar1 = *DAT_3003da40;
      uVar4 = 2;
      uVar2 = FUN_30007640();
      iVar1 = (**(code **)(iVar1 + 0x18))(DAT_3003da40,uVar2,uVar4);
      DAT_30041bac = (uint)(-1 < iVar1);
    }
    puVar3 = (undefined4 *)&stack0xffffff9c;
    for (iVar1 = 0x18; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
    }
    DAT_30041bb4 = 0;
    local_60[0] = 0x60;
    iVar1 = (**(code **)(*DAT_3003da40 + 0x10))(DAT_3003da40,local_60);
    if (iVar1 == 0) {
      DAT_30041bb4 = unaff_EDI >> 5 & 1;
    }
  }
  return 1;
}

