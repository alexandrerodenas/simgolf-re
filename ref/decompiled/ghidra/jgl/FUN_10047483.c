/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10047483 @ 0x10047483 */


undefined1 * __cdecl FUN_10047483(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  
  piVar1 = DAT_10057e14;
  if (DAT_10057e18 == '\0') {
    piVar1 = (int *)FUN_1004ba07();
    FUN_1004b990(param_2 + (uint)(0 < param_3) + (uint)(*piVar1 == 0x2d),param_3 + 1,(int)piVar1);
  }
  else {
    FUN_1004779b(param_2 + (*DAT_10057e14 == 0x2d),(uint)(0 < param_3));
  }
  puVar2 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  puVar3 = puVar2;
  if (0 < param_3) {
    puVar3 = puVar2 + 1;
    *puVar2 = puVar2[1];
    *puVar3 = DAT_100567a4;
  }
  puVar4 = FUN_1004b8a0((uint *)(puVar3 + param_3 + (uint)(DAT_10057e18 == '\0')),(uint *)"e+000");
  if (param_4 != 0) {
    *(undefined1 *)puVar4 = 0x45;
  }
  if (*(char *)piVar1[3] != '0') {
    iVar5 = piVar1[1] + -1;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
      *(undefined1 *)((int)puVar4 + 1) = 0x2d;
    }
    if (99 < iVar5) {
      *(char *)((int)puVar4 + 2) = *(char *)((int)puVar4 + 2) + (char)(iVar5 / 100);
      iVar5 = iVar5 % 100;
    }
    if (9 < iVar5) {
      *(char *)((int)puVar4 + 3) = *(char *)((int)puVar4 + 3) + (char)(iVar5 / 10);
      iVar5 = iVar5 % 10;
    }
    *(char *)(puVar4 + 1) = (char)puVar4[1] + (char)iVar5;
  }
  return param_2;
}

