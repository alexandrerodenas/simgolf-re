/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001a4c0 @ 0x3001A4C0 */


void __cdecl FUN_3001a4c0(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0x80) {
    iVar1 = param_4 + -0x20 + param_3 * 4;
    FUN_3001a560(param_2,iVar1);
    iVar2 = param_4 + -0x80 + param_3 * 4;
    FUN_3001ab60(param_2 + 0x20,iVar2);
    FUN_3001a560(param_2 + 0x40,iVar1);
    FUN_3001ab60(param_2 + 0x60,iVar2);
    return;
  }
  iVar1 = param_4 + -0x40 + param_3 * 4;
  FUN_3001b260(param_2,iVar1);
  FUN_3001b490(param_2 + 0x10,iVar1);
  FUN_3001b260(param_2 + 0x20,iVar1);
  FUN_3001b490(param_2 + 0x30,iVar1);
  return;
}

