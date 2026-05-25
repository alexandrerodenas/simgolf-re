/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003d710 @ 0x1003D710 */


void __cdecl FUN_1003d710(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  puVar3 = param_2;
  piVar2 = param_1;
  if (*(byte *)(param_1 + 0x4b) < 8) {
    uVar4 = (uint)*(byte *)(param_1 + 0x4b);
    uVar6 = -uVar4 + 8;
    FUN_10042b90(param_1,(int)param_2 + uVar4 + 0x20,uVar6);
    *(undefined1 *)(piVar2 + 0x4b) = 8;
    iVar5 = FUN_10042930((int)(puVar3 + 8),uVar4,uVar6);
    if (iVar5 != 0) {
      if (uVar4 < 4) {
        iVar5 = FUN_10042930((int)(puVar3 + 8),uVar4,-uVar4 + 4);
        if (iVar5 == 0) goto LAB_1003d77a;
        pcVar7 = s_Not_a_PNG_file_100552d0;
      }
      else {
LAB_1003d77a:
        pcVar7 = s_PNG_file_corrupted_by_ASCII_conv_100552a8;
      }
      FUN_10042d90(piVar2,pcVar7);
    }
  }
  pbVar1 = (byte *)(piVar2 + 0x47);
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_10042b90(piVar2,&param_1,4);
          uVar4 = FUN_10042f50((byte *)&param_1);
          FUN_10042a10((int)piVar2);
          FUN_10042fa0(piVar2,pbVar1,4);
          if (*(int *)pbVar1 != DAT_1005573c) break;
          FUN_100430f0(piVar2,puVar3,uVar4);
        }
        if (*(int *)pbVar1 != DAT_10055754) break;
        FUN_10043350(piVar2,(int)puVar3,uVar4);
      }
      if (*(int *)pbVar1 != DAT_1005574c) break;
      FUN_100434b0(piVar2,(int)puVar3,uVar4);
    }
    if (*(int *)pbVar1 == DAT_10055744) break;
    if (*(int *)pbVar1 == DAT_1005575c) {
      FUN_100442b0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_10055764) {
      FUN_100437f0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_1005576c) {
      FUN_10043510(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_10055774) {
      FUN_100444a0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_1005577c) {
      FUN_100446d0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_10055784) {
      FUN_100447c0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_1005578c) {
      FUN_100445e0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_10055794) {
      FUN_10043680(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_1005579c) {
      FUN_10043e50(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_100557a4) {
      FUN_10044ae0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_100557ac) {
      FUN_100449f0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_100557b4) {
      FUN_10044090(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_100557bc) {
      FUN_10044b90(piVar2,(int)puVar3,uVar4);
    }
    else {
      FUN_10044f20(piVar2,(int)puVar3,uVar4);
    }
  }
  if ((piVar2[0x1a] & 1U) == 0) {
    pcVar7 = s_Missing_IHDR_before_IDAT_1005528c;
  }
  else {
    if ((*(char *)((int)piVar2 + 0x126) != '\x03') || ((piVar2[0x1a] & 2U) != 0)) goto LAB_1003d9b7;
    pcVar7 = s_Missing_PLTE_before_IDAT_10055270;
  }
  FUN_10042d90(piVar2,pcVar7);
LAB_1003d9b7:
  piVar2[0x43] = uVar4;
  piVar2[0x1a] = piVar2[0x1a] | 4;
  return;
}

