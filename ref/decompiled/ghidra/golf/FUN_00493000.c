/* Ghidra decompiled: golf.exe */
/* Function: FUN_00493000 @ 0x00493000 */
/* Body size: 121 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493000(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  uVar1 = _DAT_0083d34c;
  if (((DAT_0083d35c < param_2) && (param_1 < DAT_0083d38c)) && (param_1 < param_2)) {
    if (DAT_0083d38c <= param_2) {
      param_2 = DAT_0083d38c;
    }
    if (param_1 < DAT_0083d35c) {
      param_1 = DAT_0083d35c;
    }
    iVar3 = param_2 - param_1;
    if (iVar3 != 0 && param_1 <= param_2) {
      puVar2 = (undefined2 *)(DAT_0083d384 * DAT_0083d388 + param_1 * 2 + _DAT_0083d37c);
      do {
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

