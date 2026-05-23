/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003e420 @ 0x1003E420 */
/* Body size: 77 addresses */


void __cdecl FUN_1003e420(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      puVar3 = &DAT_10055360;
    }
    else if (bVar1 == 2) {
      puVar3 = &DAT_10055460;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar3 = &DAT_10055560;
    }
    for (; param_2 < pbVar2; param_2 = param_2 + 1) {
      *param_2 = puVar3[*param_2];
    }
  }
  return;
}

