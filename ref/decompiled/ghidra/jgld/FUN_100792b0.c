/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100792b0 @ 0x100792B0 */


void __cdecl FUN_100792b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_10083010((undefined **)&DAT_101233f0,(byte *)0x1011e0cc);
                    /* WARNING: Subroutine does not return */
  _longjmp(param_1,1);
}

