/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049cb20 @ 0x0049CB20 */
/* Body size: 86 addresses */


void __fastcall FUN_0049cb20(int param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  DVar1 = timeGetTime();
  FUN_004a0320(s_read_frame_process_004e4960,s_Entering_004e4954,DVar1,uVar3,uVar4);
  if ((*(byte *)(param_1 + 0xb8) & 0x10) == 0) {
    iVar2 = FUN_0049ccc0();
    while ((iVar2 != 0 && (iVar2 = FUN_0049cb80(0), iVar2 != 0))) {
      iVar2 = FUN_0049ccc0();
    }
  }
  FUN_0049cb90();
  return;
}

