/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10014020 @ 0x10014020 */
/* Body size: 245 addresses */


void __thiscall FUN_10014020(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(char *)((int)this + 0x208) != '\0') {
    *(undefined1 *)((int)this + 0x20a) = 1;
  }
  local_8 = this;
  if (*(int *)((int)this + 0x24) == 7) {
    thunk_FUN_100149e0((int)this);
  }
  if (*(int *)((int)local_8 + 0x24) == 6) {
    thunk_FUN_10014190((int)local_8);
  }
  else if (*(int *)((int)local_8 + 0x24) == 0x11) {
    *(undefined1 *)((int)local_8 + 0x244) = 1;
  }
  *(int *)((int)local_8 + 0x24) = param_1;
  local_c = param_1;
  switch(param_1) {
  case 0:
  case 9:
    thunk_FUN_10015230(local_8);
    break;
  default:
    thunk_FUN_1000d480(local_8,param_1);
    break;
  case 4:
  case 0x14:
    thunk_FUN_10013500(local_8);
    break;
  case 6:
    thunk_FUN_1000de60(local_8);
    break;
  case 7:
    thunk_FUN_1000d540(local_8);
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    thunk_FUN_1000d480(local_8,0xd);
    break;
  case 0x11:
    thunk_FUN_1000d480(local_8,param_1);
  }
  local_8 = (void *)0x1001410f;
  __chkesp();
  return;
}

