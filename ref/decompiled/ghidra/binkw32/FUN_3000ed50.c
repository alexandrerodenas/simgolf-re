/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000ed50 @ 0x3000ED50 */


void FUN_3000ed50(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = *DAT_30044064;
  if ((uVar1 & 4) != 0) {
    uVar2 = rdtsc();
    DAT_30049104 = (int)uVar2 - DAT_30049104;
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar1 >> 3 & 0x1f;
      if (uVar1 >> 8 <= DAT_30049104) {
        if (uVar3 == 0x1f) {
          *DAT_30044064 = 1;
          return;
        }
        *DAT_30044064 = uVar3 * 8 + 8 & 0xf8;
        return;
      }
      if (uVar3 == 0) {
        *DAT_30044064 = 3;
        return;
      }
      *DAT_30044064 = uVar3 * 8 - 1 & 0xf8;
      return;
    }
    *DAT_30044064 = DAT_30049104 * 0x100 | uVar1 & 0xfd | 2;
  }
  return;
}

