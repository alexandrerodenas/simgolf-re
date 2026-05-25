/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10097c30 @ 0x10097C30 */


bool FUN_10097c30(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10098070(param_1);
  iVar3 = (*DAT_10128a0c)(iVar2,(-(uint)(DAT_101289f0 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10128a04 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_1009a140(DAT_10128a00,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_10097db0((short)iVar2);
      if (iVar3 != 0) {
        DAT_10128a04 = DAT_10128a04 | 4;
        DAT_101289ec = iVar2;
        DAT_10128a08 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10128a04 & 4) != 0);
  }
  return (bool)cVar1;
}

