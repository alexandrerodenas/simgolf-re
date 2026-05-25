/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003f830 @ 0x1003F830 */


void __cdecl FUN_1003f830(int *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int local_10 [4];
  
  if (*(byte *)(param_1 + 2) != 3) {
    iVar10 = *param_1;
    bVar1 = false;
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      pbVar9 = (byte *)0x1;
      uVar7 = (uint)*(byte *)((int)param_1 + 9);
      iVar3 = uVar7 - param_3[3];
      local_10[0] = iVar3;
    }
    else {
      uVar7 = (uint)*(byte *)((int)param_1 + 9);
      iVar3 = uVar7 - *param_3;
      local_10[1] = uVar7 - param_3[1];
      local_10[0] = iVar3;
      local_10[2] = uVar7 - param_3[2];
      pbVar9 = (byte *)0x3;
    }
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      local_10[(int)pbVar9] = uVar7 - param_3[4];
      pbVar9 = pbVar9 + 1;
    }
    if (pbVar9 != (byte *)0x0) {
      piVar5 = local_10;
      param_3 = pbVar9;
      local_10[0] = iVar3;
      do {
        if (*piVar5 < 1) {
          *piVar5 = 0;
          iVar3 = local_10[0];
        }
        else {
          bVar1 = true;
        }
        piVar5 = piVar5 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != (byte *)0x0);
      if (bVar1) {
        switch(uVar7) {
        case 2:
          iVar10 = param_1[1];
          if (iVar10 != 0) {
            do {
              *param_2 = *param_2 >> 1 & 0x55;
              param_2 = param_2 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            return;
          }
          break;
        case 4:
          iVar10 = param_1[1];
          bVar4 = (byte)iVar3;
          if (iVar10 != 0) {
            do {
              *param_2 = *param_2 >> (bVar4 & 0x1f) &
                         ((byte)(0xf0 >> (bVar4 & 0x1f)) & 0xf0 | (byte)(0xf >> (bVar4 & 0x1f)));
              param_2 = param_2 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            return;
          }
          break;
        case 8:
          uVar8 = iVar10 * (int)pbVar9;
          uVar7 = 0;
          if (uVar8 != 0) {
            do {
              uVar6 = uVar7 % (uint)pbVar9;
              uVar7 = uVar7 + 1;
              *param_2 = *param_2 >> (*(byte *)(local_10 + uVar6) & 0x1f);
              param_2 = param_2 + 1;
            } while (uVar7 < uVar8);
            return;
          }
          break;
        case 0x10:
          uVar8 = iVar10 * (int)pbVar9;
          uVar7 = 0;
          if (uVar8 != 0) {
            do {
              uVar2 = (ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) >>
                      ((byte)(short)local_10[uVar7 % (uint)pbVar9] & 0x1f);
              uVar7 = uVar7 + 1;
              *param_2 = (byte)(uVar2 >> 8);
              param_2[1] = (byte)uVar2;
              param_2 = param_2 + 2;
            } while (uVar7 < uVar8);
          }
        }
      }
    }
  }
  return;
}

