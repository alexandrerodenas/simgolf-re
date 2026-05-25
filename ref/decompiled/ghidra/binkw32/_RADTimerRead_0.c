/* Ghidra decompiled: binkw32.dll */
/* Function: _RADTimerRead@0 @ 0x3000B6A0 */


undefined8 _RADTimerRead_0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 extraout_EDX;
  longlong lVar3;
  undefined8 uVar4;
  LARGE_INTEGER local_8;
  
                    /* 0xb6a0  55  _RADTimerRead@0 */
  if (DAT_3003db88 != 0) {
    DAT_3003db88 = 0;
    BVar1 = QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_30041c28);
    if (BVar1 == 0) {
      DAT_30041c28 = 0;
      DAT_30041c2c = 0;
      goto LAB_3000b73a;
    }
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_30041c20);
  }
  if (DAT_30041c28 != 0 || DAT_30041c2c != 0) {
    QueryPerformanceCounter(&local_8);
    lVar3 = __allmul(local_8.s.LowPart - DAT_30041c20,
                     (local_8.s.HighPart - DAT_30041c24) - (uint)(local_8.s.LowPart < DAT_30041c20),
                     1000,0);
    uVar4 = __aulldiv((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),DAT_30041c28,DAT_30041c2c);
    return uVar4;
  }
LAB_3000b73a:
  DVar2 = timeGetTime();
  return CONCAT44(extraout_EDX,DVar2);
}

