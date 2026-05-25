/* Ghidra decompiled: sound.dll */
/* Function: FUN_10051cfd @ 0x10051CFD */


uint * __cdecl FUN_10051cfd(uint *param_1,uint param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  
  if (DAT_100b596c == 0) {
    puVar2 = FUN_10045680(param_1,(char)param_2);
  }
  else {
    FUN_10047710(0x19);
    while( true ) {
      bVar1 = (byte)*param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_100b5a80 + uVar3 + 1) & 4) == 0) {
        puVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        puVar2 = (uint *)((int)param_1 + 1);
        if (*(byte *)((int)param_1 + 1) == 0) {
          FUN_10047771(0x19);
          return (uint *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,*(byte *)((int)param_1 + 1))) {
          FUN_10047771(0x19);
          return param_1;
        }
      }
      param_1 = (uint *)((int)puVar2 + 1);
    }
    FUN_10047771(0x19);
    puVar2 = (uint *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return puVar2;
}

