/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006efd0 @ 0x1006EFD0 */
/* Body size: 201 addresses */


undefined4 __cdecl
FUN_1006efd0(int param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x10) != 0)) {
    if (*(char *)(param_2 + 0x19) == '\x03') {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0x4c);
        local_8 = 0x10;
      }
      if (param_5 != (int *)0x0) {
        *param_5 = param_2 + 0x50;
      }
    }
    else {
      if (param_5 != (int *)0x0) {
        *param_5 = param_2 + 0x50;
        local_8 = 0x10;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)*(ushort *)(param_2 + 0x16);
      local_8 = 0x10;
    }
  }
  return local_8;
}

