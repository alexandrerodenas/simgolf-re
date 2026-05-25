/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a6980 @ 0x004A6980 */


void * FUN_004a6980(LPVOID param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  uint uVar5;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = _malloc(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_004a5007(param_1);
    }
    else {
      do {
        if (param_2 < 0xffffffe1) {
          FUN_004a79b2(9);
          iVar2 = FUN_004a7a66(param_1);
          if (iVar2 == 0) {
            FUN_004a7a13(9);
            if (param_2 == 0) {
              param_2 = 1;
            }
            param_2 = param_2 + 0xf & 0xfffffff0;
            pvVar4 = HeapReAlloc(DAT_0084215c,0,param_1,param_2);
          }
          else {
            if (DAT_004e4bdc < param_2) {
LAB_004a6a1f:
              if (param_2 == 0) {
                param_2 = 1;
              }
              param_2 = param_2 + 0xf & 0xfffffff0;
              pvVar4 = HeapAlloc(DAT_0084215c,0,param_2);
              if (pvVar4 != (LPVOID)0x0) {
                uVar5 = *(int *)((int)param_1 + -4) - 1;
                if (param_2 <= uVar5) {
                  uVar5 = param_2;
                }
                FUN_004aa6c0(pvVar4,param_1,uVar5);
                FUN_004a7a91(iVar2,param_1);
              }
            }
            else {
              iVar3 = FUN_004a8271(iVar2,param_1,param_2);
              pvVar4 = param_1;
              if (iVar3 == 0) {
                pvVar4 = (LPVOID)FUN_004a7dbc(param_2);
                if (pvVar4 == (LPVOID)0x0) goto LAB_004a6a1f;
                uVar5 = *(int *)((int)param_1 + -4) - 1;
                if (param_2 <= uVar5) {
                  uVar5 = param_2;
                }
                FUN_004aa6c0(pvVar4,param_1,uVar5);
                FUN_004a7a91(iVar2,param_1);
              }
              if (pvVar4 == (LPVOID)0x0) goto LAB_004a6a1f;
            }
            FUN_004a7a13(9);
          }
          if (pvVar4 != (LPVOID)0x0) {
            return pvVar4;
          }
        }
        if (DAT_00840b18 == 0) {
          return (void *)0x0;
        }
        iVar2 = FUN_004a8567(param_2);
      } while (iVar2 != 0);
    }
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

