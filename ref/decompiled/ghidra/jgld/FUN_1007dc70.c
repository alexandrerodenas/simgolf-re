/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007dc70 @ 0x1007DC70 */


void __cdecl
FUN_1007dc70(int param_1,uint *param_2,uint param_3,uint param_4,undefined1 param_5,
            undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  uint local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    *param_2 = param_3;
    param_2[1] = param_4;
    *(undefined1 *)(param_2 + 6) = param_5;
    *(undefined1 *)((int)param_2 + 0x19) = param_6;
    *(undefined1 *)((int)param_2 + 0x1a) = param_8;
    *(undefined1 *)((int)param_2 + 0x1b) = param_9;
    *(undefined1 *)(param_2 + 7) = param_7;
    if (*(char *)((int)param_2 + 0x19) == '\x03') {
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
    else if ((*(byte *)((int)param_2 + 0x19) & 2) == 0) {
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
    else {
      *(undefined1 *)((int)param_2 + 0x1d) = 3;
    }
    if ((*(byte *)((int)param_2 + 0x19) & 4) != 0) {
      *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
    }
    *(char *)((int)param_2 + 0x1e) = *(char *)((int)param_2 + 0x1d) * (char)param_2[6];
    local_8 = (int)(*(byte *)((int)param_2 + 0x1e) + 7) >> 3;
    if ((uint)(0x7fffffff / (ulonglong)local_8) < param_3) {
      FUN_10079040(param_1,"Width too large to process image data; rowbytes will overflow.");
      param_2[3] = 0;
    }
    else {
      param_2[3] = *param_2 * (uint)*(byte *)((int)param_2 + 0x1e) + 7 >> 3;
    }
  }
  local_8 = 0x1007dda8;
  __chkesp();
  return;
}

