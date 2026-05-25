/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047b820 @ 0x0047B820 */


void __fastcall FUN_0047b820(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0xf8))();
  if (DAT_0083aa98 == param_1) {
    FUN_00479b20();
  }
  if (DAT_0083aac0 == param_1) {
    FUN_00480360();
  }
  piVar1 = DAT_0083ab40;
  if (DAT_0083ab40 == (int *)0x0) {
    piVar1 = DAT_0083ab44;
  }
  if (piVar1 != param_1) {
    piVar1 = DAT_0083ab40;
    if (DAT_0083ab40 == (int *)0x0) {
      piVar1 = DAT_0083ab44;
    }
    iVar2 = FUN_0047b080(piVar1);
    if (iVar2 == 0) goto LAB_0047b87f;
  }
  DAT_0083ab40 = (int *)0x0;
  DAT_0083ab44 = (int *)0x0;
LAB_0047b87f:
  if (DAT_0083ab30 == param_1) {
    DAT_0083ab30 = (int *)0x0;
    (**(code **)(*param_1 + 0x10))();
  }
  if (DAT_0083ab34 == param_1) {
    DAT_0083ab34 = (int *)0x0;
  }
  if ((param_1[0x28] & 1U) != 0) {
    param_1[0x28] = param_1[0x28] & 0xfffffffe;
    if (DAT_0083ab54 == param_1) {
      (**(code **)(*param_1 + 0x110))();
    }
    FUN_0047e450();
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x30))(0);
    }
    if ((int *)param_1[4] != (int *)0x0) {
      (**(code **)(*(int *)param_1[4] + 0x1c))();
    }
  }
  return;
}

