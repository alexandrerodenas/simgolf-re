/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100366c0 @ 0x100366C0 */
/* Body size: 126 addresses */


void __fastcall FUN_100366c0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[2] == 0) {
    uVar1 = FUN_100344e0((int)param_1);
    uVar2 = FUN_100347c0((int)param_1);
    if (uVar2 <= uVar1) {
      (**(code **)(*param_1 + 0x20))();
    }
    uVar1 = FUN_100344e0((int)param_1);
    uVar2 = FUN_100347c0((int)param_1);
    if (uVar1 < uVar2) {
      param_1[10] = param_1[10] + 1;
    }
  }
  else if (param_1[3] == -1) {
    (**(code **)(*param_1 + 0x20))();
  }
  else {
    param_1[3] = -1;
  }
  return;
}

