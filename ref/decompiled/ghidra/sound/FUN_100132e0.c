/* Ghidra decompiled: sound.dll */
/* Function: FUN_100132e0 @ 0x100132E0 */


undefined4 __thiscall FUN_100132e0(void *this,undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((*(byte *)((int)this + 0x6c) & 2) == 0) {
    return 3;
  }
  puVar2 = DAT_100b4a34;
  if (param_1 == (undefined *)0x0) {
    return 10;
  }
  do {
    if (puVar2 == (undefined *)0x0) {
LAB_10013365:
      if ((*(uint *)(param_1 + 0x98) | 4) != 0) {
        *(int *)((int)this + 0x158) = *(int *)((int)this + 0x158) + -1;
      }
      iVar4 = thunk_FUN_10010060((int)param_1);
      if (iVar4 == 0) {
        thunk_FUN_1000ef60((int)param_1);
        FUN_1004249a(param_1);
      }
      return 0;
    }
    if (puVar2 == param_1) {
      if (puVar2 != (undefined *)0x0) {
        iVar4 = *(int *)(puVar2 + 0xbc);
        puVar1 = *(undefined **)(puVar2 + 0xc0);
        puVar3 = puVar1;
        if (iVar4 != 0) {
          *(undefined **)(iVar4 + 0xc0) = puVar1;
          puVar3 = DAT_100b4a34;
        }
        DAT_100b4a34 = puVar3;
        if (puVar1 != (undefined *)0x0) {
          *(int *)(puVar1 + 0xbc) = iVar4;
          iVar4 = DAT_100b4a38;
        }
        DAT_100b4a38 = iVar4;
        *(undefined4 *)(puVar2 + 0xbc) = 0;
        *(undefined4 *)(puVar2 + 0xc0) = 0;
      }
      goto LAB_10013365;
    }
    puVar2 = *(undefined **)(puVar2 + 0xc0);
  } while( true );
}

