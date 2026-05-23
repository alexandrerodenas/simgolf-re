/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10041bf0 @ 0x10041BF0 */
/* Body size: 555 addresses */


void __cdecl FUN_10041bf0(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  
  uVar7 = *param_1;
  if ((char)param_1[2] == '\x03') {
    bVar1 = *(byte *)((int)param_1 + 9);
    if (bVar1 < 8) {
      if (bVar1 == 1) {
        pbVar8 = (byte *)((uVar7 - 1 >> 3) + param_2);
        iVar2 = 7 - (uVar7 - 1 & 7);
        pbVar6 = (byte *)((uVar7 - 1) + param_2);
        for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar6 = *pbVar8 >> ((byte)iVar2 & 0x1f) & 1;
          if (iVar2 == 7) {
            iVar2 = 0;
            pbVar8 = pbVar8 + -1;
          }
          else {
            iVar2 = iVar2 + 1;
          }
          pbVar6 = pbVar6 + -1;
        }
      }
      else if (bVar1 == 2) {
        pbVar8 = (byte *)((uVar7 - 1 >> 2) + param_2);
        iVar2 = (3 - (uVar7 - 1 & 3)) * 2;
        pbVar6 = (byte *)((uVar7 - 1) + param_2);
        for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar6 = *pbVar8 >> ((byte)iVar2 & 0x1f) & 3;
          if (iVar2 == 6) {
            iVar2 = 0;
            pbVar8 = pbVar8 + -1;
          }
          else {
            iVar2 = iVar2 + 2;
          }
          pbVar6 = pbVar6 + -1;
        }
      }
      else if (bVar1 == 4) {
        pbVar8 = (byte *)((uVar7 - 1 >> 1) + param_2);
        iVar2 = (uVar7 & 1) << 2;
        pbVar6 = (byte *)((uVar7 - 1) + param_2);
        for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar6 = *pbVar8 >> ((byte)iVar2 & 0x1f) & 0xf;
          if (iVar2 == 4) {
            iVar2 = 0;
            pbVar8 = pbVar8 + -1;
          }
          else {
            iVar2 = iVar2 + 4;
          }
          pbVar6 = pbVar6 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar7;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar6 = (byte *)((uVar7 - 1) + param_2);
      if (param_4 != 0) {
        uVar5 = uVar7 * 4;
        puVar4 = (undefined1 *)((uVar5 - 1) + param_2);
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          if ((int)(uint)*pbVar6 < param_5) {
            *puVar4 = *(undefined1 *)((uint)*pbVar6 + param_4);
          }
          else {
            *puVar4 = 0xff;
          }
          puVar4[-1] = *(undefined1 *)((uint)*pbVar6 * 3 + 2 + param_3);
          puVar3 = puVar4 + -3;
          puVar4[-2] = *(undefined1 *)((uint)*pbVar6 * 3 + 1 + param_3);
          bVar1 = *pbVar6;
          puVar4 = puVar4 + -4;
          pbVar6 = pbVar6 + -1;
          *puVar3 = *(undefined1 *)(param_3 + (uint)bVar1 * 3);
        }
        param_1[1] = uVar5;
        *(undefined1 *)((int)param_1 + 9) = 8;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        *(undefined1 *)(param_1 + 2) = 6;
        *(undefined1 *)((int)param_1 + 10) = 4;
        return;
      }
      uVar5 = uVar7 * 3;
      puVar4 = (undefined1 *)((uVar5 - 1) + param_2);
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = *(undefined1 *)((uint)*pbVar6 * 3 + 2 + param_3);
        puVar3 = puVar4 + -2;
        puVar4[-1] = *(undefined1 *)((uint)*pbVar6 * 3 + 1 + param_3);
        bVar1 = *pbVar6;
        puVar4 = puVar4 + -3;
        pbVar6 = pbVar6 + -1;
        *puVar3 = *(undefined1 *)(param_3 + (uint)bVar1 * 3);
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 0x18;
      param_1[1] = uVar5;
      *(undefined1 *)(param_1 + 2) = 2;
      *(undefined1 *)((int)param_1 + 10) = 3;
    }
  }
  return;
}

