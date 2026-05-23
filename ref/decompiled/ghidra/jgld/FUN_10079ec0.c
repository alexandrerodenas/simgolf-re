/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079ec0 @ 0x10079EC0 */
/* Body size: 519 addresses */


void __cdecl FUN_10079ec0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  byte local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_9 = 0;
  local_a = 0;
  local_b = 0;
  local_c = 0;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before sBIT");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid sBIT after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_1007a0b6;
    }
    if ((param_1[0x1a] & 2U) == 0) {
      if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 2) != 0)) {
        FUN_10079040((int)param_1,"Duplicate sBIT chunk");
        FUN_10079510(param_1,param_3);
        goto LAB_1007a0b6;
      }
    }
    else {
      FUN_10079040((int)param_1,"Out of place sBIT chunk");
    }
  }
  if (*(char *)((int)param_1 + 0x126) == '\x03') {
    local_8 = 3;
  }
  else {
    local_8 = (uint)*(byte *)((int)param_1 + 0x12a);
  }
  if (param_3 == local_8) {
    FUN_100794b0(param_1,&local_c,local_8);
    iVar1 = FUN_10079510(param_1,0);
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
        *(byte *)((int)param_1 + 0x17f) = local_c;
        *(byte *)(param_1 + 0x5f) = local_c;
        *(byte *)((int)param_1 + 0x17d) = local_c;
        *(byte *)((int)param_1 + 0x17e) = local_c;
        *(undefined1 *)(param_1 + 0x60) = local_b;
      }
      else {
        *(byte *)(param_1 + 0x5f) = local_c;
        *(undefined1 *)((int)param_1 + 0x17d) = local_b;
        *(undefined1 *)((int)param_1 + 0x17e) = local_a;
        *(undefined1 *)(param_1 + 0x60) = local_9;
      }
      FUN_1007e070((int)param_1,param_2,param_1 + 0x5f);
    }
  }
  else {
    FUN_10079040((int)param_1,"Incorrect sBIT chunk length");
    FUN_10079510(param_1,param_3);
  }
LAB_1007a0b6:
  local_8 = 0x1007a0c3;
  __chkesp();
  return;
}

