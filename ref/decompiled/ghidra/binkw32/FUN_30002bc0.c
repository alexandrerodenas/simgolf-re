/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002bc0 @ 0x30002BC0 */


undefined4 __cdecl FUN_30002bc0(uint param_1,uint param_2,uint param_3)

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
  undefined4 uStack_28;
  undefined4 local_24;
  int *local_20;
  uint local_1c;
  uint uStack_14;
  int *piStack_c;
  uint local_4;
  
  uVar2 = param_3;
  uVar1 = param_2;
  ppuVar4 = local_6c;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar4 = (undefined4 *)0x0;
    ppuVar4 = ppuVar4 + 1;
  }
  local_4 = (-(uint)(param_1 != 1) & 0x3800) + 0x800 | 0x40;
  local_6c[0] = (undefined4 *)0x6c;
  local_6c[1] = (undefined4 *)0x7;
  local_60 = param_2;
  local_64 = param_3;
  if (0x10 < param_1) {
    local_6c[1] = (undefined4 *)0x1007;
    local_24 = 0x20;
    local_20 = (int *)0x4;
    local_1c = param_1;
  }
  uStack_78 = 0;
  puStack_7c = &param_1;
  iVar3 = (**(code **)(*DAT_30041638 + 0x18))(DAT_30041638);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = (**(code **)(*piStack_c + 100))(piStack_c,0,&puStack_7c,1,0);
  if (iVar3 != 0) {
    (**(code **)(*local_20 + 8))(local_20);
    return 0;
  }
  FUN_300029d0(local_6c[0],uStack_14,(uint)local_6c,uVar1,uVar2);
  (**(code **)(*local_20 + 0x80))(local_20,local_6c[0]);
  return uStack_28;
}

