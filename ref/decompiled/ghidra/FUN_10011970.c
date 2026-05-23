/* Ghidra decompiled: sound.dll */
/* Function: FUN_10011970 @ 0x10011970 */
/* Body size: 208 addresses */


void __fastcall FUN_10011970(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  
  while (puVar3 = DAT_100b4a34, DAT_100b4a34 = puVar3, puVar3 != (undefined *)0x0) {
    iVar1 = *(int *)(puVar3 + 0xbc);
    puVar2 = *(undefined **)(puVar3 + 0xc0);
    DAT_100b4a34 = puVar2;
    if (iVar1 != 0) {
      DAT_100b4a34 = puVar3;
      *(undefined **)(iVar1 + 0xc0) = puVar2;
    }
    if (puVar2 != (undefined *)0x0) {
      *(int *)(puVar2 + 0xbc) = iVar1;
      iVar1 = DAT_100b4a38;
    }
    DAT_100b4a38 = iVar1;
    *(undefined4 *)(puVar3 + 0xbc) = 0;
    *(undefined4 *)(puVar3 + 0xc0) = 0;
    thunk_FUN_10010060((int)puVar3);
    if (puVar3 != (undefined *)0x0) {
      thunk_FUN_1000ef60((int)puVar3);
      FUN_1004249a(puVar3);
    }
  }
  if ((*(byte *)(param_1 + 0x1b) & 2) != 0) {
    thunk_FUN_10010060((int)(param_1 + 0x1c));
  }
  if (param_1[0x66] != 0) {
    thunk_FUN_10010060(param_1[0x66]);
    puVar3 = (undefined *)param_1[0x66];
    if (puVar3 != (undefined *)0x0) {
      thunk_FUN_1000ef60((int)puVar3);
      FUN_1004249a(puVar3);
    }
    param_1[0x66] = 0;
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *param_1 = 0;
  }
  param_1[2] = 0;
  param_1[99] = param_1[99] + 1;
  return;
}

