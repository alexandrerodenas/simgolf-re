/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020fe0 @ 0x10020FE0 */
/* Body size: 466 addresses */


int __thiscall FUN_10020fe0(void *this,uint *param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined4 *this_00;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058d0b;
  local_c = ExceptionList;
  uVar2 = *param_1;
  pcVar3 = (char *)param_1[7];
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x210) = DAT_100b49c0;
  if ((uVar2 < 0x80) && (pcVar3 != (char *)0x0)) {
    puVar4 = *(undefined **)((int)this + uVar2 * 4 + 0x744);
    if (puVar4 != (undefined *)0x0) {
      *(undefined4 *)(puVar4 + 0x30) = 0;
      thunk_FUN_1001cd30((int)puVar4);
      FUN_1004249a(puVar4);
      *(undefined4 *)((int)this + uVar2 * 4 + 0x744) = 0;
    }
    this_00 = operator_new(0x34);
    local_4 = 0;
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      thunk_FUN_1001ccf0(this_00);
      this_00[10] = 0;
      this_00[0xb] = 0;
      this_00[0xc] = 0;
    }
    local_4 = 0xffffffff;
    if ((char *)param_1[9] == (char *)0x0) {
      thunk_FUN_1001ced0(this_00,pcVar3);
      thunk_FUN_10024360(this_00,param_1);
      if ((param_2 == '\0') || (iVar6 = thunk_FUN_10024280(this_00,param_1), iVar6 == 0)) {
        *(undefined4 **)((int)this + uVar2 * 4 + 0x744) = this_00;
        iVar6 = 0;
      }
      else {
        if (this_00 != (undefined4 *)0x0) {
          this_00[0xc] = 0;
          thunk_FUN_1001cd30((int)this_00);
          FUN_1004249a((undefined *)this_00);
        }
        *(undefined4 *)((int)this + uVar2 * 4 + 0x744) = 0;
      }
    }
    else {
      thunk_FUN_1001d0a0(this_00,(char *)param_1[9]);
      DAT_100b4ff0 = DAT_100b4fe8;
      if ((DAT_100b4fe8 != 0) &&
         (puVar8 = *(undefined4 **)(DAT_100b4fe8 + 8), puVar8 != (undefined4 *)0x0)) {
        do {
          pbVar7 = (byte *)param_1[9];
          pbVar5 = (byte *)*puVar8;
          do {
            bVar1 = *pbVar5;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_100210e5:
              iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_100210ea;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_100210e5;
            pbVar5 = pbVar5 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_100210ea:
          if (iVar6 == 0) {
            this_00[0xc] = puVar8;
            puVar8[0x84] = puVar8[0x84] + 1;
            break;
          }
          DAT_100b4ff0 = *(int *)(DAT_100b4ff0 + 4);
          if ((DAT_100b4ff0 == 0) ||
             (puVar8 = *(undefined4 **)(DAT_100b4ff0 + 8), puVar8 == (undefined4 *)0x0)) break;
        } while( true );
      }
      thunk_FUN_10024360(this_00,param_1);
      *(undefined4 **)((int)this + uVar2 * 4 + 0x744) = this_00;
      iVar6 = 0;
    }
  }
  else {
    iVar6 = 10;
  }
  ExceptionList = local_c;
  return iVar6;
}

