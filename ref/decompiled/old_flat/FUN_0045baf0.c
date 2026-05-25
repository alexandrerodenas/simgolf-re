/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045baf0 @ 0x0045BAF0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0045baf0(void)

{
  int iVar1;
  HINSTANCE pHVar2;
  HANDLE lParam;
  HANDLE lParam_00;
  HWND pHVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPCSTR pCVar6;
  UINT UVar7;
  int iVar8;
  WPARAM WVar9;
  UINT UVar10;
  
  DAT_00822c8c = 800;
  DAT_00822c90 = 600;
  iVar1 = FUN_004855b0(s_jgld_dll_004d3904,s_Sid_Meier_s_SimGolf_004d3910,0xffffffff);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*DAT_0083ad50 + 0x58))(DAT_00822c8c,DAT_00822c90,0x10), iVar1 == 0)) {
    UVar10 = 0;
    iVar8 = 0x20;
    iVar1 = 0x20;
    UVar7 = 1;
    pCVar6 = (LPCSTR)0x66;
    pHVar2 = (HINSTANCE)(**(code **)(*DAT_0083ad50 + 0x24))();
    lParam = LoadImageA(pHVar2,pCVar6,UVar7,iVar1,iVar8,UVar10);
    UVar10 = 0;
    iVar8 = 0x10;
    iVar1 = 0x10;
    UVar7 = 1;
    pCVar6 = (LPCSTR)0x66;
    pHVar2 = (HINSTANCE)(**(code **)(*DAT_0083ad50 + 0x24))();
    lParam_00 = LoadImageA(pHVar2,pCVar6,UVar7,iVar1,iVar8,UVar10);
    WVar9 = 1;
    UVar7 = 0x80;
    pHVar3 = (HWND)(**(code **)(*DAT_0083ad50 + 0x20))();
    PostMessageA(pHVar3,UVar7,WVar9,(LPARAM)lParam);
    WVar9 = 0;
    UVar7 = 0x80;
    pHVar3 = (HWND)(**(code **)(*DAT_0083ad50 + 0x20))();
    PostMessageA(pHVar3,UVar7,WVar9,(LPARAM)lParam_00);
    FUN_00481870(8);
    (**(code **)(*DAT_0083ad50 + 0x10))();
    uVar4 = FUN_00404970(0xf0);
    uVar5 = FUN_00404970(0x140);
    iVar1 = FUN_004806c0(0,0,uVar5,uVar4,s_Sid_Meier_s_SimGolf_004d3910,0x400000,0,0,0);
    if (iVar1 != 0) {
      FUN_00485740();
      return 1;
    }
    FUN_0047d840(&DAT_00519a60);
    FUN_004808c0(0);
    FUN_0047b670(0);
    FUN_00483bd0();
    DAT_0083b9f0 = &DAT_00519a60;
    FUN_0048de00(&DAT_004c61e4);
    FUN_0048de90(&DAT_004c61e4);
    DAT_004e4500 = 7;
    FUN_00490c80(&DAT_00519928,0,0,0);
    FUN_00490cc0(0,0xffffffff,1,1);
    DAT_004e4574 = 0xf8;
    FUN_00490d20(0,0xffffffff,1,1);
    FUN_00490cf0(&DAT_00519928,0,0);
    DAT_004e4580 = 2;
    DAT_004e4448 = 2;
    DAT_004e4578 = 7;
    DAT_004e457c = 0xf8;
    DAT_0083b9d0 = 0;
    DAT_004e42c8 = 1;
    DAT_004e42e4 = 0xf8;
    DAT_0083ab70 = 0;
    DAT_004e42dc = 8;
    DAT_0083ab6c = 0xff;
    DAT_004e42d0 = 0;
    DAT_004e42d4 = 1;
    DAT_004e42d8 = 1;
    DAT_004e44d4 = 0;
    DAT_004e44d8 = 0xff;
    DAT_004e4498 = 7;
    DAT_004e43f4 = 1;
    DAT_0083afd8 = 0;
    DAT_0083afdc = 0;
    DAT_0083afe0 = 0;
    DAT_004e43fc = 0xffffffff;
    DAT_004e4400 = 1;
    DAT_004e4404 = 1;
    DAT_004e43f0 = 7;
    DAT_004e443c = 0xf8;
    DAT_004e4440 = 0xff;
    DAT_004e4444 = 0xf8;
    DAT_0083b604 = 0;
    DAT_0083b608 = 0;
    uVar4 = (**(code **)(*DAT_0083ad50 + 0x20))(0x8a);
    FUN_00483e90(uVar4);
    FUN_00467110();
    FUN_00483800(s_Arial_Bold_004d38f8,9,0);
    FUN_00483800(s_Arial_Bold_004d38f8,10,0);
    FUN_00483850(s_manu3__ttf_004d38ec,PTR_s_Manual_SSi_Bold_004d389c_4_004d3888,0xf,0);
    FUN_00483850(s_manu3__ttf_004d38ec,PTR_s_Manual_SSi_Bold_004d389c_4_004d3888,0x14,0);
    FUN_00483850(s_klepto___ttf_004d38dc,s_Klepto_ITC_TT_004d2748,0x12,0);
    FUN_00483850(s_klepto___ttf_004d38dc,s_Klepto_ITC_TT_004d2748,0x18,0);
    FUN_00483850(s_manu3__ttf_004d38ec,PTR_s_Manual_SSi_Bold_004d389c_4_004d3888,0x18,0);
    uVar5 = 2;
    uVar4 = FUN_00404970(0x28,2);
    FUN_00483800(s_Comic_Sans_MS_Bold_004d38c8,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = FUN_00404970(7,0);
    FUN_00483800(s_Times_New_Roman_Bold_004d38b0,uVar4,uVar5);
    DAT_0083ad44 = &DAT_00519928;
    _DAT_0083abdc = 0;
    uVar4 = FUN_00404970(0xf0);
    uVar5 = FUN_00404970(0x140);
    FUN_00474dd0(uVar5,uVar4,0,1,0,0);
    FUN_004789f0(&DAT_005199c8);
    FUN_0047b310();
    FUN_00474ae0();
    FUN_00483060();
    DAT_00822c74 = _malloc(0x20000);
    if (DAT_00822c74 != (void *)0x0) {
      iVar1 = 0;
      do {
        *(ushort *)((int)DAT_00822c74 + iVar1 * 2) =
             (ushort)(((iVar1 >> 10 & 0x1eU) << 5 | iVar1 >> 5 & 0x1eU) << 4) |
             (ushort)(iVar1 >> 1) & 0xf;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x10000);
    }
    FUN_00461830();
    FUN_0043cd70();
    FUN_00483060();
    FUN_00448220();
    FUN_00483190(0,0xe3,8,0x32);
    FUN_004832e0(0);
    _DAT_0083abdc = 0;
    FUN_0040f5c0();
    FUN_004490b0();
    FUN_00481b20();
    FUN_00449860();
    FUN_0044cce0();
    FUN_00485740();
    FUN_00474c40();
  }
  return 0;
}

