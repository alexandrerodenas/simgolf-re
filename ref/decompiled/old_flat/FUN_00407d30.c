/* Ghidra decompiled: golf.exe */
/* Function: FUN_00407d30 @ 0x00407D30 */


void FUN_00407d30(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_0059e7b8 & 0x4000000) == 0) {
    iVar2 = thunk_FUN_0046f550(param_1);
    FUN_004a0890();
    uVar1 = DAT_00834170;
    if (iVar2 != -1) {
      (&DAT_00571ffb)[DAT_0059bf90 * 0x2e] = (undefined1)DAT_005a6d3c;
      DAT_00834170 = 0;
      DAT_005a34e0 = (&DAT_00571ff8)[iVar2 * 0x2e];
      FUN_00442180(0);
      FUN_004315e0();
      *(undefined2 *)(&DAT_0058421e + ((int)DAT_005a6d3c % 100) * 0x14) = (undefined2)DAT_00571fd4;
      FUN_00470a60(iVar2);
      FUN_0042f7a0();
      DAT_00834170 = uVar1;
      FUN_00449400((int)DAT_005a34e0);
      FUN_00449520();
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
    }
  }
  return;
}

