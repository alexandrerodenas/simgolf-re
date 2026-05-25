/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000ff60 @ 0x1000FF60 */


undefined4 __fastcall FUN_1000ff60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x68);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 100);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_1005d52c,param_1 + 0x6c);
  }
  else {
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_1005d52c,param_1 + 0x6c);
  }
  if (-1 < iVar2) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return 0xb;
}

