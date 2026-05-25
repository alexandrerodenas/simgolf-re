/* Ghidra decompiled: sound.dll */
/* Function: FUN_10021240 @ 0x10021240 */


uint FUN_10021240(byte *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  DAT_100b4ff0 = DAT_100b4fe8;
  uVar4 = 0;
  if (DAT_100b4fe8 != 0) {
    puVar2 = *(undefined4 **)(DAT_100b4fe8 + 8);
    while (uVar4 = 0, puVar2 != (undefined4 *)0x0) {
      pbVar3 = (byte *)*puVar2;
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_1002128c:
          uVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10021291;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_1002128c;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_10021291:
      if (uVar4 == 0) {
        DAT_100b4ff0 = DAT_100b4ff0;
        return 1;
      }
      DAT_100b4ff0 = *(int *)(DAT_100b4ff0 + 4);
      if (DAT_100b4ff0 == 0) break;
      puVar2 = *(undefined4 **)(DAT_100b4ff0 + 8);
    }
  }
  return uVar4 & 0xffffff00;
}

