/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047cdb0 @ 0x0047CDB0 */


void FUN_0047cdb0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  if (DAT_0083aabc != (code *)0x0) {
    (*DAT_0083aabc)();
  }
  if (DAT_0083aac4 != (char *)0x0) {
    if (param_1 != 0) {
      FUN_00475b00(param_1);
    }
    FUN_004795d0(&DAT_0083a2c8,DAT_004e42c4,DAT_004e42c4);
    DAT_0083a2c8 = DAT_0083a2c8 + 1;
    DAT_0083a2d0 = DAT_0083a2d0 + -1;
    DAT_0083a2cc = DAT_0083a2cc + 1;
    DAT_0083a2d4 = DAT_0083a2d4 + -1;
    FUN_00478b50(&DAT_0083a2c8,DAT_0083aad8);
    FUN_004762d0(DAT_0083aac8,0,0,0);
    FUN_00476310(DAT_004e42c0,0xffffffff,2,2);
    pcVar2 = _strchr(DAT_0083aac4,0x5e);
    if (pcVar2 != (char *)0x0) {
      iVar6 = DAT_0083a2cc + 1;
      pcVar2 = DAT_0083aac4;
      do {
        pcVar3 = _strchr(pcVar2,0x5e);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
        if (pcVar2 != (char *)0x0) {
          uVar5 = 0xffffffff;
          pcVar7 = pcVar2;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00477da0(pcVar2,DAT_0083a2c8,iVar6,DAT_0083a2d0 - DAT_0083a2c8,~uVar5 - 1);
        }
        if (*(int *)(DAT_0083aac8 + 8) < 0) {
          iVar4 = *(int *)(DAT_0083aac8 + 0xc);
        }
        else {
          iVar4 = *(int *)(DAT_0083aac8 + 0x10) + *(int *)(DAT_0083aac8 + 8);
        }
        iVar6 = iVar6 + iVar4;
        pcVar2 = pcVar3 + 1;
        if (pcVar3 == (char *)0x0) goto LAB_0047cf20;
        *pcVar3 = '^';
      } while( true );
    }
    if (DAT_0083aac4 != (char *)0x0) {
      uVar5 = 0xffffffff;
      pcVar2 = DAT_0083aac4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_00477eb0(DAT_0083aac4,&DAT_0083a2c8,~uVar5 - 1);
    }
LAB_0047cf20:
    DAT_0083a2c8 = DAT_0083a2c8 + -1;
    DAT_0083a2d0 = DAT_0083a2d0 + 1;
    DAT_0083a2cc = DAT_0083a2cc + -1;
    DAT_0083a2d4 = DAT_0083a2d4 + 1;
    if ((param_1 != 0) && (DAT_0083a7bc != (int *)0x0)) {
      (**(code **)(*DAT_0083a7bc + 0xc4))();
    }
  }
  if (DAT_0083aaa0 != 0) {
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
    }
    FUN_00473e60(&DAT_0083a7b8,DAT_0083aaa4,DAT_0083aaa8,0);
  }
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0xa4))(param_1);
  }
  return;
}

