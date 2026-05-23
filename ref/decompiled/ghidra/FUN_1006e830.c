/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006e830 @ 0x1006E830 */
/* Body size: 53 addresses */


int __cdecl FUN_1006e830(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 + 0x20;
  }
  return iVar1;
}

