/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10002640 @ 0x10002640 */


void __thiscall FUN_10002640(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(&DAT_100b28cc + *(int *)((int)this + 4) * 0xc) = param_1;
  *(undefined4 *)(&DAT_100b28cc + *(int *)((int)this + 0x44) * 0xc) = param_1;
  *(undefined4 *)(&DAT_100b28cc + *(int *)((int)this + 0x7c) * 0xc) = param_1;
  *(undefined4 *)(&DAT_100b28cc + *(int *)((int)this + 0xb0) * 0xc) = param_1;
  *(undefined4 *)(&DAT_100b28cc + *(int *)((int)this + 400) * 0xc) = param_1;
  *(undefined4 *)(&DAT_100b28cc + *(int *)((int)this + 0x158) * 0xc) = param_1;
  *(undefined4 *)(&DAT_100b28cc + *(int *)((int)this + 0xe8) * 0xc) = param_1;
  *(undefined4 *)(&DAT_100b28cc + *(int *)((int)this + 8) * 0xc) = param_1;
  *(undefined4 *)(&DAT_100b28cc + *(int *)((int)this + 0xc) * 0xc) = param_1;
  return;
}

