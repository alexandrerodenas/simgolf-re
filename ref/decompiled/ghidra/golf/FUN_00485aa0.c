/* Ghidra decompiled: golf.exe */
/* Function: FUN_00485aa0 @ 0x00485AA0 */
/* Body size: 664 addresses */


undefined4 __thiscall FUN_00485aa0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  undefined1 *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iStack_90;
  uint uStack_8c;
  int iStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  short sStack_78;
  short sStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  
  uVar10 = 0;
  iVar9 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iStack_90 = (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    uStack_80 = 10;
    uStack_7f = 5;
    uStack_7e = 1;
    uStack_7d = 8;
    uStack_7c = 0;
    uStack_7a = 0;
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      sStack_78 = 0;
    }
    else {
      sStack_78 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
    }
    sStack_78 = sStack_78 + -1;
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      sStack_76 = 0;
    }
    else {
      sStack_76 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
    }
    sStack_76 = sStack_76 + -1;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_40 = 0;
    uStack_3f = 1;
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      uStack_3e = 0;
    }
    else {
      uStack_3e = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
    }
    uStack_3c = 0;
    uStack_3a = 0;
    uStack_38 = 0;
    FUN_004a6268(&uStack_80,0x80,1,param_2);
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
    }
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
    }
    pvVar4 = operator_new(iVar3 * iVar2 + 0x301);
    if ((*(int **)(param_1 + 4) != (int *)0x0) &&
       (iStack_88 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))(), 0 < iStack_88)) {
      while( true ) {
        for (; (*(int **)(param_1 + 4) != (int *)0x0 &&
               (uVar5 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))(), uVar10 < uVar5));
            uVar10 = uVar10 + uStack_8c) {
          bVar8 = 1;
          uStack_8c = 1;
          cVar1 = *(char *)(uVar10 + iStack_90);
          while( true ) {
            if (*(int **)(param_1 + 4) == (int *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
            }
            if (((iVar2 - 1U <= uStack_8c + uVar10) ||
                (cVar1 != *(char *)(uStack_8c + uVar10 + iStack_90))) || (0x3e < bVar8)) break;
            bVar8 = bVar8 + 1;
            uStack_8c = (uint)bVar8;
          }
          if ((1 < bVar8) || (0x3f < *(byte *)(uVar10 + iStack_90))) {
            *(byte *)(iVar9 + (int)pvVar4) = bVar8 | 0xc0;
            iVar9 = iVar9 + 1;
          }
          *(char *)(iVar9 + (int)pvVar4) = cVar1;
          iVar9 = iVar9 + 1;
        }
        if (*(int **)(param_1 + 4) == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
        }
        iStack_90 = iStack_90 + iVar2;
        iStack_88 = iStack_88 + -1;
        if (iStack_88 == 0) break;
        uVar10 = 0;
      }
    }
    iVar2 = 0;
    *(undefined1 *)(iVar9 + (int)pvVar4) = 0xc;
    iVar9 = iVar9 + 1;
    do {
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe8))();
      puVar7 = (undefined1 *)(**(code **)(*piVar6 + 0x20))(iVar2);
      *(undefined1 *)(iVar9 + (int)pvVar4) = *puVar7;
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe8))();
      iVar3 = (**(code **)(*piVar6 + 0x20))(iVar2);
      *(undefined1 *)(iVar9 + 1 + (int)pvVar4) = *(undefined1 *)(iVar3 + 1);
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe8))();
      iVar3 = (**(code **)(*piVar6 + 0x20))(iVar2);
      *(undefined1 *)(iVar9 + 2 + (int)pvVar4) = *(undefined1 *)(iVar3 + 2);
      iVar9 = iVar9 + 3;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x100);
    FUN_004a6268(pvVar4,iVar9,1,param_2);
    FUN_004a4ffc(pvVar4);
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
    }
    return 0;
  }
  return 3;
}

