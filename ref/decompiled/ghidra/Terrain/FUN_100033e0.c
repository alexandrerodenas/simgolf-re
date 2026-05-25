/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100033e0 @ 0x100033E0 */


void FUN_100033e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [5];
  undefined4 uStack_34;
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  glHint(0xc50,0x1101);
  __chkesp();
  glEnable(0xb20);
  __chkesp();
  glHint(0xc52,0x1102);
  __chkesp();
  glEnable(0xde1);
  __chkesp();
  glEnable(0xb50);
  __chkesp();
  if (*(char *)(local_8 + 0x28) == '\0') {
    glFrontFace(0x901);
    __chkesp();
  }
  else {
    glFrontFace(0x900);
    __chkesp();
  }
  glEnable(0xb44);
  __chkesp();
  glEnableClientState(0x8074);
  __chkesp();
  glEnableClientState(0x8075);
  __chkesp();
  uStack_34 = 0x100034ec;
  __chkesp();
  return;
}

