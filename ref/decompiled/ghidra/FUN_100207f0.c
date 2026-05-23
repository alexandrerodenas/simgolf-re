/* Ghidra decompiled: sound.dll */
/* Function: FUN_100207f0 @ 0x100207F0 */
/* Body size: 89 addresses */


void __fastcall FUN_100207f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0xb4))();
  if (iVar1 != 0) {
    do {
      thunk_FUN_100205f0(param_1,uVar3);
      uVar3 = uVar3 + 1;
      uVar2 = (**(code **)(*param_1 + 0xb4))();
    } while (uVar3 < uVar2);
  }
  param_1[0x2b] = param_1[0x2b] | 0x400;
  param_1[0x1c8] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c9] = 0;
  return;
}

