/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006ef10 @ 0x1006EF10 */
/* Body size: 96 addresses */


undefined4 __cdecl FUN_1006ef10(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

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
  if (((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_2 + 0x30) < 1)) {
    uVar1 = 0;
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_2 + 0x38);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 0x30);
    }
    uVar1 = *(undefined4 *)(param_2 + 0x30);
  }
  return uVar1;
}

