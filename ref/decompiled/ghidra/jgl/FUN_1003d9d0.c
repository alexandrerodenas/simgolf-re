/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003d9d0 @ 0x1003D9D0 */
/* Body size: 1087 addresses */


void __thiscall FUN_1003d9d0(void *this,int *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  void *this_00;
  void *this_01;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *this_02;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  uint uVar6;
  
  piVar2 = param_1;
  if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
    FUN_10045bf0(param_1);
    this = extraout_ECX;
  }
  if ((*(char *)((int)piVar2 + 0x123) != '\0') && ((*(byte *)(piVar2 + 0x1c) & 2) != 0)) {
    switch((char)piVar2[0x49]) {
    case '\0':
      uVar6 = DAT_10055850;
      if ((*(byte *)(piVar2 + 0x39) & 7) != 0) {
joined_r0x1003db31:
        if (param_3 != (byte *)0x0) {
          FUN_10044fe0((int)piVar2,param_3,uVar6);
          this = extraout_ECX_00;
        }
LAB_1003da3a:
        FUN_10045930(this,piVar2);
        return;
      }
      break;
    case '\x01':
      uVar6 = DAT_10055854;
      if (((*(byte *)(piVar2 + 0x39) & 7) != 0) || ((uint)piVar2[0x32] < 5))
      goto joined_r0x1003db31;
      break;
    case '\x02':
      if (((byte)piVar2[0x39] & 7) != 4) {
        this = param_3;
        if ((param_3 != (byte *)0x0) && ((piVar2[0x39] & 4U) != 0)) {
          FUN_10044fe0((int)piVar2,param_3,DAT_10055858);
          FUN_10045930(this_00,piVar2);
          return;
        }
        goto LAB_1003da3a;
      }
      break;
    case '\x03':
      this = (void *)CONCAT31((int3)((uint)this >> 8),*(byte *)(piVar2 + 0x39));
      uVar6 = DAT_1005585c;
      if (((*(byte *)(piVar2 + 0x39) & 3) != 0) || ((uint)piVar2[0x32] < 3))
      goto joined_r0x1003db31;
      break;
    case '\x04':
      if (((byte)piVar2[0x39] & 3) != 2) {
        this = param_3;
        if ((param_3 != (byte *)0x0) && ((piVar2[0x39] & 2U) != 0)) {
          FUN_10044fe0((int)piVar2,param_3,DAT_10055860);
          FUN_10045930(this_01,piVar2);
          return;
        }
        goto LAB_1003da3a;
      }
      break;
    case '\x05':
      uVar6 = DAT_10055864;
      if (((*(byte *)(piVar2 + 0x39) & 1) != 0) || ((uint)piVar2[0x32] < 2))
      goto joined_r0x1003db31;
      break;
    case '\x06':
      if ((*(byte *)(piVar2 + 0x39) & 1) == 0) goto LAB_1003da3a;
    }
  }
  if ((*(byte *)(piVar2 + 0x1a) & 4) == 0) {
    FUN_10042d90(piVar2,s_Invalid_attempt_to_read_row_data_10055324);
  }
  piVar2[0x20] = piVar2[0x3b];
  piVar2[0x21] = piVar2[0x37];
  do {
    if (piVar2[0x1e] == 0) {
      if (piVar2[0x43] == 0) {
        do {
          FUN_10042fd0(piVar2,0);
          FUN_10042b90(piVar2,&param_1,4);
          iVar3 = FUN_10042f50((byte *)&param_1);
          piVar2[0x43] = iVar3;
          FUN_10042a10((int)piVar2);
          FUN_10042fa0(piVar2,(byte *)(piVar2 + 0x47),4);
          if (piVar2[0x47] != DAT_10055744) {
            FUN_10042d90(piVar2,s_Not_enough_image_data_1005530c);
          }
        } while (piVar2[0x43] == 0);
      }
      piVar2[0x1e] = piVar2[0x2c];
      piVar2[0x1d] = piVar2[0x2b];
      if ((uint)piVar2[0x43] < (uint)piVar2[0x2c]) {
        piVar2[0x1e] = piVar2[0x43];
      }
      FUN_10042fa0(piVar2,(byte *)piVar2[0x2b],piVar2[0x1e]);
      piVar2[0x43] = piVar2[0x43] - piVar2[0x1e];
    }
    iVar3 = FUN_1004fa80(piVar2 + 0x1d,1);
    if (iVar3 == 1) {
      if (((piVar2[0x21] != 0) || (piVar2[0x1e] != 0)) || (piVar2[0x43] != 0)) {
        FUN_10042d90(piVar2,s_Extra_compressed_data_100552e0);
      }
      piVar2[0x1a] = piVar2[0x1a] | 8;
      piVar2[0x1b] = piVar2[0x1b] | 0x20;
      break;
    }
    if (iVar3 != 0) {
      pcVar4 = (char *)piVar2[0x23];
      if (pcVar4 == (char *)0x0) {
        pcVar4 = s_Decompression_error_100552f8;
      }
      FUN_10042d90(piVar2,pcVar4);
    }
  } while (piVar2[0x21] != 0);
  *(undefined1 *)(piVar2 + 0x42) = *(undefined1 *)((int)piVar2 + 0x126);
  *(undefined1 *)((int)piVar2 + 0x109) = *(undefined1 *)((int)piVar2 + 0x127);
  *(byte *)((int)piVar2 + 0x10b) = *(byte *)((int)piVar2 + 0x129);
  puVar1 = (uint *)(piVar2 + 0x40);
  *(undefined1 *)((int)piVar2 + 0x10a) = *(undefined1 *)((int)piVar2 + 0x12a);
  piVar2[0x41] = (uint)*(byte *)((int)piVar2 + 0x129) * piVar2[0x38] + 7 >> 3;
  *puVar1 = piVar2[0x38];
  FUN_10045750((int)piVar2,(int)puVar1,(byte *)piVar2[0x3b] + 1,(byte *)(piVar2[0x3a] + 1),
               (uint)*(byte *)piVar2[0x3b]);
  FUN_10042d20(piVar2,(undefined4 *)piVar2[0x3a],(undefined4 *)piVar2[0x3b],piVar2[0x36] + 1);
  this_02 = extraout_ECX_01;
  if (piVar2[0x1c] != 0) {
    FUN_1003f2b0(piVar2);
    this_02 = extraout_ECX_02;
  }
  if ((*(char *)((int)piVar2 + 0x123) == '\0') ||
     (this_02 = (void *)piVar2[0x1c], ((uint)this_02 & 2) == 0)) {
    if (param_2 != (byte *)0x0) {
      FUN_10044fe0((int)piVar2,param_2,0xff);
      this_02 = extraout_ECX_05;
    }
    if (param_3 == (byte *)0x0) goto LAB_1003dde3;
    uVar6 = 0xff;
    pbVar5 = param_3;
  }
  else {
    if (*(byte *)(piVar2 + 0x49) < 6) {
      FUN_10045300(puVar1,piVar2[0x3b] + 1,(uint)*(byte *)(piVar2 + 0x49),(uint)this_02);
      this_02 = extraout_ECX_03;
    }
    if (param_3 != (byte *)0x0) {
      FUN_10044fe0((int)piVar2,param_3,(&DAT_10055850)[*(byte *)(piVar2 + 0x49)]);
      this_02 = extraout_ECX_04;
    }
    if (param_2 == (byte *)0x0) goto LAB_1003dde3;
    uVar6 = *(uint *)(&DAT_10055834 + (uint)*(byte *)(piVar2 + 0x49) * 4);
    pbVar5 = param_2;
  }
  FUN_10044fe0((int)piVar2,pbVar5,uVar6);
  this_02 = extraout_ECX_06;
LAB_1003dde3:
  FUN_10045930(this_02,piVar2);
  if ((code *)piVar2[0x66] != (code *)0x0) {
    (*(code *)piVar2[0x66])(piVar2,piVar2[0x39],(char)piVar2[0x49]);
  }
  return;
}

