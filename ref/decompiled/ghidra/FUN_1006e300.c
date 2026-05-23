/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006e300 @ 0x1006E300 */
/* Body size: 52 addresses */


undefined4 __cdecl FUN_1006e300(int param_1,undefined4 *param_2)

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
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  return uVar1;
}

