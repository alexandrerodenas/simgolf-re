/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1001bae0 @ 0x1001BAE0 */


void __thiscall FUN_1001bae0(void *this,char param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 local_54 [16];
  int local_14;
  uint local_10;
  char *local_c;
  undefined4 local_8;
  
  puVar4 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    local_c = *(char **)((int)this + 0x14);
    if ((*(uint *)((int)this + 0x18) & 1) == 0) {
      local_10 = *(int *)((int)this + 0x2c) * *(int *)((int)this + 0x34) >> 2;
      local_14 = *(int *)((int)this + 0x2c) * *(int *)((int)this + 0x34) + local_10 * -4;
    }
    else {
      local_10 = *(uint *)((int)this + 0x24) >> 2;
      local_14 = *(int *)((int)this + 0x24) + local_10 * -4;
    }
    uVar2 = local_10;
    pcVar3 = local_c;
    if (local_10 != 0) {
      do {
        if (*pcVar3 == param_1) goto LAB_1001bbb6;
LAB_1001bb9d:
        pcVar3 = pcVar3 + 1;
        if (*pcVar3 == param_1) goto LAB_1001bbbd;
LAB_1001bba2:
        pcVar3 = pcVar3 + 1;
        if (*pcVar3 == param_1) goto LAB_1001bbc4;
        while (pcVar3 = pcVar3 + 1, *pcVar3 == param_1) {
          while( true ) {
            *pcVar3 = param_2;
            pcVar3 = pcVar3 + 1;
            uVar2 = uVar2 - 1;
            if (uVar2 == 0) goto LAB_1001bbd1;
            if (*pcVar3 != param_1) goto LAB_1001bb9d;
LAB_1001bbb6:
            *pcVar3 = param_2;
            pcVar3 = pcVar3 + 1;
            if (*pcVar3 != param_1) goto LAB_1001bba2;
LAB_1001bbbd:
            *pcVar3 = param_2;
            pcVar3 = pcVar3 + 1;
            if (*pcVar3 != param_1) break;
LAB_1001bbc4:
            *pcVar3 = param_2;
            pcVar3 = pcVar3 + 1;
            if (*pcVar3 != param_1) goto LAB_1001bbac;
          }
        }
LAB_1001bbac:
        pcVar3 = pcVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
LAB_1001bbd1:
      pcVar3 = pcVar3 + -1;
      for (iVar1 = local_14; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar3 = pcVar3 + 1;
        if (*pcVar3 == param_1) {
          *pcVar3 = param_2;
        }
      }
    }
  }
  local_8 = 0x1001bbf1;
  __chkesp();
  return;
}

