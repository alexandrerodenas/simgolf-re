/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a80c5 @ 0x004A80C5 */


undefined4 * FUN_004a80c5(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00842154 == DAT_00842144) {
    pvVar2 = HeapReAlloc(DAT_0084215c,0,DAT_00842158,(DAT_00842144 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00842144 = DAT_00842144 + 0x10;
    DAT_00842158 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00842158 + DAT_00842154 * 0x14);
  pvVar2 = HeapAlloc(DAT_0084215c,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00842154 = DAT_00842154 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_0084215c,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

