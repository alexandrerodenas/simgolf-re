/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006e440 @ 0x1006E440 */
/* Body size: 53 addresses */


undefined1 __cdecl FUN_1006e440(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [16];
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0x1c);
  }
  return uVar1;
}

