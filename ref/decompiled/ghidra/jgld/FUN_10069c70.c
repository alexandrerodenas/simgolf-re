/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10069c70 @ 0x10069C70 */


void __cdecl FUN_10069c70(HWND param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_60 [16];
  tagMSG local_20;
  
  puVar2 = local_60;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(*DAT_1012872c + 0xc))(param_2,param_3);
  __chkesp();
  if (param_3 != 0) {
    if ((param_2 < 0x60) || (0x6f < param_2)) {
      do {
        (**(code **)(*DAT_10128420 + 0x138))();
        iVar1 = __chkesp();
      } while (iVar1 != 0);
    }
    else {
      do {
        PeekMessageA(&local_20,param_1,0x102,0x102,1);
        iVar1 = __chkesp();
      } while (iVar1 != 0);
    }
  }
  local_20.time = 0x10069d17;
  __chkesp();
  return;
}

