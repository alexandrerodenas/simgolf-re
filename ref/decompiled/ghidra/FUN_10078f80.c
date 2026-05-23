/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078f80 @ 0x10078F80 */
/* Body size: 92 addresses */


/* WARNING: Removing unreachable block (ram,0x10078fa6) */

void __cdecl FUN_10078f80(int *param_1,void *param_2,int param_3,size_t param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  size_t local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_4;
  _memset(param_2,param_3,param_4);
  local_8 = 0x10078fd8;
  __chkesp();
  return;
}

