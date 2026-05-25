/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040e000 @ 0x0040E000 */


int FUN_0040e000(int param_1,int param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = (int)(char)(&DAT_004c26c0)[param_3 * 0x14];
  if (param_4 == -2) {
    local_10 = local_10 + 1;
  }
  if ((5 < param_3) && (param_3 != 5)) {
    local_10 = local_10 + (&DAT_005a8c38)[param_3];
  }
  local_c = 0;
  if (0 < local_10) {
    do {
      local_8 = 0;
      iVar10 = param_2;
      do {
        if ((local_8 < local_10 + -1) || (local_c != 0)) {
          *(undefined1 *)((int)&DAT_005a4998 + iVar10 + (local_c + param_1) * 0x33) =
               *(undefined1 *)((int)&DAT_005a4998 + param_2 + param_1 * 0x33);
        }
        iVar6 = iVar10 + (local_c + param_1) * 0x32;
        *(char *)((int)&DAT_005722e8 + iVar6) = (param_3 != 5) + '\x15';
        *(undefined1 *)((int)&DAT_0053bbac + iVar6) = DAT_00578795;
        if (param_3 == 6) {
          if ((local_c != 0) || (local_8 != 0)) {
            *(undefined1 *)((int)&DAT_005722e8 + iVar6) = 1;
          }
        }
        else if (param_3 == 10) {
          if ((local_c != 0) || (local_8 != 0)) {
            *(char *)((int)&DAT_005722e8 + iVar6) = (local_c == local_10 + -1) + '\x04';
          }
        }
        else if (((param_3 == 0xc) && ((DAT_005a34e0 == '\0' || (DAT_005a34e0 == '\x02')))) &&
                ((local_c != 0 || (local_8 != 0)))) {
          *(undefined1 *)((int)&DAT_005722e8 + iVar6) = 0x11;
        }
        uVar2 = (&DAT_0053caf0)[iVar6];
        (&DAT_0053caf0)[iVar6] = uVar2 & 0xecff;
        if (0 < (int)param_4) {
          (&DAT_0053caf0)[iVar6] = uVar2 & 0xecff | (ushort)param_4;
        }
        *(undefined1 *)((int)&DAT_0056988c + iVar6) = 0xff;
        local_8 = local_8 + 1;
        iVar10 = iVar10 + 1;
      } while (local_8 < local_10);
      local_c = local_c + 1;
    } while (local_c < local_10);
  }
  if (param_3 == 10) {
    local_10 = local_10 + -2;
    uVar2 = FUN_0045c1e0(local_10);
    uVar3 = FUN_0045c1e0(local_10);
    (&DAT_0057231b)[param_2 + (uint)uVar2 + ((uVar3 & 0xffff) + param_1) * 0x32] = 1;
    uVar2 = FUN_0045c1e0(local_10);
    uVar3 = FUN_0045c1e0(local_10);
    (&DAT_0057231b)[param_2 + (uint)uVar2 + ((uVar3 & 0xffff) + param_1) * 0x32] = 1;
    uVar2 = FUN_0045c1e0(local_10);
    uVar3 = FUN_0045c1e0(local_10);
    (&DAT_0057231b)[param_2 + (uint)uVar2 + ((uVar3 & 0xffff) + param_1) * 0x32] = 1;
    uVar2 = FUN_0045c1e0(local_10);
    uVar3 = FUN_0045c1e0(local_10);
    (&DAT_0057231b)[param_2 + (uint)uVar2 + ((uVar3 & 0xffff) + param_1) * 0x32] = 7;
  }
  else if (param_3 == 0xf) {
    DAT_00585860 = (char)param_1 + '\x01';
    DAT_00585861 = (char)param_2 + '\x01';
  }
  if (-1 < (int)param_4) {
    iVar10 = param_2 + param_1 * 0x32;
    (&DAT_0053caf0)[iVar10] = (&DAT_0053caf0)[iVar10] | (short)param_3 + 1U;
    puVar8 = &DAT_0053caf0 + iVar10;
    iVar6 = 0;
    local_10 = 0;
    if (DAT_0058bcb8 != -1) {
      psVar4 = &DAT_0058bcb8;
      do {
        psVar4 = psVar4 + 8;
        iVar6 = iVar6 + 1;
      } while (*psVar4 != -1);
      local_10 = iVar6;
      if (0xff < iVar6) {
        return 0;
      }
    }
    (&DAT_0058bcb8)[local_10 * 8] = (short)param_3;
    (&DAT_0058bcba)[local_10 * 8] = (short)param_1;
    (&DAT_0058bcbc)[local_10 * 8] = (short)param_2;
    (&DAT_0058bcbf)[local_10 * 0x10] = 0;
    (&DAT_0058bcc4)[local_10 * 4] = 0;
    (&DAT_0058bcc0)[local_10 * 4] = 0;
    (&DAT_0058bcbe)[local_10 * 0x10] = (byte)DAT_005a34f0 & 3;
    uVar3 = (&DAT_005a8c38)[param_3] + (int)(char)(&DAT_004c26c0)[param_3 * 0x14];
    if (0 < (int)uVar3) {
      puVar12 = (undefined4 *)((int)&DAT_0056988c + iVar10);
      param_4 = uVar3;
      do {
        if (0 < (int)uVar3) {
          uVar1 = (undefined1)local_10;
          puVar11 = puVar12;
          for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar11 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar11 = puVar11 + 1;
          }
          for (uVar5 = uVar3 & 3; uVar7 = uVar3, puVar9 = puVar8, uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar11 = uVar1;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          do {
            uVar7 = uVar7 - 1;
            *puVar9 = *puVar9 & 0xfeff | 0x400;
            puVar9 = puVar9 + 1;
          } while (uVar7 != 0);
        }
        puVar8 = puVar8 + 0x32;
        puVar12 = (undefined4 *)((int)puVar12 + 0x32);
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    FUN_0042f7a0();
    return local_10;
  }
  return 0;
}

