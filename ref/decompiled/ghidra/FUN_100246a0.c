/* Ghidra decompiled: sound.dll */
/* Function: FUN_100246a0 @ 0x100246A0 */
/* Body size: 221 addresses */


int __thiscall FUN_100246a0(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  iVar3 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&param_1,param_1);
  if (iVar3 == 0) {
    if (*(int *)(DAT_100b4a1c + 0x3c) != 0) {
      iVar3 = 600;
      uVar4 = param_1;
      do {
        if (*(char *)(iVar3 + uVar4) != '\0') {
          *(undefined1 *)(iVar3 + 2 + uVar4) = 0;
          midiOutShortMsg(*(HMIDIOUT *)(DAT_100b4a1c + 0x3c),*(DWORD *)(iVar3 + param_1));
          *(undefined4 *)(iVar3 + param_1) = 0;
          uVar4 = param_1;
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < 0x458);
      return 0;
    }
    iVar3 = 0x58;
    uVar4 = param_1;
    do {
      piVar1 = *(int **)(iVar3 + uVar4);
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(iVar3 + uVar4) = 0;
        (**(code **)(*piVar1 + 0x28))();
        iVar2 = piVar1[0x50e];
        uVar4 = param_1;
        if ((1 < iVar2) && (iVar6 = 0, iVar2 != 1 && -1 < iVar2 + -1)) {
          piVar5 = piVar1 + 0x510;
          do {
            (**(code **)(*(int *)*piVar5 + 0x28))();
            iVar6 = iVar6 + 1;
            piVar5 = piVar5 + 1;
            uVar4 = param_1;
          } while (iVar6 < piVar1[0x50e] + -1);
        }
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 600);
    iVar3 = 0;
  }
  return iVar3;
}

