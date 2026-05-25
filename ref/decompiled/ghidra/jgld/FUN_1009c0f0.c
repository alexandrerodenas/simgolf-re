/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009c0f0 @ 0x1009C0F0 */


void __cdecl FUN_1009c0f0(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_50 [16];
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  puVar4 = local_50;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if ((((param_1 != (int *)0x0) && (param_1[7] != 0)) && (*param_1 != 0)) && (-1 < param_2)) {
    local_8 = 0xfffffffb;
LAB_1009c136:
    local_10 = *(undefined4 *)param_1[7];
    switch(local_10) {
    case 0:
      if (param_1[1] == 0) break;
      local_8 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 4) = (uint)*(byte *)*param_1;
      uVar2 = *(uint *)(param_1[7] + 4);
      *param_1 = *param_1 + 1;
      if ((uVar2 & 0xf) != 8) {
        *(undefined4 *)param_1[7] = 0xd;
        param_1[6] = (int)"unknown compression method";
        *(undefined4 *)(param_1[7] + 4) = 5;
        goto LAB_1009c136;
      }
      if (*(uint *)(param_1[7] + 0x10) < (*(uint *)(param_1[7] + 4) >> 4) + 8) {
        *(undefined4 *)param_1[7] = 0xd;
        param_1[6] = (int)"invalid window size";
        *(undefined4 *)(param_1[7] + 4) = 5;
        goto LAB_1009c136;
      }
      *(undefined4 *)param_1[7] = 1;
    case 1:
      if (param_1[1] == 0) break;
      local_8 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      bVar1 = *(byte *)*param_1;
      local_c = (uint)bVar1;
      *param_1 = *param_1 + 1;
      if ((*(int *)(param_1[7] + 4) * 0x100 + local_c) % 0x1f == 0) {
        if ((bVar1 & 0x20) != 0) {
          *(undefined4 *)param_1[7] = 2;
          goto switchD_1009c15b_caseD_2;
        }
        *(undefined4 *)param_1[7] = 7;
      }
      else {
        *(undefined4 *)param_1[7] = 0xd;
        param_1[6] = (int)"incorrect header check";
        *(undefined4 *)(param_1[7] + 4) = 5;
      }
      goto LAB_1009c136;
    case 2:
switchD_1009c15b_caseD_2:
      if (param_1[1] != 0) {
        param_1[1] = param_1[1] + -1;
        param_1[2] = param_1[2] + 1;
        *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
        *param_1 = *param_1 + 1;
        *(undefined4 *)param_1[7] = 3;
switchD_1009c15b_caseD_3:
        if (param_1[1] != 0) {
          param_1[1] = param_1[1] + -1;
          param_1[2] = param_1[2] + 1;
          *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
          *param_1 = *param_1 + 1;
          *(undefined4 *)param_1[7] = 4;
switchD_1009c15b_caseD_4:
          if (param_1[1] != 0) {
            param_1[1] = param_1[1] + -1;
            param_1[2] = param_1[2] + 1;
            *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
            *param_1 = *param_1 + 1;
            *(undefined4 *)param_1[7] = 5;
switchD_1009c15b_caseD_5:
            if (param_1[1] != 0) {
              param_1[1] = param_1[1] + -1;
              param_1[2] = param_1[2] + 1;
              *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
              *param_1 = *param_1 + 1;
              param_1[0xc] = *(int *)(param_1[7] + 8);
              *(undefined4 *)param_1[7] = 6;
            }
          }
        }
      }
      break;
    case 3:
      goto switchD_1009c15b_caseD_3;
    case 4:
      goto switchD_1009c15b_caseD_4;
    case 5:
      goto switchD_1009c15b_caseD_5;
    case 6:
      *(undefined4 *)param_1[7] = 0xd;
      param_1[6] = (int)"need dictionary";
      *(undefined4 *)(param_1[7] + 4) = 0;
      break;
    case 7:
      iVar3 = FUN_1009ce80(*(uint **)(param_1[7] + 0x14),param_1);
      if (iVar3 == -3) {
        *(undefined4 *)param_1[7] = 0xd;
        *(undefined4 *)(param_1[7] + 4) = 0;
        local_8 = 0xfffffffd;
      }
      else {
        if (iVar3 != 1) break;
        local_8 = 0;
        FUN_1009cc70(*(int **)(param_1[7] + 0x14),(int)param_1,(int *)(param_1[7] + 4));
        if (*(int *)(param_1[7] + 0xc) == 0) {
          *(undefined4 *)param_1[7] = 8;
          goto switchD_1009c15b_caseD_8;
        }
        *(undefined4 *)param_1[7] = 0xc;
      }
      goto LAB_1009c136;
    case 8:
switchD_1009c15b_caseD_8:
      if (param_1[1] != 0) {
        param_1[1] = param_1[1] + -1;
        param_1[2] = param_1[2] + 1;
        *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
        *param_1 = *param_1 + 1;
        *(undefined4 *)param_1[7] = 9;
switchD_1009c15b_caseD_9:
        if (param_1[1] != 0) {
          param_1[1] = param_1[1] + -1;
          param_1[2] = param_1[2] + 1;
          *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
          *param_1 = *param_1 + 1;
          *(undefined4 *)param_1[7] = 10;
switchD_1009c15b_caseD_a:
          if (param_1[1] != 0) {
            param_1[1] = param_1[1] + -1;
            param_1[2] = param_1[2] + 1;
            *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
            *param_1 = *param_1 + 1;
            *(undefined4 *)param_1[7] = 0xb;
switchD_1009c15b_caseD_b:
            if (param_1[1] != 0) {
              local_8 = 0;
              param_1[1] = param_1[1] + -1;
              param_1[2] = param_1[2] + 1;
              *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
              *param_1 = *param_1 + 1;
              if (*(int *)(param_1[7] + 4) != *(int *)(param_1[7] + 8)) goto code_r0x1009c741;
              *(undefined4 *)param_1[7] = 0xc;
switchD_1009c15b_caseD_c:
            }
          }
        }
      }
      break;
    case 9:
      goto switchD_1009c15b_caseD_9;
    case 10:
      goto switchD_1009c15b_caseD_a;
    case 0xb:
      goto switchD_1009c15b_caseD_b;
    case 0xc:
      goto switchD_1009c15b_caseD_c;
    case 0xd:
    default:
      break;
    }
  }
  local_8 = 0x1009c799;
  __chkesp();
  return;
code_r0x1009c741:
  *(undefined4 *)param_1[7] = 0xd;
  param_1[6] = (int)"incorrect data check";
  *(undefined4 *)(param_1[7] + 4) = 5;
  goto LAB_1009c136;
}

