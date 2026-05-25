/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100477c0 @ 0x100477C0 */


int * __cdecl FUN_100477c0(int *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      FUN_10046abc(param_1);
    }
    else {
      do {
        if (param_2 < (uint *)0xffffffe1) {
          puVar2 = (uint *)FUN_100482f7((int)param_1);
          if (puVar2 == (uint *)0x0) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            piVar1 = HeapReAlloc(DAT_100593dc,0,param_1,(SIZE_T)param_2);
          }
          else {
            if (param_2 <= DAT_1005664c) {
              iVar3 = FUN_10048b02(puVar2,(int)param_1,(int)param_2);
              piVar1 = param_1;
              if (iVar3 == 0) {
                piVar1 = FUN_1004864d(param_2);
                if (piVar1 == (int *)0x0) goto LAB_10047859;
                puVar4 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar4 = param_2;
                }
                FUN_1004acd0(piVar1,param_1,(uint)puVar4);
                FUN_10048322(puVar2,(uint)param_1);
              }
              if (piVar1 != (int *)0x0) {
                return piVar1;
              }
            }
LAB_10047859:
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            piVar1 = HeapAlloc(DAT_100593dc,0,(SIZE_T)param_2);
            if (piVar1 == (int *)0x0) goto LAB_100478bc;
            puVar4 = (uint *)(param_1[-1] - 1U);
            if (param_2 <= (uint *)(param_1[-1] - 1U)) {
              puVar4 = param_2;
            }
            FUN_1004acd0(piVar1,param_1,(uint)puVar4);
            FUN_10048322(puVar2,(uint)param_1);
          }
          if (piVar1 != (int *)0x0) {
            return piVar1;
          }
        }
LAB_100478bc:
        if (DAT_10057e34 == 0) {
          return (int *)0x0;
        }
        iVar3 = FUN_10048df8(param_2);
      } while (iVar3 != 0);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

