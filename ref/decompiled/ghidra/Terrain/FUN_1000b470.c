/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b470 @ 0x1000B470 */


void FUN_1000b470(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = local_50;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  while (cVar1 = thunk_FUN_1000b3d0(&param_2,(int *)&stack0x0000000c), cVar1 != '\0') {
    puVar2 = (undefined4 *)thunk_FUN_1000b320(&param_2,&local_c);
    thunk_FUN_1000b800(&local_10,*puVar2);
  }
  *param_1 = param_2;
  local_8 = 0x1000b4d9;
  __chkesp();
  return;
}

