/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007bc0 @ 0x30007BC0 */


void __cdecl FUN_30007bc0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined4 **ppuVar8;
  undefined1 *puVar9;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  puVar2 = param_1;
  while( true ) {
    puVar9 = local_8;
    ppuVar8 = &param_1;
    puVar7 = local_c;
    puVar6 = (uint *)puVar2[1];
    iVar3 = (**(code **)(*(int *)*puVar2 + 0x2c))
                      ((int *)*puVar2,0,puVar6,puVar7,ppuVar8,local_4,puVar9,0);
    if (iVar3 != -0x7787ff6a) break;
    Sleep(10);
    (**(code **)(*(int *)*puVar2 + 0x50))((int *)*puVar2);
  }
  if ((iVar3 == 0) && (puVar9 == (undefined1 *)puVar2[1])) {
    bVar1 = -(puVar2[5] != 0x10);
    puVar5 = puVar6;
    for (uVar4 = (uint)puVar9 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1)) & 0x80808080;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = (uint)puVar9 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar5 = bVar1 & 0x80;
      puVar5 = (uint *)((int)puVar5 + 1);
    }
    (**(code **)(*(int *)*puVar2 + 0x4c))((int *)*puVar2,puVar6,puVar9,ppuVar8,puVar7);
  }
  return;
}

