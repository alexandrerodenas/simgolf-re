/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078f20 @ 0x10078F20 */


/* WARNING: Removing unreachable block (ram,0x10078f46) */

void __cdecl FUN_10078f20(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  uint local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_4;
  FUN_1007f3a0(param_2,param_3,param_4);
  local_8 = 0x10078f78;
  __chkesp();
  return;
}

