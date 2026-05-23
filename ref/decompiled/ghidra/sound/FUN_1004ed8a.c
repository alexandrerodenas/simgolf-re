/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004ed8a @ 0x1004ED8A */
/* Body size: 381 addresses */


undefined4 __thiscall FUN_1004ed8a(void *this,char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  
  if (DAT_100b57c0 == (code *)0x0) {
    iVar1 = FUN_1004f4bb();
    this = extraout_ECX;
    if (iVar1 == 0) {
      DAT_100b57c0 = FUN_1004f4f1;
    }
    else {
      DAT_100b57c0 = GetLocaleInfoA_exref;
    }
  }
  if (param_1 != (char *)0x0) {
    DAT_100b57b0 = param_1;
    if (*param_1 != '\0') {
      FUN_1004ef07(this,0x100682b0,0x40,(byte *)&DAT_100b57b0);
      this = extraout_ECX_00;
    }
    DAT_100b57b4 = param_1 + 0x40;
    if ((DAT_100b57b4 != (char *)0x0) && (*DAT_100b57b4 != '\0')) {
      FUN_1004ef07(this,0x100681f8,0x16,(byte *)&DAT_100b57b4);
    }
    DAT_100b57b8 = 0;
    if ((DAT_100b57b0 != (char *)0x0) && (*DAT_100b57b0 != '\0')) {
      if ((DAT_100b57b4 == (char *)0x0) || (*DAT_100b57b4 == '\0')) {
        FUN_1004f1ea();
      }
      else {
        FUN_1004ef5f();
      }
      goto LAB_1004ee47;
    }
    if ((DAT_100b57b4 != (char *)0x0) && (*DAT_100b57b4 != '\0')) {
      FUN_1004f2fd();
      goto LAB_1004ee47;
    }
  }
  FUN_1004f3ba();
LAB_1004ee47:
  if ((((DAT_100b57b8 == 0) || (uVar2 = FUN_1004f3d4((byte *)(param_1 + 0x80)), uVar2 == 0)) ||
      (BVar3 = IsValidCodePage(uVar2 & 0xffff), BVar3 == 0)) ||
     (BVar3 = IsValidLocale(DAT_100b57a0,1), BVar3 == 0)) {
    return 0;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = (undefined2)DAT_100b57a0;
    param_2[1] = (undefined2)DAT_100b57bc;
    param_2[2] = (short)uVar2;
  }
  if (param_3 != 0) {
    iVar1 = (*DAT_100b57c0)(DAT_100b57a0,0x1001,param_3,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (*DAT_100b57c0)(DAT_100b57bc,0x1002,param_3 + 0x40,0x40);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_100509be(uVar2,(char *)(param_3 + 0x80),10);
  }
  return 1;
}

