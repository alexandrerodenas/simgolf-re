/* Ghidra decompiled: sound.dll */
/* Function: FUN_10021fa0 @ 0x10021FA0 */


undefined4 __thiscall FUN_10021fa0(void *this,uint *param_1)

{
  byte bVar1;
  void *this_00;
  int *piVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  bool bVar9;
  
  if (param_1 == (uint *)0x0) {
    return 10;
  }
  this_00 = *(void **)((int)this + *param_1 * 4 + 0x744);
  if (this_00 == (void *)0x0) {
    thunk_FUN_10020fe0(this,param_1,'\0');
  }
  else {
    thunk_FUN_10024360(this_00,param_1);
    if ((char *)param_1[9] != (char *)0x0) {
      thunk_FUN_1001d0a0(this_00,(char *)param_1[9]);
      if (*(undefined4 **)((int)this_00 + 0x30) != (undefined4 *)0x0) {
        pbVar8 = (byte *)param_1[9];
        pbVar4 = (byte *)**(undefined4 **)((int)this_00 + 0x30);
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_10022018:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_1002201d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_10022018;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_1002201d:
        if (iVar5 == 0) {
          return 0;
        }
      }
      DAT_100b4ff0 = DAT_100b4fe8;
      if ((DAT_100b4fe8 != (int *)0x0) &&
         (puVar7 = (undefined4 *)DAT_100b4fe8[2], puVar7 != (undefined4 *)0x0)) {
        do {
          pbVar8 = (byte *)param_1[9];
          pbVar4 = (byte *)*puVar7;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_1002206f:
              iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_10022074;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_1002206f;
            pbVar4 = pbVar4 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_10022074:
          if (iVar5 == 0) {
            iVar5 = *(int *)((int)this_00 + 0x30);
            if (iVar5 == 0) goto LAB_10022147;
            iVar6 = *(int *)(iVar5 + 0x210) + -1;
            *(int *)(iVar5 + 0x210) = iVar6;
            if (iVar6 != 0) goto LAB_10022140;
            piVar2 = DAT_100b4fe8;
            goto joined_r0x100220c5;
          }
          DAT_100b4ff0 = (int *)DAT_100b4ff0[1];
          if (DAT_100b4ff0 == (int *)0x0) {
            return 0;
          }
          puVar7 = (undefined4 *)DAT_100b4ff0[2];
          if (puVar7 == (undefined4 *)0x0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
joined_r0x100220c5:
  if (piVar2 == (int *)0x0) {
LAB_10022129:
    puVar3 = *(undefined4 **)((int)this_00 + 0x30);
    if (puVar3 != (undefined4 *)0x0) {
      thunk_FUN_1001abd0(puVar3);
      FUN_1004249a((undefined *)puVar3);
    }
LAB_10022140:
    *(undefined4 *)((int)this_00 + 0x30) = 0;
LAB_10022147:
    *(undefined4 **)((int)this_00 + 0x30) = puVar7;
    puVar7[0x84] = puVar7[0x84] + 1;
    return 0;
  }
  if (piVar2[2] == *(int *)((int)this_00 + 0x30)) {
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        DAT_100b4fe8 = (int *)piVar2[1];
      }
      else {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      DAT_100b4ff0 = (int *)piVar2[1];
      if (DAT_100b4ff0 == (int *)0x0) {
        DAT_100b4fec = *piVar2;
        DAT_100b4ff0 = (int *)0x0;
      }
      else {
        *DAT_100b4ff0 = *piVar2;
      }
      FUN_1004249a((undefined *)piVar2);
      DAT_100b4ff4 = DAT_100b4ff4 + -1;
    }
    goto LAB_10022129;
  }
  piVar2 = (int *)piVar2[1];
  goto joined_r0x100220c5;
}

