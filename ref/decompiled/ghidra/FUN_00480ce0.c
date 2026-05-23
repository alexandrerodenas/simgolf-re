/* Ghidra decompiled: golf.exe */
/* Function: FUN_00480ce0 @ 0x00480CE0 */
/* Body size: 140 addresses */


void __fastcall FUN_00480ce0(int param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = FUN_004801f0();
  if (iVar1 != 0) {
    if (*(int **)(param_1 + 0x278) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x278) + 0xd0))(&local_10);
    }
    local_18 = 0;
    local_14 = 0;
    FUN_0047b170(&local_18,&local_14);
    local_10 = local_10 + local_18;
    iStack_8 = iStack_8 + local_18;
    iStack_c = iStack_c + local_14;
    iStack_4 = iStack_4 + local_14;
    (**(code **)(*DAT_0083ad50 + 0x30))(&local_10);
  }
  return;
}

