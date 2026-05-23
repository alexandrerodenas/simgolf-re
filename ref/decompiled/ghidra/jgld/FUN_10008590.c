/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008590 @ 0x10008590 */
/* Body size: 68 addresses */


void __cdecl FUN_10008590(LPRECT param_1,RECT *param_2,RECT *param_3)

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
  IntersectRect(param_1,param_2,param_3);
  __chkesp();
  uStack_8 = 0x100085d0;
  __chkesp();
  return;
}

