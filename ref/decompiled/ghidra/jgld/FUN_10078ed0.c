/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078ed0 @ 0x10078ED0 */
/* Body size: 67 addresses */


void __cdecl FUN_10078ed0(int param_1,void *param_2)

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
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    FUN_100806d0(param_2);
  }
  uStack_8 = 0x10078f0f;
  __chkesp();
  return;
}

