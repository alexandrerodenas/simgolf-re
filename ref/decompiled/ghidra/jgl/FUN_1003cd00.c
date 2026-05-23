/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003cd00 @ 0x1003CD00 */
/* Body size: 219 addresses */


undefined4 __fastcall FUN_1003cd00(int *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  (**(code **)(*param_1 + 8))();
  puVar2 = (undefined1 *)((int)param_1 + 0xd);
  puVar4 = &DAT_100538b9;
  do {
    puVar5 = puVar4 + 4;
    puVar2[-1] = puVar4[1];
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[-1];
    puVar2[2] = 4;
    puVar2[0x3d7] = puVar2[(int)&DAT_100538d5 - (int)param_1];
    puVar2[0x3d8] = puVar2[(int)&DAT_100538d4 - (int)param_1];
    puVar2[0x3d9] = puVar2[(int)&DAT_100538d3 - (int)param_1];
    puVar2[0x3da] = 4;
    puVar2 = puVar2 + 4;
    puVar4 = puVar5;
  } while ((int)puVar5 < 0x100538e1);
  iVar3 = 10;
  puVar2 = (undefined1 *)((int)param_1 + 0x35);
  do {
    uVar1 = (undefined1)iVar3;
    puVar2[-1] = uVar1;
    *puVar2 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = 5;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 0xf6);
  iVar3 = 0;
  puVar2 = (undefined1 *)((int)param_1 + 0x2d);
  do {
    puVar2[-1] = (char)iVar3 + '\b';
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 2;
    puVar2[0x3b7] = (char)iVar3 + -0xb;
    puVar2[0x3b8] = 0;
    puVar2[0x3b9] = 0;
    puVar2[0x3ba] = 2;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 2);
  FUN_1003cc10((int)param_1);
  return 0;
}

