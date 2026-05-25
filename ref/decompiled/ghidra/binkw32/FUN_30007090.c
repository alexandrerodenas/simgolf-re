/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007090 @ 0x30007090 */


undefined4 __cdecl FUN_30007090(int param_1)

{
  LPHWAVEOUT phwo;
  byte bVar1;
  int iVar2;
  int iVar3;
  MMRESULT MVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  WAVEFORMATEX local_14;
  
  uVar8 = ((uint)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x3c)) >>
          3) * 1000;
  uVar5 = uVar8 / 16000 + 0x1f & 0xffffffe0;
  *(uint *)(param_1 + 0x60) = uVar5;
  *(uint *)(param_1 + 0x5c) = uVar8 / 2000 + 0x1f & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  iVar2 = radmalloc((uVar5 + 0x24) * 0x10);
  *(int *)(param_1 + 0x6c) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar7 = 0;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * 0x10 + iVar2;
  iVar2 = 0;
  do {
    *(int *)(*(int *)(param_1 + 0x68) + iVar7 * 4) = iVar2 + 0x40 + *(int *)(param_1 + 0x68);
    puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x68) + iVar7 * 4);
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    iVar3 = iVar7 * *(int *)(param_1 + 0x60);
    iVar6 = iVar7 * 4;
    iVar2 = iVar2 + 0x20;
    iVar7 = iVar7 + 1;
    **(int **)(*(int *)(param_1 + 0x68) + iVar6) = iVar3 + *(int *)(param_1 + 0x6c);
  } while (iVar2 < 0x200);
  bVar1 = -(*(int *)(param_1 + 0x38) != 0x10);
  puVar10 = *(uint **)(param_1 + 0x6c);
  for (iVar2 = (*(uint *)(param_1 + 0x60) & 0xfffffff) << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1)) & 0x80808080;
    puVar10 = puVar10 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)puVar10 = bVar1 & 0x80;
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  iVar2 = *(int *)(param_1 + 0x34);
  local_14.nChannels = (WORD)*(byte *)(param_1 + 0x3c);
  local_14.wBitsPerSample = *(ushort *)(param_1 + 0x38);
  local_14.nSamplesPerSec._0_2_ = (undefined2)iVar2;
  local_14.nSamplesPerSec._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
  local_14.nAvgBytesPerSec = (uint)(local_14.wBitsPerSample >> 3) * (uint)local_14.nChannels * iVar2
  ;
  local_14.nBlockAlign = (local_14.wBitsPerSample >> 3) * local_14.nChannels;
  phwo = (LPHWAVEOUT)(param_1 + 100);
  local_14.wFormatTag = 1;
  *phwo = (HWAVEOUT)0x0;
  MVar4 = waveOutOpen(phwo,0xffffffff,&local_14,0,0,0);
  if (MVar4 != 0) {
    radfree(*(int *)(param_1 + 0x6c));
    return 0;
  }
  iVar2 = 0;
  do {
    *(undefined4 *)(*(int *)(iVar2 + *(int *)(param_1 + 0x68)) + 4) =
         *(undefined4 *)(param_1 + 0x60);
    waveOutPrepareHeader(*phwo,*(LPWAVEHDR *)(iVar2 + *(int *)(param_1 + 0x68)),0x20);
    iVar7 = *(int *)(iVar2 + *(int *)(param_1 + 0x68));
    iVar2 = iVar2 + 4;
    *(uint *)(iVar7 + 0x10) = *(uint *)(iVar7 + 0x10) | 1;
  } while (iVar2 < 0x40);
  return 1;
}

