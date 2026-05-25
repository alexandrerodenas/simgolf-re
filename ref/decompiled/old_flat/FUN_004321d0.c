/* Ghidra decompiled: golf.exe */
/* Function: FUN_004321d0 @ 0x004321D0 */


void FUN_004321d0(void)

{
  BYTE local_100 [20];
  byte local_ec;
  
  GetKeyboardState(local_100);
  if ((local_ec & 1) != 0) {
    keybd_event('\x14','E',1,0);
  }
  return;
}

