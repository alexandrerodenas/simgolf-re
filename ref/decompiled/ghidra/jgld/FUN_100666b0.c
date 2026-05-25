/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100666b0 @ 0x100666B0 */


void __thiscall FUN_100666b0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_1 = *(undefined4 *)((int)this + 300);
  *param_2 = *(undefined4 *)((int)this + 0x130);
  return;
}

