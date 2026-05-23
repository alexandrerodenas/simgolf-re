/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003530 @ 0x10003530 */
/* Body size: 94 addresses */


void __thiscall FUN_10003530(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  *(undefined4 *)((int)this + 0xc) = param_1[2];
  *(undefined4 *)((int)this + 0x10) = param_1[3];
  *(undefined4 *)((int)this + 0x14) = *param_2;
  *(undefined4 *)((int)this + 0x18) = param_2[1];
  *(undefined4 *)((int)this + 0x1c) = param_2[2];
  return;
}

