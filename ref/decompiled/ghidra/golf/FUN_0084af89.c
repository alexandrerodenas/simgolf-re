/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084af89 @ 0x0084AF89 */


void FUN_0084af89(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char local_130 [20];
  undefined4 local_11c [70];
  
  puVar5 = local_11c;
  for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_0084aa1e(0x27);
  FUN_0084ad10(local_130,uVar2);
  uVar4 = 0xffffffff;
  pcVar6 = local_130;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)((int)local_11c + (~uVar4 - 0x16)) = 0;
  FUN_0084b272(local_11c,local_130,param_3);
  FUN_0084b350(param_1,param_2,local_11c);
  return;
}

