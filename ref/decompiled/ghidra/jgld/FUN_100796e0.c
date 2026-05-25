/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100796e0 @ 0x100796E0 */


void __cdecl FUN_100796e0(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_74 [16];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  byte local_14 [4];
  byte local_10 [4];
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  byte local_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  puVar2 = local_74;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1[0x1a] != 0) {
    FUN_10078fe0(param_1,"Out of place IHDR");
  }
  if (param_3 != 0xd) {
    FUN_10078fe0(param_1,"Invalid IHDR chunk");
  }
  param_1[0x1a] = param_1[0x1a] | 1;
  FUN_100794b0(param_1,local_14,0xd);
  FUN_10079510(param_1,0);
  local_18 = FUN_100793b0(local_14);
  local_1c = FUN_100793b0(local_10);
  local_20 = CONCAT12(uStack_a,CONCAT11(uStack_b,local_c)) & 0xff;
  local_24 = CONCAT12(uStack_9,CONCAT11(uStack_a,uStack_b)) & 0xff;
  local_28 = CONCAT12(local_8,CONCAT11(uStack_9,uStack_a)) & 0xff;
  local_2c = CONCAT11(local_8,uStack_9) & 0xff;
  local_30 = (uint)local_8;
  if ((((local_18 == 0) || (0x7fffffff < local_18)) || (local_1c == 0)) || (0x7fffffff < local_1c))
  {
    FUN_10078fe0(param_1,"Invalid image size in IHDR");
  }
  if (((local_20 != 1) && (local_20 != 2)) &&
     ((local_20 != 4 && ((local_20 != 8 && (local_20 != 0x10)))))) {
    FUN_10078fe0(param_1,"Invalid bit depth in IHDR");
  }
  if (((((int)local_24 < 0) || (local_24 == 1)) || (local_24 == 5)) || (6 < (int)local_24)) {
    FUN_10078fe0(param_1,"Invalid color type in IHDR");
  }
  if (((local_24 == 3) && (8 < (int)local_20)) ||
     (((local_24 == 2 || ((local_24 == 4 || (local_24 == 6)))) && ((int)local_20 < 8)))) {
    FUN_10078fe0(param_1,"Invalid color type/bit depth combination in IHDR");
  }
  if (1 < (int)local_30) {
    FUN_10078fe0(param_1,"Unknown interlace method in IHDR");
  }
  if (local_28 != 0) {
    FUN_10078fe0(param_1,"Unknown compression method in IHDR");
  }
  if (local_2c != 0) {
    FUN_10078fe0(param_1,"Unknown filter method in IHDR");
  }
  param_1[0x32] = local_18;
  param_1[0x33] = local_1c;
  *(undefined1 *)((int)param_1 + 0x127) = (undefined1)local_20;
  *(undefined1 *)((int)param_1 + 0x123) = (undefined1)local_30;
  *(undefined1 *)((int)param_1 + 0x126) = (undefined1)local_24;
  local_34 = (uint)*(byte *)((int)param_1 + 0x126);
  switch(local_34) {
  case 0:
  case 3:
    *(undefined1 *)((int)param_1 + 0x12a) = 1;
    break;
  case 2:
    *(undefined1 *)((int)param_1 + 0x12a) = 3;
    break;
  case 4:
    *(undefined1 *)((int)param_1 + 0x12a) = 2;
    break;
  case 6:
    *(undefined1 *)((int)param_1 + 0x12a) = 4;
  }
  *(char *)((int)param_1 + 0x129) =
       *(char *)((int)param_1 + 0x127) * *(char *)((int)param_1 + 0x12a);
  param_1[0x36] = param_1[0x32] * (uint)*(byte *)((int)param_1 + 0x129) + 7 >> 3;
  FUN_1007dc70((int)param_1,param_2,local_18,local_1c,(undefined1)local_20,(undefined1)local_24,
               (undefined1)local_30,(char)local_28,(char)local_2c);
  local_8 = 0xba;
  uStack_7 = 0x99;
  uStack_6 = 7;
  uStack_5 = 0x10;
  __chkesp();
  return;
}

