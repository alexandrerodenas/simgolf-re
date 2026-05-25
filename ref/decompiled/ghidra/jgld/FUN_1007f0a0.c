/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007f0a0 @ 0x1007F0A0 */


void FUN_1007f0a0(void)

{
  DAT_1012b394 = (undefined4 *)__malloc_dbg(0x80,2,0x1011ec88,0xb6);
  if (DAT_1012b394 == (undefined4 *)0x0) {
    __amsg_exit(0x18);
  }
  *DAT_1012b394 = 0;
  DAT_1012b390 = DAT_1012b394;
  return;
}

