/* Ghidra decompiled: sound.dll */
/* Function: FUN_100247c0 @ 0x100247C0 */


void __fastcall FUN_100247c0(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *local_4;
  
  if (*(int *)((int)param_1 + 0x23c) != 0) {
    DAT_100b5010 = DAT_100b5010 + 1;
    if (*(int *)((int)param_1 + 0x23c) <= DAT_100b5010) {
      DAT_100b5010 = 0;
    }
    local_4 = param_1;
    iVar2 = thunk_FUN_1001d780((void *)((int)param_1 + 0x60),(int *)&local_4,
                               *(uint *)(*(int *)((int)param_1 + 0x238) + DAT_100b5010 * 4));
    if ((iVar2 == 0) && (iVar2 = 1, 0 < *(int *)((int)param_1 + 0x23c))) {
      while ((*(byte *)((int)local_4 + 0x38) & 4) != 0) {
        DAT_100b5010 = DAT_100b5010 + 1;
        if (*(int *)((int)param_1 + 0x23c) <= DAT_100b5010) {
          DAT_100b5010 = 0;
        }
        iVar3 = thunk_FUN_1001d780((void *)((int)param_1 + 0x60),(int *)&local_4,
                                   *(uint *)(*(int *)((int)param_1 + 0x238) + DAT_100b5010 * 4));
        if ((iVar3 != 0) ||
           (bVar1 = *(int *)((int)param_1 + 0x23c) <= iVar2, iVar2 = iVar2 + 1, bVar1))
        goto LAB_1002486f;
      }
      *(byte *)((int)local_4 + 0x38) = *(byte *)((int)local_4 + 0x38) | 4;
    }
LAB_1002486f:
    thunk_FUN_10024b80(param_1,(int)local_4,*(uint *)((int)param_1 + 0x71c),0x20,0);
  }
  return;
}

