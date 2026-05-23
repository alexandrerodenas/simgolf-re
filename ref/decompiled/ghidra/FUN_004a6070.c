/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a6070 @ 0x004A6070 */
/* Body size: 47 addresses */


/* WARNING: Unable to track spacebase fully for stack */

void FUN_004a6070(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}

