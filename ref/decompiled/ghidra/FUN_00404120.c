/* Ghidra decompiled: golf.exe */
/* Function: FUN_00404120 @ 0x00404120 */
/* Body size: 146 addresses */


undefined4 FUN_00404120(undefined4 param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_2 * 0x84;
  iVar2 = FUN_00481f40(param_1,0,&DAT_004e9aa0 + param_2 * 0x58,0);
  if (iVar2 != 0) {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    return 0;
  }
  FUN_00482b90(&DAT_004f65c8 + iVar1,0);
  if (param_3 != (uint *)0x0) {
    if (*(int *)(&DAT_004f660c + iVar1) != 0) {
      *param_3 = (uint)*(ushort *)(*(int *)(&DAT_004f6620 + iVar1) + 0x62);
      uVar3 = FUN_00482e10();
      return uVar3;
    }
    *param_3 = 0;
  }
  uVar3 = FUN_00482e10();
  return uVar3;
}

