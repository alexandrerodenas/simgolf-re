/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006ea20 @ 0x1006EA20 */


undefined4 __cdecl FUN_1006ea20(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [16];
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 0x800) == 0)) ||
     (param_3 == (uint *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = (uint)*(byte *)(param_2 + 0x2c);
    uVar1 = 0x800;
  }
  return uVar1;
}

