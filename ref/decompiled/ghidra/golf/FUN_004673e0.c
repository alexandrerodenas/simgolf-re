/* Ghidra decompiled: golf.exe */
/* Function: FUN_004673e0 @ 0x004673E0 */
/* Body size: 212 addresses */


void FUN_004673e0(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_4;
  
  puVar5 = &DAT_00838aa0;
  do {
    iVar4 = 0;
    do {
      uVar2 = FUN_0045c1e0(0x10);
      puVar5[iVar4] = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x12);
    puVar5[0x12] = *puVar5;
    puVar5 = puVar5 + 0x13;
  } while ((int)puVar5 < 0x838bf6);
  iVar4 = 0;
  do {
    (&DAT_00838bf6)[iVar4] = (&DAT_00838aa0)[iVar4];
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x12);
  local_4 = 0;
  do {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + local_4;
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 4;
      } while (iVar3 < 0x20);
      iVar4 = iVar4 + 1;
      *(undefined1 *)(local_4 + 0x838c1b + iVar4) = (&DAT_00838aa0)[iVar1];
    } while (iVar4 < 0x11);
    local_4 = local_4 + 0x13;
  } while (local_4 < 0x131);
  puVar5 = &DAT_00838c2c;
  do {
    *puVar5 = puVar5[-0x10];
    puVar5 = puVar5 + 0x13;
  } while ((int)puVar5 < 0x838d5d);
  iVar4 = 0;
  do {
    (&DAT_00838d4c)[iVar4] = (&DAT_00838c1c)[iVar4];
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x11);
  return;
}

