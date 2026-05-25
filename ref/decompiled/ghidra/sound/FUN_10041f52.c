/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041f52 @ 0x10041F52 */


void * __thiscall FUN_10041f52(void *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)this = &PTR_FUN_1005ed00;
  FUN_10042013(this,param_1);
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  FUN_10041e43((LPCRITICAL_SECTION)((int)this + 0x38));
  iVar1 = DAT_100b5520;
  DAT_100b5520 = DAT_100b5520 + 1;
  if (iVar1 == 0) {
    FUN_10041e43((LPCRITICAL_SECTION)&DAT_100b54e8);
  }
  return this;
}

