/* Ghidra decompiled: golf.exe */
/* Function: FUN_00488420 @ 0x00488420 */


int FUN_00488420(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_0083b170;
  while ((*(int *)(puVar2 + 0x104) == 0 || (iVar1 = FUN_00488310(param_1,param_2), iVar1 < 0))) {
    puVar2 = puVar2 + 0x120;
    if (0x83b5ef < (int)puVar2) {
      return -1;
    }
  }
  return iVar1;
}

