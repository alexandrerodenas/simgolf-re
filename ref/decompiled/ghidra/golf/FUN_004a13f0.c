/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a13f0 @ 0x004A13F0 */
/* Body size: 200 addresses */


undefined4 * __fastcall FUN_004a13f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_00488500();
  *param_1 = &PTR_FUN_004bb5b4;
  param_1[0x9d] = &PTR_LAB_004bb5a0;
  param_1[0x18c] = 1000;
  param_1[0x15e] = 0;
  param_1[0x15d] = 0;
  param_1[0x18d] = 0xffffffff;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  puVar1 = param_1 + 0x18e;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 4;
    puVar1[3] = *(undefined4 *)((int)&DAT_00840948 + iVar2);
    *puVar1 = 0xffffffff;
    puVar1[0xb] = *(undefined4 *)((int)&DAT_00840954 + iVar2);
    puVar1[0xe] = *(undefined4 *)((int)&DAT_00840960 + iVar2);
    puVar1[0x11] = *(undefined4 *)((int)&DAT_0084096c + iVar2);
    puVar1[0x14] = *(undefined4 *)((int)&DAT_00840978 + iVar2);
    puVar1[0x17] = *(undefined4 *)((int)&DAT_00840984 + iVar2);
    puVar1[0x1a] = *(undefined4 *)((int)&DAT_00840990 + iVar2);
    puVar1[0x1d] = *(undefined4 *)((int)&DAT_0084099c + iVar2);
    puVar1[0x20] = *(undefined4 *)((int)&DAT_008409a8 + iVar2);
    puVar1[0x23] = *(undefined4 *)((int)&DAT_008409b4 + iVar2);
    puVar1[6] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar3;
  } while (iVar3 < 0xc);
  return param_1;
}

