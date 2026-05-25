/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002f530 @ 0x1002F530 */


bool FUN_1002f530(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  byte local_7c [120];
  
  iVar2 = FUN_1002fe90(param_1);
  iVar3 = (*DAT_10110a34)(iVar2,(-(uint)(DAT_10110a18 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10110a2c = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_10031e10(local_7c,DAT_10110a28,local_7c);
    if (uVar4 == 0) {
      iVar3 = (*DAT_10110a34)(iVar2,(-(uint)(DAT_10110a20 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10110a2c = 0;
        return true;
      }
      uVar4 = FUN_10031e10(DAT_10110a24,DAT_10110a24,local_7c);
      if (uVar4 == 0) {
        DAT_10110a2c = DAT_10110a2c | 0x304;
        DAT_10110a14 = iVar2;
        DAT_10110a30 = iVar2;
      }
      else if ((DAT_10110a2c & 2) == 0) {
        if ((DAT_10110a1c == (void *)0x0) ||
           (iVar3 = FUN_10031ee0(DAT_10110a24,(char *)local_7c,DAT_10110a1c), iVar3 != 0)) {
          if (((DAT_10110a2c & 1) == 0) && (iVar3 = FUN_1002fbd0((short)iVar2), iVar3 != 0)) {
            DAT_10110a2c = DAT_10110a2c | 1;
            DAT_10110a30 = iVar2;
          }
        }
        else {
          DAT_10110a2c = DAT_10110a2c | 2;
          DAT_10110a30 = iVar2;
          pvVar5 = (void *)_strlen((char *)DAT_10110a24);
          if (pvVar5 == DAT_10110a1c) {
            DAT_10110a14 = iVar2;
          }
        }
      }
    }
    if ((DAT_10110a2c & 0x300) != 0x300) {
      iVar3 = (*DAT_10110a34)(iVar2,(-(uint)(DAT_10110a20 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10110a2c = 0;
        return true;
      }
      uVar4 = FUN_10031e10(DAT_10110a24,DAT_10110a24,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_10110a2c | 0x200;
        if (DAT_10110a20 == 0) {
          DAT_10110a2c = uVar4;
          if ((DAT_10110a1c == (void *)0x0) ||
             (pvVar5 = (void *)_strlen((char *)DAT_10110a24), pvVar5 != DAT_10110a1c)) {
            DAT_10110a2c = DAT_10110a2c | 0x100;
            if (DAT_10110a14 == 0) {
              DAT_10110a14 = iVar2;
            }
          }
          else {
            iVar3 = FUN_1002fc20(iVar2,1);
            if ((iVar3 != 0) && (DAT_10110a2c = DAT_10110a2c | 0x100, DAT_10110a14 == 0)) {
              DAT_10110a14 = iVar2;
            }
          }
        }
        else {
          DAT_10110a2c = DAT_10110a2c | 0x300;
          if (DAT_10110a14 == 0) {
            DAT_10110a14 = iVar2;
          }
        }
      }
      else if ((((DAT_10110a20 == 0) && (DAT_10110a1c != (void *)0x0)) &&
               (iVar3 = FUN_10031ee0(DAT_10110a24,(char *)local_7c,DAT_10110a1c), iVar3 == 0)) &&
              ((iVar3 = FUN_1002fc20(iVar2,0), iVar3 != 0 &&
               (DAT_10110a2c = DAT_10110a2c | 0x100, DAT_10110a14 == 0)))) {
        DAT_10110a14 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10110a2c & 4) != 0);
  }
  return (bool)cVar1;
}

