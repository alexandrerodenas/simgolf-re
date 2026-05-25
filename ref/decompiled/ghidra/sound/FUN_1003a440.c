/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a440 @ 0x1003A440 */


undefined4 __thiscall FUN_1003a440(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100593db;
  local_c = ExceptionList;
  if (DAT_100b4a20 == (void *)0x0) {
    uVar2 = 1;
  }
  else if (param_1 == (char *)0x0) {
    uVar2 = 10;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_c;
    pcVar3 = operator_new(~uVar5);
    uVar5 = 0xffffffff;
    do {
      pcVar7 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    pcVar8 = pcVar3;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    puVar4 = operator_new(0x10);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)thunk_FUN_100087f0(puVar4);
    }
    puVar4[2] = pcVar3;
    puVar4[3] = param_2;
    *puVar4 = 0xd;
    puVar4[1] = this;
    local_4 = 0xffffffff;
    thunk_FUN_1000c3d0(DAT_100b4a20,puVar4);
    uVar2 = 0;
  }
  ExceptionList = local_c;
  return uVar2;
}

