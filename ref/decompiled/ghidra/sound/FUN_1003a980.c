/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a980 @ 0x1003A980 */
/* Body size: 193 addresses */


void __cdecl FUN_1003a980(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_b0 [16];
  float local_70;
  undefined4 local_6c;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  int local_18;
  int local_14;
  undefined1 local_10 [8];
  int local_8;
  
  puVar2 = local_b0;
  for (iVar1 = 0x2b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  if (param_2 != 0) {
    param_2 = param_2 + -4;
  }
  FUN_1003c1d0((int *)&DAT_10063ef0,&local_18,&local_8,(int)local_68,param_1 + 4);
  FUN_1003b5a0(&local_18,&local_8,(int)local_68,(int)local_10,&local_14,&local_70,(int)local_40,
               param_3);
  FUN_1003b230((int)local_10,&local_14,&local_70,(int)local_40,param_2 + 4,&local_6c,(int)param_3);
  local_8 = 0x1003aa3d;
  FUN_100431ce();
  return;
}

