/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084af1f @ 0x0084AF1F */


void FUN_0084af1f(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_118 [20];
  undefined4 local_104;
  
  puVar3 = &local_104;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  uVar1 = FUN_0084aa1e(9);
  FUN_0084ad10(local_118,uVar1);
  FUN_0084b272(&local_104,local_118,0);
  FUN_0084b350(param_1,param_2,&local_104);
  return;
}

