/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040e400 @ 0x0040E400 */
/* Body size: 424 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e400(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  iVar5 = (int)(short)(&DAT_0058bcb8)[param_1 * 8];
  iVar2 = (int)(short)(&DAT_0058bcbc)[param_1 * 8];
  iVar6 = (int)(short)(&DAT_0058bcba)[param_1 * 8];
  if (iVar5 == 5) {
    iVar3 = FUN_0042ef40(iVar6,iVar2);
    iVar3 = (int)(&DAT_0058bcc0)[param_1 * 4] / 0x32 + iVar3 / 2;
    DAT_00571fd4 = DAT_00571fd4 - iVar3;
    FUN_0040c890(-iVar3,iVar6 * 0x400 + 0x200,iVar2 * 0x400 + 0x200,0xffffffff);
    (&DAT_00584212)[((int)DAT_005a6d3c % 100) * 10] =
         (&DAT_00584212)[((int)DAT_005a6d3c % 100) * 10] - (short)iVar3;
    if ((&DAT_0058bcc0)[param_1 * 4] != 0) {
      FUN_004011b0((int)(short)(&DAT_0058bcba)[param_1 * 8],(int)(short)(&DAT_0058bcbc)[param_1 * 8]
                  );
    }
  }
  (&DAT_0058bcb8)[param_1 * 8] = 0xffff;
  if (iVar5 == 0xf) {
    _DAT_0059e7b8 = _DAT_0059e7b8 | 0x800;
  }
  param_1 = (int)(char)(&DAT_004c26c0)[iVar5 * 0x14];
  iVar6 = iVar6 * 0x32;
  (&DAT_0053caf0)[iVar2 + iVar6] = (&DAT_0053caf0)[iVar2 + iVar6] & 0xfde0;
  if (((5 < iVar5) && (iVar5 != 7)) && (iVar5 != 5)) {
    param_1 = param_1 + -1 + (&DAT_005a8c38)[iVar5];
  }
  iVar3 = iVar2;
  iVar7 = param_1;
  local_4 = param_1;
  if (0 < param_1) {
    do {
      do {
        if ((iVar5 == 0xc) && ((DAT_005a34e0 == '\0' || (DAT_005a34e0 == '\x02')))) {
          cVar4 = '\x11';
        }
        else {
          cVar4 = (0xb < DAT_0059bf90) + '\x04';
        }
        iVar1 = iVar6 + iVar3;
        (&DAT_0053caf0)[iVar1] = (&DAT_0053caf0)[iVar1] & 0xfbdf;
        iVar7 = iVar7 + -1;
        *(char *)((int)&DAT_005722e8 + iVar1) = cVar4;
        *(undefined1 *)((int)&DAT_0056988c + iVar1) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar7 != 0);
      iVar6 = iVar6 + 0x32;
      local_4 = local_4 + -1;
      iVar3 = iVar2;
      iVar7 = param_1;
    } while (local_4 != 0);
  }
  FUN_0042f7a0();
  return;
}

