/* Ghidra decompiled: sound.dll */
/* Function: FUN_10050abd @ 0x10050ABD */
/* Body size: 134 addresses */


void FUN_10050abd(int param_1,int param_2,char *param_3,uint param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  
  if (param_5 != 0) {
    *param_3 = '-';
    param_3 = param_3 + 1;
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (uint)bVar4);
  }
  lVar6 = CONCAT44(param_2,param_1);
  pcVar1 = param_3;
  do {
    pcVar3 = pcVar1;
    uVar7 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar5 = __aullrem((uint)lVar6,uVar7,param_4,0);
    lVar6 = __aulldiv((uint)lVar6,uVar7,param_4,0);
    if ((uint)uVar5 < 10) {
      cVar2 = (char)uVar5 + '0';
    }
    else {
      cVar2 = (char)uVar5 + 'W';
    }
    *pcVar3 = cVar2;
    pcVar1 = pcVar3 + 1;
  } while (lVar6 != 0);
  pcVar3[1] = '\0';
  do {
    cVar2 = *pcVar3;
    *pcVar3 = *param_3;
    *param_3 = cVar2;
    pcVar3 = pcVar3 + -1;
    param_3 = param_3 + 1;
  } while (param_3 < pcVar3);
  return;
}

