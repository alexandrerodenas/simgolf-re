/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100786b0 @ 0x100786B0 */
/* Body size: 151 addresses */


void __cdecl FUN_100786b0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  void *local_c;
  uint local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_2 * param_3;
  local_c = (void *)FUN_10078e60(param_1,local_8);
  if (local_8 < 0x8001) {
    _memset(local_c,0,local_8);
  }
  else {
    _memset(local_c,0,0x8000);
    _memset((void *)((int)local_c + 0x8000),0,local_8 - 0x8000);
  }
  local_8 = 0x10078743;
  __chkesp();
  return;
}

