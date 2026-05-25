/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008920 @ 0x10008920 */


int __thiscall FUN_10008920(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  piVar1 = *(int **)((int)this + 0x4c);
  do {
    if (piVar1 == (int *)0x0) {
LAB_10008946:
      iVar3 = 0;
LAB_10008948:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
      (**(code **)(*param_1 + 0xc))();
      return (-(uint)(iVar3 != 0) & 0xffffffec) + 0x14;
    }
    if ((int *)piVar1[2] == param_1) {
      if (piVar1 != (int *)0x0) {
        if (*piVar1 == 0) {
          *(int *)((int)this + 0x4c) = piVar1[1];
        }
        else {
          *(int *)(*piVar1 + 4) = piVar1[1];
        }
        piVar2 = (int *)piVar1[1];
        if (piVar2 == (int *)0x0) {
          iVar3 = *piVar1;
          *(undefined4 *)((int)this + 0x54) = 0;
          *(int *)((int)this + 0x50) = iVar3;
        }
        else {
          *piVar2 = *piVar1;
          *(int **)((int)this + 0x54) = piVar2;
        }
        iVar3 = piVar1[2];
        FUN_1004249a((undefined *)piVar1);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
        goto LAB_10008948;
      }
      goto LAB_10008946;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}

