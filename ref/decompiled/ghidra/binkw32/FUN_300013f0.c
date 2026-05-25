/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300013f0 @ 0x300013F0 */


uint __cdecl FUN_300013f0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 1;
  uVar3 = 1;
  uVar1 = 0;
  iVar4 = 0x20;
  do {
    if ((param_2 & uVar2) != 0) {
      if ((param_1 & uVar3) != 0) {
        uVar1 = uVar1 | uVar2;
      }
      uVar3 = uVar3 << 1;
    }
    uVar2 = uVar2 << 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar1;
}

