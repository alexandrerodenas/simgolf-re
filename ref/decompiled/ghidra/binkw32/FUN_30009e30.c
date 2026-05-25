/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30009e30 @ 0x30009E30 */


void __cdecl
FUN_30009e30(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5,
            int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_3 + (param_4 >> 3) * param_6;
  uVar1 = iVar2 - 1;
  if (uVar1 < 0x81) {
    uVar1 = (uint)(byte)(&DAT_30038087)[iVar2];
  }
  else if (uVar1 < 0x800) {
    if (uVar1 < 0x200) {
      uVar1 = 9 - (uVar1 < 0x100);
    }
    else {
      uVar1 = 0xb - (uVar1 < 0x400);
    }
  }
  else if (uVar1 < 0x2000) {
    uVar1 = 0xd - (uVar1 < 0x1000);
  }
  else {
    uVar1 = 0xf - (uVar1 < 0x4000);
  }
  param_2[10] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = param_5;
  if (param_7 != 0) {
    param_2[0xb] = param_1;
    param_2[3] = 1 << ((char)param_5 - 1U & 0x1f);
    return;
  }
  param_2[3] = 0;
  param_2[0xb] = param_1;
  return;
}

