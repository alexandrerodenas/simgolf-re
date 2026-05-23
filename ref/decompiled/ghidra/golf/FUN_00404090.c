/* Ghidra decompiled: golf.exe */
/* Function: FUN_00404090 @ 0x00404090 */
/* Body size: 138 addresses */


undefined4 FUN_00404090(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = param_1 * 0x84;
  if (*(int *)(&DAT_004f660c + param_1 * 0x84) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(*(int *)(&DAT_004f6620 + iVar1) + 0x62);
  }
  if (*(uint *)(&DAT_0050fc5c + param_1 * 0x44) < uVar3 - 1) {
    uVar2 = FUN_00482e20();
    return uVar2;
  }
  if (*(int *)(&DAT_004f660c + iVar1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(*(int *)(&DAT_004f6620 + iVar1) + 0x60);
  }
  if (*(int *)(&DAT_0050fc60 + param_1 * 0x44) == uVar3 - 1) {
    return 0;
  }
  FUN_00482e40(*(int *)(&DAT_0050fc60 + param_1 * 0x44) + 1,0,0);
  uVar2 = FUN_00482e10();
  return uVar2;
}

