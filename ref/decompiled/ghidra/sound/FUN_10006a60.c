/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006a60 @ 0x10006A60 */


undefined4 __thiscall FUN_10006a60(void *this,int param_1,int param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  
  if (((param_1 != 0) && (param_3 != (undefined4 *)0x0)) && (param_2 != 0)) {
    *(undefined4 *)((int)this + 0xd8) = *param_3;
    *(undefined4 *)((int)this + 0xdc) = param_3[1];
    *(undefined4 *)((int)this + 0xe0) = param_3[2];
    *(undefined4 *)((int)this + 0xe4) = param_3[3];
    *(undefined2 *)((int)this + 0xe8) = *(undefined2 *)(param_3 + 4);
    uVar1 = (ulonglong)*(uint *)(param_2 + 0x18) / (ulonglong)*(uint *)(param_2 + 0x14);
    *(int *)((int)this + 0xbc) = (int)uVar1;
    *(int *)((int)this + 0xb4) = (int)(*(uint *)(param_1 + 0x18) / uVar1);
    *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0x24);
    return 0;
  }
  return 10;
}

