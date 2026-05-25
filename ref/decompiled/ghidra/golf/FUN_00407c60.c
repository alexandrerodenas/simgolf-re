/* Ghidra decompiled: golf.exe */
/* Function: FUN_00407c60 @ 0x00407C60 */


void FUN_00407c60(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  int local_4;
  
  iVar1 = (param_3 << 10) / 0x19;
  iVar4 = -1;
  iVar5 = 0;
  local_4 = 0x19;
  do {
    iVar2 = FUN_00467270(iVar5,iVar1);
    iVar3 = FUN_004672b0(iVar5,iVar1);
    iVar2 = FUN_0042fb90(iVar2 + param_1,iVar3 + param_2,&param_3,&local_8,0);
    if (iVar2 == 0) {
      iVar4 = -1;
    }
    else if (iVar4 == -1) {
      FUN_0040bf00(param_3,local_8);
      iVar4 = param_3;
    }
    else {
      FUN_0040bf20(param_3,local_8,param_4,2,7);
      iVar4 = param_3;
    }
    iVar5 = iVar5 + 0xaaaaaaa;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

