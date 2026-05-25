/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078870 @ 0x10078870 */


void __cdecl FUN_10078870(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 != 0) && (local_8 = (void *)FUN_10078da0(2), local_8 != (void *)0x0)) {
    FUN_10078940(local_8);
  }
  local_8 = (void *)0x100788c1;
  __chkesp();
  return;
}

