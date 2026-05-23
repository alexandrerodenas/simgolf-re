/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002fa50 @ 0x1002FA50 */
/* Body size: 172 addresses */


bool FUN_1002fa50(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_7c [120];
  
  iVar2 = FUN_1002fe90(param_1);
  iVar3 = (*DAT_10110a34)(iVar2,(-(uint)(DAT_10110a18 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10110a2c = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_10031e10(local_7c,DAT_10110a28,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_1002fbd0((short)iVar2);
      if (iVar3 != 0) {
        DAT_10110a2c = DAT_10110a2c | 4;
        DAT_10110a14 = iVar2;
        DAT_10110a30 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10110a2c & 4) != 0);
  }
  return (bool)cVar1;
}

