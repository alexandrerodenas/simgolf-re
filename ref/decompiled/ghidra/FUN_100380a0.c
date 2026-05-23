/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100380a0 @ 0x100380A0 */
/* Body size: 244 addresses */


void __fastcall FUN_100380a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    local_8 = param_1;
    for (local_c = 0; local_c < 0x25; local_c = local_c + 1) {
      for (local_10 = 0; local_10 < 0x19; local_10 = local_10 + 1) {
        glDeleteTextures(9,&DAT_100687f8 + local_10 * 0x24 + local_c * 900);
        __chkesp();
        for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {
          *(undefined4 *)(&DAT_100687f8 + local_14 * 4 + local_10 * 0x24 + local_c * 900) = 0;
        }
      }
      *(undefined4 *)(local_8 + 0x40 + local_c * 0x18) = 0;
    }
    *(undefined1 *)(local_8 + 0x29) = 0;
  }
  local_8 = 0x10038190;
  __chkesp();
  return;
}

