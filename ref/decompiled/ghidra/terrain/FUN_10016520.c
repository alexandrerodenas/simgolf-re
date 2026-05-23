/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10016520 @ 0x10016520 */
/* Body size: 1004 addresses */


void __cdecl FUN_10016520(void *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *_Dst;
  
  if ((((DAT_10063e5c & 4) != 0) && (iVar2 = FUN_10016c70(), iVar2 == 0)) &&
     (iVar2 = FUN_1001a320(2,0x1005f60c,0x402,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (void *)0x0) {
    iVar2 = (*(code *)PTR_FUN_10064000)(3,param_1,0,param_2,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar3 = FUN_10017150((int)param_1);
      if ((BVar3 == 0) &&
         (iVar2 = FUN_1001a320(2,0x1005f60c,0x414,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (int *)((int)param_1 + -0x20);
      if ((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
         && (((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2 &&
             ((*(int *)((int)param_1 + -0xc) != 3 &&
              (iVar2 = FUN_1001a320(2,0x1005f60c,0x41a,0,
                                    (byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))
             ))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((DAT_10063e5c & 4) == 0) {
        iVar2 = FUN_10016be0((char *)((int)param_1 + -4),DAT_10063e68,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_1001a320(1,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = FUN_10016be0((char *)((int)param_1 + *(int *)((int)param_1 + -0x10)),DAT_10063e68,4)
        ;
        if ((iVar2 == 0) &&
           (iVar2 = FUN_1001a320(1,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((int)param_1 + -0xc) == 3) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar2 = FUN_1001a320(2,0x1005f60c,0x42f,0,
                                    (byte *)
                                    "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ"),
              iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _memset(_Dst,(uint)DAT_10063e69,*(int *)((int)param_1 + -0x10) + 0x24);
        FUN_1001b060((undefined *)_Dst);
      }
      else {
        if ((*(int *)((int)param_1 + -0xc) == 2) && (param_2 == 1)) {
          param_2 = 2;
        }
        if ((*(int *)((int)param_1 + -0xc) != param_2) &&
           (iVar2 = FUN_1001a320(2,0x1005f60c,0x43c,0,(byte *)"pHead->nBlockUse == nBlockUse"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_10110778 = DAT_10110778 - *(int *)((int)param_1 + -0x10);
        if ((DAT_10063e5c & 2) == 0) {
          if (*_Dst == 0) {
            if ((DAT_1011076c != _Dst) &&
               (iVar2 = FUN_1001a320(2,0x1005f60c,1099,0,(byte *)"_pLastBlock == pHead"), iVar2 == 1
               )) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_1011076c = *(int **)((int)param_1 + -0x1c);
          }
          else {
            *(undefined4 *)(*_Dst + 4) = *(undefined4 *)((int)param_1 + -0x1c);
          }
          if (*(int *)((int)param_1 + -0x1c) == 0) {
            if ((DAT_10110774 != _Dst) &&
               (iVar2 = FUN_1001a320(2,0x1005f60c,0x455,0,(byte *)"_pFirstBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10110774 = (int *)*_Dst;
          }
          else {
            **(int **)((int)param_1 + -0x1c) = *_Dst;
          }
          _memset(_Dst,(uint)DAT_10063e69,*(int *)((int)param_1 + -0x10) + 0x24);
          FUN_1001b060((undefined *)_Dst);
        }
        else {
          *(undefined4 *)((int)param_1 + -0xc) = 0;
          _memset(param_1,(uint)DAT_10063e69,*(size_t *)((int)param_1 + -0x10));
        }
      }
    }
  }
  return;
}

