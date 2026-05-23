/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10097710 @ 0x10097710 */
/* Body size: 804 addresses */


bool FUN_10097710(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
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
      iVar3 = (*DAT_10128a0c)(iVar2,(-(uint)(DAT_101289f8 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10128a04 = 0;
        return true;
      }
      uVar4 = FUN_1009a140(DAT_101289fc,local_7c);
      if (uVar4 == 0) {
        DAT_10128a04 = DAT_10128a04 | 0x304;
        DAT_101289ec = iVar2;
        DAT_10128a08 = iVar2;
      }
      else if ((DAT_10128a04 & 2) == 0) {
        if ((DAT_101289f4 == 0) ||
           (iVar3 = FUN_1009a210(DAT_101289fc,(char *)local_7c,DAT_101289f4), iVar3 != 0)) {
          if (((DAT_10128a04 & 1) == 0) && (iVar3 = FUN_10097db0((short)iVar2), iVar3 != 0)) {
            DAT_10128a04 = DAT_10128a04 | 1;
            DAT_10128a08 = iVar2;
          }
        }
        else {
          DAT_10128a04 = DAT_10128a04 | 2;
          DAT_10128a08 = iVar2;
          sVar5 = _strlen((char *)DAT_101289fc);
          if (sVar5 == DAT_101289f4) {
            DAT_101289ec = iVar2;
          }
        }
      }
    }
    if ((DAT_10128a04 & 0x300) != 0x300) {
      iVar3 = (*DAT_10128a0c)(iVar2,(-(uint)(DAT_101289f8 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10128a04 = 0;
        return true;
      }
      uVar4 = FUN_1009a140(DAT_101289fc,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_10128a04 | 0x200;
        if (DAT_101289f8 == 0) {
          DAT_10128a04 = uVar4;
          if ((DAT_101289f4 == 0) || (sVar5 = _strlen((char *)DAT_101289fc), sVar5 != DAT_101289f4))
          {
            DAT_10128a04 = DAT_10128a04 | 0x100;
            if (DAT_101289ec == 0) {
              DAT_101289ec = iVar2;
            }
          }
          else {
            iVar3 = FUN_10097e00(iVar2,1);
            if ((iVar3 != 0) && (DAT_10128a04 = DAT_10128a04 | 0x100, DAT_101289ec == 0)) {
              DAT_101289ec = iVar2;
            }
          }
        }
        else {
          DAT_10128a04 = DAT_10128a04 | 0x300;
          if (DAT_101289ec == 0) {
            DAT_101289ec = iVar2;
          }
        }
      }
      else if ((((DAT_101289f8 == 0) && (DAT_101289f4 != 0)) &&
               (iVar3 = FUN_1009a210(DAT_101289fc,(char *)local_7c,DAT_101289f4), iVar3 == 0)) &&
              ((iVar3 = FUN_10097e00(iVar2,0), iVar3 != 0 &&
               (DAT_10128a04 = DAT_10128a04 | 0x100, DAT_101289ec == 0)))) {
        DAT_101289ec = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10128a04 & 4) != 0);
  }
  return (bool)cVar1;
}

