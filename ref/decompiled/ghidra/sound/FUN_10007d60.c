/* Ghidra decompiled: sound.dll */
/* Function: FUN_10007d60 @ 0x10007D60 */
/* Body size: 110 addresses */


void __thiscall FUN_10007d60(void *this,char *param_1,double *param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = param_3;
  pcVar4 = param_1;
  do {
    iVar1 = (int)ROUND(*param_2);
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
    *(undefined2 *)pcVar4 = uVar2;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(HMMIO *)((int)this + 0x30) != (HMMIO)0x0) {
    mmioWrite(*(HMMIO *)((int)this + 0x30),param_1,param_3 * 2);
  }
  return;
}

