/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006ecc0 @ 0x1006ECC0 */
/* Body size: 236 addresses */


undefined4 __cdecl
FUN_1006ecc0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            uint *param_6,uint *param_7,undefined4 *param_8,undefined4 *param_9)

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
  if ((((((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 0x400) == 0)) ||
       ((param_3 == (undefined4 *)0x0 || (param_4 == (undefined4 *)0x0)))) ||
      ((param_5 == (undefined4 *)0x0 || ((param_6 == (uint *)0x0 || (param_7 == (uint *)0x0)))))) ||
     ((param_8 == (undefined4 *)0x0 || (param_9 == (undefined4 *)0x0)))) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0xa0);
    *param_4 = *(undefined4 *)(param_2 + 0xa4);
    *param_5 = *(undefined4 *)(param_2 + 0xa8);
    *param_6 = (uint)*(byte *)(param_2 + 0xb4);
    *param_7 = (uint)*(byte *)(param_2 + 0xb5);
    *param_8 = *(undefined4 *)(param_2 + 0xac);
    *param_9 = *(undefined4 *)(param_2 + 0xb0);
    uVar1 = 0x400;
  }
  return uVar1;
}

