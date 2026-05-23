/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000baa0 @ 0x1000BAA0 */
/* Body size: 677 addresses */


undefined4 __fastcall FUN_1000baa0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x69) & 2) == 0) {
    return 0;
  }
  if (((DAT_100b49f0 == (int *)0x0) || (DAT_100b49f4 == (void *)0x0)) ||
     (DAT_100b49f8 != (void *)0x0)) {
    return 6;
  }
  thunk_FUN_100114e0(DAT_100b49f0,(byte)param_1[0x71],0xf);
  iVar2 = thunk_FUN_10011c60(DAT_100b49f0,DAT_100b4a3c,2);
  piVar1 = DAT_100b49f0;
  if (iVar2 != 0) {
    if (DAT_100b49f0 != (int *)0x0) {
      thunk_FUN_10011290(DAT_100b49f0);
      FUN_1004249a((undefined *)piVar1);
    }
    DAT_100b49f0 = (int *)0x0;
    return 3;
  }
  if ((DAT_100b49f8 == (void *)0x0) && ((*(byte *)(DAT_100b49f0 + 0x1b) & 0x10) == 0)) {
    iVar2 = thunk_FUN_10012d10(DAT_100b49f0,(int *)&DAT_100b49f8,0x10088,0x10000);
    if (iVar2 != 0) {
      thunk_FUN_10011970(DAT_100b49f0);
      DAT_100b49f8 = (void *)0x0;
      return 0x1e;
    }
    iVar4 = 0xf;
    (**(code **)(*param_1 + 0x3c))();
    iVar2 = (**(code **)(*param_1 + 0x40))(0xe);
    thunk_FUN_10010eb0(DAT_100b49f8,iVar2,iVar4);
  }
  if ((*(byte *)(DAT_100b49f0 + 0x1b) & 8) != 0) {
    thunk_FUN_100135a0(DAT_100b49f0,DAT_100b49f0[0x6b],DAT_100b49f0[0x6c],DAT_100b49f0[0x6d]);
  }
  if ((*(byte *)(DAT_100b49f0 + 0x1b) & 0x10) != 0) {
    iVar2 = thunk_FUN_10012fe0(DAT_100b49f0,(int *)&DAT_100b49fc,(undefined4 *)&DAT_10063dc8,0x10094
                               ,0x10000);
    if (iVar2 != 0) {
      thunk_FUN_10011970(DAT_100b49f0);
      DAT_100b49fc = (undefined *)0x0;
      return 0x1e;
    }
    iVar2 = thunk_FUN_10012fe0(DAT_100b49f0,(int *)&DAT_100b4a00,(undefined4 *)&DAT_10063dc8,0x10094
                               ,0x10000);
    if (iVar2 != 0) {
      thunk_FUN_100132e0(DAT_100b49f0,DAT_100b49fc);
      thunk_FUN_10011970(DAT_100b49f0);
      DAT_100b4a00 = (void *)0x0;
      DAT_100b49fc = (undefined *)0x0;
      return 0x1e;
    }
    iVar5 = 0xf;
    (**(code **)(*param_1 + 0x3c))();
    iVar4 = 0xe;
    iVar2 = (**(code **)(*param_1 + 0x40))();
    thunk_FUN_10010eb0(DAT_100b4a00,iVar2,iVar4);
    iVar2 = (**(code **)(*param_1 + 0x40))(0xe);
    thunk_FUN_10010eb0(DAT_100b49fc,iVar2,iVar5);
    piVar1 = *(int **)(DAT_100b49fc + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))(piVar1,0xbf000000,0,0xbf000000,0);
    }
    piVar1 = *(int **)((int)DAT_100b4a00 + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x4c))(piVar1,0x3f000000,0,0xbf000000,0);
    }
    if (*(ushort *)(DAT_100b49fc + 0xb4) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(DAT_100b49fc + 0x38) / (uint)*(ushort *)(DAT_100b49fc + 0xb4);
    }
    thunk_FUN_10006f00(DAT_100b49f4,uVar3);
    param_1[0x69] = param_1[0x69] | 8;
  }
  (**(code **)(*param_1 + 0x50))();
  param_1[0x69] = param_1[0x69] & 0xfffffffd;
  if (DAT_100b4a1c != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_100b4a1c + 0x60))();
    if (iVar2 != 0) {
      (**(code **)(*DAT_100b4a1c + 0x58))();
    }
  }
  return 0;
}

