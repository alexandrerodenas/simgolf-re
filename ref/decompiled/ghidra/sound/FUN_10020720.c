/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020720 @ 0x10020720 */
/* Body size: 154 addresses */


undefined4 FUN_10020720(void *param_1)

{
  byte *pbVar1;
  void *this;
  uint uVar2;
  int iVar3;
  void *in_ECX;
  
  this = param_1;
  if (param_1 == (void *)0x0) {
    return 10;
  }
  if ((*(byte *)((int)param_1 + 0x34) & 2) == 0) {
    pbVar1 = *(byte **)((int)param_1 + 0x2c);
    uVar2 = thunk_FUN_1001e710(pbVar1,(int *)&param_1);
    while( true ) {
      if (((uVar2 != 0) || ((pbVar1[1] & 0xf0) == 0x90)) || ((pbVar1[1] & 0xf0) == 0xc0)) {
        return 0;
      }
      thunk_FUN_1001e9f0(this,(int)param_1);
      param_1 = (void *)0x0;
      iVar3 = thunk_FUN_10020870(in_ECX,this,(int *)&param_1);
      if (iVar3 == 0x29) break;
      thunk_FUN_1001e9f0(this,(int)param_1);
      pbVar1 = *(byte **)((int)this + 0x2c);
      uVar2 = thunk_FUN_1001e710(pbVar1,(int *)&param_1);
    }
  }
  return 0x29;
}

