/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10040800 @ 0x10040800 */
/* Body size: 4022 addresses */


void __cdecl
FUN_10040800(int *param_1,byte *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7
            ,int param_8,int param_9,int param_10,int param_11,byte param_12)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  char cVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  uVar7 = param_3;
  pbVar3 = (byte *)*param_1;
  if ((param_4 != 0) &&
     ((bVar4 = *(byte *)(param_1 + 2), (bVar4 & 4) == 0 || ((bVar4 != 3 && (param_3 != 0)))))) {
    switch(bVar4) {
    case 0:
      switch(*(undefined1 *)((int)param_1 + 9)) {
      case 1:
        iVar8 = 7;
        for (pbVar14 = pbVar3; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
          bVar4 = (byte)iVar8;
          if ((*param_2 >> (bVar4 & 0x1f) & 0xff01) == *(ushort *)(param_3 + 8)) {
            bVar5 = (byte)(0x7f7f >> (7 - bVar4 & 0x1f)) & *param_2;
            *param_2 = bVar5;
            *param_2 = *(char *)(param_4 + 8) << (bVar4 & 0x1f) | bVar5;
          }
          if (iVar8 == 0) {
            iVar8 = 7;
            param_2 = param_2 + 1;
          }
          else {
            iVar8 = iVar8 + -1;
          }
        }
        break;
      case 2:
        iVar8 = 6;
        pbVar14 = pbVar3;
        if (param_6 == 0) {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            bVar4 = (byte)iVar8;
            if ((*param_2 >> (bVar4 & 0x1f) & 0xff03) == *(ushort *)(param_3 + 8)) {
              bVar5 = (byte)(0x3f3f >> (6 - bVar4 & 0x1f)) & *param_2;
              *param_2 = bVar5;
              *param_2 = *(char *)(param_4 + 8) << (bVar4 & 0x1f) | bVar5;
            }
            if (iVar8 == 0) {
              iVar8 = 6;
              param_2 = param_2 + 1;
            }
            else {
              iVar8 = iVar8 + -2;
            }
          }
        }
        else {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            bVar5 = (byte)iVar8;
            bVar4 = *param_2 >> (bVar5 & 0x1f);
            if ((bVar4 & 0xff03) == *(ushort *)(uVar7 + 8)) {
              bVar4 = (byte)(0x3f3f >> (6 - bVar5 & 0x1f)) & *param_2;
              *param_2 = bVar4;
              bVar12 = *(char *)(param_4 + 8) << (bVar5 & 0x1f);
            }
            else {
              param_3 = (uint)(bVar4 & 3);
              bVar12 = (byte)(0x3f3f >> (6 - bVar5 & 0x1f)) & *param_2;
              bVar4 = (*(byte *)((((param_3 * 4 | param_3) << 2 | param_3) << 2 | param_3) + param_6
                                ) >> 6) << (bVar5 & 0x1f);
            }
            *param_2 = bVar12 | bVar4;
            if (iVar8 == 0) {
              iVar8 = 6;
              param_2 = param_2 + 1;
            }
            else {
              iVar8 = iVar8 + -2;
            }
          }
        }
        break;
      case 4:
        iVar8 = 4;
        pbVar14 = pbVar3;
        if (param_6 == 0) {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            bVar4 = (byte)iVar8;
            if ((*param_2 >> (bVar4 & 0x1f) & 0xff0f) == *(ushort *)(param_3 + 8)) {
              bVar5 = (byte)(0xf0f >> (4 - bVar4 & 0x1f)) & *param_2;
              *param_2 = bVar5;
              *param_2 = *(char *)(param_4 + 8) << (bVar4 & 0x1f) | bVar5;
            }
            if (iVar8 == 0) {
              iVar8 = 4;
              param_2 = param_2 + 1;
            }
            else {
              iVar8 = iVar8 + -4;
            }
          }
        }
        else {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            bVar5 = (byte)iVar8;
            bVar4 = *param_2 >> (bVar5 & 0x1f);
            if ((bVar4 & 0xff0f) == *(ushort *)(uVar7 + 8)) {
              bVar4 = (byte)(0xf0f >> (4 - bVar5 & 0x1f)) & *param_2;
              *param_2 = bVar4;
              bVar12 = *(char *)(param_4 + 8) << (bVar5 & 0x1f);
            }
            else {
              param_3 = (uint)(bVar4 & 0xf);
              bVar12 = (byte)(0xf0f >> (4 - bVar5 & 0x1f)) & *param_2;
              bVar4 = (*(byte *)((param_3 << 4 | param_3) + param_6) >> 4) << (bVar5 & 0x1f);
            }
            *param_2 = bVar12 | bVar4;
            if (iVar8 == 0) {
              iVar8 = 4;
              param_2 = param_2 + 1;
            }
            else {
              iVar8 = iVar8 + -4;
            }
          }
        }
        break;
      case 8:
        pbVar14 = pbVar3;
        if (param_6 == 0) {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            if ((ushort)*param_2 == *(ushort *)(param_3 + 8)) {
              *param_2 = *(byte *)(param_4 + 8);
            }
            param_2 = param_2 + 1;
          }
        }
        else {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            if ((ushort)*param_2 == *(ushort *)(param_3 + 8)) {
              bVar4 = *(byte *)(param_4 + 8);
            }
            else {
              bVar4 = *(byte *)((uint)*param_2 + param_6);
            }
            *param_2 = bVar4;
            param_2 = param_2 + 1;
          }
        }
        break;
      case 0x10:
        pbVar14 = pbVar3;
        if (param_9 == 0) {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 8))
            {
              *param_2 = *(byte *)(param_4 + 9);
              param_2[1] = *(byte *)(param_4 + 8);
            }
            param_2 = param_2 + 2;
          }
        }
        else {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            if ((ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) == *(short *)(param_3 + 8))
            {
              *param_2 = *(byte *)(param_4 + 9);
              uVar6 = (ushort)*(byte *)(param_4 + 8);
            }
            else {
              uVar6 = *(ushort *)
                       (*(int *)(param_9 + (uint)(param_2[1] >> (param_12 & 0x1f)) * 4) +
                       (uint)*param_2 * 2);
              *param_2 = (byte)(uVar6 >> 8);
            }
            param_2[1] = (byte)uVar6;
            param_2 = param_2 + 2;
          }
        }
      }
      break;
    case 2:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (param_6 == 0) {
          if (pbVar3 != (byte *)0x0) {
            pbVar15 = param_2 + 2;
            pbVar14 = pbVar3;
            do {
              if ((((ushort)pbVar15[-2] == *(ushort *)(param_3 + 2)) &&
                  ((ushort)pbVar15[-1] == *(ushort *)(param_3 + 4))) &&
                 ((ushort)*pbVar15 == *(ushort *)(param_3 + 6))) {
                pbVar15[-2] = *(byte *)(param_4 + 2);
                pbVar15[-1] = *(byte *)(param_4 + 4);
                *pbVar15 = *(byte *)(param_4 + 6);
              }
              pbVar15 = pbVar15 + 3;
              pbVar14 = pbVar14 + -1;
            } while (pbVar14 != (byte *)0x0);
          }
        }
        else if (pbVar3 != (byte *)0x0) {
          pbVar14 = param_2 + 2;
          pbVar15 = pbVar3;
          do {
            if ((((ushort)pbVar14[-2] == *(ushort *)(param_3 + 2)) &&
                ((ushort)pbVar14[-1] == *(ushort *)(param_3 + 4))) &&
               ((ushort)*pbVar14 == *(ushort *)(param_3 + 6))) {
              pbVar14[-2] = *(byte *)(param_4 + 2);
              pbVar14[-1] = *(byte *)(param_4 + 4);
              bVar4 = *(byte *)(param_4 + 6);
            }
            else {
              pbVar14[-2] = *(byte *)((uint)pbVar14[-2] + param_6);
              pbVar14[-1] = *(byte *)((uint)pbVar14[-1] + param_6);
              bVar4 = *(byte *)((uint)*pbVar14 + param_6);
            }
            *pbVar14 = bVar4;
            pbVar14 = pbVar14 + 3;
            pbVar15 = pbVar15 + -1;
          } while (pbVar15 != (byte *)0x0);
        }
      }
      else if (param_9 == 0) {
        if (pbVar3 != (byte *)0x0) {
          pbVar15 = param_2 + 2;
          pbVar14 = pbVar3;
          do {
            if ((((ushort)((ushort)pbVar15[-2] * 0x100 + (ushort)pbVar15[-1]) ==
                  *(short *)(param_3 + 2)) &&
                ((ushort)((ushort)*pbVar15 * 0x100 + (ushort)pbVar15[1]) == *(short *)(param_3 + 4))
                ) && ((ushort)((ushort)pbVar15[2] * 0x100 + (ushort)pbVar15[3]) ==
                      *(short *)(param_3 + 6))) {
              pbVar15[-2] = *(byte *)(param_4 + 3);
              pbVar15[-1] = *(byte *)(param_4 + 2);
              *pbVar15 = *(byte *)(param_4 + 5);
              pbVar15[1] = *(byte *)(param_4 + 4);
              pbVar15[2] = *(byte *)(param_4 + 7);
              pbVar15[3] = *(byte *)(param_4 + 6);
            }
            pbVar15 = pbVar15 + 6;
            pbVar14 = pbVar14 + -1;
          } while (pbVar14 != (byte *)0x0);
        }
      }
      else if (pbVar3 != (byte *)0x0) {
        pbVar15 = param_2 + 2;
        pbVar14 = pbVar3;
        do {
          if ((((ushort)((ushort)pbVar15[-2] * 0x100 + (ushort)pbVar15[-1]) ==
                *(short *)(param_3 + 2)) &&
              ((ushort)((ushort)*pbVar15 * 0x100 + (ushort)pbVar15[1]) == *(short *)(param_3 + 4)))
             && ((ushort)((ushort)pbVar15[2] * 0x100 + (ushort)pbVar15[3]) ==
                 *(short *)(param_3 + 6))) {
            pbVar15[-2] = *(byte *)(param_4 + 3);
            pbVar15[-1] = *(byte *)(param_4 + 2);
            *pbVar15 = *(byte *)(param_4 + 5);
            pbVar15[1] = *(byte *)(param_4 + 4);
            pbVar15[2] = *(byte *)(param_4 + 7);
            pbVar15[3] = *(byte *)(param_4 + 6);
          }
          else {
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(pbVar15[-1] >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar15[-2] * 2);
            pbVar15[-1] = (byte)uVar2;
            pbVar15[-2] = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(pbVar15[1] >> (param_12 & 0x1f)) * 4) +
                     (uint)*pbVar15 * 2);
            pbVar15[1] = (byte)uVar2;
            *pbVar15 = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(pbVar15[3] >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar15[2] * 2);
            pbVar15[3] = (byte)uVar2;
            pbVar15[2] = (byte)((ushort)uVar2 >> 8);
          }
          pbVar15 = pbVar15 + 6;
          pbVar14 = pbVar14 + -1;
        } while (pbVar14 != (byte *)0x0);
      }
      break;
    case 4:
      if (*(char *)((int)param_1 + 9) == '\b') {
        pbVar14 = pbVar3;
        pbVar15 = param_2;
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            bVar4 = param_2[1];
            if (bVar4 == 0xff) {
              *pbVar15 = *param_2;
            }
            else if (bVar4 == 0) {
              *pbVar15 = *(byte *)(param_4 + 8);
            }
            else {
              uVar7 = (ushort)((0xff - (ushort)bVar4) * *(short *)(param_5 + 8)) + 0x80 +
                      (uint)*param_2 * (uint)bVar4 & 0xffff;
              *pbVar15 = (byte)((uVar7 >> 8) + uVar7 >> 8);
            }
            param_2 = param_2 + 2;
            pbVar15 = pbVar15 + 1;
          }
        }
        else {
          for (; pbVar14 != (byte *)0x0; pbVar14 = pbVar14 + -1) {
            uVar6 = (ushort)param_2[1];
            if (uVar6 == 0xff) {
              *pbVar15 = *(byte *)((uint)*param_2 + param_6);
            }
            else if (param_2[1] == 0) {
              *pbVar15 = *(byte *)(param_4 + 8);
            }
            else {
              uVar7 = (ushort)((0xff - uVar6) * *(short *)(param_5 + 8)) + 0x80 +
                      (uint)*(byte *)((uint)*param_2 + param_8) * (uint)uVar6 & 0xffff;
              *pbVar15 = *(byte *)(((int)((uVar7 >> 8) + uVar7) >> 8 & 0xffU) + param_7);
            }
            param_2 = param_2 + 2;
            pbVar15 = pbVar15 + 1;
          }
        }
      }
      else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
        if (pbVar3 != (byte *)0x0) {
          pbVar15 = param_2 + 3;
          pbVar14 = param_2;
          param_2 = pbVar3;
          do {
            uVar6 = (ushort)pbVar15[-1] * 0x100 + (ushort)*pbVar15;
            if (uVar6 == 0xffff) {
              *(undefined2 *)pbVar14 = *(undefined2 *)(pbVar15 + -3);
            }
            else if (uVar6 == 0) {
              *pbVar14 = *(byte *)(param_4 + 9);
              pbVar14[1] = *(byte *)(param_4 + 8);
            }
            else {
              uVar7 = ((uint)pbVar15[-3] * 0x100 + (uint)pbVar15[-2]) * (uint)uVar6 + 0x8000 +
                      (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar6);
              iVar8 = (uVar7 >> 0x10) + uVar7;
              pbVar14[1] = (byte)((uint)iVar8 >> 0x10);
              *pbVar14 = (byte)((uint)iVar8 >> 0x18);
            }
            pbVar15 = pbVar15 + 4;
            pbVar14 = pbVar14 + 2;
            param_2 = param_2 + -1;
          } while (param_2 != (byte *)0x0);
        }
      }
      else if (pbVar3 != (byte *)0x0) {
        pbVar15 = param_2 + 1;
        pbVar14 = param_2;
        param_2 = pbVar3;
        do {
          uVar6 = (ushort)pbVar15[1] * 0x100 + (ushort)pbVar15[2];
          if (uVar6 == 0xffff) {
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(*pbVar15 >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar15[-1] * 2);
LAB_10041057:
            *pbVar14 = (byte)((ushort)uVar2 >> 8);
            pbVar14[1] = (byte)uVar2;
          }
          else {
            if (uVar6 != 0) {
              uVar7 = (uint)*(ushort *)(param_5 + 8) * (0xffff - (uint)uVar6) + 0x8000 +
                      (uint)*(ushort *)
                             (*(int *)(param_11 + (uint)(*pbVar15 >> (param_12 & 0x1f)) * 4) +
                             (uint)pbVar15[-1] * 2) * (uint)uVar6;
              uVar7 = (uVar7 >> 0x10) + uVar7;
              uVar2 = *(undefined2 *)
                       (*(int *)(param_10 + ((uVar7 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                       (uVar7 >> 0x18) * 2);
              goto LAB_10041057;
            }
            *pbVar14 = *(byte *)(param_4 + 9);
            pbVar14[1] = *(byte *)(param_4 + 8);
          }
          pbVar15 = pbVar15 + 4;
          pbVar14 = pbVar14 + 2;
          param_2 = param_2 + -1;
        } while (param_2 != (byte *)0x0);
      }
      break;
    case 6:
      if (*(char *)((int)param_1 + 9) == '\b') {
        if (((param_8 == 0) || (param_7 == 0)) || (param_6 == 0)) {
          if (pbVar3 != (byte *)0x0) {
            pbVar14 = param_2 + 2;
            pbVar15 = param_2 + 1;
            param_2 = pbVar3;
            do {
              bVar4 = pbVar15[2];
              if (bVar4 == 0xff) {
                pbVar14[-2] = pbVar15[-1];
                pbVar14[-1] = *pbVar15;
                *pbVar14 = pbVar15[1];
              }
              else if (bVar4 == 0) {
                pbVar14[-2] = *(byte *)(param_4 + 2);
                pbVar14[-1] = *(byte *)(param_4 + 4);
                *pbVar14 = *(byte *)(param_4 + 6);
              }
              else {
                uVar7 = (uint)bVar4;
                sVar9 = 0xff - (ushort)bVar4;
                uVar10 = pbVar15[-1] * uVar7 + 0x80 +
                         (uint)(ushort)(*(short *)(param_4 + 2) * sVar9) & 0xffff;
                pbVar14[-2] = (byte)((uVar10 >> 8) + uVar10 >> 8);
                uVar10 = (ushort)(*(short *)(param_4 + 4) * sVar9) + 0x80 + *pbVar15 * uVar7 &
                         0xffff;
                pbVar14[-1] = (byte)((uVar10 >> 8) + uVar10 >> 8);
                uVar7 = pbVar15[1] * uVar7 + 0x80 + (uint)(ushort)(*(short *)(param_4 + 6) * sVar9)
                        & 0xffff;
                *pbVar14 = (byte)((uVar7 >> 8) + uVar7 >> 8);
              }
              pbVar15 = pbVar15 + 4;
              pbVar14 = pbVar14 + 3;
              param_2 = param_2 + -1;
            } while (param_2 != (byte *)0x0);
          }
        }
        else if (pbVar3 != (byte *)0x0) {
          pbVar14 = param_2 + 2;
          pbVar15 = param_2 + 1;
          param_2 = pbVar3;
          do {
            bVar4 = pbVar15[2];
            if (bVar4 == 0xff) {
              pbVar14[-2] = *(byte *)((uint)pbVar15[-1] + param_6);
              pbVar14[-1] = *(byte *)((uint)*pbVar15 + param_6);
              *pbVar14 = *(byte *)((uint)pbVar15[1] + param_6);
            }
            else if (bVar4 == 0) {
              pbVar14[-2] = *(byte *)(param_4 + 2);
              pbVar14[-1] = *(byte *)(param_4 + 4);
              *pbVar14 = *(byte *)(param_4 + 6);
            }
            else {
              uVar7 = (uint)bVar4;
              sVar9 = 0xff - (ushort)bVar4;
              uVar10 = *(byte *)((uint)pbVar15[-1] + param_8) * uVar7 + 0x80 +
                       (uint)(ushort)(*(short *)(param_5 + 2) * sVar9) & 0xffff;
              pbVar14[-2] = *(byte *)(((int)((uVar10 >> 8) + uVar10) >> 8 & 0xffU) + param_7);
              uVar10 = *(byte *)((uint)*pbVar15 + param_8) * uVar7 + 0x80 +
                       (uint)(ushort)(*(short *)(param_5 + 4) * sVar9) & 0xffff;
              pbVar14[-1] = *(byte *)(((int)((uVar10 >> 8) + uVar10) >> 8 & 0xffU) + param_7);
              uVar7 = *(byte *)((uint)pbVar15[1] + param_8) * uVar7 + 0x80 +
                      (uint)(ushort)(*(short *)(param_5 + 6) * sVar9) & 0xffff;
              *pbVar14 = *(byte *)(((int)((uVar7 >> 8) + uVar7) >> 8 & 0xffU) + param_7);
            }
            pbVar15 = pbVar15 + 4;
            pbVar14 = pbVar14 + 3;
            param_2 = param_2 + -1;
          } while (param_2 != (byte *)0x0);
        }
      }
      else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
        if (pbVar3 != (byte *)0x0) {
          pbVar14 = param_2 + 2;
          pbVar15 = param_2 + 7;
          param_2 = pbVar3;
          do {
            uVar6 = (ushort)pbVar15[-1] * 0x100 + (ushort)*pbVar15;
            if (uVar6 == 0xffff) {
              *(undefined4 *)(pbVar14 + -2) = *(undefined4 *)(pbVar15 + -7);
              *(undefined2 *)(pbVar14 + 2) = *(undefined2 *)(pbVar15 + -3);
            }
            else {
              if (uVar6 == 0) {
                pbVar14[-2] = *(byte *)(param_4 + 3);
                pbVar14[-1] = *(byte *)(param_4 + 2);
                *pbVar14 = *(byte *)(param_4 + 5);
                pbVar14[1] = *(byte *)(param_4 + 4);
                pbVar14[2] = *(byte *)(param_4 + 7);
                bVar4 = *(byte *)(param_4 + 6);
              }
              else {
                bVar4 = pbVar15[-5];
                bVar5 = pbVar15[-4];
                bVar12 = pbVar15[-3];
                uVar10 = (uint)uVar6;
                bVar1 = pbVar15[-2];
                iVar11 = 0xffff - uVar10;
                uVar7 = ((uint)pbVar15[-7] * 0x100 + (uint)pbVar15[-6]) * uVar10 + 0x8000 +
                        (uint)*(ushort *)(param_4 + 2) * iVar11;
                iVar8 = (uVar7 >> 0x10) + uVar7;
                pbVar14[-1] = (byte)((uint)iVar8 >> 0x10);
                pbVar14[-2] = (byte)((uint)iVar8 >> 0x18);
                uVar7 = (uint)*(ushort *)(param_4 + 4) * iVar11 + 0x8000 +
                        ((uint)bVar4 * 0x100 + (uint)bVar5) * uVar10;
                iVar8 = (uVar7 >> 0x10) + uVar7;
                pbVar14[1] = (byte)((uint)iVar8 >> 0x10);
                *pbVar14 = (byte)((uint)iVar8 >> 0x18);
                uVar7 = (uint)*(ushort *)(param_4 + 6) * iVar11 + 0x8000 +
                        ((uint)bVar12 * 0x100 + (uint)bVar1) * uVar10;
                iVar8 = (uVar7 >> 0x10) + uVar7;
                bVar4 = (byte)((uint)iVar8 >> 0x10);
                pbVar14[2] = (byte)((uint)iVar8 >> 0x18);
              }
              pbVar14[3] = bVar4;
            }
            pbVar15 = pbVar15 + 8;
            pbVar14 = pbVar14 + 6;
            param_2 = param_2 + -1;
          } while (param_2 != (byte *)0x0);
        }
      }
      else if (pbVar3 != (byte *)0x0) {
        pbVar14 = param_2 + 2;
        pbVar15 = param_2 + 1;
        param_6 = (int)pbVar3;
        do {
          uVar6 = (ushort)pbVar15[5] * 0x100 + (ushort)pbVar15[6];
          if (uVar6 == 0xffff) {
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(*pbVar15 >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar15[-1] * 2);
            pbVar14[-1] = (byte)uVar2;
            pbVar14[-2] = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(pbVar15[2] >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar15[1] * 2);
            pbVar14[1] = (byte)uVar2;
            *pbVar14 = (byte)((ushort)uVar2 >> 8);
            uVar2 = *(undefined2 *)
                     (*(int *)(param_9 + (uint)(pbVar15[4] >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar15[3] * 2);
            pbVar14[3] = (byte)uVar2;
            pbVar14[2] = (byte)((ushort)uVar2 >> 8);
          }
          else if (uVar6 == 0) {
            pbVar14[-2] = *(byte *)(param_4 + 3);
            pbVar14[-1] = *(byte *)(param_4 + 2);
            *pbVar14 = *(byte *)(param_4 + 5);
            pbVar14[1] = *(byte *)(param_4 + 4);
            pbVar14[2] = *(byte *)(param_4 + 7);
            pbVar14[3] = *(byte *)(param_4 + 6);
          }
          else {
            uVar10 = (uint)uVar6;
            iVar8 = 0xffff - uVar10;
            uVar7 = (uint)*(ushort *)(param_4 + 2) * iVar8 + 0x8000 +
                    *(ushort *)
                     (*(int *)(param_11 + (uint)(*pbVar15 >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar15[-1] * 2) * uVar10;
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar2 = *(undefined2 *)
                     (*(int *)(param_10 + ((uVar7 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     (uVar7 >> 0x18) * 2);
            pbVar14[-1] = (byte)uVar2;
            pbVar14[-2] = (byte)((ushort)uVar2 >> 8);
            uVar7 = (uint)*(ushort *)(param_4 + 4) * iVar8 + 0x8000 +
                    *(ushort *)
                     (*(int *)(param_11 + (uint)(pbVar15[2] >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar15[1] * 2) * uVar10;
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar2 = *(undefined2 *)
                     (*(int *)(param_10 + ((uVar7 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     (uVar7 >> 0x18) * 2);
            pbVar14[1] = (byte)uVar2;
            *pbVar14 = (byte)((ushort)uVar2 >> 8);
            uVar7 = *(ushort *)
                     (*(int *)(param_11 + (uint)(pbVar15[4] >> (param_12 & 0x1f)) * 4) +
                     (uint)pbVar15[3] * 2) * uVar10 + 0x8000 +
                    (uint)*(ushort *)(param_4 + 6) * iVar8;
            uVar7 = (uVar7 >> 0x10) + uVar7;
            uVar2 = *(undefined2 *)
                     (*(int *)(param_10 + ((uVar7 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 4) +
                     (uVar7 >> 0x18) * 2);
            pbVar14[3] = (byte)uVar2;
            pbVar14[2] = (byte)((ushort)uVar2 >> 8);
          }
          pbVar15 = pbVar15 + 8;
          pbVar14 = pbVar14 + 6;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
    }
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      cVar13 = *(char *)((int)param_1 + 10) + -1;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfb;
      bVar4 = *(char *)((int)param_1 + 9) * cVar13;
      *(byte *)((int)param_1 + 0xb) = bVar4;
      *(char *)((int)param_1 + 10) = cVar13;
      param_1[1] = (uint)bVar4 * (int)pbVar3 + 7 >> 3;
    }
  }
  return;
}

