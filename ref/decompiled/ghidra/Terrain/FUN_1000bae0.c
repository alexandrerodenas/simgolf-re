/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000bae0 @ 0x1000BAE0 */


void __cdecl FUN_1000bae0(uint param_1)

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
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  operator_new(param_1);
  uStack_8 = 0x1000bb1e;
  __chkesp();
  return;
}

