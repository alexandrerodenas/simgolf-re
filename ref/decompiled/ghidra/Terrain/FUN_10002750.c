/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10002750 @ 0x10002750 */


void __thiscall FUN_10002750(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *(undefined4 *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)this + 4) * 0xc) =
         *(undefined4 *)(param_1 + local_c * 4);
    *(undefined4 *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)this + 0x44) * 0xc) =
         *(undefined4 *)(param_1 + local_c * 4);
    *(undefined4 *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)this + 0x7c) * 0xc) =
         *(undefined4 *)(param_1 + local_c * 4);
    *(undefined4 *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)this + 0xb0) * 0xc) =
         *(undefined4 *)(param_1 + local_c * 4);
    *(undefined4 *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)this + 400) * 0xc) =
         *(undefined4 *)(param_1 + local_c * 4);
    *(undefined4 *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)this + 0x158) * 0xc) =
         *(undefined4 *)(param_1 + local_c * 4);
    *(undefined4 *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)this + 0xe8) * 0xc) =
         *(undefined4 *)(param_1 + local_c * 4);
    *(undefined4 *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)this + 8) * 0xc) =
         *(undefined4 *)(param_1 + local_c * 4);
    *(undefined4 *)(&DAT_10070a18 + local_c * 4 + *(int *)((int)this + 0xc) * 0xc) =
         *(undefined4 *)(param_1 + local_c * 4);
  }
  return;
}

