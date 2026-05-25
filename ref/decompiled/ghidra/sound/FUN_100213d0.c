/* Ghidra decompiled: sound.dll */
/* Function: FUN_100213d0 @ 0x100213D0 */


undefined4 __thiscall FUN_100213d0(void *this,char *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *this_00;
  int iVar5;
  
  if (*param_1 == '\a') {
    *(uint *)((int)this + param_2 * 0x4c + 0x254) = (uint)(byte)param_1[1];
    if (((*(byte *)(param_3 + 0x38) & 1) == 0) && (*(int *)(param_3 + 0x48) == param_2)) {
      piVar2 = (int *)(param_3 + 0x254);
      param_3 = 0x80;
      do {
        piVar1 = (int *)*piVar2;
        if (piVar1 != (int *)0x0) {
          if ((*(byte *)(piVar1 + 0x32) & 1) == 0) {
            (**(code **)(*piVar1 + 0x40))(param_1[1]);
          }
          else {
            this_00 = (int *)0x0;
            uVar4 = 1;
            iVar5 = 0;
            piVar3 = piVar1 + 0xaa;
            do {
              if (((uVar4 & (uint)piVar1[0x32] >> 0xc & 0xffff) == 0) ||
                 (this_00 = piVar3, iVar5 < 0x10)) {
                if ((this_00 != (int *)0x0) && ((*(byte *)(this_00 + 0x27) & 8) == 0)) {
                  thunk_FUN_100383b0(this_00,(this_00[0x3a] * (uint)(byte)param_1[1] >> 7) *
                                             *(int *)((int)this + 0x730) >> 7);
                }
              }
              else {
                this_00 = (int *)0x0;
              }
              uVar4 = uVar4 << 1;
              iVar5 = iVar5 + 1;
              piVar3 = piVar3 + 0x44;
            } while (iVar5 < 0x10);
          }
        }
        piVar2 = piVar2 + -1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 2;
    }
  }
  else if (*param_1 == '\n') {
    *(uint *)((int)this + param_2 * 0x4c + 0x260) = (uint)(byte)param_1[1];
  }
  return 2;
}

