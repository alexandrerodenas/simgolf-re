/* Ghidra decompiled: golf.exe */
/* Function: FUN_004616f0 @ 0x004616F0 */


void FUN_004616f0(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *local_4;
  
  iVar2 = 0;
  puVar3 = &DAT_0053ea24;
  do {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + (uint)(byte)puVar3[iVar1];
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x32);
    puVar3 = puVar3 + 0x32;
  } while ((int)puVar3 < 0x53f3e8);
  puVar5 = &DAT_0082376c;
  for (iVar1 = 0x271; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = &DAT_00822da0;
  for (iVar1 = 0x271; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (9 < iVar2) {
    if (0x6d6 < iVar2) {
      iVar2 = 0x6d6;
    }
    iVar1 = 0;
    local_4 = &DAT_005a6378;
    do {
      iVar4 = 0;
      do {
        if ((&DAT_005a6378)[(int)(local_4 + iVar4 + -0x5a6378)] != 0) {
          FUN_004615f0(iVar1,iVar4,
                       (int)((uint)(byte)(&DAT_005a6378)[(int)(local_4 + iVar4 + -0x5a6378)] * 20000
                            ) / iVar2);
        }
        if ((&DAT_0056c7e4)[(int)(local_4 + iVar4 + -0x5a6378)] != 0) {
          FUN_004615f0(iVar1,iVar4,
                       (int)((uint)(byte)(&DAT_0056c7e4)[(int)(local_4 + iVar4 + -0x5a6378)] *
                            -40000) / iVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x32);
      iVar1 = iVar1 + 1;
      local_4 = local_4 + 0x32;
    } while ((int)local_4 < 0x5a6d3c);
  }
  return;
}

