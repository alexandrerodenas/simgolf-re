/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004020 @ 0x10004020 */


void __thiscall FUN_10004020(void *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(float *)this = param_1 + *(float *)this;
  *(float *)((int)this + 4) = param_2 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_3 + *(float *)((int)this + 8);
  return;
}

