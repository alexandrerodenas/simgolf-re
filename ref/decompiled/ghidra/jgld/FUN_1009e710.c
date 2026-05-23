/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009e710 @ 0x1009E710 */
/* Body size: 138 addresses */


void __cdecl FUN_1009e710(uint *param_1,uint *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = FUN_1009e7a0(param_1,0x13,0x13,0,0,param_3,param_2,param_4);
  if (local_8 == -3) {
    *(char **)(param_4 + 0x18) = "oversubscribed dynamic bit lengths tree";
  }
  else if (local_8 == -5) {
    FUN_1009f250(*param_3,param_4);
    *(char **)(param_4 + 0x18) = "incomplete dynamic bit lengths tree";
  }
  local_8 = 0x1009e796;
  __chkesp();
  return;
}

