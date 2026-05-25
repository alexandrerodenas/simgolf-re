/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002bd80 @ 0x1002BD80 */


int __fastcall FUN_1002bd80(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar2 = (uint *)param_1[0x14];
  if (puVar2 == (uint *)0x0) {
    iVar4 = 8;
  }
  else {
    piVar1 = param_1 + 0x10;
    if ((param_1[0x10] != 0) || (iVar4 = create_sound(piVar1,puVar2,1), iVar4 == 0)) {
      uVar5 = (uint)((*(byte *)(param_1 + 0x16) & 1) != 0);
      iVar4 = (**(code **)(*param_1 + 0x58))();
      if (iVar4 != 0) {
        uVar5 = uVar5 | 2;
      }
      uVar3 = param_1[0x16];
      if ((uVar3 & 4) != 0) {
        uVar5 = uVar5 | 0x11;
      }
      uVar6 = uVar5;
      if (((uVar3 & 8) != 0) && (uVar6 = uVar5 | 0x40, (uVar3 & 0x20) == 0)) {
        uVar6 = uVar5 | 0x41;
      }
      if ((uVar3 & 0x10) != 0) {
        uVar6 = uVar6 | 0x80;
      }
      if ((uVar3 & 0x20) != 0) {
        uVar6 = uVar6 | 0x100;
      }
      if ((uVar3 & 0x40) != 0) {
        uVar6 = uVar6 | 0x400;
      }
      (**(code **)(*(int *)*piVar1 + 0x6c))(uVar6);
      iVar4 = thunk_FUN_1002add0(param_1,puVar2);
      if (iVar4 != 0) {
        delete_sound((int *)*piVar1);
        *piVar1 = 0;
        return iVar4;
      }
      iVar4 = (**(code **)(*(int *)*piVar1 + 200))();
      param_1[0x19] = iVar4;
      return 0;
    }
  }
  return iVar4;
}

