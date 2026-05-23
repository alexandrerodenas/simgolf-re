/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ac40 @ 0x1001AC40 */
/* Body size: 191 addresses */


undefined4 __fastcall FUN_1001ac40(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 4 + iVar4 * 4);
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x1438);
      if ((iVar5 != 0) && (iVar3 = 0, iVar5 != 1 && -1 < iVar5 + -1)) {
        iVar5 = 0x1440;
        do {
          iVar2 = thunk_FUN_1000e050(DAT_100b4a20,*(int *)(iVar5 + iVar2));
          if (iVar2 == 0) {
            piVar1 = *(int **)(*(int *)(param_1 + 4 + iVar4 * 4) + iVar5);
            if ((*(byte *)(piVar1 + 0x32) & 1) == 0) {
              thunk_FUN_1000dbe0(DAT_100b4a20,(int)piVar1,5);
            }
            else {
              thunk_FUN_10039c10(piVar1);
            }
          }
          iVar2 = *(int *)(param_1 + 4 + iVar4 * 4);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar3 < *(int *)(iVar2 + 0x1438) + -1);
      }
      iVar2 = thunk_FUN_1000e050(DAT_100b4a20,*(int *)(param_1 + 4 + iVar4 * 4));
      if (iVar2 == 0) {
        piVar1 = *(int **)(param_1 + 4 + iVar4 * 4);
        if ((*(byte *)(piVar1 + 0x32) & 1) == 0) {
          thunk_FUN_1000dbe0(DAT_100b4a20,(int)piVar1,5);
        }
        else {
          thunk_FUN_10039c10(piVar1);
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x80);
  return 0;
}

