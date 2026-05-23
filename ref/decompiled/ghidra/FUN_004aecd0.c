/* Ghidra decompiled: golf.exe */
/* Function: FUN_004aecd0 @ 0x004AECD0 */
/* Body size: 80 addresses */


void FUN_004aecd0(int *param_1)

{
  int *unaff_retaddr;
  undefined1 auStack_cc [188];
  undefined4 uStack_10;
  int *piStack_c;
  int *piStack_8;
  
  piStack_8 = param_1;
  piStack_c = (int *)0x4aecdb;
  (**(code **)(*param_1 + 8))();
  piStack_c = param_1;
  uStack_10 = 0x4aece1;
  FUN_004afa90();
  piStack_8 = (int *)0x1;
  piStack_c = (int *)0x4aeceb;
  FUN_004a5108();
  (**(code **)(*unaff_retaddr + 0xc))(unaff_retaddr,auStack_cc);
  FUN_004a622c(&DAT_004e4dc8,&DAT_004e6cf8,auStack_cc);
  return;
}

