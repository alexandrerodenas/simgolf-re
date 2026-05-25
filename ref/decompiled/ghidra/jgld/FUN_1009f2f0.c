/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009f2f0 @ 0x1009F2F0 */


void __cdecl
FUN_1009f2f0(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar1 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  (**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),1,0x1c);
  puVar1 = (undefined4 *)__chkesp();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 4) = param_1;
    *(undefined1 *)((int)puVar1 + 0x11) = param_2;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
  }
  local_8 = 0x1009f36b;
  __chkesp();
  return;
}

