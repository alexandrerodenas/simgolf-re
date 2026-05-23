/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009c0b0 @ 0x1009C0B0 */
/* Body size: 63 addresses */


void __cdecl FUN_1009c0b0(int param_1,char *param_2,int param_3)

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
  FUN_1009bf10(param_1,0xf,param_2,param_3);
  uStack_8 = 0x1009c0eb;
  __chkesp();
  return;
}

