/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10015e90 @ 0x10015E90 */
/* Body size: 1297 addresses */


int * __cdecl
FUN_10015e90(void *param_1,uint param_2,uint param_3,void *param_4,int param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  BOOL BVar6;
  void *this;
  void *extraout_ECX;
  bool bVar7;
  int *local_10;
  
  if (param_1 == (void *)0x0) {
    piVar2 = (int *)__malloc_dbg(param_4,param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != 0)) {
    if (((DAT_10063e5c & 4) != 0) &&
       ((iVar3 = FUN_10016c70(), iVar3 == 0 &&
        (iVar3 = FUN_1001a320(2,0x1005f60c,0x246,0,(byte *)"_CrtCheckMemory()"), iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar3 = DAT_10063e60;
    if (DAT_10063e60 == DAT_10063e64) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar5 = (*(code *)PTR_FUN_10064000)(2,param_1,param_2,param_3,DAT_10063e60,param_4,param_5);
    if (iVar5 == 0) {
      if (param_4 == (void *)0x0) {
        iVar3 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar3 = FUN_1001a320(0,0,0,0,(byte *)
                                     "Client hook re-allocation failure at file %hs line %d.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      piVar2 = (int *)0x0;
    }
    else if (param_2 < 0xffffffdc) {
      if ((((param_3 != 1) && ((param_3 & 0xffff) != 4)) && ((param_3 & 0xffff) != 2)) &&
         (iVar5 = FUN_1001a320(1,0,0,0,&DAT_1005f5ac), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      BVar6 = FUN_10017150((int)param_1);
      if ((BVar6 == 0) &&
         (iVar5 = FUN_1001a320(2,0x1005f60c,0x26e,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar4 = (int *)((int)param_1 + -0x20);
      bVar7 = *(int *)((int)param_1 + -0xc) == 3;
      if (bVar7) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar5 = FUN_1001a320(2,0x1005f60c,0x278,0,
                                    (byte *)
                                    "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ"
                                   ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
        this = (void *)0x0;
      }
      else {
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2) && ((param_3 & 0xffff) == 1)) {
          param_3 = 2;
        }
        this = (void *)(param_3 & 0xffff);
        if (((void *)(*(uint *)((int)param_1 + -0xc) & 0xffff) != this) &&
           (iVar5 = FUN_1001a320(2,0x1005f60c,0x27f,0,
                                 (byte *)"_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)"
                                ), this = extraout_ECX, iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      if (param_6 == 0) {
        local_10 = (int *)FUN_1001a9c0(this,(undefined *)piVar4,param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = (int *)FUN_1001abd0(piVar4,piVar4,(void *)(param_2 + 0x24));
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_10063e60 = DAT_10063e60 + 1;
      if (!bVar7) {
        DAT_10110770 = (DAT_10110770 - local_10[4]) + param_2;
        DAT_10110778 = (DAT_10110778 - local_10[4]) + param_2;
        if (DAT_1011077c < DAT_10110778) {
          DAT_1011077c = DAT_10110778;
        }
      }
      piVar2 = local_10 + 8;
      if ((uint)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_10063e6a,param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + param_2),(uint)DAT_10063e68,4);
      if (!bVar7) {
        local_10[2] = (int)param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = param_2;
      if (((param_6 == 0) && (local_10 != piVar4)) &&
         (iVar3 = FUN_1001a320(2,0x1005f60c,0x2b5,0,
                               (byte *)"fRealloc || (!fRealloc && pNewBlock == pOldBlock)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if ((local_10 != piVar4) && (!bVar7)) {
        if (*local_10 == 0) {
          if ((DAT_1011076c != piVar4) &&
             (iVar3 = FUN_1001a320(2,0x1005f60c,0x2c4,0,(byte *)"_pLastBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_1011076c = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_10110774 != piVar4) &&
             (iVar3 = FUN_1001a320(2,0x1005f60c,0x2cf,0,(byte *)"_pFirstBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10110774 = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_10110774 == (int *)0x0) {
          DAT_1011076c = local_10;
        }
        else {
          DAT_10110774[1] = (int)local_10;
        }
        *local_10 = (int)DAT_10110774;
        local_10[1] = 0;
        DAT_10110774 = local_10;
      }
    }
    else {
      iVar3 = FUN_1001a320(1,0,0,0,(byte *)"Allocation too large or negative: %u bytes.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    __free_dbg(param_1,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

