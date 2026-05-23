/* Ghidra decompiled: sound.dll */
/* Function: FUN_100101a0 @ 0x100101A0 */
/* Body size: 198 addresses */


undefined4 __thiscall
FUN_100101a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar3 = param_5;
  uVar4 = param_6;
  iVar2 = (**(code **)(**(int **)((int)this + 0x60) + 0x2c))
                    (*(int **)((int)this + 0x60),param_1,param_2,param_3,param_4,param_5,param_6,0);
  if (iVar2 != 0) {
    switch(iVar2) {
    case -0x7787ff6a:
      piVar1 = *(int **)((int)this + 0x60);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x50))(piVar1);
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0x60) + 0x2c))
                        (*(int **)((int)this + 0x60),uVar3,uVar4,uVar5,param_4,param_5,param_6,0);
      if (iVar2 != 0) {
        switch(iVar2) {
        case -0x7787ff6a:
          return 0x1e;
        }
      }
    }
    return 0x19;
  }
  return 0;
}

