/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003c1d0 @ 0x1003C1D0 */


void __cdecl
FUN_1003c1d0(int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

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
  FUN_1003bf30(1,param_1,param_2,param_3,param_4,param_5,0);
  uStack_8 = 0x1003c215;
  FUN_100431ce();
  return;
}

