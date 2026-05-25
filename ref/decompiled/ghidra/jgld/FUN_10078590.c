/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078590 @ 0x10078590 */


void __cdecl FUN_10078590(int *param_1,int param_2)

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
  if (8 < param_2) {
    FUN_10078fe0(param_1,"Too many bytes for PNG signature.");
  }
  *(byte *)(param_1 + 0x4b) = (param_2 < 0) - 1U & (byte)param_2;
  uStack_8 = 0x100785e2;
  __chkesp();
  return;
}

