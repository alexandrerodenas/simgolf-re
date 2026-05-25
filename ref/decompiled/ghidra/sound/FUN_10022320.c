/* Ghidra decompiled: sound.dll */
/* Function: FUN_10022320 @ 0x10022320 */


undefined4 __thiscall FUN_10022320(void *this,int param_1)

{
  byte bVar1;
  int *piVar2;
  void **ppvVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  undefined4 *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058d2b;
  local_c = ExceptionList;
  if (param_1 == 0) {
    return 10;
  }
  DAT_100b4ff0 = DAT_100b4fe8;
  ExceptionList = &local_c;
  if ((DAT_100b4fe8 != (int *)0x0) &&
     (local_18 = (undefined4 *)DAT_100b4fe8[2], ExceptionList = &local_c, ppvVar3 = &local_c,
     local_18 != (undefined4 *)0x0)) {
    do {
      ExceptionList = ppvVar3;
      pbVar11 = (byte *)*local_18;
      pbVar4 = (byte *)thunk_FUN_1002d430(param_1);
      do {
        bVar1 = *pbVar11;
        bVar12 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_100223a6:
          iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_100223ab;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar12 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_100223a6;
        pbVar11 = pbVar11 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_100223ab:
      if (iVar5 == 0) {
        if (local_18 != (undefined4 *)0x0) goto LAB_100224d0;
        break;
      }
      if (((DAT_100b4ff0 == (int *)0x0) ||
          (DAT_100b4ff0 = (int *)DAT_100b4ff0[1], DAT_100b4ff0 == (int *)0x0)) ||
         (local_18 = (undefined4 *)DAT_100b4ff0[2], ppvVar3 = ExceptionList,
         local_18 == (undefined4 *)0x0)) break;
    } while( true );
  }
  puVar6 = operator_new(0x21c);
  local_4 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = thunk_FUN_1001ab60(puVar6);
  }
  local_4 = 0xffffffff;
  pcVar7 = (char *)thunk_FUN_1002d430(param_1);
  thunk_FUN_1001b160(local_18,pcVar7);
  iVar5 = 0;
  do {
    piVar8 = *(int **)(param_1 + 4 + iVar5 * 4);
    if (piVar8 != (int *)0x0) {
      iVar5 = *piVar8;
      thunk_FUN_1001aef0(local_18,(int)piVar8);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x80);
  thunk_FUN_1001ae50(local_18,*(undefined4 *)(param_1 + 0x218));
  if ((*(byte *)(param_1 + 0x208) & 1) != 0) {
    thunk_FUN_1001ae00(local_18,*(uint *)(param_1 + 0x210),*(uint *)(param_1 + 0x20c));
  }
  if ((*(byte *)(param_1 + 0x208) & 8) != 0) {
    local_18[0x85] = local_18[0x85] | 8;
  }
  piVar8 = operator_new(0xc);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    *piVar8 = 0;
    piVar8[1] = 0;
    piVar8[2] = (int)local_18;
  }
  piVar2 = piVar8;
  if (DAT_100b4fec != (int *)0x0) {
    DAT_100b4fec[1] = (int)piVar8;
    *piVar8 = (int)DAT_100b4fec;
    piVar2 = DAT_100b4fe8;
  }
  DAT_100b4fe8 = piVar2;
  DAT_100b4ff4 = DAT_100b4ff4 + 1;
  DAT_100b4fec = piVar8;
LAB_100224d0:
  local_10 = 0x80;
  local_14 = (int *)((int)this + 0x744);
  do {
    iVar5 = *local_14;
    if ((iVar5 != 0) && (pbVar11 = *(byte **)(iVar5 + 0x24), pbVar11 != (byte *)0x0)) {
      pbVar4 = (byte *)*local_18;
      pbVar9 = pbVar4;
      do {
        bVar1 = *pbVar9;
        bVar12 = bVar1 < *pbVar11;
        if (bVar1 != *pbVar11) {
LAB_1002252f:
          iVar10 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_10022534;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar12 = bVar1 < pbVar11[1];
        if (bVar1 != pbVar11[1]) goto LAB_1002252f;
        pbVar9 = pbVar9 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar1 != 0);
      iVar10 = 0;
LAB_10022534:
      if (iVar10 == 0) {
        puVar6 = *(undefined4 **)(iVar5 + 0x30);
        if (puVar6 == (undefined4 *)0x0) {
LAB_10022623:
          *(undefined4 **)(iVar5 + 0x30) = local_18;
          local_18[0x84] = local_18[0x84] + 1;
        }
        else {
          pbVar11 = (byte *)*puVar6;
          do {
            bVar1 = *pbVar11;
            bVar12 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
LAB_10022571:
              iVar10 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_10022576;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar11[1];
            bVar12 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) goto LAB_10022571;
            pbVar11 = pbVar11 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          iVar10 = 0;
LAB_10022576:
          if (iVar10 == 0) {
            if (puVar6 == (undefined4 *)0x0) goto LAB_10022623;
          }
          else {
            iVar10 = puVar6[0x84];
            puVar6[0x84] = iVar10 + -1;
            if (iVar10 + -1 == 0) {
              for (piVar8 = DAT_100b4fe8; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
                if (piVar8[2] == *(int *)(iVar5 + 0x30)) {
                  if (piVar8 != (int *)0x0) {
                    if (*piVar8 == 0) {
                      DAT_100b4fe8 = (int *)piVar8[1];
                    }
                    else {
                      *(int *)(*piVar8 + 4) = piVar8[1];
                    }
                    DAT_100b4ff0 = (int *)piVar8[1];
                    if (DAT_100b4ff0 == (int *)0x0) {
                      DAT_100b4fec = (int *)*piVar8;
                      DAT_100b4ff0 = (int *)0x0;
                    }
                    else {
                      *DAT_100b4ff0 = *piVar8;
                    }
                    FUN_1004249a((undefined *)piVar8);
                    DAT_100b4ff4 = DAT_100b4ff4 + -1;
                  }
                  break;
                }
              }
              puVar6 = *(undefined4 **)(iVar5 + 0x30);
              if (puVar6 != (undefined4 *)0x0) {
                thunk_FUN_1001abd0(puVar6);
                FUN_1004249a((undefined *)puVar6);
              }
            }
            *(undefined4 *)(iVar5 + 0x30) = 0;
          }
        }
      }
    }
    local_14 = local_14 + 1;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      ExceptionList = local_c;
      return 0;
    }
  } while( true );
}

