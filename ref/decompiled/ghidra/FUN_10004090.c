/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004090 @ 0x10004090 */
/* Body size: 89 addresses */


void __thiscall FUN_10004090(void *this,float *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(float *)this = *(float *)this + *param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) + param_1[1];
  *(float *)((int)this + 8) = *(float *)((int)this + 8) + param_1[2];
  return;
}

