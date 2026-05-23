/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486250 @ 0x00486250 */
/* Body size: 96 addresses */


void __thiscall FUN_00486250(int param_1,size_t param_2)

{
  char *_Dest;
  
  if (param_2 != *(size_t *)(param_1 + 0x578)) {
    _Dest = _malloc(param_2 + 1);
    _Dest[param_2] = '\0';
    *_Dest = '\0';
    if (*(char **)(param_1 + 0x574) != (char *)0x0) {
      _strncpy(_Dest,*(char **)(param_1 + 0x574),param_2);
      if (*(int *)(param_1 + 0x574) != 0) {
        FUN_004a5007(*(int *)(param_1 + 0x574));
      }
    }
    *(char **)(param_1 + 0x574) = _Dest;
    *(size_t *)(param_1 + 0x578) = param_2;
  }
  return;
}

