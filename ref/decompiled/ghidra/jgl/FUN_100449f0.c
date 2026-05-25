/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100449f0 @ 0x100449F0 */


void __cdecl FUN_100449f0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  byte local_10 [2];
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 local_8;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_10042d90(param_1,s_Out_of_place_tIME_chunk_10056218);
  }
  else if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_10042dc0((int)param_1,s_Duplicate_tIME_chunk_100561e4);
    FUN_10042fd0(param_1,param_3);
    return;
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  if (param_3 != 7) {
    FUN_10042dc0((int)param_1,s_Incorrect_tIME_chunk_length_100561fc);
    FUN_10042fd0(param_1,param_3);
    return;
  }
  FUN_10042fa0(param_1,local_10,7);
  iVar1 = FUN_10042fd0(param_1,0);
  if (iVar1 == 0) {
    local_4 = local_c;
    local_2 = local_a;
    local_3 = local_b;
    local_5 = local_d;
    local_6 = local_e;
    iVar1 = FUN_10042f80(local_10);
    local_8 = (undefined2)iVar1;
    FUN_100463e0((int)param_1,param_2,(undefined4 *)&local_8);
  }
  return;
}

