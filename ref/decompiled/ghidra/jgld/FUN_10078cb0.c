/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078cb0 @ 0x10078CB0 */


void __cdecl FUN_10078cb0(int param_1,undefined4 param_2,int param_3)

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
  *(undefined4 *)(param_1 + 0x54) = param_2;
  if (param_3 == 0) {
    *(code **)(param_1 + 0x50) = FUN_10078d40;
  }
  else {
    *(int *)(param_1 + 0x50) = param_3;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_10079040(param_1,"It\'s an error to set both read_data_fn and write_data_fn in the ");
    FUN_10079040(param_1,"same structure.  Resetting write_data_fn to NULL.");
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
  uStack_8 = 0x10078d3b;
  __chkesp();
  return;
}

