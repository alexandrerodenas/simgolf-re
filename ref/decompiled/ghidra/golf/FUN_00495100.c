/* Ghidra decompiled: golf.exe */
/* Function: FUN_00495100 @ 0x00495100 */
/* Body size: 795 addresses */


int __thiscall
FUN_00495100(int param_1,char *param_2,int param_3,int param_4,uint param_5,int param_6)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  char *pcVar10;
  int local_4bc;
  byte *local_4b4;
  uint uStack_4ac;
  char local_4a8;
  byte local_4a7;
  char local_4a6;
  byte bStack_4a5;
  undefined2 uStack_4a4;
  undefined1 local_4a2;
  undefined1 uStack_4a1;
  ushort uStack_4a0;
  ushort local_49e;
  uint local_467;
  undefined1 auStack_428 [40];
  char acStack_400 [1024];
  
  if (param_2 != (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar5 = s_monkey_sweats_on_a_tuesday_004e472c;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    iVar3 = _strncmp(param_2,s_monkey_sweats_on_a_tuesday_004e472c,~uVar8 - 1);
    if (iVar3 == 0) {
      uVar8 = 0xffffffff;
      pcVar5 = s_monkey_sweats_on_a_tuesday_004e472c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      param_2 = param_2 + ~uVar8;
      uVar8 = 0xffffffff;
      pcVar5 = s_monkey_sweats_on_a_tuesday_004e472c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      param_3 = param_3 + (-1 - (~uVar8 - 1));
    }
    pcVar5 = param_2;
    pcVar10 = &local_4a8;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    if (((local_4a8 == '\n') && (local_4a6 == '\x01')) && ((3 < local_4a7 || (param_4 == 0)))) {
      iVar3 = ((uint)local_49e - (uint)CONCAT11(uStack_4a1,local_4a2)) + 1;
      iVar4 = FUN_00474e70(((uint)uStack_4a0 - (CONCAT12(local_4a2,uStack_4a4) & 0xffff)) + 1,iVar3,
                           8);
      if (iVar4 != 0) {
        return iVar4;
      }
      if ((1 << (bStack_4a5 & 0x1f)) * (local_467 & 0xff) == 0x100) {
        local_4bc = 0;
        iVar4 = (int)(8 / (ulonglong)(longlong)(int)(uint)bStack_4a5) * (local_467 >> 8 & 0xffff) *
                (local_467 & 0xff);
        iVar3 = iVar4 * iVar3;
        if ((*(int **)(param_1 + 4) == (int *)0x0) ||
           (pcVar5 = (char *)(**(code **)(**(int **)(param_1 + 4) + 0x18))(),
           pbVar1 = (byte *)(param_2 + 0x80), pcVar5 == (char *)0x0)) {
          return 7;
        }
        while (iVar3 != 0) {
          bVar9 = *pbVar1;
          local_4b4 = pbVar1 + 1;
          if ((bVar9 & 0xc0) == 0xc0) {
            local_4b4 = pbVar1 + 2;
            uStack_4ac = bVar9 & 0xffffff3f;
            bVar9 = pbVar1[1];
          }
          else {
            uStack_4ac = 1;
          }
          cVar2 = (char)param_5 + bVar9;
          pcVar10 = pcVar5;
          for (uVar8 = uStack_4ac >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(uint *)pcVar10 = CONCAT22(CONCAT11(cVar2,cVar2),CONCAT11(cVar2,cVar2));
            pcVar10 = pcVar10 + 4;
          }
          pcVar5 = pcVar5 + uStack_4ac;
          for (uVar8 = uStack_4ac & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar10 = cVar2;
            pcVar10 = pcVar10 + 1;
          }
          local_4bc = local_4bc + uStack_4ac;
          iVar3 = iVar3 - uStack_4ac;
          pbVar1 = local_4b4;
          if (iVar4 <= local_4bc) {
            if (*(int **)(param_1 + 4) == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
            }
            pcVar5 = pcVar5 + (iVar6 - local_4bc);
            iVar3 = iVar3 + (local_4bc - iVar4);
            local_4bc = 0;
          }
        }
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
        }
        param_2 = param_2 + param_3 + -0x300;
        for (uVar8 = param_5; (int)uVar8 < (int)(param_6 + param_5); uVar8 = uVar8 + 1) {
          uVar7 = uVar8 & 0x800000ff;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
          }
          acStack_400[uVar7 * 4 + 2] = *param_2;
          pcVar5 = param_2 + 2;
          acStack_400[uVar7 * 4 + 1] = param_2[1];
          param_2 = param_2 + 3;
          acStack_400[uVar7 * 4] = *pcVar5;
          acStack_400[uVar7 * 4 + 3] = '\0';
        }
        if (param_4 != 0) {
          FUN_004830e0(auStack_428,param_5,param_6);
          FUN_004789f0(param_4);
          return 0;
        }
        return 0;
      }
    }
  }
  return 3;
}

