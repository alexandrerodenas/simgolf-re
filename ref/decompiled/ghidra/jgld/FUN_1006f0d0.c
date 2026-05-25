/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006f0d0 @ 0x1006F0D0 */


void __cdecl FUN_1006f0d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_2 + -2;
  switch(local_8) {
  case 0:
    FUN_10079040(param_1,"Can\'t discard critical data on CRC error.");
  default:
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffff3ff;
    break;
  case 1:
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffff3ff;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x400;
    break;
  case 2:
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffff3ff;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0xc00;
    break;
  case 3:
  }
  local_c = param_3 + -1;
  switch(local_c) {
  case 0:
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffcff;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x200;
    break;
  default:
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffcff;
    break;
  case 2:
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffcff;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x100;
    break;
  case 3:
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffcff;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x300;
    break;
  case 4:
  }
  local_8 = 0x1006f206;
  __chkesp();
  return;
}

