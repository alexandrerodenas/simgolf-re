/* Ghidra decompiled: sound.dll */
/* Function: FUN_10040f60 @ 0x10040F60 */


int __cdecl FUN_10040f60(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_54 [20];
  
  puVar5 = local_54;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  piVar2 = (int *)(param_1 + 0xbd8);
  piVar4 = (int *)(param_1 + 0xbdc);
  *(short *)(param_1 + 0xbde + *piVar4 * 2) =
       *(short *)(param_1 + 0xbde + *piVar4 * 2) + *(short *)(param_1 + 0xbde + *piVar2 * 2);
  sVar1 = *(short *)(param_1 + 0xbde + *piVar4 * 2);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 < 1) {
    *piVar4 = 5;
  }
  *piVar2 = *piVar2 + -1;
  if (*piVar2 < 1) {
    *piVar2 = 5;
  }
  return (int)sVar1;
}

