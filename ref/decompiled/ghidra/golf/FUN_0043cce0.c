/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043cce0 @ 0x0043CCE0 */


void FUN_0043cce0(undefined4 param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004378a0(param_1);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      DVar2 = timeGetTime();
      DAT_005aa774 = DVar2 + 7000;
    }
    else {
      DAT_005aa774 = 0;
    }
    uVar3 = (**(code **)(*DAT_0083ad50 + 0x20))();
    FUN_00487050(uVar3);
    FUN_00483bd0();
    FUN_004808c0(0x80007fff);
    uVar3 = FUN_00487630();
    FUN_00487090(param_1,0,0,uVar3);
    FUN_00487060();
    DAT_005aa774 = 0;
  }
  return;
}

