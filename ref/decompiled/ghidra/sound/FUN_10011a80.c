/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011a80 @ 0x10011A80 */


void __fastcall FUN_10011a80(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  while (puVar2 = DAT_100b4a34, DAT_100b4a34 = puVar2, puVar2 != (undefined *)0x0) {
    if (*(int *)(puVar2 + 0x20) == 0) {
      if (puVar2 != (undefined *)0x0) {
        iVar4 = *(int *)(puVar2 + 0xbc);
        puVar1 = *(undefined **)(puVar2 + 0xc0);
        DAT_100b4a34 = puVar1;
        if (iVar4 != 0) {
          DAT_100b4a34 = puVar2;
          *(undefined **)(iVar4 + 0xc0) = puVar1;
        }
        if (puVar1 != (undefined *)0x0) {
          *(int *)(puVar1 + 0xbc) = iVar4;
          iVar4 = DAT_100b4a38;
        }
        DAT_100b4a38 = iVar4;
        *(undefined4 *)(puVar2 + 0xbc) = 0;
        *(undefined4 *)(puVar2 + 0xc0) = 0;
      }
      thunk_FUN_1000f8f0((int)puVar2);
      if (puVar2 != (undefined *)0x0) {
        thunk_FUN_1000ef60((int)puVar2);
        FUN_1004249a(puVar2);
      }
    }
    else {
      thunk_FUN_100137f0(param_1 + 0x5e,*(int *)(puVar2 + 0x20));
      thunk_FUN_100340b0(*(undefined4 **)(puVar2 + 0x20));
    }
  }
  puVar2 = (undefined *)param_1[0x5a];
  if (puVar2 != (undefined *)0x0) {
    puVar3 = *(undefined4 **)(puVar2 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      param_1[0x5b] = 0;
      param_1[0x5a] = 0;
    }
    else {
      *puVar3 = 0;
      param_1[0x5a] = (int)puVar3;
    }
    iVar4 = *(int *)(puVar2 + 8);
    FUN_1004249a(puVar2);
    param_1[0x5d] = param_1[0x5d] + -1;
    while ((iVar4 != 0 && (puVar2 = (undefined *)param_1[0x5a], puVar2 != (undefined *)0x0))) {
      puVar3 = *(undefined4 **)(puVar2 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        param_1[0x5b] = 0;
        param_1[0x5a] = 0;
      }
      else {
        *puVar3 = 0;
        param_1[0x5a] = (int)puVar3;
      }
      iVar4 = *(int *)(puVar2 + 8);
      FUN_1004249a(puVar2);
      param_1[0x5d] = param_1[0x5d] + -1;
    }
  }
  if ((*(byte *)(param_1 + 0x1b) & 2) != 0) {
    thunk_FUN_10010060((int)(param_1 + 0x1c));
  }
  if (param_1[0x66] != 0) {
    thunk_FUN_10010060(param_1[0x66]);
    puVar2 = (undefined *)param_1[0x66];
    if (puVar2 != (undefined *)0x0) {
      thunk_FUN_1000ef60((int)puVar2);
      FUN_1004249a(puVar2);
    }
    param_1[0x66] = 0;
  }
  piVar5 = (int *)*param_1;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  *param_1 = 0;
  param_1[99] = param_1[99] + 1;
  return;
}

