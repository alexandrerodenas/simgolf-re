/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100785f0 @ 0x100785F0 */
/* Body size: 126 addresses */


void __cdecl FUN_100785f0(int param_1,uint param_2,size_t param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_3 < 9) {
    if (param_3 == 0) goto LAB_1007865d;
  }
  else {
    param_3 = 8;
  }
  if (param_2 < 8) {
    if (8 < param_2 + param_3) {
      param_3 = 8 - param_2;
    }
    _memcmp((void *)(param_1 + param_2),&DAT_10123198 + param_2,param_3);
  }
LAB_1007865d:
  uStack_8 = 0x1007866a;
  __chkesp();
  return;
}

