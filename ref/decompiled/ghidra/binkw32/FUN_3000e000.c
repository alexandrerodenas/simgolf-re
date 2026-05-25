/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000e000 @ 0x3000E000 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_3000e000(uint param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  DAT_30048900 = 0;
  DAT_300458d4 = *param_2;
  if ((param_1 & 0x10000) == 0) {
    if (DAT_3004f1d4 != 0) {
      DAT_3004f1d4 = 0;
      iVar2 = 0x800;
      puVar3 = &DAT_30049118;
      puVar4 = &DAT_30045ce8;
      goto LAB_3000e0e4;
    }
  }
  else if (DAT_3004f1d4 != 1) {
    DAT_3004f1d4 = 1;
    puVar3 = &DAT_30049118;
    puVar4 = &DAT_300468e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_30049918;
    puVar4 = &DAT_300460e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_30049518;
    puVar4 = &DAT_300464e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_30049d18;
    puVar4 = &DAT_30045ce8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_3004a118;
    puVar4 = &DAT_300478e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_3004a918;
    puVar4 = &DAT_300470e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = &DAT_3004a518;
    puVar4 = &DAT_300474e8;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 0x100;
    puVar3 = &DAT_3004ad18;
    puVar4 = &DAT_30046ce8;
LAB_3000e0e4:
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if ((DAT_30041c30 == 0) || ((param_1 & 0x40000) != 0)) {
    uVar1 = param_1 & 0x70000000;
    if (uVar1 == 0x10000000) {
      FUN_3000e770(*param_5 * param_3);
      iVar2 = *param_2;
      *param_2 = iVar2 * 2;
      *param_6 = iVar2 * 2 - *param_5 * param_3;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x23;
        FUN_3000e7d0((uint *)(param_5 + 0x1b),param_4);
        DAT_3004b534 = param_5[0x33];
        DAT_3004d578 = param_5[0x34];
        DAT_3004910c = param_5[6];
        DAT_3004b52c = param_5[6];
        _DAT_30049110 = param_5[5];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x21;
      FUN_3000e7d0((uint *)(param_5 + 0x19),param_4);
      DAT_3004b534 = param_5[0x31];
      DAT_3004d578 = param_5[0x32];
      DAT_3004910c = param_5[2];
      DAT_3004b52c = param_5[4];
      uVar1 = param_5[1];
      _DAT_30049110 = param_5[3];
      if (uVar1 <= _DAT_30049110) goto LAB_3000e751;
    }
    else if ((uVar1 == 0x30000000) || (uVar1 == 0x50000000)) {
      *param_6 = *param_2 + *param_5 * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x27;
        DAT_3004b534 = param_5[0x2f];
        DAT_3004d578 = param_5[0x30];
        DAT_300488f8 = param_5[0xc];
        DAT_30049114 = param_5[0xc];
        _DAT_30049110 = param_5[0xb];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x25;
      DAT_3004b534 = param_5[0x2d];
      DAT_3004d578 = param_5[0x2e];
      DAT_300488f8 = param_5[8];
      DAT_30049114 = param_5[10];
      _DAT_30049110 = param_5[7];
      uVar1 = param_5[9];
      if (uVar1 < _DAT_30049110) goto LAB_3000e751;
    }
    else if (uVar1 == 0x40000000) {
      FUN_3000e770(*param_5 * param_3 * 2);
      iVar2 = *param_2;
      *param_2 = iVar2 * 2;
      *param_6 = iVar2 * 2 + *param_5 * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x27;
        FUN_3000e7d0((uint *)(param_5 + 0x1f),param_4);
        DAT_3004b534 = param_5[0x37];
        DAT_3004d578 = param_5[0x38];
        DAT_3004910c = param_5[0xc];
        DAT_3004b52c = param_5[0xc];
        _DAT_30049110 = param_5[0xb];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x25;
      FUN_3000e7d0((uint *)(param_5 + 0x1d),param_4);
      DAT_3004b534 = param_5[0x35];
      DAT_3004d578 = param_5[0x36];
      DAT_3004910c = param_5[8];
      DAT_3004b52c = param_5[10];
      uVar1 = param_5[7];
      _DAT_30049110 = param_5[9];
      if (uVar1 <= _DAT_30049110) goto LAB_3000e751;
    }
    else {
      *param_6 = *param_2 - *param_5 * param_3;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x23;
        DAT_3004b534 = param_5[0x2b];
        DAT_3004d578 = param_5[0x2c];
        DAT_300488f8 = param_5[6];
        DAT_30049114 = param_5[6];
        _DAT_30049110 = param_5[5];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x21;
      DAT_3004b534 = param_5[0x29];
      DAT_3004d578 = param_5[0x2a];
      DAT_300488f8 = param_5[2];
      DAT_30049114 = param_5[4];
      _DAT_30049110 = param_5[1];
      uVar1 = param_5[3];
      if (uVar1 < _DAT_30049110) goto LAB_3000e751;
    }
  }
  else {
    uVar1 = param_1 & 0x70000000;
    if (uVar1 == 0x10000000) {
      FUN_3000e770(*param_5 * param_3);
      iVar2 = *param_2;
      *param_2 = iVar2 * 2;
      *param_6 = iVar2 * 2 - *param_5 * param_3;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x24;
        FUN_3000e7d0((uint *)(param_5 + 0x1c),param_4);
        DAT_3004b534 = param_5[0x33];
        DAT_3004d578 = param_5[0x34];
        DAT_3004910c = param_5[0x12];
        DAT_3004b52c = param_5[0x12];
        _DAT_30049110 = param_5[0x11];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x22;
      FUN_3000e7d0((uint *)(param_5 + 0x1a),param_4);
      DAT_3004b534 = param_5[0x31];
      DAT_3004d578 = param_5[0x32];
      DAT_3004910c = param_5[0xe];
      DAT_3004b52c = param_5[0x10];
      uVar1 = param_5[0xd];
      _DAT_30049110 = param_5[0xf];
      if (uVar1 <= _DAT_30049110) goto LAB_3000e751;
    }
    else if ((uVar1 == 0x30000000) || (uVar1 == 0x50000000)) {
      *param_6 = *param_2 + *param_5 * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x28;
        DAT_3004b534 = param_5[0x2f];
        DAT_3004d578 = param_5[0x30];
        DAT_300488f8 = param_5[0x18];
        DAT_30049114 = param_5[0x18];
        _DAT_30049110 = param_5[0x17];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x26;
      DAT_3004b534 = param_5[0x2d];
      DAT_3004d578 = param_5[0x2e];
      DAT_300488f8 = param_5[0x14];
      DAT_30049114 = param_5[0x16];
      _DAT_30049110 = param_5[0x13];
      uVar1 = param_5[0x15];
      if (uVar1 < _DAT_30049110) goto LAB_3000e751;
    }
    else if (uVar1 == 0x40000000) {
      FUN_3000e770(*param_5 * param_3 * 2);
      iVar2 = *param_2;
      *param_2 = iVar2 * 2;
      *param_6 = iVar2 * 2 + *param_5 * param_3 * -2;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x28;
        FUN_3000e7d0((uint *)(param_5 + 0x20),param_4);
        DAT_3004b534 = param_5[0x37];
        DAT_3004d578 = param_5[0x38];
        DAT_3004910c = param_5[0x18];
        DAT_3004b52c = param_5[0x18];
        _DAT_30049110 = param_5[0x17];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x26;
      FUN_3000e7d0((uint *)(param_5 + 0x1e),param_4);
      DAT_3004b534 = param_5[0x35];
      DAT_3004d578 = param_5[0x36];
      DAT_3004910c = param_5[0x14];
      DAT_3004b52c = param_5[0x16];
      uVar1 = param_5[0x13];
      _DAT_30049110 = param_5[0x15];
      if (uVar1 <= _DAT_30049110) goto LAB_3000e751;
    }
    else {
      *param_6 = *param_2 - *param_5 * param_3;
      if ((param_1 & 0x20000) != 0) {
        DAT_30044064 = param_5 + 0x24;
        DAT_3004b534 = param_5[0x2b];
        DAT_3004d578 = param_5[0x2c];
        DAT_300488f8 = param_5[0x12];
        DAT_30049114 = param_5[0x12];
        _DAT_30049110 = param_5[0x11];
        goto LAB_3000e751;
      }
      DAT_30044064 = param_5 + 0x22;
      DAT_3004b534 = param_5[0x29];
      DAT_3004d578 = param_5[0x2a];
      DAT_300488f8 = param_5[0xe];
      DAT_30049114 = param_5[0x10];
      _DAT_30049110 = param_5[0xd];
      uVar1 = param_5[0xf];
      if (uVar1 < _DAT_30049110) goto LAB_3000e751;
    }
  }
  _DAT_30049110 = uVar1;
LAB_3000e751:
  _DAT_30044c78 = 1 << ((byte)_DAT_30049110 & 0x1f);
  DAT_300488fc = _DAT_30044c78 + -1;
  return;
}

