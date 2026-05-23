/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001dce0 @ 0x1001DCE0 */
/* Body size: 857 addresses */


int __thiscall FUN_1001dce0(void *this,uint param_1)

{
  uint *puVar1;
  FOURCC FVar2;
  int iVar3;
  undefined4 *puVar4;
  HPSTR pch;
  undefined1 *puVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *puVar6;
  LPMMIOINFO p_Var7;
  code *pcVar8;
  undefined4 *local_24;
  FOURCC local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14 [4];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058b3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FVar2 = mmioStringToFOURCCA(&DAT_10063d90,0);
  mmioStringToFOURCCA(&DAT_10063e08,0);
  if (((*(byte *)((int)this + 0x4c) & 1) == 0) || (iVar3 = thunk_FUN_1001e3d0(this), iVar3 == 0)) {
    *(uint *)this = param_1;
    p_Var7 = (LPMMIOINFO)((int)this + 4);
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      p_Var7->dwFlags = 0;
      p_Var7 = (LPMMIOINFO)&p_Var7->fccIOProc;
    }
    *(undefined4 *)((int)this + 0x160) = 0;
    *(undefined4 *)((int)this + 0x164) = 0;
    *(undefined4 *)((int)this + 0x168) = 0;
    *(undefined4 *)((int)this + 0x16c) = 0;
    mmioGetInfo(*(HMMIO *)this,(LPMMIOINFO)((int)this + 4),0);
    pcVar8 = mmioRead_exref;
    mmioRead(*(HMMIO *)this,(HPSTR)&local_20,4);
    if (local_20 == FVar2) {
      puVar1 = (uint *)((int)this + 0x150);
      mmioRead(*(HMMIO *)this,(HPSTR)puVar1,4);
      param_1 = *puVar1;
      iVar3 = 0;
      puVar5 = (undefined1 *)((int)&param_1 + 3);
      do {
        *(undefined1 *)((int)&local_24 + iVar3) = *puVar5;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + -1;
      } while (iVar3 < 4);
      *puVar1 = (uint)local_24;
      *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) | 1;
      puVar1 = (uint *)((int)this + 0x154);
      mmioRead(*(HMMIO *)this,(HPSTR)puVar1,2);
      param_1 = CONCAT22(extraout_var,*(undefined2 *)puVar1);
      iVar3 = 0;
      puVar5 = (undefined1 *)((int)&param_1 + 1);
      do {
        *(undefined1 *)((int)&local_24 + iVar3) = *puVar5;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + -1;
      } while (iVar3 < 2);
      *puVar1 = (uint)local_24 & 0xffff;
      mmioRead(*(HMMIO *)this,(HPSTR)((int)this + 0x158),2);
      param_1 = CONCAT22(extraout_var_00,*(undefined2 *)((int)this + 0x158));
      iVar3 = 0;
      puVar5 = (undefined1 *)((int)&param_1 + 1);
      do {
        *(undefined1 *)((int)&local_24 + iVar3) = *puVar5;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + -1;
      } while (iVar3 < 2);
      *(uint *)((int)this + 0x158) = (uint)local_24 & 0xffff;
      mmioRead(*(HMMIO *)this,(HPSTR)((int)this + 0x15c),2);
      iVar3 = 0;
      puVar5 = (undefined1 *)((int)&param_1 + 1);
      do {
        *(undefined1 *)((int)&local_24 + iVar3) = *puVar5;
        puVar4 = local_24;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + -1;
      } while (iVar3 < 2);
      local_24 = (undefined4 *)0x0;
      *(undefined4 *)((int)this + 0x1ac) = 0;
      *(uint *)((int)this + 0x15c) = (uint)puVar4 & 0xffff;
      param_1 = 0;
      if (*(int *)((int)this + 0x158) != 0) {
        do {
          puVar4 = operator_new(0x464);
          local_4 = 0;
          if (puVar4 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
            local_1c = puVar4;
          }
          else {
            local_1c = puVar4;
            thunk_FUN_1001bca0(puVar4);
            *puVar4 = &PTR_LAB_1005b68c;
            puVar4[0xd] = 0;
            puVar4[0xe] = 0;
            puVar6 = puVar4 + 0x16;
            for (iVar3 = 0x80; pcVar8 = mmioRead_exref, iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            puVar4[0xb] = 0;
            *(byte *)(puVar4 + 0xe) = *(byte *)(puVar4 + 0xe) & 0xf7;
            puVar4[0xf] = 0;
            puVar4[0x13] = 0;
            puVar4[0x12] = 0x10;
            *(undefined1 *)(puVar4 + 0xc) = 0;
            puVar4[0x14] = 0;
            puVar4[0x15] = 0;
            puVar4[0x117] = 0;
            puVar4[0x118] = 0;
            puVar4[0x116] = 0;
            puVar6 = puVar4;
          }
          local_4 = 0xffffffff;
          (*pcVar8)(*(undefined4 *)this,local_14,8);
          iVar3 = 0;
          local_1c = (undefined4 *)local_10;
          puVar5 = (undefined1 *)((int)&local_1c + 3);
          do {
            local_14[iVar3 + -4] = *puVar5;
            iVar3 = iVar3 + 1;
            puVar5 = puVar5 + -1;
          } while (iVar3 < 4);
          local_10 = local_18;
          pch = operator_new(local_18);
          puVar6[0xd] = puVar6[0xd] | 4;
          puVar6[0x11] = local_10;
          mmioRead(*(HMMIO *)this,pch,local_10);
          if (((undefined *)puVar6[0xf] != (undefined *)0x0) && ((*(byte *)(puVar6 + 0xd) & 4) != 0)
             ) {
            FUN_1004249a((undefined *)puVar6[0xf]);
            puVar6[0xf] = 0;
          }
          puVar6[0xf] = pch;
          puVar6[0xb] = pch;
          if (pch != (HPSTR)0x0) {
            thunk_FUN_1001ef80((int)puVar6);
          }
          puVar6[0x10] = 0;
          puVar4 = operator_new(0xc);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = puVar6;
          }
          if (*(int *)((int)this + 0x1a0) == 0) {
            *(undefined4 **)((int)this + 0x19c) = puVar4;
          }
          else {
            *(undefined4 **)(*(int *)((int)this + 0x1a0) + 4) = puVar4;
            *puVar4 = *(undefined4 *)((int)this + 0x1a0);
          }
          *(undefined4 **)((int)this + 0x1a0) = puVar4;
          *(int *)((int)this + 0x1a8) = *(int *)((int)this + 0x1a8) + 1;
          thunk_FUN_1001e8e0((int)puVar6);
          if ((local_24 == (undefined4 *)0x0) || ((uint)local_24[0x15] < (uint)puVar6[0x15])) {
            *(uint *)((int)this + 0x1ac) = param_1;
            local_24 = puVar6;
          }
          param_1 = param_1 + 1;
          pcVar8 = mmioRead_exref;
        } while (param_1 < *(uint *)((int)this + 0x158));
      }
      *(undefined4 *)this = 0;
      iVar3 = 0;
    }
    else {
      thunk_FUN_1001d4a0(this);
      iVar3 = 0x12;
    }
  }
  ExceptionList = local_c;
  return iVar3;
}

