/* Ghidra decompiled: sound.dll */
/* Function: FUN_100205f0 @ 0x100205F0 */
/* Body size: 232 addresses */


undefined4 __thiscall FUN_100205f0(void *this,uint param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piStack_8;
  int iStack_4;
  
  uVar2 = (**(code **)(*(int *)this + 0xb4))();
  if (uVar2 <= param_1) {
    return 10;
  }
  iVar3 = thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&piStack_8,param_1);
  if (iVar3 != 0x24) {
    if ((*(byte *)(piStack_8 + 0xd) & 2) == 0) {
      piVar4 = piStack_8 + 0x16;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      pbVar1 = (byte *)piStack_8[0xb];
      uVar2 = thunk_FUN_1001e710(pbVar1,&iStack_4);
      while( true ) {
        if (((uVar2 != 0) || ((pbVar1[1] & 0xf0) == 0x90)) || ((pbVar1[1] & 0xf0) == 0xc0)) {
          return 0;
        }
        thunk_FUN_1001e9f0(piStack_8,iStack_4);
        iStack_4 = 0;
        iVar3 = thunk_FUN_10020870(this,piStack_8,&iStack_4);
        if (iVar3 == 0x29) break;
        thunk_FUN_1001e9f0(piStack_8,iStack_4);
        pbVar1 = (byte *)piStack_8[0xb];
        uVar2 = thunk_FUN_1001e710(pbVar1,&iStack_4);
      }
    }
    return 0x29;
  }
  return 0x24;
}

