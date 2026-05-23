/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100714c0 @ 0x100714C0 */
/* Body size: 775 addresses */


void __cdecl FUN_100714c0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((*(uint *)(param_1 + 0x70) & 0x1000) != 0) {
    if (*(char *)((int)param_2 + 0x19) == '\x03') {
      if (*(short *)(param_1 + 0x11a) == 0) {
        *(undefined1 *)((int)param_2 + 0x19) = 2;
      }
      else {
        *(undefined1 *)((int)param_2 + 0x19) = 6;
      }
      *(undefined1 *)(param_2 + 6) = 8;
      *(undefined2 *)((int)param_2 + 0x16) = 0;
    }
    else {
      if (*(short *)(param_1 + 0x11a) != 0) {
        *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 4;
      }
      if (*(byte *)(param_2 + 6) < 8) {
        *(undefined1 *)(param_2 + 6) = 8;
      }
      *(undefined2 *)((int)param_2 + 0x16) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x70) & 0x80) != 0) {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) & 0xfb;
    *(undefined2 *)((int)param_2 + 0x16) = 0;
    *(undefined4 *)((int)param_2 + 0x5a) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)((int)param_2 + 0x5e) = *(undefined4 *)(param_1 + 0x13c);
    *(undefined2 *)((int)param_2 + 0x62) = *(undefined2 *)(param_1 + 0x140);
  }
  if ((*(uint *)(param_1 + 0x70) & 0x2000) != 0) {
    param_2[10] = *(int *)(param_1 + 0x15c);
  }
  if (((*(uint *)(param_1 + 0x70) & 0x400) != 0) && ((char)param_2[6] == '\x10')) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  if (((*(uint *)(param_1 + 0x70) & 0x40) != 0) &&
     ((((*(char *)((int)param_2 + 0x19) == '\x02' || (*(char *)((int)param_2 + 0x19) == '\x06')) &&
       (*(int *)(param_1 + 0x1ec) != 0)) && ((char)param_2[6] == '\b')))) {
    *(undefined1 *)((int)param_2 + 0x19) = 3;
  }
  if (((*(uint *)(param_1 + 0x70) & 4) != 0) && (*(byte *)(param_2 + 6) < 8)) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  if ((*(uint *)(param_1 + 0x70) & 0x4000) != 0) {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 2;
  }
  if ((*(uint *)(param_1 + 0x70) & 0x600000) != 0) {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) & 0xfd;
  }
  if (*(char *)((int)param_2 + 0x19) == '\x03') {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  else if ((*(byte *)((int)param_2 + 0x19) & 2) == 0) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  else {
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
  }
  if ((*(uint *)(param_1 + 0x70) & 0x40000) != 0) {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) & 0xfb;
  }
  if ((*(byte *)((int)param_2 + 0x19) & 4) != 0) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  if (((*(uint *)(param_1 + 0x70) & 0x8000) != 0) &&
     ((*(char *)((int)param_2 + 0x19) == '\x02' || (*(char *)((int)param_2 + 0x19) == '\0')))) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x70) & 0x100000) != 0) {
    if (*(byte *)(param_2 + 6) < *(byte *)(param_1 + 100)) {
      *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_1 + 100);
    }
    if (*(byte *)((int)param_2 + 0x1d) < *(byte *)(param_1 + 0x65)) {
      *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)(param_1 + 0x65);
    }
  }
  *(char *)((int)param_2 + 0x1e) = *(char *)((int)param_2 + 0x1d) * (char)param_2[6];
  param_2[3] = *param_2 * (uint)*(byte *)((int)param_2 + 0x1e) + 7 >> 3;
  return;
}

