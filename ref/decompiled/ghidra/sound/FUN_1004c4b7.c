/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004c4b7 @ 0x1004C4B7 */


undefined4 __cdecl FUN_1004c4b7(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_100b5718;
    pcVar6 = DAT_100b5718;
LAB_1004c53d:
    bVar1 = true;
    FUN_10047710(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)&DAT_00000008)) &&
       (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_100b5724;
        pcVar6 = DAT_100b5724;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_100b571c;
        pcVar6 = DAT_100b571c;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_100b5720;
        pcVar6 = DAT_100b5720;
      }
      goto LAB_1004c53d;
    }
    pDVar2 = FUN_10044171();
    uVar3 = FUN_1004c639((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_10047771(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10047771(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)&DAT_00000008) || (param_1 == (DWORD *)0xb)) ||
     (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)&DAT_00000008) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_1004c5b1;
    }
  }
  else {
LAB_1004c5b1:
    if (param_1 == (DWORD *)&DAT_00000008) {
      if (DAT_100653c0 < DAT_100653c4 + DAT_100653c0) {
        iVar4 = DAT_100653c0 * 0xc;
        iVar5 = DAT_100653c0;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_100653c4 + DAT_100653c0);
      }
      goto LAB_1004c5ef;
    }
  }
  *puVar7 = 0;
LAB_1004c5ef:
  if (bVar1) {
    FUN_10047771(1);
  }
  if (param_1 == (DWORD *)&DAT_00000008) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)&DAT_00000008) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}

