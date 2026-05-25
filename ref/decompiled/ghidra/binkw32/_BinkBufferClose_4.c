/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferClose@4 @ 0x30002DD0 */


void _BinkBufferClose_4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x2dd0  4  _BinkBufferClose@4 */
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_1[0x19] == 0) {
      if (param_1[0x1a] != 0) {
        (**(code **)(*(int *)param_1[0x12] + 8))((int *)param_1[0x12]);
      }
    }
    else {
      (**(code **)(*(int *)param_1[0x12] + 0x84))((int *)param_1[0x12],0,DAT_3004163c,0,0x200,0);
      (**(code **)(*(int *)param_1[0x12] + 8))((int *)param_1[0x12]);
    }
    if ((HDC)param_1[0x27] != (HDC)0x0) {
      SelectObject((HDC)param_1[0x27],(HGDIOBJ)param_1[0x28]);
      DeleteObject((HGDIOBJ)param_1[0x23]);
      DeleteDC((HDC)param_1[0x27]);
      radfree(param_1[0x26]);
    }
    if (param_1[0x21] != 0) {
      FUN_30002650();
    }
    if (param_1[0x22] != 0) {
      FUN_300028b0();
    }
    piVar2 = param_1;
    for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    radfree((int)param_1);
  }
  return;
}

