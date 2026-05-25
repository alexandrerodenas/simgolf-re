/* Ghidra decompiled: golf.exe */
/* Function: FUN_004806c0 @ 0x004806C0 */


int __thiscall
FUN_004806c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,void *param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7ccb;
  *unaff_FS_OFFSET = &local_c;
  FUN_00480610();
  pvVar1 = param_7;
  if (((uint)param_7 & 0x30000000) != 0) {
    *(undefined4 *)(param_1 + 0x52c) = DAT_0083abe4;
    *(undefined4 *)(param_1 + 0x534) = DAT_0083abec;
    *(undefined4 *)(param_1 + 0x530) = DAT_0083abe8;
    *(undefined4 *)(param_1 + 0x538) = DAT_0083abf0;
    *(undefined4 *)(param_1 + 0x548) = DAT_0083abf4;
    *(undefined4 *)(param_1 + 0x544) = DAT_0083abf8;
    *(undefined4 *)(param_1 + 0x53c) = DAT_0083abfc;
    *(undefined4 *)(param_1 + 0x540) = DAT_0083ac00;
    *(undefined4 *)(param_1 + 0x54c) = DAT_0083ac08;
    *(undefined4 *)(param_1 + 0x550) = DAT_0083ac04;
    *(undefined4 *)(param_1 + 0x554) = DAT_0083ac0c;
  }
  if (((uint)param_7 & 0x40000000) != 0) {
    param_7 = operator_new(0x2b8);
    local_4 = 0;
    if (param_7 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00474ae0();
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x568) = uVar2;
  }
  iVar3 = FUN_0047a4c0(param_2,param_3,param_4,param_5,param_6,pvVar1,param_8,param_9,param_10);
  if (iVar3 == 0) {
    FUN_00481760();
    if (((uint)pvVar1 & 0x800) == 0) {
      FUN_0047cb10(&param_4,&param_5);
    }
    else {
      if ((*(uint *)(param_1 + 0x9c) & 8) != 0) {
        param_4 = param_4 + DAT_0083ff10;
      }
      if ((*(uint *)(param_1 + 0x9c) & 4) != 0) {
        param_5 = param_5 + DAT_0083ff10;
      }
    }
    iVar3 = FUN_00474dd0(param_4,param_5,(uint)pvVar1 >> 0x1c & 8,1,0,0);
    if (iVar3 == 0) {
      FUN_004789f0(DAT_0083ad10);
      iVar3 = 0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}

