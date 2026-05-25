/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10013400 @ 0x10013400 */


void __thiscall FUN_10013400(void *this,char param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == '\0') {
    *(undefined1 *)((int)this + 0x208) = 0;
    *(undefined1 *)((int)this + 0x209) = 0;
    *(undefined1 *)((int)this + 0x20a) = 0;
  }
  else {
    *(undefined1 *)((int)this + 0x208) = 1;
    if (param_2 != 0) {
      *(undefined1 *)((int)this + 0x209) = 1;
    }
    if ((((*(int *)((int)this + 0x24) == 0x16) || (*(int *)((int)this + 0x24) == 0)) ||
        (*(int *)((int)this + 0x24) == 2)) ||
       (((*(int *)((int)this + 0x24) == 1 || (*(int *)((int)this + 0x24) == 3)) ||
        ((*(int *)((int)this + 0x24) == 7 || (*(int *)((int)this + 0x24) == 9)))))) {
      *(undefined1 *)((int)this + 0x20a) = 0;
    }
    else {
      *(undefined1 *)((int)this + 0x20a) = 1;
    }
  }
  return;
}

