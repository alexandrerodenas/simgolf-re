/* Ghidra decompiled: golf.exe */
/* Function: FUN_004887c0 @ 0x004887C0 */


int __thiscall
FUN_004887c0(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  (**(code **)(*param_1 + 0x16c))();
  if (param_8 == 0) {
    return 3;
  }
  if (param_2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    puVar2 = _malloc(~uVar3);
    param_1[0x17d] = (int)puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      return 4;
    }
    *puVar2 = 0;
    uVar3 = 0xffffffff;
    do {
      pcVar6 = param_2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar8 = (char *)param_1[0x17d];
    do {
      pcVar7 = pcVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  iVar4 = FUN_004806c0(param_4,param_5,param_6,param_7,0,-(uint)(param_9 != 0) & 0x8000 | 0x1000220,
                       param_8,0,0);
  if (iVar4 == 0) {
    param_1[0x17a] = param_3;
    FUN_00476310(DAT_004e4450,DAT_004e445c,DAT_004e4468,DAT_004e4474);
    FUN_00476340(DAT_004e4454,DAT_004e4460,DAT_004e446c,DAT_004e4478);
    FUN_00476370(DAT_004e4458,DAT_004e4464,DAT_004e4470,DAT_004e447c);
    FUN_004762d0(DAT_0083b60c,DAT_0083b610,DAT_0083b614,0);
    (**(code **)(*param_1 + 4))(0);
    iVar4 = 0;
  }
  return iVar4;
}

