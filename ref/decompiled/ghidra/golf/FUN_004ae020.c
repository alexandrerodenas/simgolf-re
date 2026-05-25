/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae020 @ 0x004AE020 */


undefined4 FUN_004ae020(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uStack_1f0;
  undefined4 local_1ec [6];
  int local_1d4;
  int local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1bc;
  undefined1 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined1 local_84 [132];
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != (code *)0x0)) {
    local_1ec[0] = FUN_004aec80(local_84);
    FUN_004ae150(local_1ec,0x3d,0x168);
    local_1c8 = 2;
    FUN_004ae760(local_1ec);
    local_1cc = 3;
    local_11e = 0x48;
    local_11c = 0x48;
    local_1bc = 8;
    local_1d4 = param_2;
    local_1d0 = param_3;
    local_120 = 1;
    FUN_004ae910(local_1ec);
    FUN_004ae4d0(local_1ec,param_1);
    FUN_004ae380(local_1ec,1);
    do {
      uStack_1f0 = (*param_4)(param_2);
      FUN_004ae400(local_1ec,&uStack_1f0,1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    FUN_004ae270(local_1ec);
    FUN_004ae210(local_1ec);
    return 0;
  }
  return 1;
}

