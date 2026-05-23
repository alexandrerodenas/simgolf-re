/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002dd10 @ 0x1002DD10 */
/* Body size: 116 addresses */


void __thiscall FUN_1002dd10(void *this,char *param_1,byte param_2)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  if (param_1 != (char *)0x0) {
    if (*(undefined **)((int)this + 0x50) != (undefined *)0x0) {
      FUN_1004249a(*(undefined **)((int)this + 0x50));
    }
    uVar4 = 0xffffffff;
    *(undefined4 *)((int)this + 0x50) = 0;
    pcVar3 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pcVar3 = operator_new(~uVar4);
    uVar4 = 0xffffffff;
    *(char **)((int)this + 0x50) = pcVar3;
    do {
      pcVar6 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = param_1 + 1;
      cVar2 = *param_1;
      param_1 = pcVar6;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar3 = pcVar3 + 1;
    }
  }
  pbVar1 = (byte *)((int)this + 0x58);
  *pbVar1 = 0;
  if ((param_2 & 1) != 0) {
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}

