/* Ghidra decompiled: golf.exe */
/* Function: FUN_004827d0 @ 0x004827D0 */
/* Body size: 367 addresses */


undefined4 __thiscall FUN_004827d0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iStack_10;
  int iStack_c;
  
  puVar3 = (ushort *)(**(code **)(**(int **)(param_4 + 4) + 0x20))();
  if (*(short *)(param_2 + 6) != 0) {
    iStack_c = (ushort)(*(short *)(param_2 + 6) - 1) + 1;
    puVar9 = (ushort *)(param_2 + 8);
    do {
      while( true ) {
        uVar2 = *puVar9;
        if ((uVar2 & 0xc000) != 0xc000) break;
        uVar5 = (int)(short)uVar2 >> 0x1f;
        puVar3 = (ushort *)
                 ((int)puVar3 +
                 (((int)(short)uVar2 ^ uVar5) - uVar5 & 0xffff) *
                 (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 8));
        puVar9 = puVar9 + 1;
      }
      puVar7 = puVar9 + 1;
      if ((uVar2 & 0x8000) == 0x8000) {
        *(byte *)((*(ushort *)(*(int *)(param_1 + 0x58) + 8) - 1) + (int)puVar3) = (byte)uVar2;
        uVar2 = puVar9[1];
        puVar7 = puVar9 + 2;
      }
      puVar9 = puVar7;
      if (uVar2 != 0) {
        iStack_10 = (uVar2 + 0xffff & 0xffff) + 1;
        puVar7 = puVar3;
        puVar8 = puVar9;
        do {
          bVar1 = *(byte *)((int)puVar8 + 1);
          puVar9 = puVar8 + 1;
          puVar6 = (ushort *)((int)puVar7 + (uint)(byte)*puVar8);
          puVar7 = puVar6;
          if ((char)bVar1 < '\0') {
            uVar2 = *puVar9;
            puVar9 = puVar8 + 2;
            uVar5 = (uint)(char)-bVar1;
            if (0 < (int)uVar5) {
              puVar7 = puVar6 + uVar5;
              for (uVar4 = uVar5 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(uint *)puVar6 = CONCAT22(uVar2,uVar2);
                puVar6 = puVar6 + 2;
              }
              for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar6 = uVar2;
                puVar6 = puVar6 + 1;
              }
            }
          }
          else if (bVar1 != 0) {
            uVar5 = (uint)(char)bVar1;
            puVar8 = puVar9;
            puVar10 = puVar6;
            for (uVar4 = (uVar5 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)puVar10 = *(undefined4 *)puVar8;
              puVar8 = puVar8 + 2;
              puVar10 = puVar10 + 2;
            }
            puVar7 = puVar6 + uVar5;
            puVar9 = puVar9 + uVar5;
            for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(byte *)puVar10 = (byte)*puVar8;
              puVar8 = (ushort *)((int)puVar8 + 1);
              puVar10 = (ushort *)((int)puVar10 + 1);
            }
          }
          iStack_10 = iStack_10 + -1;
          puVar8 = puVar9;
        } while (iStack_10 != 0);
      }
      puVar3 = (ushort *)((int)puVar3 + (uint)*(ushort *)(*(int *)(param_1 + 0x58) + 8));
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  (**(code **)(**(int **)(param_4 + 4) + 0x24))(1);
  return 0;
}

