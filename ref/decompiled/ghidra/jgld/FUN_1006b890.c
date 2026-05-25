/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006b890 @ 0x1006B890 */


void FUN_1006b890(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_64 [16];
  tagMSG local_24;
  undefined4 local_8;
  
  puVar2 = local_64;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  do {
    PeekMessageA(&local_24,(HWND)0x0,0x100,0x108,1);
    iVar1 = __chkesp();
  } while (iVar1 != 0);
  local_8 = 0x1006b8e1;
  __chkesp();
  return;
}

