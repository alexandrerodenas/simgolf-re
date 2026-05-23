/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006ec40 @ 0x1006EC40 */
/* Body size: 121 addresses */


undefined4 __cdecl
FUN_1006ec40(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

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
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 0x100) == 0)) ||
     (((param_3 == (undefined4 *)0x0 || (param_4 == (undefined4 *)0x0)) || (param_5 == (uint *)0x0))
     )) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 100);
    *param_4 = *(undefined4 *)(param_2 + 0x68);
    *param_5 = (uint)*(byte *)(param_2 + 0x6c);
    uVar1 = 0x100;
  }
  return uVar1;
}

