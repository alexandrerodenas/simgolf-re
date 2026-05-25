/* Ghidra decompiled: golf.exe */
/* Function: FUN_00401750 @ 0x00401750 */


void FUN_00401750(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_0056d1d8;
  do {
    *puVar1 = 0xffff;
    puVar1 = puVar1 + 0x1e;
  } while ((int)puVar1 < 0x56e948);
  FUN_00401000(0);
  FUN_00401040(0,0,0,0);
  FUN_00401000(1);
  FUN_00401040(1,1,0,0);
  FUN_00401000(2);
  FUN_00401040(2,2,0,0);
  iVar2 = 3;
  do {
    FUN_00401000(iVar2);
    FUN_00401040(iVar2,iVar2,0,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return;
}

