/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000bbd0 @ 0x1000BBD0 */
/* Body size: 483 addresses */


void __cdecl
FUN_1000bbd0(LPCSTR param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined4 local_14;
  int local_10;
  undefined1 *local_c;
  void *local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = (undefined1 *)thunk_FUN_100016a0(param_1,(int *)&local_8);
  if (local_c != (undefined1 *)0x0) {
    thunk_FUN_10001b60(local_c,(int)local_8);
    if (*(int *)((int)local_8 + 8) == 1) {
      local_10 = 0xde0;
    }
    else {
      local_10 = 0xde1;
    }
    glGenTextures(1,&local_14);
    __chkesp();
    glBindTexture(local_10,local_14);
    __chkesp();
    glTexParameteri(local_10,0x2800,0x2600);
    __chkesp();
    glTexParameteri(local_10,0x2801,0x2601);
    __chkesp();
    glTexParameteri(local_10,0x2802,param_5);
    __chkesp();
    glTexParameteri(local_10,0x2803,param_5);
    __chkesp();
    glTexEnvi(local_10,0x2200,0x1e01);
    __chkesp();
    if ((param_3 == 0x2601) || (param_3 == 0x2600)) {
      glTexImage2D(local_10,0,3,*(undefined4 *)((int)local_8 + 4),*(undefined4 *)((int)local_8 + 8),
                   0,0x1907,0x1401,local_c);
      __chkesp();
    }
    else if (local_10 == 0xde0) {
      gluBuild1DMipmaps(0xde0,3,*(undefined4 *)((int)local_8 + 4),0x1908,0x1401,local_c);
    }
    else {
      gluBuild2DMipmaps(local_10,3,*(undefined4 *)((int)local_8 + 4),
                        *(undefined4 *)((int)local_8 + 8),0x1907,0x1401,local_c);
    }
    FUN_10016470(local_8);
    FUN_10016470(local_c);
  }
  local_8 = (void *)0x1000bdaf;
  __chkesp();
  return;
}

