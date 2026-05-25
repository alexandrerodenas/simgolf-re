/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078e60 @ 0x10078E60 */


void __cdecl FUN_10078e60(int *param_1,size_t param_2)

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
  if (((param_1 != (int *)0x0) && (param_2 != 0)) &&
     (local_8 = _malloc(param_2), local_8 == (void *)0x0)) {
    FUN_10078fe0(param_1,"Out of Memory");
  }
  local_8 = (void *)0x10078ebe;
  __chkesp();
  return;
}

