/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300028e0 @ 0x300028E0 */


undefined4 __cdecl FUN_300028e0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 **ppuVar4;
  uint *puStack_7c;
  undefined4 uStack_78;
  undefined4 *local_6c [2];
  uint local_64;
  uint local_60;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  uint uStack_14;
  int *piStack_8;
  undefined4 local_4;
  
  uVar2 = param_3;
  uVar1 = param_2;
  uStack_78 = 0;
  ppuVar4 = local_6c;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar4 = (undefined4 *)0x0;
    ppuVar4 = ppuVar4 + 1;
  }
  puStack_7c = &param_2;
  local_1c = param_1;
  local_6c[0] = (undefined4 *)0x6c;
  local_6c[1] = (undefined4 *)0x1007;
  local_4 = 0x4080;
  local_60 = param_2;
  local_64 = param_3;
  local_24 = 0x20;
  local_20 = 4;
  iVar3 = (**(code **)(*DAT_30041638 + 0x18))(DAT_30041638);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = (**(code **)(*piStack_8 + 100))(piStack_8,0,&puStack_7c,1,0);
  if (iVar3 != 0) {
    (**(code **)(*local_1c + 8))(local_1c);
    return 0;
  }
  FUN_300029d0(local_6c[0],uStack_14,(uint)local_6c,uVar1,uVar2);
  (**(code **)(*local_1c + 0x80))(local_1c,local_6c[0]);
  return local_24;
}

