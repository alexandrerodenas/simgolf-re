/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483340 @ 0x00483340 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483340(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_0083ac90 != (int *)0x0) {
    iVar2 = 0;
    if (0 < DAT_0083ac98) {
      do {
        DAT_0083ac94 = (int *)DAT_0083ac90[3];
        piVar1 = (int *)DAT_0083ac90[2];
        (**(code **)(DAT_0083ac88 + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        DAT_0083ac90[2] = 0;
        if (DAT_0083ac90 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*DAT_0083ac90 + 4) + (int)DAT_0083ac90))(1);
        }
        DAT_0083ac90 = DAT_0083ac94;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_0083ac98);
    }
    DAT_0083ac90 = (int *)0x0;
    _DAT_0083ac9c = 0;
    DAT_0083ac98 = 0;
  }
  if (DAT_0083ad50 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004833e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0083ad50 + 0xc4))();
  return;
}

