/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c730 @ 0x1001C730 */
/* Body size: 65 addresses */


void __thiscall FUN_1001c730(void *this,uint param_1)

{
  void *pvVar1;
  
  *(uint *)((int)this + 0x3c) = param_1;
  if (*(undefined **)((int)this + 0x2c) != (undefined *)0x0) {
    FUN_1004249a(*(undefined **)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  pvVar1 = operator_new(param_1);
  *(void **)((int)this + 0x2c) = pvVar1;
  (**(code **)(*(int *)this + 0x14))();
  *(undefined4 *)((int)this + 0x30) = 0;
  return;
}

