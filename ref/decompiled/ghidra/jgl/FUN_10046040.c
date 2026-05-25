/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046040 @ 0x10046040 */


void __cdecl
FUN_10046040(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6,int param_7,char *param_8,int param_9)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar4 = 0xffffffff;
    pcVar2 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar2 = FUN_10042cc0(param_1,uVar4);
    *(char **)(param_2 + 0xa0) = pcVar2;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar2 = *param_3;
      param_3 = param_3 + 1;
      pcVar2 = pcVar2 + 1;
    }
    *(undefined4 *)(param_2 + 0xa4) = param_4;
    *(undefined1 *)(param_2 + 0xb4) = param_6;
    *(undefined1 *)(param_2 + 0xb5) = (undefined1)param_7;
    uVar4 = 0xffffffff;
    *(undefined4 *)(param_2 + 0xa8) = param_5;
    pcVar2 = param_8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar2 = FUN_10042cc0(param_1,uVar4);
    *(char **)(param_2 + 0xac) = pcVar2;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)param_8;
      param_8 = param_8 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar2 = *param_8;
      param_8 = param_8 + 1;
      pcVar2 = pcVar2 + 1;
    }
    pvVar3 = FUN_10042cc0(param_1,param_7 * 4 + 4);
    *(void **)(param_2 + 0xb0) = pvVar3;
    iVar6 = 0;
    *(undefined4 *)((int)pvVar3 + param_7 * 4) = 0;
    if (0 < param_7) {
      do {
        uVar4 = 0xffffffff;
        pcVar2 = *(char **)(param_9 + iVar6 * 4);
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pvVar3 = FUN_10042cc0(param_1,uVar4);
        *(void **)(*(int *)(param_2 + 0xb0) + iVar6 * 4) = pvVar3;
        puVar7 = *(undefined4 **)(param_9 + iVar6 * 4);
        puVar8 = *(undefined4 **)(*(int *)(param_2 + 0xb0) + iVar6 * 4);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        iVar6 = iVar6 + 1;
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      } while (iVar6 < param_7);
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
  }
  return;
}

