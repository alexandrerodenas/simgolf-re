/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002f8e0 @ 0x1002F8E0 */


bool FUN_1002f8e0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char local_7c [120];
  
  iVar2 = FUN_1002fe90(param_1);
  iVar3 = (*DAT_10110a34)(iVar2,(-(uint)(DAT_10110a20 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10110a2c = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_10031e10(local_7c,DAT_10110a24,(byte *)local_7c);
    if (uVar4 == 0) {
      if ((DAT_10110a20 != 0) || (iVar3 = FUN_1002fc20(iVar2,1), iVar3 != 0)) {
        DAT_10110a2c = DAT_10110a2c | 4;
        DAT_10110a14 = iVar2;
        DAT_10110a30 = iVar2;
      }
    }
    else if ((((DAT_10110a20 == 0) && (DAT_10110a1c != (void *)0x0)) &&
             (iVar3 = FUN_10031ee0(DAT_10110a24,local_7c,DAT_10110a1c), iVar3 == 0)) &&
            (iVar3 = FUN_1002fc20(iVar2,0), iVar3 != 0)) {
      DAT_10110a2c = DAT_10110a2c | 4;
      DAT_10110a14 = iVar2;
      DAT_10110a30 = iVar2;
    }
    cVar1 = '\x01' - ((DAT_10110a2c & 4) != 0);
  }
  return (bool)cVar1;
}

