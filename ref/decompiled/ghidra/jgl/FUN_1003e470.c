/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003e470 @ 0x1003E470 */
/* Body size: 518 addresses */


void __cdecl FUN_1003e470(uint *param_1,undefined1 *param_2,byte param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  if (*(char *)((int)param_1 + 10) != '\x04') {
    if (*(char *)((int)param_1 + 10) == '\x02') {
      if (*(char *)((int)param_1 + 9) == '\b') {
        uVar5 = uVar2;
        puVar3 = param_2;
        if ((param_3 & 0x80) == 0) {
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *param_2 = puVar3[1];
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 2;
          }
        }
        else if (uVar2 != 0) {
          do {
            uVar1 = *param_2;
            param_2 = param_2 + 2;
            *puVar3 = uVar1;
            uVar5 = uVar5 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar5 != 0);
          param_1[1] = uVar2;
          *(undefined1 *)((int)param_1 + 0xb) = 8;
          *(undefined1 *)((int)param_1 + 10) = 1;
          *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
          return;
        }
        param_1[1] = uVar2;
        *(undefined1 *)((int)param_1 + 0xb) = 8;
        *(undefined1 *)((int)param_1 + 10) = 1;
        *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
        return;
      }
      uVar5 = uVar2;
      puVar3 = param_2;
      if ((param_3 & 0x80) == 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_2 = puVar3[2];
          param_2[1] = puVar3[3];
          param_2 = param_2 + 2;
          puVar3 = puVar3 + 4;
        }
      }
      else if (1 < uVar2) {
        iVar4 = uVar2 - 1;
        do {
          param_2[2] = puVar3[4];
          param_2[3] = puVar3[5];
          iVar4 = iVar4 + -1;
          param_2 = param_2 + 2;
          puVar3 = puVar3 + 4;
        } while (iVar4 != 0);
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x10;
      param_1[1] = uVar2 * 2;
      *(undefined1 *)((int)param_1 + 10) = 1;
      *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
    }
    return;
  }
  if (*(char *)((int)param_1 + 9) != '\b') {
    uVar5 = uVar2;
    puVar3 = param_2;
    if ((param_3 & 0x80) == 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_2 = puVar3[2];
        param_2[1] = puVar3[3];
        param_2[2] = puVar3[4];
        param_2[3] = puVar3[5];
        param_2[4] = puVar3[6];
        param_2[5] = puVar3[7];
        param_2 = param_2 + 6;
        puVar3 = puVar3 + 8;
      }
    }
    else if (1 < uVar2) {
      iVar4 = uVar2 - 1;
      do {
        param_2[6] = puVar3[8];
        param_2[7] = puVar3[9];
        param_2[8] = puVar3[10];
        param_2[9] = puVar3[0xb];
        param_2[10] = puVar3[0xc];
        param_2[0xb] = puVar3[0xd];
        iVar4 = iVar4 + -1;
        param_2 = param_2 + 6;
        puVar3 = puVar3 + 8;
      } while (iVar4 != 0);
    }
    param_1[1] = uVar2 * 6;
    *(undefined1 *)((int)param_1 + 0xb) = 0x30;
    *(undefined1 *)((int)param_1 + 10) = 3;
    *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
    return;
  }
  uVar5 = uVar2;
  puVar3 = param_2;
  if ((param_3 & 0x80) == 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_2 = puVar3[1];
      param_2[1] = puVar3[2];
      param_2[2] = puVar3[3];
      param_2 = param_2 + 3;
      puVar3 = puVar3 + 4;
    }
  }
  else if (1 < uVar2) {
    iVar4 = uVar2 - 1;
    do {
      puVar3[3] = param_2[4];
      puVar3[4] = param_2[5];
      puVar3[5] = param_2[6];
      iVar4 = iVar4 + -1;
      param_2 = param_2 + 4;
      puVar3 = puVar3 + 3;
    } while (iVar4 != 0);
    param_1[1] = uVar2 * 3;
    *(undefined1 *)((int)param_1 + 0xb) = 0x18;
    *(undefined1 *)((int)param_1 + 10) = 3;
    *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
    return;
  }
  param_1[1] = uVar2 * 3;
  *(undefined1 *)((int)param_1 + 0xb) = 0x18;
  *(undefined1 *)((int)param_1 + 10) = 3;
  *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
  return;
}

