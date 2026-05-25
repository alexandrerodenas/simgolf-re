/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004706d @ 0x1004706D */


int __cdecl FUN_1004706d(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_1004a1f6((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1004a0e1(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

