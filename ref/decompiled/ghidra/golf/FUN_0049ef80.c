/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049ef80 @ 0x0049EF80 */


uint __thiscall FUN_0049ef80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(*param_1 + 8);
  iVar4 = 0;
  iVar2 = *(int *)(iVar1 + 200 + (int)param_1);
  if (iVar2 != 0) {
    iVar3 = *(int *)((int)param_1 + iVar1 + 0xd0);
    *(undefined4 *)((int)param_1 + iVar1 + 0xd4) = 0;
    *(int *)((int)param_1 + iVar1 + 0xcc) = iVar2;
    if (0 < iVar3) {
      do {
        iVar2 = *(int *)((int)param_1 + iVar1 + 0xcc);
        if (*(int *)(iVar2 + 4) == param_2) break;
        iVar4 = iVar4 + 1;
        *(int *)((int)param_1 + iVar1 + 0xd4) = *(int *)((int)param_1 + iVar1 + 0xd4) + 1;
        *(undefined4 *)((int)param_1 + iVar1 + 0xcc) = *(undefined4 *)(iVar2 + 0xc);
      } while (iVar4 < iVar3);
    }
  }
  return 1 << ((byte)*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 8) + 0xd4) & 0x1f) &
         *(uint *)((int)param_1 + *(int *)(*param_1 + 8) + 0xf0);
}

