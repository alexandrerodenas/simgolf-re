/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a14c0 @ 0x004A14C0 */
/* Body size: 183 addresses */


void __fastcall FUN_004a14c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x630) = 1000;
  FUN_00486f10();
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0x634) = 0xffffffff;
  FUN_004886d0();
  puVar1 = (undefined4 *)(param_1 + 0x638);
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
  return;
}

