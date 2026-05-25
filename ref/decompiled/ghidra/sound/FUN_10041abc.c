/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041abc @ 0x10041ABC */


int * FUN_10041abc(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100437e0();
  if ((*(int *)((int)extraout_ECX + *(int *)(*extraout_ECX + 4) + 0x1c) != 0) &&
     (puVar2 = *(undefined4 **)((int)extraout_ECX + *(int *)(*extraout_ECX + 4) + 4),
     puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 4 + (int)extraout_ECX) = 0;
  puVar2 = FUN_10041e6f((undefined4 *)(unaff_EBP + -0x5c));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10042013((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),(int)puVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10041f9a((undefined4 *)(unaff_EBP + -0x5c));
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 0;
  FUN_10041fe4((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

