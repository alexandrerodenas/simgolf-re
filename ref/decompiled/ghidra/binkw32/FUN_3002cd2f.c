/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002cd2f @ 0x3002CD2F */


undefined4 * FUN_3002cd2f(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_3004f744 == DAT_3004f734) {
    pvVar2 = HeapReAlloc(DAT_3004f750,0,DAT_3004f748,(DAT_3004f734 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_3004f734 = DAT_3004f734 + 0x10;
    DAT_3004f748 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_3004f748 + DAT_3004f744 * 0x14);
  pvVar2 = HeapAlloc(DAT_3004f750,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_3004f744 = DAT_3004f744 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_3004f750,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

