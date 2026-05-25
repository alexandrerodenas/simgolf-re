/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100046f0 @ 0x100046F0 */


void __thiscall FUN_100046f0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x34) = *param_1;
  *(undefined4 *)((int)this + 0x38) = param_1[1];
  *(undefined4 *)((int)this + 0x3c) = param_1[2];
  return;
}

