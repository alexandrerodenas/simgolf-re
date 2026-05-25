/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001eb90 @ 0x1001EB90 */


int __thiscall FUN_1001eb90(void *this,undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_1001ed00(this,0);
  }
  else {
    FUN_1001e8e0(this,param_1);
    iVar1 = FUN_1001ebe0((int *)param_1);
    FUN_1001e950(param_1);
  }
  return iVar1;
}

