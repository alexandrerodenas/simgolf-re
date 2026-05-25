/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007f00 @ 0x30007F00 */


uint __cdecl FUN_30007f00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint unaff_ESI;
  undefined1 local_4 [4];
  
  puVar1 = param_1;
  iVar2 = (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1,&param_1,local_4);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  return unaff_ESI / (uint)puVar1[3];
}

