/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020d80 @ 0x10020D80 */


void __thiscall FUN_10020d80(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(DAT_100b4a1c + 0x3c) != 0) {
    iVar2 = *(int *)((int)this + 0x1fc);
    *(int *)((int)this + 0x204) = iVar2;
    if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 8), iVar2 != 0)) {
      while( true ) {
        thunk_FUN_1001ef10(iVar2);
        if (*(int *)((int)this + 0x204) == 0) break;
        iVar2 = *(int *)(*(int *)((int)this + 0x204) + 4);
        *(int *)((int)this + 0x204) = iVar2;
        if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 8), iVar2 == 0)) break;
      }
    }
  }
  if (((*(byte *)((int)this + 0x58) & 2) == 0) || (param_1 != '\0')) {
    piVar3 = (int *)((int)this + 0x744);
    iVar2 = 0x7f;
    do {
      if (((*piVar3 != 0) && (DAT_100b4a20 != 0)) && (iVar1 = *(int *)(*piVar3 + 0x30), iVar1 != 0))
      {
        thunk_FUN_1001ac40(iVar1);
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(uint *)((int)this + 0xac) = *(uint *)((int)this + 0xac) & 0xfffffffb;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(uint *)((int)this + 0x214) = *(uint *)((int)this + 0x214) | 8;
  (**(code **)(*(int *)this + 0x48))(0);
  *(uint *)((int)this + 0xac) = *(uint *)((int)this + 0xac) | 8;
  return;
}

