/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002dd80 @ 0x1002DD80 */


uint __cdecl FUN_1002dd80(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  uVar41 = (uint)DAT_10110a0e;
  uVar1 = (uint)DAT_10110a10;
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10031900(1,uVar41,0x31,param_1 + 1);
    uVar3 = FUN_10031900(1,uVar41,0x32,param_1 + 2);
    uVar4 = FUN_10031900(1,uVar41,0x33,param_1 + 3);
    uVar5 = FUN_10031900(1,uVar41,0x34,param_1 + 4);
    uVar6 = FUN_10031900(1,uVar41,0x35,param_1 + 5);
    uVar7 = FUN_10031900(1,uVar41,0x36,param_1 + 6);
    uVar8 = FUN_10031900(1,uVar41,0x37,param_1);
    uVar9 = FUN_10031900(1,uVar41,0x2a,param_1 + 8);
    uVar10 = FUN_10031900(1,uVar41,0x2b,param_1 + 9);
    uVar11 = FUN_10031900(1,uVar41,0x2c,param_1 + 10);
    uVar12 = FUN_10031900(1,uVar41,0x2d,param_1 + 0xb);
    uVar13 = FUN_10031900(1,uVar41,0x2e,param_1 + 0xc);
    uVar14 = FUN_10031900(1,uVar41,0x2f,param_1 + 0xd);
    uVar15 = FUN_10031900(1,uVar41,0x30,param_1 + 7);
    uVar16 = FUN_10031900(1,uVar41,0x44,param_1 + 0xe);
    uVar17 = FUN_10031900(1,uVar41,0x45,param_1 + 0xf);
    uVar18 = FUN_10031900(1,uVar41,0x46,param_1 + 0x10);
    uVar19 = FUN_10031900(1,uVar41,0x47,param_1 + 0x11);
    uVar20 = FUN_10031900(1,uVar41,0x48,param_1 + 0x12);
    uVar21 = FUN_10031900(1,uVar41,0x49,param_1 + 0x13);
    uVar22 = FUN_10031900(1,uVar41,0x4a,param_1 + 0x14);
    uVar23 = FUN_10031900(1,uVar41,0x4b,param_1 + 0x15);
    uVar24 = FUN_10031900(1,uVar41,0x4c,param_1 + 0x16);
    uVar25 = FUN_10031900(1,uVar41,0x4d,param_1 + 0x17);
    uVar26 = FUN_10031900(1,uVar41,0x4e,param_1 + 0x18);
    uVar27 = FUN_10031900(1,uVar41,0x4f,param_1 + 0x19);
    uVar28 = FUN_10031900(1,uVar41,0x38,param_1 + 0x1a);
    uVar29 = FUN_10031900(1,uVar41,0x39,param_1 + 0x1b);
    uVar30 = FUN_10031900(1,uVar41,0x3a,param_1 + 0x1c);
    uVar31 = FUN_10031900(1,uVar41,0x3b,param_1 + 0x1d);
    uVar32 = FUN_10031900(1,uVar41,0x3c,param_1 + 0x1e);
    uVar33 = FUN_10031900(1,uVar41,0x3d,param_1 + 0x1f);
    uVar34 = FUN_10031900(1,uVar41,0x3e,param_1 + 0x20);
    uVar35 = FUN_10031900(1,uVar41,0x3f,param_1 + 0x21);
    uVar36 = FUN_10031900(1,uVar41,0x40,param_1 + 0x22);
    uVar37 = FUN_10031900(1,uVar41,0x41,param_1 + 0x23);
    uVar38 = FUN_10031900(1,uVar41,0x42,param_1 + 0x24);
    uVar39 = FUN_10031900(1,uVar41,0x43,param_1 + 0x25);
    uVar40 = FUN_10031900(1,uVar41,0x28,param_1 + 0x26);
    uVar41 = FUN_10031900(1,uVar41,0x29,param_1 + 0x27);
    uVar42 = FUN_10031900(1,uVar1,0x1f,param_1 + 0x28);
    uVar43 = FUN_10031900(1,uVar1,0x20,param_1 + 0x29);
    uVar1 = FUN_10031900(1,uVar1,0x1003,param_1 + 0x2a);
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
            uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31
            | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 |
            uVar41 | uVar42 | uVar43 | uVar1;
  }
  return uVar1;
}

