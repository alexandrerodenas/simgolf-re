/* Ghidra decompiled: golf.exe */
/* Function: FUN_004616f0 @ 0x004616F0 */
/* Body size: 237 addresses */


void FUN_004616f0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *local_4;
  
  iVar3 = 0;
  puVar4 = &DAT_0053ea24;
  do {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + (uint)*(byte *)((int)puVar4 + iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x32);
    puVar4 = (undefined4 *)((int)puVar4 + 0x32);
  } while ((int)puVar4 < 0x53f3e8);
  puVar4 = &DAT_0082376c;
  for (iVar2 = 0x271; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &DAT_00822da0;
  for (iVar2 = 0x271; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (9 < iVar3) {
    if (0x6d6 < iVar3) {
      iVar3 = 0x6d6;
    }
    iVar2 = 0;
    local_4 = &DAT_005a6378;
    do {
      iVar5 = 0;
      do {
        if (*(byte *)((int)local_4 + iVar5) != 0) {
          FUN_004615f0(iVar2,iVar5,(int)((uint)*(byte *)((int)local_4 + iVar5) * 20000) / iVar3);
        }
        bVar1 = *(byte *)((int)local_4 + iVar5 + -0x39b94);
        if (bVar1 != 0) {
          FUN_004615f0(iVar2,iVar5,(int)((uint)bVar1 * -40000) / iVar3);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x32);
      iVar2 = iVar2 + 1;
      local_4 = (undefined4 *)((int)local_4 + 0x32);
    } while ((int)local_4 < 0x5a6d3c);
  }
  return;
}

