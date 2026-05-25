/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006dac0 @ 0x1006DAC0 */


void __cdecl FUN_1006dac0(uint *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_54 [16];
  uint local_14;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puVar4 = local_54;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_8 = param_2;
  local_c = param_2;
  uVar1 = *param_1;
  if (*(char *)((int)param_1 + 10) == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if ((param_3 & 0x80) == 0) {
        for (local_14 = 0; local_14 < uVar1; local_14 = local_14 + 1) {
          *local_c = local_8[1];
          local_c[1] = local_8[2];
          local_c[2] = local_8[3];
          local_c = local_c + 3;
          local_8 = local_8 + 4;
        }
      }
      else {
        local_14 = 1;
        puVar2 = param_2;
        while( true ) {
          local_8 = puVar2 + 4;
          local_c = param_2 + 3;
          if (uVar1 <= local_14) break;
          *local_c = *local_8;
          param_2[4] = puVar2[5];
          param_2[5] = puVar2[6];
          local_14 = local_14 + 1;
          param_2 = local_c;
          puVar2 = local_8;
        }
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x18;
      param_1[1] = uVar1 * 3;
    }
    else {
      if ((param_3 & 0x80) == 0) {
        for (local_14 = 0; local_14 < uVar1; local_14 = local_14 + 1) {
          *local_c = local_8[2];
          local_c[1] = local_8[3];
          local_c[2] = local_8[4];
          local_c[3] = local_8[5];
          local_c[4] = local_8[6];
          local_c[5] = local_8[7];
          local_c = local_c + 6;
          local_8 = local_8 + 8;
        }
      }
      else {
        local_14 = 1;
        puVar2 = param_2;
        while( true ) {
          local_8 = puVar2 + 8;
          local_c = param_2 + 6;
          if (uVar1 <= local_14) break;
          *local_c = *local_8;
          param_2[7] = puVar2[9];
          param_2[8] = puVar2[10];
          param_2[9] = puVar2[0xb];
          param_2[10] = puVar2[0xc];
          param_2[0xb] = puVar2[0xd];
          local_14 = local_14 + 1;
          param_2 = local_c;
          puVar2 = local_8;
        }
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x30;
      param_1[1] = uVar1 * 6;
    }
    *(undefined1 *)((int)param_1 + 10) = 3;
    *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
  }
  else if (*(char *)((int)param_1 + 10) == '\x02') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      if ((param_3 & 0x80) == 0) {
        for (local_14 = 0; local_14 < uVar1; local_14 = local_14 + 1) {
          *local_c = local_8[1];
          local_c = local_c + 1;
          local_8 = local_8 + 2;
        }
      }
      else {
        for (local_14 = 0; local_14 < uVar1; local_14 = local_14 + 1) {
          *local_c = *local_8;
          local_c = local_c + 1;
          local_8 = local_8 + 2;
        }
      }
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar1;
    }
    else {
      if ((param_3 & 0x80) == 0) {
        for (local_14 = 0; local_14 < uVar1; local_14 = local_14 + 1) {
          *local_c = local_8[2];
          local_c[1] = local_8[3];
          local_c = local_c + 2;
          local_8 = local_8 + 4;
        }
      }
      else {
        local_14 = 1;
        puVar2 = param_2;
        while( true ) {
          local_8 = puVar2 + 4;
          local_c = param_2 + 2;
          if (uVar1 <= local_14) break;
          *local_c = *local_8;
          param_2[3] = puVar2[5];
          local_14 = local_14 + 1;
          param_2 = local_c;
          puVar2 = local_8;
        }
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x10;
      param_1[1] = uVar1 << 1;
    }
    *(undefined1 *)((int)param_1 + 10) = 1;
    *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
  }
  return;
}

