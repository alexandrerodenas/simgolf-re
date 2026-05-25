/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483f10 @ 0x00483F10 */


undefined4 FUN_00483f10(void)

{
  int *piVar1;
  
  if (DAT_0083afc4 == 0) {
    return 1;
  }
  (*DAT_0083af78)();
  piVar1 = DAT_0083af68;
  while (DAT_0083af68 = piVar1, piVar1 != (int *)0x0) {
    if (piVar1[0x10] != 0) {
      FUN_00484110(piVar1[0x10]);
      piVar1[0x10] = 0;
    }
    if (piVar1[0x14] != 0) {
      FUN_004a4ffc(piVar1[0x14]);
      piVar1[0x14] = 0;
    }
    if (((piVar1[0x11] & 2U) == 0) || ((piVar1[0x11] & 0x200U) == 0)) {
      (**(code **)(*piVar1 + 0x80))();
      piVar1 = DAT_0083af68;
    }
    else {
      FUN_004843e0(piVar1);
      FUN_00484110(piVar1);
      piVar1 = DAT_0083af68;
    }
  }
  FUN_00487ac0();
  FUN_00487460();
  FUN_00487c40();
  FUN_00484060();
  return 0;
}

