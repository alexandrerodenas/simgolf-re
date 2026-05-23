/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047a3c0 @ 0x0047A3C0 */
/* Body size: 254 addresses */


void __fastcall FUN_0047a3c0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b7c24;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_FUN_004ba8b4;
  local_4 = 2;
  FUN_00479f30();
  param_1[0x4d] = &PTR_FUN_004baa10;
  if (param_1[0x4e] != 0) {
    if ((param_1[0x52] == 0) && (iVar2 = 0, 0 < (int)param_1[0x50])) {
      do {
        param_1[0x4f] = *(undefined4 *)(param_1[0x4e] + 0xc);
        iVar1 = *(int *)(param_1[0x4e] + 8);
        if (iVar1 != 0) {
          FUN_004a5007(iVar1);
        }
        *(undefined4 *)(param_1[0x4e] + 8) = 0;
        if (param_1[0x4e] != 0) {
          FUN_004a5007(param_1[0x4e]);
        }
        iVar2 = iVar2 + 1;
        param_1[0x4e] = param_1[0x4f];
      } while (iVar2 < (int)param_1[0x50]);
    }
    param_1[0x4e] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
  }
  param_1[0x51] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004928d0();
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_004baa14;
  FUN_00495eb0();
  *unaff_FS_OFFSET = local_c;
  return;
}

