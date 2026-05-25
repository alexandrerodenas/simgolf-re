/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetTrackData@8 @ 0x30006D40 */


char * _BinkGetTrackData_8(int param_1,char *param_2)

{
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int *local_c;
  char *local_8;
  char *local_4;
  
                    /* 0x6d40  26  _BinkGetTrackData@8 */
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    local_c = *(int **)(iVar2 + 0x104);
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + 0xf0)) {
      do {
        if ((iVar4 == *(int *)(param_1 + 0x18)) && (*local_c != 0)) {
          pcVar8 = (char *)local_c[1];
          local_c = local_c + 2;
          local_8 = (char *)0x0;
          pcVar7 = param_2;
          while (pcVar8 != (char *)0x0) {
            FUN_3001bb30(*(int **)(param_1 + 0x14),(int *)&local_4,(int *)&param_2,(int)local_c,
                         (int *)&local_c);
            if (pcVar8 < param_2) {
              param_2 = pcVar8;
            }
            pcVar8 = pcVar8 + -(int)param_2;
            if (*(int *)(param_1 + 4) == 0x10) {
              pcVar3 = local_4;
              pcVar6 = pcVar7;
              for (uVar5 = (uint)param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
                pcVar3 = pcVar3 + 4;
                pcVar6 = pcVar6 + 4;
              }
              for (uVar5 = (uint)param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar6 = *pcVar3;
                pcVar3 = pcVar3 + 1;
                pcVar6 = pcVar6 + 1;
              }
            }
            else {
              param_2 = (char *)((uint)param_2 >> 1);
              pcVar9 = (char *)0x0;
              pcVar3 = pcVar7;
              pcVar6 = local_4;
              if (param_2 != (char *)0x0) {
                do {
                  uVar1 = *(undefined2 *)pcVar6;
                  pcVar6 = pcVar6 + 2;
                  *pcVar3 = (char)((ushort)uVar1 >> 8) + -0x80;
                  pcVar3 = pcVar3 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (pcVar9 < param_2);
              }
            }
            local_8 = local_8 + (int)param_2;
            pcVar7 = pcVar7 + (int)param_2;
          }
          return local_8;
        }
        local_c = (int *)((int)(local_c + 1) + *local_c);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 0xf0));
    }
  }
  return (char *)0x0;
}

