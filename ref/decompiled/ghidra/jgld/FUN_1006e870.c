/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006e870 @ 0x1006E870 */


undefined4 __cdecl FUN_1006e870(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [16];
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 0x20) == 0)) ||
     (param_3 == (int *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = param_2 + 0x5a;
    uVar1 = 0x20;
  }
  return uVar1;
}

