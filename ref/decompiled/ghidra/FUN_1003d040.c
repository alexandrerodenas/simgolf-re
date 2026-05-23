/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003d040 @ 0x1003D040 */
/* Body size: 86 addresses */


void __cdecl FUN_1003d040(int param_1,int *param_2,float *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  FUN_10040e30(param_1 + 4,(int *)&DAT_10064a18,param_2,param_3);
  uStack_8 = 0x1003d092;
  FUN_100431ce();
  return;
}

