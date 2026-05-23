/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f480 @ 0x1000F480 */
/* Body size: 115 addresses */


undefined4 __cdecl FUN_1000f480(int param_1)

{
  if (param_1 < -0x7787fff5) {
    if (param_1 == -0x7787fff6) {
      return 0xc;
    }
    if (param_1 < -0x7ff8fff1) {
      if (param_1 == -0x7ff8fff2) {
        return 0x11;
      }
      if (param_1 == -0x7fffbfff) {
        return 0xb;
      }
    }
    else if (param_1 == -0x7ff8ffa9) {
      return 10;
    }
  }
  else {
    switch(param_1) {
    case -0x7787ff9c:
      return 0x12;
    case -0x7787ff88:
      return 1;
    case -0x7787ff6a:
      return 0x1e;
    case -0x7787ff56:
      return 0x13;
    }
  }
  return 0x2f;
}

