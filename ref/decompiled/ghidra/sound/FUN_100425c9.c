/* Ghidra decompiled: sound.dll */
/* Function: FUN_100425c9 @ 0x100425C9 */


undefined4 __cdecl FUN_100425c9(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_10045226();
  pbVar1 = (byte *)FUN_10045581(DAT_100b5d3c);
  if (pbVar1 < DAT_100b5d38 + (4 - (int)DAT_100b5d3c)) {
    SVar2 = FUN_10045581(DAT_100b5d3c);
    pbVar1 = FUN_10045252(DAT_100b5d3c,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_1004263e;
    }
    DAT_100b5d38 = pbVar1 + ((int)DAT_100b5d38 - (int)DAT_100b5d3c >> 2) * 4;
    DAT_100b5d3c = pbVar1;
  }
  *(undefined4 *)DAT_100b5d38 = param_1;
  DAT_100b5d38 = DAT_100b5d38 + 4;
LAB_1004263e:
  FUN_1004522f();
  return param_1;
}

