/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001350 @ 0x10001350 */
/* Body size: 197 addresses */


void __fastcall FUN_10001350(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = &PTR_FUN_100531fc;
  if (DAT_10057b20 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)DAT_10057b20[3];
    puVar4 = DAT_10057b20;
    while (puVar3 != param_1) {
      puVar4 = (undefined4 *)puVar4[1];
      if (puVar4 == DAT_10057b20) goto LAB_10001399;
      puVar3 = (undefined4 *)puVar4[3];
    }
    DAT_10057b14 = puVar4[3];
    DAT_10057b18 = *(undefined1 *)(puVar4 + 4);
    DAT_10057b24 = puVar4;
LAB_10001399:
    puVar3 = DAT_10057b24;
    if (DAT_10057b20 == (undefined4 *)DAT_10057b20[1]) {
      if (DAT_10057b20 != (undefined4 *)0x0) {
        (**(code **)*DAT_10057b20)(1);
      }
      DAT_10057b20 = (undefined4 *)0x0;
      DAT_10057b24 = (undefined4 *)0x0;
      DAT_10057b1c = 0;
      return;
    }
    if (DAT_10057b20 == DAT_10057b24) {
      DAT_10057b20 = (undefined4 *)DAT_10057b20[1];
    }
    puVar4 = (undefined4 *)DAT_10057b24[1];
    piVar1 = DAT_10057b24 + 1;
    DAT_10057b14 = puVar4[3];
    DAT_10057b18 = *(undefined1 *)(puVar4 + 4);
    piVar2 = DAT_10057b24 + 2;
    DAT_10057b24 = puVar4;
    *(int *)(*piVar2 + 4) = *piVar1;
    *(undefined4 *)(*piVar1 + 8) = puVar3[2];
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    DAT_10057b1c = DAT_10057b1c + -1;
  }
  return;
}

