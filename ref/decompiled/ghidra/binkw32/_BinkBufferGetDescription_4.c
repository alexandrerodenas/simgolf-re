/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferGetDescription@4 @ 0x300034F0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * _BinkBufferGetDescription_4(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
                    /* 0x34f0  5  _BinkBufferGetDescription@4 */
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 1:
    pcVar2 = "DirectDraw primary surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
    *(char *)((int)puVar4 + 2) = pcVar2[2];
    return &DAT_30041424;
  case 2:
    DAT_30041424 = s_DIB_Section_300332dc._0_4_;
    _DAT_30041428 = s_DIB_Section_300332dc._4_4_;
    _DAT_3004142c = s_DIB_Section_300332dc._8_4_;
    break;
  case 3:
    pcVar2 = "DirectDraw YV12 overlay";
    puVar4 = &DAT_30041424;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    return &DAT_30041424;
  case 4:
    pcVar2 = "DirectDraw YUY2 overlay";
    puVar4 = &DAT_30041424;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    return &DAT_30041424;
  case 5:
    pcVar2 = "DirectDraw UYVY overlay";
    puVar4 = &DAT_30041424;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    return &DAT_30041424;
  case 6:
    pcVar2 = "DirectDraw YV12 off-screen surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
    *(char *)((int)puVar4 + 2) = pcVar2[2];
    return &DAT_30041424;
  case 7:
    pcVar2 = "DirectDraw YUY2 off-screen surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
    *(char *)((int)puVar4 + 2) = pcVar2[2];
    return &DAT_30041424;
  case 8:
    pcVar2 = "DirectDraw UYVY off-screen surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)pcVar2;
    *(char *)((int)puVar4 + 2) = pcVar2[2];
    return &DAT_30041424;
  case 9:
    pcVar2 = "DirectDraw RGB off-screen video surface";
    puVar4 = &DAT_30041424;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      puVar4 = puVar4 + 1;
    }
    return &DAT_30041424;
  case 10:
    pcVar2 = "DirectDraw RGB off-screen system surface";
    pcVar3 = (char *)&DAT_30041424;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    *pcVar3 = *pcVar2;
    return &DAT_30041424;
  }
  return &DAT_30041424;
}

