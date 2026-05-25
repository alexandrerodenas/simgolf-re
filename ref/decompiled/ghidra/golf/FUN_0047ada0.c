/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047ada0 @ 0x0047ADA0 */


void __fastcall FUN_0047ada0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x130);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x138) != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x140)) {
      do {
        if (*(int *)(*(int *)(iVar1 + 0x13c) + 4) == param_1) {
          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x13c) + 0xc) + 0x10) =
               *(undefined4 *)(*(int *)(iVar1 + 0x13c) + 0x10);
          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x13c) + 0x10) + 0xc) =
               *(undefined4 *)(*(int *)(iVar1 + 0x13c) + 0xc);
          iVar2 = *(int *)(iVar1 + 0x13c);
          if (iVar2 == *(int *)(iVar1 + 0x138)) {
            *(undefined4 *)(iVar1 + 0x138) = *(undefined4 *)(iVar2 + 0xc);
          }
          *(undefined4 *)(iVar1 + 0x13c) = *(undefined4 *)(iVar2 + 0xc);
          if (*(int *)(iVar1 + 0x148) == 0) {
            if (*(int *)(iVar2 + 8) != 0) {
              FUN_004a5007(*(int *)(iVar2 + 8));
            }
            *(undefined4 *)(iVar2 + 8) = 0;
            if (iVar2 != 0) {
              FUN_004a5007(iVar2);
            }
          }
          *(int *)(iVar1 + 0x140) = *(int *)(iVar1 + 0x140) + -1;
          break;
        }
        iVar2 = iVar2 + 1;
        *(undefined4 *)(iVar1 + 0x13c) = *(undefined4 *)(*(int *)(iVar1 + 0x13c) + 0xc);
      } while (iVar2 < *(int *)(iVar1 + 0x140));
    }
    if (*(int *)(iVar1 + 0x140) == 0) {
      *(undefined4 *)(iVar1 + 0x138) = 0;
    }
    *(int *)(iVar1 + 0x144) = *(int *)(iVar1 + 0x140) + -1;
  }
  return;
}

