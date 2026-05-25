/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e5a0 @ 0x3002E5A0 */


undefined1  [10] FUN_3002e5a0(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}

