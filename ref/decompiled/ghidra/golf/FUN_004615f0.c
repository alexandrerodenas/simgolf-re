/* Ghidra decompiled: golf.exe */
/* Function: FUN_004615f0 @ 0x004615F0 */


void FUN_004615f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar1 = (param_3 * 2) / 3;
  param_3 = -7;
  local_8 = -0x15;
  iVar6 = (param_1 * 5 + -0x23) * 10;
  do {
    iVar4 = -0x15;
    iVar5 = param_2 + -7;
    do {
      iVar3 = FUN_0040bf60(param_3 + param_1,iVar5);
      if (iVar3 == 0) {
        iVar3 = FUN_00467170(local_8,iVar4);
        if (iVar1 < 1) {
          uVar2 = FUN_00467130((uint)*(byte *)((int)&DAT_00822da0 + iVar5 + iVar6) -
                               iVar1 / (iVar3 + 2),0,0xff);
          *(undefined1 *)((int)&DAT_00822da0 + iVar5 + iVar6) = uVar2;
        }
        else {
          uVar2 = FUN_00467130(iVar1 / (iVar3 + 2) +
                               (uint)*(byte *)((int)&DAT_0082376c + iVar5 + iVar6),0,0xff);
          *(undefined1 *)((int)&DAT_0082376c + iVar5 + iVar6) = uVar2;
        }
      }
      iVar4 = iVar4 + 3;
      iVar5 = iVar5 + 1;
    } while (iVar4 < 0x16);
    local_8 = local_8 + 3;
    param_3 = param_3 + 1;
    iVar6 = iVar6 + 0x32;
  } while (local_8 < 0x16);
  return;
}

