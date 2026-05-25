/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004ba07 @ 0x1004BA07 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1004ba07(void)

{
  undefined4 in_stack_ffffffd8;
  undefined2 uVar1;
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar1 = (undefined2)((uint)in_stack_ffffffd8 >> 0x10);
  FUN_1004ba6b(&local_10,(uint *)&stack0x00000004);
  _DAT_10057f78 = FUN_1004ea7f(local_10,uStack_c,CONCAT22(uVar1,uStack_8),0x11,0,&DAT_10057f50);
  _DAT_10057f70 = (int)DAT_10057f52;
  _DAT_10057f74 = (int)DAT_10057f50;
  _DAT_10057f7c = &DAT_10057f54;
  return &DAT_10057f70;
}

