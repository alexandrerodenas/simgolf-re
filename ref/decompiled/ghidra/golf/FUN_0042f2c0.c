/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f2c0 @ 0x0042F2C0 */
/* Body size: 118 addresses */


void FUN_0042f2c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      if ((&DAT_00578376)[*(char *)((int)&DAT_005722e8 + iVar1 + iVar2) * 0x30] == '\x11') {
        *(undefined1 *)((int)&DAT_0056988c + iVar1 + iVar2) = 2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x32);
    iVar2 = iVar2 + 0x32;
  } while (iVar2 < 0x9c4);
  iVar2 = 0;
  puVar3 = &DAT_005722e8;
  do {
    iVar1 = 0;
    do {
      if ((&DAT_00578376)[*(char *)((int)puVar3 + iVar1) * 0x30] == '\x11') {
        FUN_0042f1c0(iVar2,iVar1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x32);
    puVar3 = (undefined4 *)((int)puVar3 + 0x32);
    iVar2 = iVar2 + 1;
  } while ((int)puVar3 < 0x572cac);
  return;
}

