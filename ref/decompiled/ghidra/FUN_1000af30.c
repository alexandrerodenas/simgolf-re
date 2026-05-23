/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000af30 @ 0x1000AF30 */
/* Body size: 140 addresses */


void __cdecl FUN_1000af30(undefined4 *param_1,undefined2 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [17];
  undefined4 *local_c;
  int local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_3 & 1) == 0) {
    local_c = param_1;
  }
  else {
    *(undefined2 *)param_1 = param_2;
    local_c = (undefined4 *)((int)param_1 + 2);
  }
  for (local_8 = (int)param_3 / 2; 0 < local_8; local_8 = local_8 + -1) {
    *local_c = CONCAT22(param_2,param_2);
    local_c = local_c + 1;
  }
  return;
}

