/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a3d0 @ 0x1006A3D0 */


void FUN_1006a3d0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined4 local_c;
  int local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_10007620(&local_c);
  *(undefined4 *)(local_8 + 0x810) = 0;
  QueryPerformanceCounter((LARGE_INTEGER *)(local_8 + 0x818));
  __chkesp();
  thunk_FUN_1006afc0(&local_c,*(undefined4 *)(local_8 + 0x818));
  while (*(int *)(local_8 + 0x810) == 0) {
    uVar1 = thunk_FUN_100075b0(&local_c,0xffff);
    *(uint *)(local_8 + 0x810) = uVar1 & 0xffff;
  }
  thunk_FUN_1006a4a0(local_8);
  local_8 = 0x1006a46b;
  __chkesp();
  return;
}

