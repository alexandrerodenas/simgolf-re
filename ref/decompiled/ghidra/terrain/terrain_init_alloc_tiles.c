/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100076e0 @ 0x100076E0 */
/* Body size: 2297 addresses */


void __fastcall FUN_100076e0(int param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_280 [16];
  int local_240;
  int local_23c;
  undefined4 local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  undefined4 local_218;
  int local_214;
  undefined4 local_210;
  uint local_10c;
  char local_108 [4];
  char local_104 [4];
  char local_100 [4];
  char local_fc;
  undefined4 local_fb;
  int local_8;
  
  puVar4 = local_280;
  for (iVar3 = 0x9f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_10c = s___Data_Textures__100613cc._0_4_;
  local_108 = (char  [4])s___Data_Textures__100613cc._4_4_;
  local_104 = (char  [4])s___Data_Textures__100613cc._8_4_;
  local_100 = (char  [4])s___Data_Textures__100613cc._12_4_;
  local_fc = s___Data_Textures__100613cc[0x10];
  puVar4 = &local_fb;
  local_8 = param_1;
  for (iVar3 = 0x3c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_214 = 0;
  local_21c = 0;
  if (*(char *)(local_8 + 0x29) != '\0') {
    thunk_FUN_100380a0(local_8);
  }
  local_238 = DAT_10070a0c;
  switch(DAT_10070a0c) {
  case 0:
    FUN_10018590(&local_10c,(uint *)"Parkland/");
    break;
  case 1:
    FUN_10018590(&local_10c,(uint *)"Desert/");
    break;
  case 2:
    FUN_10018590(&local_10c,(uint *)"Tropical/");
    break;
  case 3:
    FUN_10018590(&local_10c,(uint *)"Links/");
    break;
  default:
    FUN_10018590(&local_10c,(uint *)"Parkland/");
  }
  local_220 = 0;
  do {
    if (0x1e < local_220) {
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/Path.tga");
      uVar2 = thunk_FUN_1000be30((LPCSTR)&local_210);
      thunk_FUN_10012e70(0x20,0,0,uVar2);
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/PathCap.tga");
      uVar2 = thunk_FUN_1000be30((LPCSTR)&local_210);
      thunk_FUN_10012e70(0x20,0,1,uVar2);
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/PathInside.tga");
      uVar2 = thunk_FUN_1000be30((LPCSTR)&local_210);
      thunk_FUN_10012e70(0x20,0,2,uVar2);
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/PathCurve.tga");
      uVar2 = thunk_FUN_1000be30((LPCSTR)&local_210);
      thunk_FUN_10012e70(0x20,0,3,uVar2);
      *(int *)(local_8 + 0x340) = *(int *)(local_8 + 0x340) + 1;
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/PathX.tga");
      uVar2 = thunk_FUN_1000be30((LPCSTR)&local_210);
      thunk_FUN_10012e70(0x21,0,0,uVar2);
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/PathCapX.tga");
      uVar2 = thunk_FUN_1000be30((LPCSTR)&local_210);
      thunk_FUN_10012e70(0x21,0,1,uVar2);
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/PathInsideX.tga");
      uVar2 = thunk_FUN_1000be30((LPCSTR)&local_210);
      thunk_FUN_10012e70(0x21,0,2,uVar2);
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/PathCurveX.tga");
      uVar2 = thunk_FUN_1000be30((LPCSTR)&local_210);
      thunk_FUN_10012e70(0x21,0,3,uVar2);
      *(int *)(local_8 + 0x358) = *(int *)(local_8 + 0x358) + 1;
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/CliffTest.bmp");
      uVar2 = thunk_FUN_1000bbd0((LPCSTR)&local_210,0,0x2601,0x2601,0x2901);
      thunk_FUN_10012e70(0x23,0,0,uVar2);
      *(int *)(local_8 + 0x388) = *(int *)(local_8 + 0x388) + 1;
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/RetainWallA.bmp");
      uVar2 = thunk_FUN_1000bbd0((LPCSTR)&local_210,0,0x2601,0x2601,0x2901);
      thunk_FUN_10012e70(0x22,0,0,uVar2);
      *(int *)(local_8 + 0x370) = *(int *)(local_8 + 0x370) + 1;
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)"/strata.bmp");
      uVar2 = thunk_FUN_1000bbd0((LPCSTR)&local_210,0,0x2601,0x2601,0x2901);
      thunk_FUN_10012e70(0x24,0,0,uVar2);
      *(int *)(local_8 + 0x3a0) = *(int *)(local_8 + 0x3a0) + 1;
      *(undefined1 *)(local_8 + 0x29) = 1;
      local_8 = 0x10007fd5;
      __chkesp();
      return;
    }
    if (local_220 == 0) {
      FUN_10018580(&local_210,&local_10c);
      FUN_10018590(&local_210,(uint *)(local_8 + 0x2c + local_220 * 0x18));
      FUN_10018590(&local_210,(uint *)"A0001.bmp");
      for (local_224 = 0x31; local_224 < 0x3a; local_224 = local_224 + 1) {
        sVar1 = _strlen((char *)&local_210);
        *(undefined1 *)((int)&local_218 + sVar1 + 3) = (undefined1)local_224;
        local_214 = thunk_FUN_1000bbd0((LPCSTR)&local_210,0,0x2601,0x2601,0x2901);
        iVar3 = local_21c;
        local_23c = local_21c;
        local_21c = local_21c + 1;
        thunk_FUN_10012e70(0,iVar3,0,local_214);
      }
      for (local_228 = 0x31; local_228 < 0x33; local_228 = local_228 + 1) {
        sVar1 = _strlen((char *)&local_210);
        *(undefined1 *)((int)&local_218 + sVar1 + 2) = (undefined1)local_228;
        for (local_22c = 0x30; local_22c < 0x3a; local_22c = local_22c + 1) {
          if (local_21c < 0x19) {
            sVar1 = _strlen((char *)&local_210);
            *(undefined1 *)((int)&local_218 + sVar1 + 3) = (undefined1)local_22c;
            local_214 = thunk_FUN_1000bbd0((LPCSTR)&local_210,0,0x2601,0x2601,0x2901);
            iVar3 = local_21c;
            local_240 = local_21c;
            local_21c = local_21c + 1;
            thunk_FUN_10012e70(0,iVar3,0,local_214);
          }
        }
      }
    }
    else if (local_8 + 0x2c + local_220 * 0x18 != 0) {
      for (local_230 = 0x41; local_230 < 0x46; local_230 = local_230 + 1) {
        FUN_10018580(&local_210,&local_10c);
        FUN_10018590(&local_210,(uint *)(local_8 + 0x2c + local_220 * 0x18));
        local_218 = _strlen((char *)&local_210);
        *(undefined1 *)((int)&local_210 + local_218) = (undefined1)local_230;
        *(undefined1 *)((int)&local_210 + local_218 + 1) = 0;
        FUN_10018590(&local_210,(uint *)"0001.bmp");
        local_214 = thunk_FUN_1000bbd0((LPCSTR)&local_210,0,0x2601,0x2601,0x2901);
        if (local_214 == 0) break;
        thunk_FUN_10012e70(local_220,*(int *)(local_8 + 0x40 + local_220 * 0x18),0,local_214);
        for (local_234 = 0x32; local_234 < 0x3a; local_234 = local_234 + 1) {
          sVar1 = _strlen((char *)&local_210);
          *(undefined1 *)((int)&local_218 + sVar1 + 3) = (undefined1)local_234;
          local_214 = thunk_FUN_1000bbd0((LPCSTR)&local_210,0,0x2601,0x2601,0x2901);
          thunk_FUN_10012e70(local_220,*(int *)(local_8 + 0x40 + local_220 * 0x18),local_234 + -0x31
                             ,local_214);
        }
        *(int *)(local_8 + 0x40 + local_220 * 0x18) =
             *(int *)(local_8 + 0x40 + local_220 * 0x18) + 1;
      }
    }
    local_220 = local_220 + 1;
  } while( true );
}

