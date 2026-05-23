/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004cbeb @ 0x1004CBEB */
/* Body size: 280 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_1004cbeb(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint *puVar2;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
LAB_1004cc91:
    puVar2 = (uint *)0x0;
  }
  else {
    if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
      *(undefined1 *)((int)param_2 + 1) = 0;
      *(undefined1 *)param_2 = 0x43;
      if (param_3 != (undefined4 *)0x0) {
        *(undefined2 *)param_3 = 0;
        *(undefined2 *)((int)param_3 + 2) = 0;
        *(undefined2 *)(param_3 + 1) = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(&DAT_10067c6c,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_10067be8,(char *)param_1), iVar1 != 0)) {
      puVar2 = param_1;
      iVar1 = FUN_1004cd2b((char *)local_8c,(byte *)param_1);
      if ((iVar1 != 0) ||
         (iVar1 = FUN_1004ed8a(puVar2,(char *)local_8c,(undefined2 *)&DAT_100b5730,(int)local_8c),
         iVar1 == 0)) goto LAB_1004cc91;
      _DAT_100b5738 = (uint)DAT_100b5734;
      FUN_1004cdf7((uint *)&DAT_10067c6c,local_8c);
      if ((char)*param_1 == '\0') {
        param_1 = (uint *)&DAT_10067c6c;
      }
      FUN_1004a010((uint *)&DAT_10067be8,param_1);
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_1004a460(param_3,(undefined4 *)&DAT_100b5730,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_1004a460(param_4,(undefined4 *)&DAT_100b5738,4);
    }
    FUN_1004a010(param_2,(uint *)&DAT_10067c6c);
    puVar2 = (uint *)&DAT_10067c6c;
  }
  return puVar2;
}

