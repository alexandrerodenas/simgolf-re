/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042e20 @ 0x10042E20 */
/* Body size: 143 addresses */


void __cdecl FUN_10042e20(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = 0;
  iVar5 = 0;
  do {
    bVar2 = *(byte *)(iVar5 + 0x11c + param_1);
    iVar5 = iVar5 + 1;
    if (((bVar2 < 0x29) || (bVar2 != 0x7a && 0x79 < bVar2)) || ((0x5a < bVar2 && (bVar2 < 0x61)))) {
      *(undefined1 *)(iVar3 + param_2) = 0x5b;
      *(undefined *)(iVar3 + 1 + param_2) = (&DAT_100539c0)[(int)(uint)bVar2 >> 4];
      *(undefined *)(iVar3 + 2 + param_2) = (&DAT_100539c0)[bVar2 & 0xf];
      iVar4 = iVar3 + 3;
      *(undefined1 *)(iVar4 + param_2) = 0x5d;
    }
    else {
      *(byte *)(iVar3 + param_2) = bVar2;
      iVar4 = iVar3;
    }
    iVar3 = iVar4 + 1;
  } while (iVar5 < 4);
  if (param_3 == (undefined4 *)0x0) {
    *(undefined1 *)(iVar3 + param_2) = 0;
    return;
  }
  *(undefined1 *)(iVar3 + param_2) = 0x3a;
  *(undefined1 *)(iVar4 + 2 + param_2) = 0x20;
  puVar1 = (undefined4 *)(iVar4 + 3 + param_2);
  puVar6 = puVar1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((int)puVar1 + 0x3f) = 0;
  return;
}

