/* Ghidra decompiled: sound.dll */
/* Function: FUN_10012690 @ 0x10012690 */
/* Body size: 421 addresses */


int __thiscall FUN_10012690(void *this,int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  if (param_1 == 0) {
    return 10;
  }
  iVar9 = *(int *)((int)this + 0x168);
  while( true ) {
    if (iVar9 == 0) {
      return 0x24;
    }
    iVar1 = *(int *)(iVar9 + 8);
    iVar7 = thunk_FUN_10010e30(iVar1);
    if (iVar7 == 0) break;
    iVar9 = *(int *)(iVar9 + 4);
  }
  if (iVar9 == 0) {
    return 0x24;
  }
  thunk_FUN_10032440(*(void **)(iVar1 + 0x20),iVar1);
  piVar8 = *(int **)((int)this + 0x168);
  if (piVar8 == (int *)0x0) {
    return 0x24;
  }
  while (piVar8[2] != iVar1) {
    piVar8 = (int *)piVar8[1];
    if (piVar8 == (int *)0x0) {
      return 0x24;
    }
  }
  if (piVar8 != (int *)0x0) {
    if (*piVar8 == 0) {
      *(int *)((int)this + 0x168) = piVar8[1];
    }
    else {
      *(int *)(*piVar8 + 4) = piVar8[1];
    }
    piVar2 = (int *)piVar8[1];
    if (piVar2 == (int *)0x0) {
      iVar9 = *piVar8;
      *(undefined4 *)((int)this + 0x170) = 0;
      *(int *)((int)this + 0x16c) = iVar9;
    }
    else {
      *piVar2 = *piVar8;
      *(int **)((int)this + 0x170) = piVar2;
    }
    puVar3 = (undefined *)piVar8[2];
    FUN_1004249a((undefined *)piVar8);
    *(int *)((int)this + 0x174) = *(int *)((int)this + 0x174) + -1;
    if (puVar3 != (undefined *)0x0) {
      puVar5 = DAT_100b4a34;
      if ((*(byte *)((int)this + 0x6c) & 2) != 0) {
        for (; puVar5 != (undefined *)0x0; puVar5 = *(undefined **)(puVar5 + 0xc0)) {
          if (puVar5 == puVar3) {
            if (puVar5 != (undefined *)0x0) {
              iVar9 = *(int *)(puVar5 + 0xbc);
              puVar4 = *(undefined **)(puVar5 + 0xc0);
              puVar6 = puVar4;
              if (iVar9 != 0) {
                *(undefined **)(iVar9 + 0xc0) = puVar4;
                puVar6 = DAT_100b4a34;
              }
              DAT_100b4a34 = puVar6;
              if (puVar4 != (undefined *)0x0) {
                *(int *)(puVar4 + 0xbc) = iVar9;
                iVar9 = DAT_100b4a38;
              }
              DAT_100b4a38 = iVar9;
              *(undefined4 *)(puVar5 + 0xbc) = 0;
              *(undefined4 *)(puVar5 + 0xc0) = 0;
            }
            break;
          }
        }
        if ((*(uint *)(puVar3 + 0x98) | 4) != 0) {
          *(int *)((int)this + 0x158) = *(int *)((int)this + 0x158) + -1;
        }
        iVar9 = thunk_FUN_10010060((int)puVar3);
        if (iVar9 == 0) {
          thunk_FUN_1000ef60((int)puVar3);
          FUN_1004249a(puVar3);
        }
      }
      *(int *)((int)this + 0x15c) = *(int *)((int)this + 0x15c) + -1;
      iVar9 = thunk_FUN_10012260(this,param_1,*(int *)(param_1 + 0x54),param_2);
      if (iVar9 == 0) {
        *(int *)(*param_2 + 0x20) = param_1;
        return 0;
      }
      *param_2 = 0;
      return iVar9;
    }
  }
  return 0x24;
}

