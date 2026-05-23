/* Ghidra decompiled: sound.dll */
/* Function: FUN_10005770 @ 0x10005770 */
/* Body size: 196 addresses */


void __fastcall FUN_10005770(int *param_1)

{
  int iVar1;
  int *this;
  int iVar2;
  
  iVar2 = param_1[0x293];
  param_1[0x295] = iVar2;
  if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 8), this = param_1, iVar2 == 0)) {
    return;
  }
  do {
    if (*(int *)(iVar2 + 0x20) == 0) {
      this = (int *)(**(code **)(*param_1 + 0x118))(0,*(undefined4 *)(iVar2 + 0x24));
LAB_10005805:
      thunk_FUN_1001b9a0(this,iVar2);
    }
    else if (*(int *)(iVar2 + 0x20) == 3) {
      if ((int *)param_1[0x295] == (int *)0x0) {
LAB_100057c0:
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)param_1[0x295];
        param_1[0x295] = iVar1;
        if (iVar1 == 0) goto LAB_100057c0;
        iVar1 = *(int *)(iVar1 + 8);
      }
      if (param_1[0x295] != 0) {
        param_1[0x295] = *(int *)(param_1[0x295] + 4);
      }
      if (*(char *)(iVar1 + 0x18) != '\0') {
        if (*(int *)(iVar1 + 0x1c) == 3) {
          if (iVar1 == 0) {
            this = (int *)0x0;
            goto LAB_1000580d;
          }
          this = (int *)(iVar1 + -0x2c);
        }
        if (this != (int *)0x0) goto LAB_10005805;
      }
    }
LAB_1000580d:
    if (param_1[0x295] == 0) {
      return;
    }
    iVar2 = *(int *)(param_1[0x295] + 4);
    param_1[0x295] = iVar2;
    if (iVar2 == 0) {
      return;
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}

