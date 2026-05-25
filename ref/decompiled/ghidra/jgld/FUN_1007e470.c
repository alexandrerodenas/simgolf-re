/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007e470 @ 0x1007E470 */


void __cdecl FUN_1007e470(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 != 0) {
      *(int *)(param_2 + 0x4c) = param_3;
    }
    if ((param_5 != (undefined4 *)0x0) &&
       (FUN_1007f3a0((undefined4 *)(param_2 + 0x50),param_5,10), param_4 == 0)) {
      param_4 = 1;
    }
    *(undefined2 *)(param_2 + 0x16) = (undefined2)param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
  }
  uStack_8 = 0x1007e4f4;
  __chkesp();
  return;
}

