/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009e6d0 @ 0x1009E6D0 */
/* Body size: 53 addresses */


void __cdecl FUN_1009e6d0(undefined4 param_1,void *param_2)

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
  FUN_100806d0(param_2);
  uStack_8 = 0x1009e701;
  __chkesp();
  return;
}

