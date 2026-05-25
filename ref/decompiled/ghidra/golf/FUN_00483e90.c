/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483e90 @ 0x00483E90 */


int FUN_00483e90(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_00483fc0();
  if (iVar1 == 0) {
    FUN_00484090(0,0);
    if ((param_2 & 2) != 0) {
      if ((param_2 & 0x100) != 0) {
        uVar2 = 2;
      }
      FUN_00487a70(param_1,uVar2);
    }
    iVar1 = FUN_00487c00(param_1,param_2);
    if (iVar1 != 0) {
      FUN_00484060();
      return iVar1;
    }
    if ((param_2 & 8) != 0) {
      FUN_00487c00(param_1,param_2);
    }
    DAT_0083afc4 = 1;
    iVar1 = 0;
  }
  return iVar1;
}

