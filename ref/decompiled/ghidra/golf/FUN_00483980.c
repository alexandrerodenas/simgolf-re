/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483980 @ 0x00483980 */


void * FUN_00483980(void *param_1,int *param_2,size_t param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  pvVar1 = param_1;
  while( true ) {
    if (param_3 == 0) {
      DAT_00839aa8 = DAT_00839aa8 + (*param_2 - iVar5);
      *param_2 = iVar5;
      return (void *)0x0;
    }
    pvVar3 = _memchr((void *)((int)pvVar1 + 1),0x20,param_3);
    if (pvVar3 == (void *)0x0) break;
    iVar4 = FUN_00483930(pvVar1,(int)pvVar3 - (int)pvVar1);
    iVar2 = DAT_00839aa8;
    iVar5 = iVar5 - iVar4;
    if (pvVar1 == param_1) {
      if (iVar5 < 0) {
        *param_2 = 0;
        if (iVar2 == 0) {
          return (void *)((int)pvVar3 + 1);
        }
        return pvVar1;
      }
    }
    else if (iVar5 < 0) goto LAB_00483a69;
    param_3 = (int)pvVar1 + (param_3 - (int)pvVar3);
    pvVar1 = pvVar3;
  }
  iVar4 = FUN_00483930(pvVar1,param_3);
  iVar2 = DAT_00839aa8;
  iVar5 = iVar5 - iVar4;
  if (pvVar1 == param_1) {
    if (-1 < iVar5) {
      DAT_00839aa8 = DAT_00839aa8 + (*param_2 - iVar5);
      *param_2 = iVar5;
      return (void *)0x0;
    }
    *param_2 = 0;
    if (iVar2 == 0) {
      return (void *)0x0;
    }
    return pvVar1;
  }
  if (-1 < iVar5) {
    DAT_00839aa8 = DAT_00839aa8 + (*param_2 - iVar5);
    *param_2 = iVar5;
    return (void *)0x0;
  }
LAB_00483a69:
  *param_2 = 0;
  return (void *)((int)pvVar1 + 1);
}

