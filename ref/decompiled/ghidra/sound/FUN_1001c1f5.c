/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c1f5 @ 0x1001C1F5 */
/* Body size: 73 addresses */


undefined4 __fastcall FUN_1001c1f5(int param_1)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0xc;
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (iVar2 == iVar3) {
      iVar2 = iVar3 + 0xc;
      param_1 = param_1 + -1;
    }
    *(byte *)(iVar2 + 0x5c + unaff_EBP) =
         *(char *)(iVar3 + 0x5c + unaff_EBP + iVar1) + (char)param_1 * -0xc & 0x7f;
    if (iVar1 == 0xb) {
      iVar1 = 0;
      param_1 = param_1 + -1;
    }
    else {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x80);
  return 0;
}

