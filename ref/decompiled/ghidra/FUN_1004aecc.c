/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004aecc @ 0x1004AECC */
/* Body size: 208 addresses */


void __cdecl FUN_1004aecc(uint param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  param_3 = (ushort *)(uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_1004af11:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_1004af11;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_1004af67;
    }
    if (iVar2 != 8) goto LAB_1004af67;
    uVar3 = 0x10;
  }
  bVar1 = FUN_10048c8e(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_100489db(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_1004af67:
  FUN_1004917e();
  if (((*param_2 != 8) && (DAT_10067be0 == 0)) && (iVar2 = FUN_1004becb(), iVar2 != 0)) {
    return;
  }
  FUN_10048f2d(*param_2);
  return;
}

