/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004e91a @ 0x1004E91A */


uint __cdecl FUN_1004e91a(int param_1)

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
  
  uVar15 = (uint)DAT_100b5790;
  if (param_1 == 0) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar1 = FUN_100506bb(1,uVar15,0x15,(char *)(param_1 + 0xc));
    uVar2 = FUN_100506bb(1,uVar15,0x14,(char *)(param_1 + 0x10));
    uVar3 = FUN_100506bb(1,uVar15,0x16,(char *)(param_1 + 0x14));
    uVar4 = FUN_100506bb(1,uVar15,0x17,(char *)(param_1 + 0x18));
    uVar5 = FUN_100506bb(1,uVar15,0x18,(char *)(param_1 + 0x1c));
    FUN_1004ea3c(*(char **)(param_1 + 0x1c));
    uVar6 = FUN_100506bb(1,uVar15,0x50,(char *)(param_1 + 0x20));
    uVar7 = FUN_100506bb(1,uVar15,0x51,(char *)(param_1 + 0x24));
    uVar8 = FUN_100506bb(0,uVar15,0x1a,(char *)(param_1 + 0x28));
    uVar9 = FUN_100506bb(0,uVar15,0x19,(char *)(param_1 + 0x29));
    uVar10 = FUN_100506bb(0,uVar15,0x54,(char *)(param_1 + 0x2a));
    uVar11 = FUN_100506bb(0,uVar15,0x55,(char *)(param_1 + 0x2b));
    uVar12 = FUN_100506bb(0,uVar15,0x56,(char *)(param_1 + 0x2c));
    uVar13 = FUN_100506bb(0,uVar15,0x57,(char *)(param_1 + 0x2d));
    uVar14 = FUN_100506bb(0,uVar15,0x52,(char *)(param_1 + 0x2e));
    uVar15 = FUN_100506bb(0,uVar15,0x53,(char *)(param_1 + 0x2f));
    uVar15 = uVar15 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10
                      | uVar11 | uVar12 | uVar13 | uVar14;
  }
  return uVar15;
}

