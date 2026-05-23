/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a23a0 @ 0x004A23A0 */
/* Body size: 96 addresses */


void __fastcall FUN_004a23a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 10;
  piVar1 = param_1;
  do {
    piVar3 = piVar1 + 1;
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
      *piVar3 = 0;
      piVar1[0x15] = 10;
    }
    if (piVar1[0xb] != 0) {
      FUN_004a5007(piVar1[0xb]);
      piVar1[0xb] = 0;
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar3;
  } while (iVar2 != 0);
  param_1[0x21] = DAT_008409c4;
  FUN_004894b0();
  return;
}

