/* Ghidra decompiled: golf.exe */
/* Function: FUN_00488fd0 @ 0x00488FD0 */
/* Body size: 264 addresses */


void __thiscall FUN_00488fd0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_2 == 0) {
    FUN_00486ec0();
    iVar1 = FUN_004801f0();
    if ((iVar1 != 0) && (param_1[0x17e] != 0)) {
      local_14 = 0;
      param_2 = 0;
      local_10 = param_1[0x6b];
      local_c = param_1[0x6c];
      local_8 = param_1[0x6d];
      local_4 = param_1[0x6e];
      FUN_0047b170(&local_14,&param_2);
      iVar2 = local_14 - local_10;
      iVar1 = param_2 - local_c;
      local_10 = local_10 + iVar2;
      local_c = local_c + iVar1;
      local_8 = local_8 + iVar2;
      local_4 = local_4 + iVar1;
      FUN_00480220(param_1[0x17e],&local_10);
      return;
    }
  }
  else {
    if (param_2 == 1) {
      iVar1 = param_1[0x16c];
      if (iVar1 < 1) {
        iVar1 = param_1[0x16b];
      }
      FUN_00486d60(&LAB_00488fb0,2,param_1,iVar1,5);
      return;
    }
    (**(code **)(*param_1 + 0x78))(0,0);
  }
  return;
}

