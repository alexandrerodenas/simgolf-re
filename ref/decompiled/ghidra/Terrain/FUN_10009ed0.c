/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10009ed0 @ 0x10009ED0 */


void FUN_10009ed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_68 [6];
  undefined4 uStack_50;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar3 = local_68;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  glViewport(0,0,param_1,param_2);
  __chkesp();
  glMatrixMode(0x1701);
  __chkesp();
  glLoadIdentity();
  __chkesp();
  if ((param_1 == 800) && (param_2 == 600)) {
    param_1 = 0x6e7;
    param_2 = 0x52d;
  }
  else if ((param_1 == 0x400) && (param_2 == 0x300)) {
    param_1 = 0x712;
    param_2 = 0x517;
  }
  else if ((param_1 == 0x500) && (param_2 == 0x400)) {
    param_1 = 0x6cc;
    param_2 = 0x570;
  }
  iVar2 = param_2 >> 1;
  iVar1 = param_1 >> 1;
  if (*(char *)(local_8 + 0x28) == '\0') {
    local_20 = -param_2 >> 1;
    local_28 = -param_1 >> 1;
    local_24 = iVar1;
    local_1c = iVar2;
    glOrtho((double)local_28,(double)iVar1,(double)local_20,(double)iVar2,0,0x40b38800,0,0xc0b38800)
    ;
    __chkesp();
  }
  else {
    local_c = -param_2 >> 1;
    local_18 = -param_1 >> 1;
    local_14 = iVar1;
    local_10 = iVar2;
    glOrtho((double)local_18,(double)iVar1,(double)iVar2,(double)local_c,0,0x40b38800,0,0xc0b38800);
    __chkesp();
  }
  glMatrixMode(0x1700);
  __chkesp();
  glLoadIdentity();
  __chkesp();
  uStack_50 = 0x1000a0b1;
  __chkesp();
  return;
}

