/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042ac0 @ 0x10042AC0 */


void __cdecl FUN_10042ac0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2[0xe] != 0) {
    iVar2 = 0;
    if (0 < (int)param_2[0xc]) {
      iVar1 = 0;
      do {
        FUN_10042d00(param_1,*(LPVOID *)(iVar1 + 4 + param_2[0xe]));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x10;
      } while (iVar2 < (int)param_2[0xc]);
    }
    FUN_10042d00(param_1,(LPVOID)param_2[0xe]);
  }
  FUN_10042d00(param_1,(LPVOID)param_2[0x28]);
  FUN_10042d00(param_1,(LPVOID)param_2[0x2b]);
  if (param_2[0x2c] != 0) {
    iVar2 = 0;
    if (*(char *)((int)param_2 + 0xb5) != '\0') {
      do {
        FUN_10042d00(param_1,*(LPVOID *)(param_2[0x2c] + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(byte *)((int)param_2 + 0xb5));
    }
    FUN_10042d00(param_1,(LPVOID)param_2[0x2c]);
  }
  FUN_10042ab0(param_2);
  return;
}

