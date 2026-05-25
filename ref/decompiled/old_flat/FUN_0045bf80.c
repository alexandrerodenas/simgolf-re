/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045bf80 @ 0x0045BF80 */


undefined4 FUN_0045bf80(int param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    DVar1 = timeGetTime();
    DVar2 = timeGetTime();
    uVar3 = DVar2 - DVar1;
    while (uVar3 < (uint)((param_1 * 1000) / 100)) {
      FUN_00483c30();
      if (param_2 != 0) {
        FUN_0045c030();
        iVar4 = FUN_0045af00();
        if ((iVar4 == 0) || (DAT_00822d68 != 0)) {
          FUN_0045aed0();
          return 1;
        }
      }
      DVar2 = timeGetTime();
      uVar3 = DVar2 - DVar1;
    }
  }
  return 0;
}

