/* Ghidra decompiled: sound.dll */
/* Function: FUN_10049d85 @ 0x10049D85 */
/* Body size: 122 addresses */


undefined4 __cdecl FUN_10049d85(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  uVar1 = param_1[5];
  local_14 = *(undefined4 *)(param_1 + 3);
  local_10 = *(undefined4 *)(param_1 + 1);
  local_c = (uint)*param_1 << 0x10;
  uVar3 = uVar1 & 0x7fff;
  iVar2 = FUN_10049a92((int)&local_14,0x40);
  if (iVar2 != 0) {
    local_14 = 0x80000000;
    uVar3 = uVar3 + 1;
  }
  if (uVar3 == 0x7fff) {
    local_8 = 1;
  }
  param_2[1] = local_14;
  *(ushort *)(param_2 + 2) = uVar1 & 0x8000 | uVar3;
  *param_2 = local_10;
  return local_8;
}

