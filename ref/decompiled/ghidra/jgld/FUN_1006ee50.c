/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006ee50 @ 0x1006EE50 */
/* Body size: 96 addresses */


undefined4 __cdecl FUN_1006ee50(int param_1,int param_2,undefined4 *param_3,uint *param_4)

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
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 8) == 0)) ||
     (param_3 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    *param_4 = (uint)*(ushort *)(param_2 + 0x14);
    uVar1 = 8;
  }
  return uVar1;
}

