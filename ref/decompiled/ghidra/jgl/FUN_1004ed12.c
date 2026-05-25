/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004ed12 @ 0x1004ED12 */


undefined4 __cdecl FUN_1004ed12(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  iVar2 = param_1;
  if (param_1 == 2) {
    puVar3 = &DAT_10057fc4;
    pcVar7 = DAT_10057fc4;
  }
  else if (((param_1 == 4) || (param_1 == 8)) || (param_1 == 0xb)) {
    puVar4 = FUN_1004ee3f(param_1);
    pcVar7 = *(code **)(puVar4 + 8);
    puVar3 = (undefined4 *)(puVar4 + 8);
  }
  else if (param_1 == 0xf) {
    puVar3 = &DAT_10057fd0;
    pcVar7 = DAT_10057fd0;
  }
  else if (param_1 == 0x15) {
    puVar3 = &DAT_10057fc8;
    pcVar7 = DAT_10057fc8;
  }
  else {
    if (param_1 != 0x16) {
      return 0xffffffff;
    }
    puVar3 = &DAT_10057fcc;
    pcVar7 = DAT_10057fcc;
  }
  iVar1 = DAT_10057f98;
  iVar5 = DAT_10056e64;
  if (pcVar7 == (code *)0x1) {
    return 0;
  }
  if (pcVar7 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (iVar6 = param_1, param_1 == 4)) {
    DAT_10057f98 = 0;
    iVar6 = iVar1;
    if (param_1 == 8) {
      DAT_10056e64 = 0x8c;
      param_1 = iVar5;
      goto LAB_1004edd6;
    }
LAB_1004ee02:
    *puVar3 = 0;
    if (iVar2 != 8) {
      (*pcVar7)(iVar2);
      if ((iVar2 != 0xb) && (iVar2 != 4)) {
        return 0;
      }
      goto LAB_1004ee25;
    }
  }
  else {
LAB_1004edd6:
    if (iVar2 != 8) goto LAB_1004ee02;
    if (DAT_10056e58 < DAT_10056e5c + DAT_10056e58) {
      iVar5 = (DAT_10056e5c + DAT_10056e58) - DAT_10056e58;
      puVar3 = (undefined4 *)(DAT_10056e58 * 0xc + 0x10056de8);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  (*pcVar7)(8,DAT_10056e64);
LAB_1004ee25:
  if (iVar2 == 8) {
    DAT_10056e64 = param_1;
  }
  DAT_10057f98 = iVar6;
  return 0;
}

