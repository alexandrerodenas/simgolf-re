/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100430f0 @ 0x100430F0 */


void __cdecl FUN_100430f0(int *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte local_10 [4];
  byte local_c [4];
  byte bStack_8;
  byte bStack_7;
  char cStack_6;
  char local_5;
  byte bStack_4;
  
  if (param_1[0x1a] != 0) {
    FUN_10042d90(param_1,s_Out_of_place_IHDR_10055a70);
  }
  if (param_3 != 0xd) {
    FUN_10042d90(param_1,s_Invalid_IHDR_chunk_10055a5c);
  }
  param_1[0x1a] = param_1[0x1a] | 1;
  FUN_10042fa0(param_1,local_10,0xd);
  FUN_10042fd0(param_1,0);
  uVar2 = FUN_10042f50(local_10);
  uVar3 = FUN_10042f50(local_c);
  if ((((uVar2 == 0) || (0x7fffffff < uVar2)) || (uVar3 == 0)) || (0x7fffffff < uVar3)) {
    FUN_10042d90(param_1,s_Invalid_image_size_in_IHDR_10055a40);
  }
  if (((bStack_8 != 1) && (bStack_8 != 2)) &&
     ((bStack_8 != 4 && ((bStack_8 != 8 && (bStack_8 != 0x10)))))) {
    FUN_10042d90(param_1,s_Invalid_bit_depth_in_IHDR_10055a24);
  }
  if (((bStack_7 == 1) || (bStack_7 == 5)) || (6 < bStack_7)) {
    FUN_10042d90(param_1,s_Invalid_color_type_in_IHDR_10055a08);
  }
  if (bStack_7 == 3) {
    if (bStack_8 < 9) goto LAB_10043249;
  }
  else if ((((bStack_7 != 2) && (bStack_7 != 4)) && (bStack_7 != 6)) || (7 < bStack_8))
  goto LAB_10043249;
  FUN_10042d90(param_1,s_Invalid_color_type_bit_depth_com_100559d4);
LAB_10043249:
  if (1 < bStack_4) {
    FUN_10042d90(param_1,s_Unknown_interlace_method_in_IHDR_100559b0);
  }
  if (cStack_6 != '\0') {
    FUN_10042d90(param_1,s_Unknown_compression_method_in_IH_1005598c);
  }
  if (local_5 != '\0') {
    FUN_10042d90(param_1,s_Unknown_filter_method_in_IHDR_1005596c);
  }
  *(byte *)((int)param_1 + 0x123) = bStack_4;
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  *(byte *)((int)param_1 + 0x127) = bStack_8;
  *(byte *)((int)param_1 + 0x126) = bStack_7;
  switch(bStack_7) {
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
  bVar1 = *(char *)((int)param_1 + 0x12a) * bStack_8;
  *(byte *)((int)param_1 + 0x129) = bVar1;
  param_1[0x36] = bVar1 * uVar2 + 7 >> 3;
  FUN_10045f50((int)param_1,param_2,uVar2,uVar3,bStack_8,bStack_7,bStack_4,cStack_6,local_5);
  return;
}

