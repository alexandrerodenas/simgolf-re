/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078da0 @ 0x10078DA0 */
/* Body size: 117 addresses */


void __cdecl FUN_10078da0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  void *local_c;
  size_t local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == 2) {
    local_8 = 0xb8;
  }
  else {
    if (param_1 != 1) goto LAB_10078e04;
    local_8 = 0x21c;
  }
  local_c = _malloc(local_8);
  if (local_c != (void *)0x0) {
    _memset(local_c,0,local_8);
  }
LAB_10078e04:
  local_8 = 0x10078e11;
  __chkesp();
  return;
}

