/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100717d0 @ 0x100717D0 */


void __cdecl FUN_100717d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack00000028;
  undefined4 local_7c [4];
  undefined1 local_38 [52];
  
  puVar2 = local_7c;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1[0x3b] == 0) {
    FUN_10082c80(local_38,(byte *)"NULL row buffer for row %ld, pass %d");
    FUN_10078fe0(param_1,local_38);
  }
  if ((param_1[0x1c] & 0x1000U) != 0) {
    if ((char)param_1[0x42] == '\x03') {
      FUN_10076ec0((uint *)(param_1 + 0x40),param_1[0x3b] + 1,param_1[0x45],param_1[0x62],
                   (uint)*(ushort *)((int)param_1 + 0x11a));
    }
    else if (*(short *)((int)param_1 + 0x11a) == 0) {
      FUN_10077300((uint *)(param_1 + 0x40),param_1[0x3b] + 1,0);
    }
    else {
      FUN_10077300((uint *)(param_1 + 0x40),param_1[0x3b] + 1,(int)(param_1 + 99));
    }
  }
  if ((param_1[0x1c] & 0x40000U) != 0) {
    FUN_1006dac0((uint *)(param_1 + 0x40),(undefined1 *)(param_1[0x3b] + 1),0x80);
  }
  if ((param_1[0x1c] & 0x600000U) != 0) {
    iVar1 = FUN_100736c0((int)param_1,(uint *)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1));
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x85) = 1;
      if (param_1[0x1c] == 0x400000) {
        FUN_10079040((int)param_1,"png_do_rgb_to_gray found nongray pixel");
      }
      if (param_1[0x1c] == 0x200000) {
        FUN_10078fe0(param_1,"png_do_rgb_to_gray found nongray pixel");
      }
    }
  }
  if (((param_1[0x1c] & 0x4000U) != 0) && ((param_1[0x1b] & 0x20000U) == 0)) {
    FUN_10073310((uint *)(param_1 + 0x40),param_1[0x3b] + 1);
  }
  if (((param_1[0x1c] & 0x80U) != 0) &&
     ((*(short *)((int)param_1 + 0x11a) != 0 || ((*(byte *)((int)param_1 + 0x126) & 4) != 0)))) {
    FUN_10074750((uint *)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1),(int)(param_1 + 99),
                 (int)(param_1 + 0x4e),(int)param_1 + 0x142,param_1[0x59],param_1[0x5a],
                 param_1[0x5b],param_1[0x5c],param_1[0x5d],param_1[0x5e],(byte)param_1[0x56]);
  }
  if (((param_1[0x1c] & 0x2000U) != 0) &&
     ((((param_1[0x1c] & 0x80U) == 0 ||
       ((*(short *)((int)param_1 + 0x11a) == 0 && ((*(byte *)((int)param_1 + 0x126) & 4) == 0)))) &&
      (*(char *)((int)param_1 + 0x126) != '\x03')))) {
    local_7c[3] = 0x10071b23;
    FUN_10076760((uint *)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1),param_1[0x59],param_1[0x5c],
                 (byte)param_1[0x56]);
  }
  if ((param_1[0x1c] & 0x400U) != 0) {
    FUN_10072430(param_1 + 0x40,(undefined1 *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 0x40U) != 0) {
    FUN_10077a90((uint *)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1),param_1[0x7b],param_1[0x7c]);
    if (param_1[0x41] == 0) {
      FUN_10078fe0(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((param_1[0x1c] & 0x20U) != 0) {
    FUN_1006d900((int)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 8U) != 0) {
    FUN_100720c0(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),(byte *)((int)param_1 + 0x181));
  }
  if ((param_1[0x1c] & 4U) != 0) {
    FUN_10071e80((uint *)(param_1 + 0x40),param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 1U) != 0) {
    FUN_1006e010((uint *)(param_1 + 0x40),(undefined1 *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 0x10000U) != 0) {
    FUN_1006da10((int)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1));
  }
  if (((param_1[0x1c] & 0x4000U) != 0) && ((param_1[0x1b] & 0x20000U) != 0)) {
    FUN_10073310((uint *)(param_1 + 0x40),param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 0x8000U) != 0) {
    FUN_10072bd0((uint *)(param_1 + 0x40),param_1[0x3b] + 1,(uint)*(ushort *)((int)param_1 + 0x12e),
                 param_1[0x1b]);
  }
  if ((param_1[0x1c] & 0x80000U) != 0) {
    FUN_10072860((uint *)(param_1 + 0x40),param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 0x20000U) != 0) {
    FUN_100724f0((uint *)(param_1 + 0x40),param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 0x10U) != 0) {
    FUN_1006d980(param_1 + 0x40,(undefined1 *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 0x100000U) != 0) {
    if (param_1[0x16] != 0) {
      (*(code *)param_1[0x16])();
      __chkesp();
    }
    if ((char)param_1[0x19] != '\0') {
      *(char *)((int)param_1 + 0x109) = (char)param_1[0x19];
    }
    if (*(char *)((int)param_1 + 0x65) != '\0') {
      *(undefined1 *)((int)param_1 + 0x10a) = *(undefined1 *)((int)param_1 + 0x65);
    }
    *(char *)((int)param_1 + 0x10b) =
         *(char *)((int)param_1 + 0x109) * *(char *)((int)param_1 + 0x10a);
    param_1[0x41] = param_1[0x40] * (uint)*(byte *)((int)param_1 + 0x10b) + 7 >> 3;
  }
  uStack00000028 = 0x10071e75;
  __chkesp();
  return;
}

