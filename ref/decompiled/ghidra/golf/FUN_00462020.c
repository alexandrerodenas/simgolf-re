/* Ghidra decompiled: golf.exe */
/* Function: FUN_00462020 @ 0x00462020 */
/* Body size: 1963 addresses */


void FUN_00462020(uint param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_360;
  undefined1 *puStack_35c;
  int iStack_358;
  undefined4 uStack_354;
  uint *puStack_350;
  undefined4 uStack_34c;
  int iStack_348;
  int *piStack_344;
  int iStack_340;
  int iStack_33c;
  undefined1 *puStack_338;
  undefined4 uStack_334;
  uint uStack_330;
  uint local_31c;
  uint local_318;
  uint local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  undefined1 local_300 [36];
  undefined1 auStack_2dc [48];
  undefined1 auStack_2ac [48];
  undefined1 auStack_27c [12];
  undefined1 auStack_270 [36];
  undefined1 auStack_24c [18];
  undefined1 auStack_23a [63];
  undefined1 auStack_1fb [33];
  undefined1 auStack_1da [18];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [432];
  
  local_308 = 0;
  local_304 = 1;
  if ((int)param_1 < 0x9c) {
    uStack_330 = param_1;
    uStack_334 = 0x462050;
    local_304 = FUN_0046c940();
    if (param_1 == 0xff) {
      param_1 = 0;
    }
    uVar4 = (uint)(short)(&DAT_0057956e)[param_1 * 0x80];
    local_310 = (int)uVar4 % 10;
    local_31c = (int)(uVar4 * 3) % 10;
    cVar1 = (&DAT_004d60aa)[uVar4 * 0x230];
    if (cVar1 < '\x13') {
      if (local_304 == 0) {
        local_318 = (uint)(char)(&DAT_004d5b38)[cVar1 * 0x44];
      }
      else {
        local_318 = (uint)(char)(&DAT_004d55e8)[cVar1 * 0x44];
      }
    }
    else {
      local_318 = uVar4 & 0x80000003;
      if ((int)local_318 < 0) {
        local_318 = (local_318 - 1 | 0xfffffffc) + 1;
      }
    }
    uVar5 = local_31c;
    if (((&DAT_005794d1)[param_1 * 0x100] & 4) == 0) {
      uVar5 = (-(uint)(local_304 != 0) & 0xfffffff7) + 9;
    }
    local_314 = local_318;
    if (((&DAT_005794d1)[param_1 * 0x100] & 2) != 0) {
      local_314 = 4;
    }
    if (local_304 == 0) {
      local_31c = (int)(uVar4 * 2) % 3 + 1;
    }
  }
  else {
    local_308 = 1;
    uVar5 = 1;
  }
  if ((int)param_1 < 0x9c) {
    sVar2 = (&DAT_0057956e)[param_1 * 0x80];
    iVar6 = sVar2 * 0x230;
    uStack_334 = 0x46247a;
    uStack_330 = param_1;
    iVar3 = FUN_0046c940();
    cVar1 = (&DAT_004d55eb)
            [((-(uint)(iVar3 != 0) & 0xffffffec) + 0x14 + (int)(char)(&DAT_004d60aa)[iVar6]) * 0x44]
    ;
    if ((&DAT_004d60b4)[sVar2 * 0x8c] != 0) {
      local_31c._0_1_ = (&DAT_004d60ac)[iVar6];
      local_310 = (int)(char)(&DAT_004d60ad)[iVar6];
      local_318 = (uint)(char)(&DAT_004d60af)[iVar6];
      local_314 = (uint)(char)(&DAT_004d60ae)[iVar6];
      uVar5 = (byte)(&DAT_004d60ab)[iVar6] & 0xf;
      cVar1 = (&DAT_004d60b0)[iVar6];
    }
    local_30c = (int)cVar1;
    if ((&DAT_005794d0)[param_1 * 0x100] == ' ') {
      local_314 = 4;
      local_304 = 1;
      iVar3 = (uint)(byte)(&DAT_00579573)[param_1 * 0x100] * 0x38;
      uVar5 = (uint)(char)(&DAT_0058dd72)[iVar3];
      local_318 = (uint)(char)(&DAT_0058dd71)[iVar3];
      local_31c._0_1_ = (&DAT_0058dd73)[iVar3];
      local_310 = (int)(char)(&DAT_0058dd74)[iVar3];
    }
    if (local_308 == 0) {
      (&DAT_004d60ab)[iVar6] = (&DAT_004d60ab)[iVar6] & 0xf0 | (byte)uVar5;
      (&DAT_004d60ac)[iVar6] = (undefined1)local_31c;
      (&DAT_004d60ad)[iVar6] = (undefined1)local_310;
      (&DAT_004d60af)[iVar6] = (undefined1)local_318;
      (&DAT_004d60ae)[iVar6] = (undefined1)local_314;
      (&DAT_004d60b0)[iVar6] = cVar1;
    }
    if (local_304 == 0) {
      local_318 = local_318 + 0x8b;
      local_310 = local_310 + 0x8b;
      local_30c = local_30c + 0x8b;
      uVar5 = uVar5 + 0x8b;
      local_314 = local_314 + 0x8b;
      if (DAT_0081fa34 != (int *)0x0) {
        uStack_330 = 0x78;
        puStack_338 = local_300;
        uStack_334 = 0;
        iStack_33c = 0x4625e9;
        (**(code **)(*DAT_0081fa34 + 0x10))();
      }
      if (DAT_0081ca14 == (int *)0x0) {
        uStack_330 = 0x462600;
        (*(code *)*DAT_0081ca10)();
      }
      uStack_330 = 0x78;
      puStack_338 = local_300;
      uStack_334 = 0;
      iStack_33c = 0x462614;
      (**(code **)(*DAT_0081ca14 + 0x14))();
      goto LAB_004621bf;
    }
  }
  else {
    local_308 = 1;
    local_314 = 4;
    local_304 = 1;
    iVar3 = param_1 * 0x25;
    local_318 = (uint)(char)(&DAT_0055c0cd)[iVar3];
    uVar5 = (int)(char)(&DAT_0055c0ce)[iVar3] + 5;
    local_310 = (int)(char)(&DAT_0055c0d0)[iVar3];
  }
  if (DAT_0081ca6c != (int *)0x0) {
    uStack_330 = 0x78;
    puStack_338 = local_300;
    uStack_334 = 0;
    iStack_33c = 0x462195;
    (**(code **)(*DAT_0081ca6c + 0x10))();
  }
  if (DAT_0081ca14 == (int *)0x0) {
    uStack_330 = 0x4621ab;
    (*(code *)*DAT_0081ca10)();
  }
  uStack_330 = 0x78;
  puStack_338 = local_300;
  uStack_334 = 0;
  iStack_33c = 0x4621bf;
  (**(code **)(*DAT_0081ca14 + 0x14))();
LAB_004621bf:
  if ((&DAT_0081ca6c)[unaff_ESI * 0x16] != (int *)0x0) {
    iStack_33c = 0x14;
    piStack_344 = &local_30c;
    iStack_340 = 0;
    iStack_348 = 0x4621e6;
    (**(code **)(*(&DAT_0081ca6c)[unaff_ESI * 0x16] + 0x10))();
  }
  if (DAT_0081ca14 == (int *)0x0) {
    iStack_33c = 0x4621fd;
    (*(code *)*DAT_0081ca10)();
  }
  iStack_33c = 0x14;
  piStack_344 = &local_30c;
  iStack_340 = 0;
  iStack_348 = 0x462211;
  (**(code **)(*DAT_0081ca14 + 0x14))();
  if ((&DAT_0081ca6c)[unaff_ESI * 0xf2] != (int *)0x0) {
    iStack_348 = 0x28;
    puStack_350 = &local_318;
    uStack_34c = 0;
    uStack_354 = 0x462234;
    (**(code **)(*(&DAT_0081ca6c)[unaff_ESI * 0xf2] + 0x10))();
  }
  if (DAT_0081ca14 == (int *)0x0) {
    iStack_348 = 0x46224b;
    (*(code *)*DAT_0081ca10)();
  }
  iStack_348 = 0x14;
  puStack_350 = (uint *)auStack_2dc;
  uStack_34c = 0x14;
  uStack_354 = 0x46225f;
  (**(code **)(*DAT_0081ca14 + 0x14))();
  iVar3 = iStack_33c;
  if ((&DAT_0081ca6c)[iStack_33c * 0x16] != (int *)0x0) {
    uStack_354 = 0x3c;
    puStack_35c = &stack0xfffffcdc;
    iStack_358 = 0;
    uStack_360 = 0x462282;
    (**(code **)(*(&DAT_0081ca6c)[iStack_33c * 0x16] + 0x10))();
  }
  if (DAT_0081ca14 == (int *)0x0) {
    uStack_354 = 0x462299;
    (*(code *)*DAT_0081ca10)();
  }
  uStack_354 = 0x14;
  puStack_35c = auStack_2ac;
  iStack_358 = 0x28;
  uStack_360 = 0x4622b0;
  (**(code **)(*DAT_0081ca14 + 0x14))();
  if ((&DAT_0081ca6c)[uVar5 * 0x16] != (int *)0x0) {
    uStack_360 = 0x50;
    (**(code **)(*(&DAT_0081ca6c)[uVar5 * 0x16] + 0x10))(&uStack_330,0);
  }
  if (DAT_0081ca14 == (int *)0x0) {
    uStack_360 = 0x4622ed;
    (*(code *)*DAT_0081ca10)();
  }
  uStack_360 = 0x14;
  puVar8 = auStack_27c;
  (**(code **)(*DAT_0081ca14 + 0x14))(puVar8,0x3c);
  if (iStack_340 == 0) {
    if ((&DAT_0081ca6c)[iStack_348 * 0x16] != (int *)0x0) {
      (**(code **)(*(&DAT_0081ca6c)[iStack_348 * 0x16] + 0x10))(&iStack_33c,0,0x5a);
    }
    if (DAT_0081ca14 == (int *)0x0) {
      (*(code *)*DAT_0081ca10)();
    }
    (**(code **)(*DAT_0081ca14 + 0x14))(auStack_24c,0x50,10);
    if ((&DAT_0081ca6c)[(int)puStack_35c * 0x16] != (int *)0x0) {
      (**(code **)(*(&DAT_0081ca6c)[(int)puStack_35c * 0x16] + 0x10))(&iStack_348,0,100);
    }
    if (DAT_0081ca14 == (int *)0x0) {
      (*(code *)*DAT_0081ca10)();
    }
    (**(code **)(*DAT_0081ca14 + 0x14))(auStack_23a,0x5a,7);
    if ((&DAT_0081fa34)[(param_1 & 1) * 0x16] != (int *)0x0) {
      (**(code **)(*(&DAT_0081fa34)[(param_1 & 1) * 0x16] + 0x10))(&uStack_360,0,0xac);
    }
  }
  else {
    if ((&DAT_0081ca6c)[iStack_358 * 2] != (int *)0x0) {
      (**(code **)(*(&DAT_0081ca6c)[iStack_358 * 2] + 0x10))(&iStack_33c,0,0x79);
    }
    if (DAT_0081ca14 == (int *)0x0) {
      (*(code *)*DAT_0081ca10)();
    }
    puVar7 = auStack_1fb;
    (**(code **)(*DAT_0081ca14 + 0x14))(puVar7,0x6b,0xf);
    if ((&DAT_0081ca6c)[unaff_ESI * 0xf2] != (int *)0x0) {
      (**(code **)(*(&DAT_0081ca6c)[unaff_ESI * 0xf2] + 0x10))(&iStack_348,0,0x83);
    }
    if (DAT_0081ca14 == (int *)0x0) {
      (*(code *)*DAT_0081ca10)();
    }
    (**(code **)(*DAT_0081ca14 + 0x14))(auStack_1da,0x7a,10);
    if ((&DAT_0081ca6c)[iVar3 * 0x16] != (int *)0x0) {
      (**(code **)(*(&DAT_0081ca6c)[iVar3 * 0x16] + 0x10))(&uStack_354,0,0x88);
    }
    if (DAT_0081ca14 == (int *)0x0) {
      (*(code *)*DAT_0081ca10)();
    }
    (**(code **)(*DAT_0081ca14 + 0x14))(auStack_1c8,0x84,0x32);
    if (puVar8 == (undefined1 *)0x0) {
      if ((&DAT_0081ca6c)[(int)puVar7 * 0x16] != (int *)0x0) {
        (**(code **)(*(&DAT_0081ca6c)[(int)puVar7 * 0x16] + 0x10))(&uStack_360,0,0x5a);
      }
      if (DAT_0081ca14 == (int *)0x0) {
        (*(code *)*DAT_0081ca10)();
      }
      (**(code **)(*DAT_0081ca14 + 0x14))(auStack_270,0x50,7);
    }
  }
  if (((-1 < (int)param_1) && ((int)param_1 < 0x98)) &&
     (3 < (*(byte *)((int)&DAT_005849e0 + (short)(&DAT_0057956e)[param_1 * 0x80] * 0x2c + 2) & 7)))
  {
    if (DAT_0081fa8c != (int *)0x0) {
      (**(code **)(*DAT_0081fa8c + 0x10))(&uStack_360,0,0xac);
    }
    if (DAT_0081ca14 == (int *)0x0) {
      (*(code *)*DAT_0081ca10)();
    }
    (**(code **)(*DAT_0081ca14 + 0x14))(auStack_1b0,0x90,0x1c);
    return;
  }
  if (DAT_0081fa34 != (int *)0x0) {
    (**(code **)(*DAT_0081fa34 + 0x10))(&uStack_360,0,0xac);
  }
  if (DAT_0081ca14 == (int *)0x0) {
    (*(code *)*DAT_0081ca10)();
  }
  (**(code **)(*DAT_0081ca14 + 0x14))(auStack_1b0,0x90,0x1c);
  return;
}

