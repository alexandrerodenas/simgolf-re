/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000a440 @ 0x3000A440 */


void __cdecl FUN_3000a440(int param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined4 *)(param_3 + 0x140);
  iVar1 = 0x10;
  puVar3 = param_3;
  do {
    FUN_30009f00(param_2,puVar2,puVar2 + -0x10,puVar3);
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_30009f00(param_2,(undefined4 *)(param_1 + 0x24),(uint *)(param_1 + 0x20),
               (undefined1 *)(param_1 + 0x10));
  *(undefined4 *)(param_3 + 0x180) = 0;
  return;
}

