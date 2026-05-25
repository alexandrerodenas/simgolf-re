/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078d40 @ 0x10078D40 */


void __cdecl FUN_10078d40(int *param_1,char *param_2,uint param_3)

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
  local_8 = FUN_10082d80(param_2,1,param_3,(undefined **)param_1[0x15]);
  if (local_8 != param_3) {
    FUN_10078fe0(param_1,"Read Error");
  }
  local_8 = 0x10078d9a;
  __chkesp();
  return;
}

