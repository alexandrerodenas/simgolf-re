/* Ghidra decompiled: golf.exe */
/* Function: FUN_00480c20 @ 0x00480C20 */
/* Body size: 95 addresses */


void FUN_00480c20(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = FUN_004801f0();
  if (iVar1 != 0) {
    local_10 = param_1;
    local_8 = param_1 + param_3;
    local_c = param_2;
    local_4 = param_2 + param_4;
    FUN_0047fa30(&local_10);
    FUN_0047b0d0(&local_10);
    FUN_0047cdb0(&local_10);
  }
  return;
}

