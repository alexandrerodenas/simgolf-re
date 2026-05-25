/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004d70b @ 0x1004D70B */


uint __thiscall FUN_1004d70b(void *this,undefined4 *param_1,int *param_2,byte *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ushort local_10 [6];
  
  uVar1 = FUN_1004d23a(this,local_10,param_2,param_3,param_4,0,0,0);
  iVar2 = FUN_10049d85(local_10,param_1);
  if (iVar2 == 1) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}

