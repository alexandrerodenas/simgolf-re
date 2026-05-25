/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007420 @ 0x30007420 */


void __cdecl FUN_30007420(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  if ((int)uVar1 < 0x8000) {
    uVar3 = *(uint *)(param_1 + 0x40);
    iVar2 = (int)(((ulonglong)uVar3 * (ulonglong)uVar1) / 0x7fff);
  }
  else {
    uVar3 = (uint)(((ulonglong)*(uint *)(param_1 + 0x40) * (ulonglong)(0x10000 - uVar1)) / 0x8001);
    iVar2 = *(int *)(param_1 + 0x40);
  }
  if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
    waveOutSetVolume(*(HWAVEOUT *)(param_1 + 100),iVar2 << 0x10 | uVar3);
  }
  return;
}

