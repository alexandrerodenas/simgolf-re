/* Ghidra decompiled: sound.dll */
/* Function: FUN_100458a1 @ 0x100458A1 */


int * __cdecl FUN_100458a1(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005eee0;
  puStack_10 = &LAB_10045744;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_100b5d20 == 3) {
        if (puVar2 <= DAT_100b5d0c) {
          FUN_10047710(9);
          local_8 = 0;
          local_24 = FUN_10046283(puVar2);
          local_8 = 0xffffffff;
          FUN_1004593a();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1004598e;
LAB_1004597d:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10045989:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_100b5d20 != 2) || (DAT_100673fc < puVar3)) goto LAB_10045989;
        FUN_10047710(9);
        local_8 = 1;
        local_24 = FUN_10047148((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100459c3();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1004597d;
      }
LAB_1004598e:
      local_24 = HeapAlloc(DAT_100b5d10,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100b5588 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10045b80(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}

