/* Ghidra decompiled: golf.exe */
/* Function: FUN_004767a0 @ 0x004767A0 */


undefined1 * __thiscall
FUN_004767a0(int param_1,undefined4 *param_2,undefined1 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  int unaff_retaddr;
  int *piStack_118;
  uint uStack_110;
  undefined4 *local_108 [63];
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  if ((*(code **)(param_1 + 0xc) != (code *)0x0) &&
     (puVar3 = (undefined1 *)(**(code **)(param_1 + 0xc))(param_2,param_3,param_4,param_5),
     puVar3 != (undefined1 *)0x0)) {
    return puVar3;
  }
  if ((param_5 == 0) || (*(int *)(param_1 + 4) == 0)) {
    return param_3;
  }
  local_108[0] = param_2;
  puVar4 = _malloc(param_5);
  if (puVar4 != (undefined4 *)0x0) {
    puVar9 = puVar4;
    for (uVar6 = param_5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *param_2;
      param_2 = param_2 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = param_5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    iVar7 = 0;
    param_2 = puVar4;
    if (0 < (int)param_5) {
      do {
        if (*(char *)(iVar7 + (int)puVar4) == '_') {
          *(undefined1 *)(iVar7 + (int)puVar4) = 0x20;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_5);
    }
  }
  uVar6 = 0;
  piStack_118 = (int *)0x0;
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe4))();
  }
  if (*piVar5 == 0x10) {
    if (DAT_0083ad18 == 0) {
      iVar7 = (**(code **)(**(int **)(param_1 + 4) + 0xe8))();
      if (iVar7 == 0) {
        piStack_118 = *(int **)(DAT_0083ad0c + 4);
      }
      else {
        piStack_118 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe8))();
      }
    }
    else {
      piStack_118 = *(int **)(DAT_0083ad18 + 4);
    }
  }
  piVar5 = piStack_118;
  if (*(int *)(param_1 + 0x40) == 0) {
    uStack_110 = 0;
    iVar7 = *(int *)(*(int *)(param_1 + 0x5c) + 0x10);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x30);
    uStack_110 = -(uint)(*(int *)(param_1 + 0x5c + uVar6 * 4) != 0) & uVar6;
    uVar6 = -(uint)(*(int *)(param_1 + 0x6c + uVar6 * 4) != -1) & uVar6;
    iVar7 = 0;
    if ((*(int *)(param_1 + 0x5c) != 0) &&
       (iVar10 = *(int *)(*(int *)(param_1 + 0x5c) + 0x10), 0 < iVar10)) {
      iVar7 = iVar10;
    }
    if ((*(int *)(param_1 + 0x60) != 0) &&
       (iVar10 = *(int *)(*(int *)(param_1 + 0x60) + 0x10), iVar7 < iVar10)) {
      iVar7 = iVar10;
    }
    if ((*(int *)(param_1 + 100) != 0) &&
       (iVar10 = *(int *)(*(int *)(param_1 + 100) + 0x10), iVar7 < iVar10)) {
      iVar7 = iVar10;
    }
  }
  param_4 = param_4 + iVar7;
  iVar7 = *(int *)(param_1 + 0x5c + uStack_110 * 4);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar7 + 4;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0xa8))(iVar7);
  uVar1 = *(uint *)(param_1 + 0x7c + uVar6 * 4);
  if ((uVar1 != 0xffffffff) && ((piStack_118 == (int *)0x0 || (uVar1 != 0xff)))) {
    if ((uVar1 & 0x80000000) == 0) {
      if (piStack_118 == (int *)0x0) {
        if ((*(byte *)(param_1 + 0x20) & 4) == 0) {
          (**(code **)(**(int **)(param_1 + 4) + 0xb0))(uVar1);
        }
        else {
          iVar7 = (**(code **)(iRam00000000 + 0x20))(uVar1);
          iVar7 = (**(code **)(*unaff_EBP + 0x20))(uVar1,*(undefined1 *)(iVar7 + 2));
          puVar3 = (undefined1 *)(**(code **)(*unaff_ESI + 0x20))(uVar1,*(undefined1 *)(iVar7 + 1));
          (*(code *)unaff_ESI[0x2d])(*puVar3);
          piVar5 = unaff_ESI;
        }
      }
      else {
        iVar7 = (**(code **)(*piStack_118 + 0x20))(uVar1);
        iVar7 = (**(code **)(*unaff_EBP + 0x20))(uVar1,*(undefined1 *)(iVar7 + 2));
        puVar3 = (undefined1 *)(**(code **)(*unaff_ESI + 0x20))(uVar1,*(undefined1 *)(iVar7 + 1));
        (*(code *)unaff_ESI[0x2d])(*puVar3);
        piVar5 = unaff_ESI;
      }
    }
    else {
      iVar7 = (**(code **)(*DAT_0083ad50 + 0xb4))();
      if (iVar7 == 1) {
        piStack_118 = (int *)((int)uVar1 >> 3 & 0xfc);
      }
      else {
        piStack_118 = (int *)((int)uVar1 >> 2 & 0xf8);
      }
      iVar7 = (**(code **)(*DAT_0083ad50 + 0xb4))();
      if (iVar7 == 1) {
        bVar2 = (byte)(uVar1 >> 8);
      }
      else {
        bVar2 = (byte)((int)uVar1 >> 7);
      }
      (**(code **)(**(int **)(param_1 + 4) + 0xb4))(bVar2 & 0xf8,piStack_118,(char)uVar1 << 3);
    }
    (**(code **)(**(int **)(param_1 + 4) + 0xb8))
              (*(int *)(param_1 + 0x8c + uVar6 * 4) + iStack_8,
               *(int *)(param_1 + 0x9c + uVar6 * 4) + iStack_4,uStack_c,unaff_retaddr);
  }
  uVar6 = *(uint *)(param_1 + 0x6c + uVar6 * 4);
  if ((uVar6 & 0x80000000) == 0) {
    if (piVar5 == (int *)0x0) {
      if ((*(byte *)(param_1 + 0x20) & 4) == 0) {
        (**(code **)(**(int **)(param_1 + 4) + 0xb0))(uVar6);
      }
    }
    else {
      iVar7 = **(int **)(param_1 + 4);
      iVar10 = (**(code **)(*piVar5 + 0x20))(uVar6);
      iVar10 = (**(code **)(*piVar5 + 0x20))(uVar6,*(undefined1 *)(iVar10 + 2));
      puVar3 = (undefined1 *)(**(code **)(*piVar5 + 0x20))(uVar6,*(undefined1 *)(iVar10 + 1));
      (**(code **)(iVar7 + 0xb4))(*puVar3);
    }
  }
  else {
    iVar7 = (**(code **)(*DAT_0083ad50 + 0xb4))();
    if (iVar7 == 1) {
      piStack_118 = (int *)((int)uVar6 >> 3 & 0xfc);
    }
    else {
      piStack_118 = (int *)((int)uVar6 >> 2 & 0xf8);
    }
    iVar7 = (**(code **)(*DAT_0083ad50 + 0xb4))();
    if (iVar7 == 1) {
      bVar2 = (byte)(uVar6 >> 8);
    }
    else {
      bVar2 = (byte)((int)uVar6 >> 7);
    }
    (**(code **)(**(int **)(param_1 + 4) + 0xb4))(bVar2 & 0xf8,piStack_118,(char)uVar6 << 3);
  }
  iVar10 = 0;
  iVar7 = 0;
  if (-1 < param_4) {
    bVar11 = param_4 == 0;
    puVar9 = param_2;
    do {
      if (bVar11) {
        for (iVar8 = iVar10; iVar8 < iVar7; iVar8 = iVar8 + 1) {
          *(undefined1 *)((int)local_108 + (iVar8 - iVar10)) =
               *(undefined1 *)(iVar8 + unaff_retaddr);
        }
        (**(code **)(**(int **)(param_1 + 4) + 0xb8))(puVar9,param_3,local_108,iVar7 - iVar10);
        iVar8 = FUN_00483930(local_108,iVar7 - iVar10);
LAB_00476ccd:
        iVar10 = iVar7 + 1;
        puVar9 = (undefined4 *)((int)puVar9 + iVar8);
      }
      else if (*(char *)(unaff_retaddr + iVar7) == '\t') {
        for (iVar8 = iVar10; iVar8 < iVar7; iVar8 = iVar8 + 1) {
          *(undefined1 *)((int)local_108 + (iVar8 - iVar10)) =
               *(undefined1 *)(iVar8 + unaff_retaddr);
        }
        (**(code **)(**(int **)(param_1 + 4) + 0xb8))(puVar9,param_3,local_108,iVar7 - iVar10);
        iVar10 = FUN_00483930(local_108,iVar7 - iVar10);
        puVar9 = (undefined4 *)((int)puVar9 + iVar10);
        iVar8 = 0x1e - (int)puVar9 % 0x1e;
        goto LAB_00476ccd;
      }
      iVar7 = iVar7 + 1;
      bVar11 = iVar7 == param_4;
    } while (iVar7 <= param_4);
  }
  (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if (uStack_110 != 0) {
    FUN_004a5007(uStack_110);
  }
  iVar7 = FUN_00483930(puVar4,param_4);
  return (undefined1 *)(iVar7 + (int)param_2);
}

