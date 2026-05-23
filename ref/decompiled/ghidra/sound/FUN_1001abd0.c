/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001abd0 @ 0x1001ABD0 */
/* Body size: 75 addresses */


void __fastcall FUN_1001abd0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    puVar2 = (undefined4 *)param_1[iVar5 + 1];
    puVar4 = param_1 + iVar5 + 1;
    iVar3 = iVar5;
    if (puVar2 != (undefined4 *)0x0) {
      do {
        iVar5 = iVar3;
        *puVar4 = 0;
        piVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
        iVar3 = iVar5 + 1;
      } while (puVar2 == (undefined4 *)*piVar1);
      (**(code **)*puVar2)(1);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x80);
  if ((undefined *)*param_1 != (undefined *)0x0) {
    FUN_1004249a((undefined *)*param_1);
  }
  *param_1 = 0;
  return;
}

