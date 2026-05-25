/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e140 @ 0x0047E140 */


void FUN_0047e140(int param_1,RECT *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  RECT *pRVar3;
  int iVar4;
  RECT local_20;
  RECT local_10;
  
  local_20.right = *(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1bc);
  local_20.bottom = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c0);
  local_20.left = 0;
  local_20.top = 0;
  FUN_0047b120(&local_20);
  local_10.right = *(int *)(param_1 + 0x1b4) - *(int *)(param_1 + 0x1ac);
  local_10.bottom = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b0);
  local_10.left = 0;
  local_10.top = 0;
  FUN_0047b0d0(&local_10);
  IntersectRect(&local_10,&local_10,param_2);
  IntersectRect(&local_20,&local_20,param_2);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x22c)) {
    do {
      iVar1 = FUN_004801f0();
      if (iVar1 != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x224) + iVar4 * 4);
        pRVar3 = &local_20;
        if ((*(uint *)(iVar1 + 0x9c) & 0x8000) == 0) {
          pRVar3 = &local_10;
        }
        FUN_0047e140(iVar1,pRVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x22c));
  }
  iVar4 = FUN_004801f0();
  if (iVar4 != 0) {
    if ((*(byte *)(param_1 + 0x9c) & 0x20) != 0) {
      *(LONG *)(param_1 + 0x1dc) = param_2->left;
      *(LONG *)(param_1 + 0x1e0) = param_2->top;
      *(LONG *)(param_1 + 0x1e4) = param_2->right;
      *(LONG *)(param_1 + 0x1e8) = param_2->bottom;
      return;
    }
    if ((DAT_0083a7bc != (int *)0x0) && (iVar4 = (**(code **)(*DAT_0083a7bc + 0xd4))(), iVar4 != 0))
    {
      if (DAT_0083a7bc == (int *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)(**(code **)(*DAT_0083a7bc + 0xd4))();
      }
      *(undefined4 *)(param_1 + 0x1dc) = *puVar2;
      *(undefined4 *)(param_1 + 0x1e0) = puVar2[1];
      *(undefined4 *)(param_1 + 0x1e4) = puVar2[2];
      *(undefined4 *)(param_1 + 0x1e8) = puVar2[3];
    }
  }
  return;
}

