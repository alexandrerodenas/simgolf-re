/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10041800 @ 0x10041800 */
/* Body size: 975 addresses */


void __cdecl FUN_10041800(int *param_1,byte *param_2,int param_3,int param_4,byte param_5)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_8;
  
  bVar1 = *(byte *)((int)param_1 + 9);
  iVar6 = *param_1;
  if (((bVar1 < 9) && (param_3 != 0)) || ((bVar1 == 0x10 && (param_4 != 0)))) {
    switch((char)param_1[2]) {
    case '\0':
      if ((bVar1 == 2) && (iVar6 != 0)) {
        local_8 = iVar6 + 3U >> 2;
        pbVar5 = param_2;
        do {
          uVar7 = (uint)*pbVar5;
          uVar8 = uVar7 & 0xc;
          uVar4 = uVar7 & 3;
          uVar9 = uVar7 & 0x30;
          uVar7 = uVar7 & 0xc0;
          *pbVar5 = (byte)((byte)(*(byte *)(((uVar8 * 4 | uVar8) << 2 | (int)uVar8 >> 2 | uVar8) +
                                           param_3) & 0xcf |
                                 *(byte *)((((uVar4 * 4 | uVar4) << 2 | uVar4) << 2 | uVar4) +
                                          param_3) >> 2) >> 2 |
                          *(byte *)(((int)((int)uVar9 >> 2 | uVar9) >> 2 | uVar9 * 4 | uVar9) +
                                   param_3) & 0xc3) >> 2 |
                    *(byte *)(((int)((int)((int)uVar7 >> 2 | uVar7) >> 2 | uVar7) >> 2 | uVar7) +
                             param_3) & 0xc0;
          pbVar5 = pbVar5 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      cVar2 = *(char *)((int)param_1 + 9);
      if (cVar2 == '\x04') {
        if (iVar6 != 0) {
          uVar4 = iVar6 + 1U >> 1;
          do {
            uVar7 = *param_2 & 0xf;
            uVar8 = *param_2 & 0xf0;
            *param_2 = *(byte *)(((int)uVar8 >> 4 | uVar8) + param_3) & 0xf0 |
                       *(byte *)((uVar7 << 4 | uVar7) + param_3) >> 4;
            param_2 = param_2 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          return;
        }
      }
      else if (cVar2 == '\b') {
        if (iVar6 != 0) {
          do {
            iVar6 = iVar6 + -1;
            *param_2 = *(byte *)((uint)*param_2 + param_3);
            param_2 = param_2 + 1;
          } while (iVar6 != 0);
          return;
        }
      }
      else if (cVar2 == '\x10') {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          param_2 = param_2 + 2;
        }
      }
      break;
    case '\x02':
      if (bVar1 == 8) {
        if (iVar6 != 0) {
          do {
            *param_2 = *(byte *)((uint)*param_2 + param_3);
            param_2[1] = *(byte *)((uint)param_2[1] + param_3);
            iVar6 = iVar6 + -1;
            param_2[2] = *(byte *)((uint)param_2[2] + param_3);
            param_2 = param_2 + 3;
          } while (iVar6 != 0);
          return;
        }
      }
      else if (iVar6 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[3] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[5] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[5] = (byte)uVar3;
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          iVar6 = iVar6 + -1;
          param_2 = param_2 + 6;
        } while (iVar6 != 0);
        return;
      }
      break;
    case '\x04':
      if (bVar1 == 8) {
        if (iVar6 != 0) {
          do {
            iVar6 = iVar6 + -1;
            *param_2 = *(byte *)((uint)*param_2 + param_3);
            param_2 = param_2 + 2;
          } while (iVar6 != 0);
          return;
        }
      }
      else if (iVar6 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          iVar6 = iVar6 + -1;
          param_2 = param_2 + 4;
        } while (iVar6 != 0);
        return;
      }
      break;
    case '\x06':
      if (bVar1 == 8) {
        if (iVar6 != 0) {
          do {
            *param_2 = *(byte *)((uint)*param_2 + param_3);
            param_2[1] = *(byte *)((uint)param_2[1] + param_3);
            iVar6 = iVar6 + -1;
            param_2[2] = *(byte *)((uint)param_2[2] + param_3);
            param_2 = param_2 + 4;
          } while (iVar6 != 0);
          return;
        }
      }
      else if (iVar6 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[3] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[5] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[5] = (byte)uVar3;
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          iVar6 = iVar6 + -1;
          param_2 = param_2 + 8;
        } while (iVar6 != 0);
        return;
      }
    }
  }
  return;
}

