/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004ef07 @ 0x1004EF07 */
/* Body size: 88 addresses */


void __thiscall FUN_1004ef07(void *this,int param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  uVar2 = 1;
  if (-1 < param_2) {
    do {
      if (uVar2 == 0) {
        return;
      }
      iVar4 = (param_2 + iVar3) / 2;
      pbVar1 = *(byte **)(param_1 + iVar4 * 8);
      uVar2 = FUN_10050b60(this,*(byte **)param_3,pbVar1);
      this = pbVar1;
      if (uVar2 == 0) {
        *(int *)param_3 = param_1 + iVar4 * 8 + 4;
        this = param_3;
      }
      else if ((int)uVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return;
}

