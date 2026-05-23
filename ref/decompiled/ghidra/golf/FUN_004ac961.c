/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac961 @ 0x004AC961 */
/* Body size: 386 addresses */


undefined4 FUN_004ac961(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar1 = false;
  if (param_1 == 2) {
    puVar6 = &DAT_00840cec;
    pcVar5 = DAT_00840cec;
LAB_004ac9e7:
    bVar1 = true;
    FUN_004a79b2(1);
    iVar2 = param_1;
  }
  else {
    if (((param_1 != 4) && (param_1 != 8)) && (param_1 != 0xb)) {
      if (param_1 == 0xf) {
        puVar6 = &DAT_00840cf8;
        pcVar5 = DAT_00840cf8;
      }
      else if (param_1 == 0x15) {
        puVar6 = &DAT_00840cf0;
        pcVar5 = DAT_00840cf0;
      }
      else {
        if (param_1 != 0x16) {
          return 0xffffffff;
        }
        puVar6 = &DAT_00840cf4;
        pcVar5 = DAT_00840cf4;
      }
      goto LAB_004ac9e7;
    }
    iVar2 = FUN_004a8e53();
    iVar4 = FUN_004acae3(param_1,*(undefined4 *)(iVar2 + 0x50));
    puVar6 = (undefined4 *)(iVar4 + 8);
    pcVar5 = (code *)*puVar6;
  }
  if (pcVar5 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_004a7a13(1);
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
    if (bVar1) {
      FUN_004a7a13(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_c = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar2 + 0x54) = 0;
    if (param_1 == 8) {
      local_10 = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(iVar2 + 0x58) = 0x8c;
      goto LAB_004aca5b;
    }
  }
  else {
LAB_004aca5b:
    if (param_1 == 8) {
      if (DAT_004e53b0 < DAT_004e53b4 + DAT_004e53b0) {
        iVar3 = DAT_004e53b0 * 0xc;
        iVar4 = DAT_004e53b0;
        do {
          iVar3 = iVar3 + 0xc;
          *(undefined4 *)(*(int *)(iVar2 + 0x50) + -4 + iVar3) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_004e53b4 + DAT_004e53b0);
      }
      goto LAB_004aca99;
    }
  }
  *puVar6 = 0;
LAB_004aca99:
  if (bVar1) {
    FUN_004a7a13(1);
  }
  if (param_1 == 8) {
    (*pcVar5)(8,*(undefined4 *)(iVar2 + 0x58));
  }
  else {
    (*pcVar5)(param_1);
    if ((param_1 != 0xb) && (param_1 != 4)) {
      return 0;
    }
  }
  *(undefined4 *)(iVar2 + 0x54) = local_c;
  if (param_1 == 8) {
    *(undefined4 *)(iVar2 + 0x58) = local_10;
  }
  return 0;
}

