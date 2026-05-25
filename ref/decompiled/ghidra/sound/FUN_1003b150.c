/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003b150 @ 0x1003B150 */


void __cdecl FUN_1003b150(int param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_ac [16];
  undefined4 local_6c;
  uint local_68 [10];
  undefined1 local_40 [40];
  int local_18;
  int local_14;
  int local_10 [2];
  uint local_8;
  
  puVar2 = local_ac;
  for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  if (param_2 != 0) {
    param_2 = param_2 + -4;
  }
  FUN_1003d040(param_1 + 4,(int *)&DAT_10063ef4,param_3);
  FUN_1003c640(param_1 + 4,(int)local_10,&local_14,&local_6c,(int)local_40,(int)param_3);
  FUN_1003c220(local_10,&local_14,&local_6c,local_40,&local_18,&local_8,local_68);
  FUN_1003c180((int *)&DAT_10063ef8,&local_18,&local_8,(int)local_68,param_2 + 4,(int)param_3);
  local_8 = 0x1003b221;
  FUN_100431ce();
  return;
}

