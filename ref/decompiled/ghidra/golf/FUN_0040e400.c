/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040e400 @ 0x0040E400 */


void FUN_0040e400(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_4;
  
  iVar6 = (int)(short)(&DAT_0058bcb8)[param_1 * 8];
  iVar3 = (int)(short)(&DAT_0058bcbc)[param_1 * 8];
  iVar7 = (int)(short)(&DAT_0058bcba)[param_1 * 8];
  if (iVar6 == 5) {
    iVar4 = FUN_0042ef40(iVar7,iVar3);
    iVar4 = (int)(&DAT_0058bcc0)[param_1 * 4] / 0x32 + iVar4 / 2;
    DAT_00571fd4 = DAT_00571fd4 - iVar4;
    FUN_0040c890(-iVar4,iVar7 * 0x400 + 0x200,iVar3 * 0x400 + 0x200,0xffffffff);
    psVar2 = (short *)((int)&DAT_00584210 + ((int)DAT_005a6d3c % 100) * 0x14 + 2);
    *psVar2 = *psVar2 - (short)iVar4;
    if ((&DAT_0058bcc0)[param_1 * 4] != 0) {
      FUN_004011b0((int)(short)(&DAT_0058bcba)[param_1 * 8],(int)(short)(&DAT_0058bcbc)[param_1 * 8]
                  );
    }
  }
  (&DAT_0058bcb8)[param_1 * 8] = 0xffff;
  if (iVar6 == 0xf) {
    DAT_0059e7b8 = DAT_0059e7b8 | 0x800;
  }
  param_1 = (int)(char)(&DAT_004c26c0)[iVar6 * 0x14];
  iVar7 = iVar7 * 0x32;
  (&DAT_0053caf0)[iVar3 + iVar7] = (&DAT_0053caf0)[iVar3 + iVar7] & 0xfde0;
  if (((5 < iVar6) && (iVar6 != 7)) && (iVar6 != 5)) {
    param_1 = param_1 + -1 + (&DAT_005a8c38)[iVar6];
  }
  iVar4 = iVar3;
  iVar8 = param_1;
  local_4 = param_1;
  if (0 < param_1) {
    do {
      do {
        if ((iVar6 == 0xc) && ((DAT_005a34e0 == '\0' || (DAT_005a34e0 == '\x02')))) {
          cVar5 = '\x11';
        }
        else {
          cVar5 = (0xb < DAT_0059bf90) + '\x04';
        }
        iVar1 = iVar7 + iVar4;
        (&DAT_0053caf0)[iVar1] = (&DAT_0053caf0)[iVar1] & 0xfbdf;
        iVar8 = iVar8 + -1;
        *(char *)((int)&DAT_005722e8 + iVar1) = cVar5;
        *(undefined1 *)((int)&DAT_0056988c + iVar1) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar8 != 0);
      iVar7 = iVar7 + 0x32;
      local_4 = local_4 + -1;
      iVar4 = iVar3;
      iVar8 = param_1;
    } while (local_4 != 0);
  }
  FUN_0042f7a0();
  return;
}

