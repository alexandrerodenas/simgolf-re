/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002760 @ 0x10002760 */
/* Body size: 62 addresses */


void __cdecl FUN_10002760(undefined4 *param_1,undefined2 param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 & 1) != 0) {
    *(undefined2 *)param_1 = param_2;
    param_1 = (undefined4 *)((int)param_1 + 2);
  }
  iVar1 = (int)param_3 / 2;
  if (0 < iVar1) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = CONCAT22(param_2,param_2);
      param_1 = param_1 + 1;
    }
  }
  return;
}

