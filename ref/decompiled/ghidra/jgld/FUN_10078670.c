/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078670 @ 0x10078670 */


void __cdecl FUN_10078670(int param_1,size_t param_2)

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
  FUN_100785f0(param_1,0,param_2);
  uStack_8 = 0x100786ac;
  __chkesp();
  return;
}

