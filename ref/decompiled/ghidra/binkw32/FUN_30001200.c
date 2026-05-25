/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30001200 @ 0x30001200 */


void FUN_30001200(void)

{
  HDC hdc;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_EBX;
  uint unaff_ESI;
  uint *puVar5;
  undefined4 *puVar6;
  uint uStack_158;
  uint local_13c [79];
  
  puVar5 = local_13c;
  for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_13c[0] = 0x13c;
  (**(code **)(*DAT_30041638 + 0x2c))(DAT_30041638,local_13c,0);
  if ((local_13c[1] & 0x800000) != 0) {
    DAT_3004165c = DAT_3004165c | 0xc0000000;
  }
  if ((local_13c[1] & 0x1000000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x80000000;
  }
  if ((local_13c[1] & 0x80000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x30000000;
  }
  if ((local_13c[1] & 0x100000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x20000000;
  }
  if ((local_13c[1] & 0x2000000) != 0) {
    DAT_3004165c = DAT_3004165c | 0xc000000;
  }
  if ((local_13c[1] & 0x4000000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x8000000;
  }
  if ((local_13c[1] & 0x200000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x3000000;
  }
  if ((local_13c[1] & 0x400000) != 0) {
    DAT_3004165c = DAT_3004165c | 0x2000000;
  }
  if ((local_13c[1] & 0x4000) != 0) {
    DAT_30041660 = DAT_30041660 | 0xc0000000;
  }
  if ((local_13c[1] & 0x8000) != 0) {
    DAT_30041660 = DAT_30041660 | 0x80000000;
  }
  if ((local_13c[1] & 0x400) != 0) {
    DAT_30041660 = DAT_30041660 | 0x30000000;
  }
  if ((local_13c[1] & 0x800) != 0) {
    DAT_30041660 = DAT_30041660 | 0x20000000;
  }
  if ((local_13c[1] & 0x10000) != 0) {
    DAT_30041660 = DAT_30041660 | 0xc000000;
  }
  if ((local_13c[1] & 0x20000) != 0) {
    DAT_30041660 = DAT_30041660 | 0x8000000;
  }
  if ((local_13c[1] & 0x1000) != 0) {
    DAT_30041660 = DAT_30041660 | 0x3000000;
  }
  if ((local_13c[1] & 0x2000) != 0) {
    DAT_30041660 = DAT_30041660 | 0x2000000;
  }
  puVar6 = (undefined4 *)&stack0xfffffe98;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  (**(code **)(*DAT_3004163c + 0x54))(DAT_3004163c,&stack0xfffffe98);
  DAT_3004164c = unaff_ESI >> 3;
  DAT_30041528 = GetSystemMetrics(0);
  DAT_30041524 = GetSystemMetrics(1);
  hdc = GetDC((HWND)0x0);
  iVar4 = GetDeviceCaps(hdc,0xe);
  iVar1 = GetDeviceCaps(hdc,0xc);
  DAT_30041650 = iVar4 * iVar1;
  ReleaseDC((HWND)0x0,hdc);
  if (DAT_30041650 == 8) {
    DAT_3004152c = 0xfd;
    return;
  }
  uVar2 = FUN_300013f0(1,uStack_158);
  uVar3 = FUN_300013f0(1,unaff_EBX);
  DAT_3004152c = uVar2 + uVar3;
  return;
}

