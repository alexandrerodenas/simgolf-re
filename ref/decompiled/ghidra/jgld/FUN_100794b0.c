/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100794b0 @ 0x100794B0 */


void __cdecl FUN_100794b0(int *param_1,byte *param_2,uint param_3)

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
  FUN_10078c40(param_1,param_2,param_3);
  FUN_100787d0((int)param_1,param_2,param_3);
  uStack_8 = 0x100794fd;
  __chkesp();
  return;
}

