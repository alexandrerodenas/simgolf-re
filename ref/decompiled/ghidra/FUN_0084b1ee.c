/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084b1ee @ 0x0084B1EE */
/* Body size: 132 addresses */


void FUN_0084b1ee(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char local_118 [20];
  undefined4 local_104;
  
  puVar5 = &local_104;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  uVar2 = FUN_0084aa1e(0x31);
  FUN_0084ad10(local_118,uVar2);
  uVar4 = 0xffffffff;
  pcVar6 = local_118;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  (&stack0xfffffee6)[~uVar4] = 0;
  FUN_0084b272(&local_104,local_118,0);
  FUN_0084b350(param_1,param_2,&local_104);
  return;
}

