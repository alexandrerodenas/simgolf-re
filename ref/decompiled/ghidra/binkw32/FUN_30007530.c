/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007530 @ 0x30007530 */


void __cdecl FUN_30007530(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
    waveOutReset(*(HWAVEOUT *)(param_1 + 100));
    iVar2 = 0;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x68) + iVar2) + 4) =
           *(undefined4 *)(param_1 + 0x60);
      waveOutUnprepareHeader
                (*(HWAVEOUT *)(param_1 + 100),*(LPWAVEHDR *)(*(int *)(param_1 + 0x68) + iVar2),0x20)
      ;
      iVar1 = *(int *)(*(int *)(param_1 + 0x68) + iVar2);
      iVar2 = iVar2 + 4;
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 1;
    } while (iVar2 < 0x40);
    waveOutClose(*(HWAVEOUT *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    radfree(*(int *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}

