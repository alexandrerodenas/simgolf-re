/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10017ad0 @ 0x10017AD0 */
/* Body size: 116 addresses */


undefined4 FUN_10017ad0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  FUN_100173d0(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_10063e5c & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_1001a320(0,0,0,0,&DAT_1005f5ac);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_100176b0((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}

