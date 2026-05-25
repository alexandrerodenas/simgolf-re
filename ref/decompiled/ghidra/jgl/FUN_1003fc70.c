/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003fc70 @ 0x1003FC70 */


void __cdecl FUN_1003fc70(uint *param_1,int param_2,uint param_3,byte param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  byte bVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  puVar2 = param_1;
  puVar7 = param_1 + 2;
  uVar1 = *param_1;
  bVar6 = (byte)(param_3 >> 8);
  param_1 = (uint *)(uint)bVar6;
  uVar5 = (undefined1)param_3;
  if ((char)*puVar7 == '\0') {
    if (*(char *)((int)puVar2 + 9) == '\b') {
      puVar8 = (undefined1 *)(uVar1 + param_2);
      puVar3 = puVar8 + uVar1;
      uVar10 = uVar1;
      if ((param_4 & 0x80) == 0) {
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          puVar9 = puVar8 + -1;
          puVar8 = puVar8 + -1;
          puVar3[-1] = *puVar9;
          puVar3 = puVar3 + -2;
          *puVar3 = uVar5;
        }
        *(undefined1 *)((int)puVar2 + 10) = 2;
        *(undefined1 *)((int)puVar2 + 0xb) = 0x10;
        puVar2[1] = uVar1 * 2;
        return;
      }
      if (1 < uVar1) {
        iVar4 = uVar1 - 1;
        do {
          puVar8 = puVar8 + -1;
          puVar3[-1] = uVar5;
          puVar3 = puVar3 + -2;
          iVar4 = iVar4 + -1;
          *puVar3 = *puVar8;
        } while (iVar4 != 0);
      }
      puVar3[-1] = uVar5;
      *(undefined1 *)((int)puVar2 + 10) = 2;
      *(undefined1 *)((int)puVar2 + 0xb) = 0x10;
      puVar2[1] = uVar1 * 2;
      return;
    }
    if (*(char *)((int)puVar2 + 9) == '\x10') {
      puVar8 = (undefined1 *)(uVar1 + param_2);
      puVar3 = puVar8 + uVar1;
      uVar10 = uVar1;
      if ((param_4 & 0x80) == 0) {
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          puVar9 = puVar8 + -1;
          puVar8 = puVar8 + -2;
          puVar3[-1] = *puVar9;
          puVar3[-2] = *puVar8;
          puVar3[-3] = bVar6;
          puVar3 = puVar3 + -4;
          *puVar3 = uVar5;
        }
      }
      else {
        if (1 < uVar1) {
          param_2 = uVar1 - 1;
          do {
            puVar3[-1] = bVar6;
            puVar9 = puVar8 + -1;
            puVar3[-2] = uVar5;
            puVar8 = puVar8 + -2;
            puVar3[-3] = *puVar9;
            puVar3 = puVar3 + -4;
            *puVar3 = *puVar8;
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
        puVar3[-1] = bVar6;
        puVar3[-2] = uVar5;
      }
      *(undefined1 *)((int)puVar2 + 10) = 2;
      *(undefined1 *)((int)puVar2 + 0xb) = 0x20;
      puVar2[1] = uVar1 * 4;
      return;
    }
  }
  else if ((char)*puVar7 == '\x02') {
    if (*(char *)((int)puVar2 + 9) == '\b') {
      if ((param_4 & 0x80) == 0) {
        puVar8 = (undefined1 *)(param_2 + uVar1 * 3);
        puVar3 = puVar8 + uVar1;
        for (uVar10 = uVar1; uVar10 != 0; uVar10 = uVar10 - 1) {
          puVar9 = puVar8 + -2;
          puVar3[-1] = puVar8[-1];
          puVar8 = puVar8 + -3;
          puVar3[-2] = *puVar9;
          puVar3[-3] = *puVar8;
          puVar3 = puVar3 + -4;
          *puVar3 = uVar5;
        }
        *(undefined1 *)((int)puVar2 + 10) = 4;
        *(undefined1 *)((int)puVar2 + 0xb) = 0x20;
        puVar2[1] = uVar1 * 4;
        return;
      }
      puVar8 = (undefined1 *)(param_2 + uVar1 * 3);
      puVar3 = puVar8 + uVar1;
      if (1 < uVar1) {
        iVar4 = uVar1 - 1;
        do {
          puVar3[-1] = uVar5;
          puVar9 = puVar8 + -2;
          puVar3[-2] = puVar8[-1];
          puVar8 = puVar8 + -3;
          puVar3[-3] = *puVar9;
          puVar3 = puVar3 + -4;
          iVar4 = iVar4 + -1;
          *puVar3 = *puVar8;
        } while (iVar4 != 0);
      }
      puVar3[-1] = uVar5;
      *(undefined1 *)((int)puVar2 + 10) = 4;
      *(undefined1 *)((int)puVar2 + 0xb) = 0x20;
      puVar2[1] = uVar1 * 4;
      return;
    }
    if (*(char *)((int)puVar2 + 9) == '\x10') {
      iVar4 = param_2 + uVar1 * 2;
      if ((param_4 & 0x80) == 0) {
        puVar3 = (undefined1 *)(uVar1 + iVar4);
        puVar8 = puVar3 + uVar1;
        for (uVar10 = uVar1; uVar10 != 0; uVar10 = uVar10 - 1) {
          puVar8[-1] = puVar3[-1];
          puVar8[-2] = puVar3[-2];
          puVar8[-3] = puVar3[-3];
          puVar9 = puVar3 + -5;
          puVar8[-4] = puVar3[-4];
          puVar3 = puVar3 + -6;
          puVar8[-5] = *puVar9;
          puVar8[-6] = *puVar3;
          puVar8[-7] = bVar6;
          puVar8 = puVar8 + -8;
          *puVar8 = uVar5;
        }
      }
      else {
        puVar3 = (undefined1 *)(uVar1 + iVar4);
        puVar8 = puVar3 + uVar1;
        if (1 < uVar1) {
          iVar4 = uVar1 - 1;
          puVar7 = (uint *)(param_3 >> 8);
          do {
            puVar8[-1] = (char)puVar7;
            puVar8[-2] = uVar5;
            puVar8[-3] = puVar3[-1];
            puVar8[-4] = puVar3[-2];
            puVar8[-5] = puVar3[-3];
            puVar9 = puVar3 + -5;
            puVar8[-6] = puVar3[-4];
            puVar3 = puVar3 + -6;
            puVar8[-7] = *puVar9;
            puVar8 = puVar8 + -8;
            iVar4 = iVar4 + -1;
            *puVar8 = *puVar3;
            puVar7 = param_1;
          } while (iVar4 != 0);
        }
        puVar8[-1] = bVar6;
        puVar8[-2] = uVar5;
      }
      *(undefined1 *)((int)puVar2 + 10) = 4;
      *(undefined1 *)((int)puVar2 + 0xb) = 0x40;
      puVar2[1] = uVar1 * 8;
    }
  }
  return;
}

