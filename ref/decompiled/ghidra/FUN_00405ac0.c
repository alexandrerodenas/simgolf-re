/* Ghidra decompiled: golf.exe */
/* Function: FUN_00405ac0 @ 0x00405AC0 */
/* Body size: 69 addresses */


bool FUN_00405ac0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = FUN_004a5800(param_1,s____<>____004c3ee0);
  if (iVar2 != 0) {
    return false;
  }
  do {
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    if (((uVar3 == 1) || (param_1[uVar3 - 2] != ' ')) ||
       (param_1[uVar3 - 2] = '\0', (int)(uVar3 - 1) < 1)) {
      return 0 < (int)(uVar3 - 1);
    }
  } while( true );
}

