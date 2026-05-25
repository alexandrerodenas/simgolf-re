/* Ghidra decompiled: sound.dll */
/* Function: FUN_100288a0 @ 0x100288A0 */


LRESULT __cdecl FUN_100288a0(HWND param_1,uint param_2,LPWAVEHDR param_3,int *param_4)

{
  wavehdr_tag *pwVar1;
  int *piVar2;
  LRESULT LVar3;
  int iVar4;
  
  if (param_2 < 0x7ec) {
    if (param_2 == 0x7eb) {
      if ((DAT_100b49bc & 1) != 0) {
        return 0;
      }
      pwVar1 = param_3[2].lpNext;
      param_3[0x9b].dwFlags = param_3[0x9b].dwFlags - 1;
      if (((uint)pwVar1 & 2) != 0) {
        thunk_FUN_10034fb0(&param_3->lpData);
        param_3[2].lpNext = (wavehdr_tag *)((uint)param_3[2].lpNext & 0xfffffbff);
        return 0;
      }
      param_3[2].lpNext = (wavehdr_tag *)((uint)pwVar1 & 0xfffffbff);
      return 0;
    }
    if ((0x3c0 < param_2) && (param_2 == 0x7ea)) {
      if ((DAT_100b49bc & 1) == 0) {
        delete_sound(param_4);
        return 0;
      }
      return 0;
    }
  }
  else {
    switch(param_2) {
    case 0x7ec:
      (**(code **)(*param_4 + 0xb8))();
      return 0;
    case 0x7ee:
      if ((DAT_100b49bc & 1) != 0) {
        return 0;
      }
      iVar4 = *param_4;
      piVar2 = (int *)param_4[1];
      if (iVar4 == 3) {
        iVar4 = (**(code **)(*piVar2 + 0x60))();
        if (iVar4 != 0) {
          thunk_FUN_10039b30(piVar2);
        }
        *(byte *)(piVar2 + 0x50a) = *(byte *)(piVar2 + 0x50a) & 0xfe;
        if (((*(byte *)(piVar2 + 0x16) & 2) == 0) && (piVar2 != (int *)0x0)) {
          (**(code **)*piVar2)(1);
        }
      }
      else if (iVar4 == 4) {
        if (piVar2 != (int *)0x0) {
          (**(code **)*piVar2)(1);
        }
      }
      else {
        if (iVar4 != 5) {
          return 0;
        }
        thunk_FUN_10039c10(piVar2);
        *(byte *)(piVar2 + 0x50a) = *(byte *)(piVar2 + 0x50a) & 0xfe;
      }
      if (param_4 != (int *)0x0) {
        thunk_FUN_10008840(param_4);
        FUN_1004249a((undefined *)param_4);
      }
      return 0;
    case 0x7ef:
      if ((DAT_100b49bc & 2) != 0) {
        return 0;
      }
      iVar4 = *param_4;
      piVar2 = (int *)param_4[1];
      if (iVar4 == 3) {
        piVar2[0x85] = piVar2[0x85] & 0xffffffbf;
        if (param_4 != (int *)0x0) {
          thunk_FUN_10008840(param_4);
          FUN_1004249a((undefined *)param_4);
        }
        if (piVar2 != (int *)0x0) {
          (**(code **)*piVar2)(1);
        }
      }
      else {
        if (iVar4 == 4) {
          if (piVar2 != (int *)0x0) {
            (**(code **)*piVar2)(1);
          }
        }
        else {
          if (iVar4 != 5) {
            return 0;
          }
          (**(code **)(*piVar2 + 0xb8))();
          piVar2[0x85] = piVar2[0x85] & 0xffffffbf;
        }
        if (param_4 != (int *)0x0) {
          thunk_FUN_10008840(param_4);
          FUN_1004249a((undefined *)param_4);
          return 0;
        }
      }
      return 0;
    case 0x7f0:
      if (param_4 != (int *)0x0) {
        if ((*(byte *)(param_4 + 1) & 2) != 0) {
          thunk_FUN_100393d0(param_4,param_3);
        }
        return 0;
      }
    }
  }
  LVar3 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return LVar3;
}

