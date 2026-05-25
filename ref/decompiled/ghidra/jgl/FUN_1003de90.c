/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003de90 @ 0x1003DE90 */


void __cdecl FUN_1003de90(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  
  piVar2 = param_1;
  FUN_10042fd0(param_1,0);
  puVar3 = param_2;
  pbVar1 = (byte *)(piVar2 + 0x47);
  do {
    FUN_10042b90(piVar2,&param_1,4);
    uVar4 = FUN_10042f50((byte *)&param_1);
    FUN_10042a10((int)piVar2);
    FUN_10042fa0(piVar2,pbVar1,4);
    if (*(int *)pbVar1 == DAT_1005573c) {
      FUN_100430f0(piVar2,puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_10055744) {
      if ((uVar4 == 0) && ((*(byte *)(piVar2 + 0x1a) & 8) == 0)) {
        FUN_10042fd0(piVar2,0);
      }
      else {
        FUN_10042d90(piVar2,s_Too_many_IDAT_s_found_10055348);
      }
    }
    else if (*(int *)pbVar1 == DAT_10055754) {
      FUN_10043350(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_1005574c) {
      FUN_100434b0(piVar2,(int)puVar3,uVar4);
    }
    else if (*(int *)pbVar1 == DAT_1005575c) {
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
  } while ((*(byte *)(piVar2 + 0x1a) & 0x10) == 0);
  return;
}

