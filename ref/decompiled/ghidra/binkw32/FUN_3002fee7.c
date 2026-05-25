/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002fee7 @ 0x3002FEE7 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_3002fee7(void)

{
  undefined4 in_stack_ffffffd8;
  undefined2 uVar1;
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar1 = (undefined2)((uint)in_stack_ffffffd8 >> 0x10);
  FUN_3002ff4b(&local_10,(uint *)&stack0x00000004);
  _DAT_3004f3c8 = FUN_300320b5(local_10,uStack_c,CONCAT22(uVar1,uStack_8),0x11,0,&DAT_3004f3a0);
  _DAT_3004f3c0 = (int)DAT_3004f3a2;
  _DAT_3004f3c4 = (int)DAT_3004f3a0;
  _DAT_3004f3cc = &DAT_3004f3a4;
  return &DAT_3004f3c0;
}

