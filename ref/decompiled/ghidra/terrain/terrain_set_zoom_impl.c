/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10008fc0 @ 0x10008FC0 */
/* Body size: 543 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008fc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [5];
  undefined4 uStack_40;
  int local_14;
  float local_10;
  float local_c;
  Terrain *local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  glMatrixMode(0x1701);
  __chkesp();
  glLoadIdentity();
  __chkesp();
  if ((*(int *)(local_8 + 0x20) == 800) && (*(int *)(local_8 + 0x24) == 600)) {
    local_c = 1767.767;
    local_10 = 1325.8252;
  }
  else if ((*(int *)(local_8 + 0x20) == 0x400) && (*(int *)(local_8 + 0x24) == 0x300)) {
    local_c = 1810.1934;
    local_10 = 1357.645;
  }
  else if ((*(int *)(local_8 + 0x20) == 0x500) && (*(int *)(local_8 + 0x24) == 0x400)) {
    local_c = 1740.5706;
    local_10 = 1392.4564;
  }
  local_14 = param_1;
  if (param_1 == 1) {
    local_c = local_c * _DAT_1005f3e4;
    local_10 = local_10 * _DAT_1005f3e4;
    *(undefined4 *)(local_8 + 0x1c) = 2;
  }
  else if (param_1 == 2) {
    local_c = local_c + local_c;
    local_10 = local_10 + local_10;
    *(undefined4 *)(local_8 + 0x1c) = 1;
  }
  else if (param_1 == 4) {
    Terrain::resize(local_8,*(int *)(local_8 + 0x20),*(int *)(local_8 + 0x24));
    *(undefined4 *)(local_8 + 0x1c) = 0;
  }
  if (local_8[0x28] == (Terrain)0x0) {
    glOrtho((double)(-local_c * _DAT_1005f3e0),(double)(local_c * _DAT_1005f3e0),
            (double)(-local_10 * _DAT_1005f3e0),(double)(local_10 * _DAT_1005f3e0),0,0x40b38800,0,
            0xc0b38800);
    __chkesp();
  }
  else {
    glOrtho((double)(-local_c * _DAT_1005f3e0),(double)(local_c * _DAT_1005f3e0),
            (double)(local_10 * _DAT_1005f3e0),(double)(-local_10 * _DAT_1005f3e0),0,0x40b38800,0,
            0xc0b38800);
    __chkesp();
  }
  glMatrixMode(0x1700);
  __chkesp();
  uStack_40 = 0x100091d9;
  __chkesp();
  return;
}

