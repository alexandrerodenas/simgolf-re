/* Ghidra decompiled: sound.dll */
/* Function: FUN_10007cc0 @ 0x10007CC0 */


void __thiscall FUN_10007cc0(void *this,char *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  double *pdVar4;
  char *pcVar5;
  
  pdVar4 = (double *)(param_2 + 8);
  iVar3 = param_3;
  pcVar5 = param_1;
  do {
    iVar1 = (int)ROUND(*pdVar4);
    if (iVar1 < 0x8000) {
      if (iVar1 < -0x8000) {
        uVar2 = 0x8000;
      }
      else {
        uVar2 = (undefined2)iVar1;
      }
    }
    else {
      uVar2 = 0x7fff;
    }
    *(undefined2 *)pcVar5 = uVar2;
    pdVar4 = pdVar4 + 2;
    pcVar5 = pcVar5 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) {
    mmioWrite(*(HMMIO *)((int)this + 0x30),param_1,param_3 * 2);
  }
  return;
}

