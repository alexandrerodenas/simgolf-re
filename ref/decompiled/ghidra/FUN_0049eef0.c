/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049eef0 @ 0x0049EEF0 */
/* Body size: 139 addresses */


void __thiscall FUN_0049eef0(int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  
  iVar2 = *(int *)(*param_1 + 8);
  iVar3 = *(int *)(iVar2 + 200 + (int)param_1);
  if (iVar3 != 0) {
    iVar4 = *(int *)((int)param_1 + iVar2 + 0xd0);
    iVar6 = 0;
    *(undefined4 *)((int)param_1 + iVar2 + 0xd4) = 0;
    *(int *)((int)param_1 + iVar2 + 0xcc) = iVar3;
    if (0 < iVar4) {
      do {
        iVar3 = *(int *)((int)param_1 + iVar2 + 0xcc);
        if (*(int *)(iVar3 + 4) == param_2) break;
        iVar6 = iVar6 + 1;
        *(int *)((int)param_1 + iVar2 + 0xd4) = *(int *)((int)param_1 + iVar2 + 0xd4) + 1;
        *(undefined4 *)((int)param_1 + iVar2 + 0xcc) = *(undefined4 *)(iVar3 + 0xc);
      } while (iVar6 < iVar4);
    }
  }
  iVar2 = *(int *)(*param_1 + 8);
  bVar5 = (byte)*(undefined4 *)((int)param_1 + iVar2 + 0xd4);
  if (param_3 == 0) {
    *(uint *)((int)param_1 + iVar2 + 0xf0) =
         *(uint *)((int)param_1 + iVar2 + 0xf0) & ~(1 << (bVar5 & 0x1f));
    return;
  }
  puVar1 = (uint *)((int)param_1 + iVar2 + 0xf0);
  *puVar1 = *puVar1 | 1 << (bVar5 & 0x1f);
  return;
}

