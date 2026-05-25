/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10074630 @ 0x10074630 */


void __cdecl FUN_10074630(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_58 [18];
  int local_10;
  int local_8;
  
  puVar4 = local_58;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (param_2 != 0) {
    switch(param_1) {
    case 1:
      local_8 = 2;
      cVar1 = -1;
      break;
    case 2:
      local_8 = 4;
      cVar1 = 'U';
      break;
    default:
      local_8 = 0;
      cVar1 = '\0';
      break;
    case 4:
      local_8 = 0x10;
      cVar1 = '\x11';
      break;
    case 8:
      local_8 = 0x100;
      cVar1 = '\x01';
    }
    cVar2 = '\0';
    for (local_10 = 0; local_10 < local_8; local_10 = local_10 + 1) {
      *(char *)(param_2 + local_10 * 3) = cVar2;
      *(char *)(param_2 + 1 + local_10 * 3) = cVar2;
      *(char *)(param_2 + 2 + local_10 * 3) = cVar2;
      cVar2 = cVar2 + cVar1;
    }
  }
  return;
}

