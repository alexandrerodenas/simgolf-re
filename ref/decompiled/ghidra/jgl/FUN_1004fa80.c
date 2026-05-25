/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004fa80 @ 0x1004FA80 */


int __cdecl FUN_1004fa80(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((((param_1 == (int *)0x0) || (param_1[7] == 0)) || (*param_1 == 0)) || (param_2 < 0)) {
switchD_1004fac8_default:
    return -2;
  }
  iVar4 = -5;
  do {
    puVar2 = (undefined4 *)param_1[7];
    switch(*puVar2) {
    case 0:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      puVar2[1] = (uint)*(byte *)*param_1;
      puVar2 = (undefined4 *)param_1[7];
      uVar3 = puVar2[1];
      *param_1 = *param_1 + 1;
      if (((byte)uVar3 & 0xf) != 8) {
        *puVar2 = 0xd;
        param_1[6] = (int)s_unknown_compression_method_10057270;
        *(undefined4 *)(param_1[7] + 4) = 5;
        break;
      }
      if ((uint)puVar2[4] < ((uint)puVar2[1] >> 4) + 8) {
        *puVar2 = 0xd;
        param_1[6] = (int)s_invalid_window_size_1005725c;
        *(undefined4 *)(param_1[7] + 4) = 5;
        break;
      }
      *puVar2 = 1;
    case 1:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      puVar2 = (undefined4 *)param_1[7];
      param_1[2] = param_1[2] + 1;
      bVar1 = *(byte *)*param_1;
      *param_1 = (int)((byte *)*param_1 + 1);
      if ((puVar2[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
        if ((bVar1 & 0x20) != 0) {
          *(undefined4 *)param_1[7] = 2;
          goto switchD_1004fac8_caseD_2;
        }
        *puVar2 = 7;
      }
      else {
        *puVar2 = 0xd;
        param_1[6] = (int)s_incorrect_header_check_10057244;
        *(undefined4 *)(param_1[7] + 4) = 5;
      }
      break;
    case 2:
switchD_1004fac8_caseD_2:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 3;
switchD_1004fac8_caseD_3:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 4;
switchD_1004fac8_caseD_4:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 5;
switchD_1004fac8_caseD_5:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
      *param_1 = *param_1 + 1;
      param_1[0xc] = ((undefined4 *)param_1[7])[2];
      *(undefined4 *)param_1[7] = 6;
      return 2;
    case 3:
      goto switchD_1004fac8_caseD_3;
    case 4:
      goto switchD_1004fac8_caseD_4;
    case 5:
      goto switchD_1004fac8_caseD_5;
    case 6:
      *(undefined4 *)param_1[7] = 0xd;
      param_1[6] = (int)(s_need_dictionary_1005721b + 1);
      *(undefined4 *)(param_1[7] + 4) = 0;
      return -2;
    case 7:
      iVar4 = FUN_100500e0((uint *)puVar2[5],param_1,iVar4);
      if (iVar4 == -3) {
        *(undefined4 *)param_1[7] = 0xd;
        *(undefined4 *)(param_1[7] + 4) = 0;
        iVar4 = -3;
      }
      else {
        if (iVar4 != 1) {
          return iVar4;
        }
        iVar4 = 0;
        FUN_1004ffd0(*(int **)(param_1[7] + 0x14),(int)param_1,(int *)(param_1[7] + 4));
        puVar2 = (undefined4 *)param_1[7];
        if (puVar2[3] == 0) {
          *puVar2 = 8;
          goto switchD_1004fac8_caseD_8;
        }
        *puVar2 = 0xc;
      }
      break;
    case 8:
switchD_1004fac8_caseD_8:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 9;
switchD_1004fac8_caseD_9:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 10;
switchD_1004fac8_caseD_a:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 0xb;
switchD_1004fac8_caseD_b:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
      puVar2 = (undefined4 *)param_1[7];
      *param_1 = *param_1 + 1;
      if (puVar2[1] == puVar2[2]) {
        *(undefined4 *)param_1[7] = 0xc;
switchD_1004fac8_caseD_c:
        return 1;
      }
      *puVar2 = 0xd;
      param_1[6] = (int)s_incorrect_data_check_1005722c;
      *(undefined4 *)(param_1[7] + 4) = 5;
      break;
    case 9:
      goto switchD_1004fac8_caseD_9;
    case 10:
      goto switchD_1004fac8_caseD_a;
    case 0xb:
      goto switchD_1004fac8_caseD_b;
    case 0xc:
      goto switchD_1004fac8_caseD_c;
    case 0xd:
      return -3;
    default:
      goto switchD_1004fac8_default;
    }
  } while( true );
}

