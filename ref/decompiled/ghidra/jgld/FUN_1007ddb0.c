/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007ddb0 @ 0x1007DDB0 */


void __cdecl
FUN_1007ddb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 100) = param_3;
    *(undefined4 *)(param_2 + 0x68) = param_4;
    *(undefined1 *)(param_2 + 0x6c) = param_5;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
  }
  return;
}

