/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003b30 @ 0x10003B30 */
/* Body size: 154 addresses */


void __thiscall FUN_10003b30(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_58 [16];
  float local_18;
  int local_14;
  undefined8 local_10;
  void *local_8;
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0.0;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    local_10 = (double)((*(float *)((int)this + local_14 * 4) - *(float *)(param_1 + local_14 * 4))
                        * (*(float *)((int)this + local_14 * 4) - *(float *)(param_1 + local_14 * 4)
                          ) + (float)local_10);
  }
  local_8 = this;
  fVar3 = (float10)FUN_1007e8e4(local_10._4_4_);
  local_10 = (double)fVar3;
  local_18 = (float)fVar3;
  local_8 = (void *)0x10003bc4;
  __chkesp();
  return;
}

