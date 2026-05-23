/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003e480 @ 0x1003E480 */
/* Body size: 148 addresses */


int __cdecl FUN_1003e480(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = *param_2;
  if ((*param_1 < *param_2) && (*param_3 < *param_2)) {
    local_8 = *param_1;
    if (*param_1 < *param_3) {
      local_8 = *param_3;
    }
  }
  else if ((*param_2 < *param_1) &&
          ((*param_2 < *param_3 && (local_8 = *param_1, *param_3 < *param_1)))) {
    local_8 = *param_3;
  }
  return local_8;
}

