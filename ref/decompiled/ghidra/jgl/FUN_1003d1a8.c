/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003d1a8 @ 0x1003D1A8 */
/* Body size: 109 addresses */


undefined4 FUN_1003d1a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *unaff_EDI;
  HWND pHStack_10;
  
  iVar3 = 0;
  iVar2 = 1;
  iVar1 = 0x1c;
  iVar4 = 0;
  do {
    if (*(uint *)(&stack0x00000014 + iVar1) < *(uint *)(&stack0x00000014 + iVar4)) {
      iVar3 = iVar2;
      iVar4 = iVar1;
    }
    iVar1 = iVar1 + 0x1c;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0x54);
  pHStack_10 = (HWND)0x1;
  (*unaff_EDI)(&stack0x00000004,*(undefined4 *)(&stack0x00000004 + iVar3 * 0x1c),
               *(undefined4 *)(&stack0x00000008 + iVar3 * 0x1c),
               *(undefined4 *)(&stack0x00000008 + iVar3 * 0x1c));
  TranslateMessage((MSG *)&pHStack_10);
  DispatchMessageA((MSG *)&pHStack_10);
  return 1;
}

