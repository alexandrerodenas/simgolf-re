/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049cae0 @ 0x0049CAE0 */


undefined4 __fastcall FUN_0049cae0(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  DVar1 = timeGetTime();
  FUN_004a0320(s_decode_frame_process_004e493c,s_Entering_004e4954,DVar1,uVar2,uVar3);
  if ((*(byte *)(param_1 + 0xb8) & 0x10) != 0) {
    return 0;
  }
  FUN_0049ccc0();
  uVar2 = FUN_0049cb80(0);
  return uVar2;
}

