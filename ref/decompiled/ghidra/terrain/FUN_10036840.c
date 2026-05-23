/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036840 @ 0x10036840 */
/* Body size: 279 addresses */


void __fastcall FUN_10036840(int *param_1)

{
  int iVar1;
  int *extraout_ECX;
  int *this;
  
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x30) = 0;
  if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x24) & 0x2000) != 0) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 4) + 4))();
    if (iVar1 == -1) {
      *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 8) = 6;
    }
  }
  if ((*(uint *)((int)(param_1 + 9) + (int)*(void **)(*param_1 + 4)) & 0x4000) != 0) {
    iVar1 = FUN_1001eb90(*(void **)(*param_1 + 4),(undefined **)&DAT_10066298);
    this = extraout_ECX;
    if (iVar1 == -1) {
      *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) =
           *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) | 2;
      this = param_1;
    }
    iVar1 = FUN_1001eb90(this,(undefined **)&DAT_100662b8);
    if (iVar1 == -1) {
      *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) =
           *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 8) | 2;
    }
  }
  FUN_10034a40((int)param_1 + *(int *)(*param_1 + 4));
  thunk_FUN_10037930((int)param_1 + *(int *)(*param_1 + 4));
  return;
}

