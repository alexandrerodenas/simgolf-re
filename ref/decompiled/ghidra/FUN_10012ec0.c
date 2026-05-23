/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10012ec0 @ 0x10012EC0 */
/* Body size: 790 addresses */


void __thiscall FUN_10012ec0(void *this,int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_54 [20];
  
  puVar3 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  switch(*(undefined4 *)((int)this + 0x24)) {
  case 1:
    if ((*(uint *)((int)this + 0x28) & 0x80) != 0) {
      param_1 = 0x1a;
    }
    break;
  case 6:
  case 0x15:
    param_1 = 4;
    break;
  case 7:
    uVar1 = *(uint *)((int)this + 0x28) & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar1) {
    case 0:
      param_1 = 0x1b;
      break;
    case 1:
      param_1 = 0x1c;
      break;
    case 2:
      param_1 = 0x1d;
      break;
    case 3:
      param_1 = 0x1e;
    }
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    param_1 = 0xd;
    break;
  case 0x11:
    if (*(int *)((int)this + 0x28) == 1) {
      param_1 = 0x17;
    }
    else if (*(int *)((int)this + 0x28) == 2) {
      param_1 = 0x18;
    }
    break;
  case 0x16:
    if ((0x3f < *(int *)((int)this + 0x28)) && (*(int *)((int)this + 0x28) < 0x48)) {
      param_1 = 4;
    }
  }
  if ((((param_1 == 4) || (*(int *)((int)this + 0x24) == 7)) || (param_1 == 2)) && (4 < param_3)) {
    param_3 = 0;
  }
  switch(param_2) {
  case 0:
    *(undefined4 *)((int)this + 0xdc) =
         *(undefined4 *)
          (&DAT_100687f8 + param_3 * 4 + *(int *)((int)this + 0x240) * 0x24 + param_1 * 900);
    *(undefined1 *)((int)this + 0xe0) = (undefined1)param_3;
    break;
  case 1:
    *(undefined4 *)((int)this + 0x114) =
         *(undefined4 *)
          (&DAT_100687f8 + param_3 * 4 + *(int *)((int)this + 0x240) * 0x24 + param_1 * 900);
    *(undefined1 *)((int)this + 0x118) = (undefined1)param_3;
    break;
  case 2:
    *(undefined4 *)((int)this + 500) =
         *(undefined4 *)
          (&DAT_100687f8 + param_3 * 4 + *(int *)((int)this + 0x240) * 0x24 + param_1 * 900);
    *(undefined1 *)((int)this + 0x1f8) = (undefined1)param_3;
    break;
  case 3:
    *(undefined4 *)((int)this + 0x1bc) =
         *(undefined4 *)
          (&DAT_100687f8 + param_3 * 4 + *(int *)((int)this + 0x240) * 0x24 + param_1 * 900);
    *(undefined1 *)((int)this + 0x1c0) = (undefined1)param_3;
    break;
  case 4:
    *(undefined4 *)((int)this + 0x184) =
         *(undefined4 *)
          (&DAT_100687f8 + param_3 * 4 + *(int *)((int)this + 0x240) * 0x24 + param_1 * 900);
    *(undefined1 *)((int)this + 0x188) = (undefined1)param_3;
    break;
  case 5:
    *(undefined4 *)((int)this + 0x14c) =
         *(undefined4 *)
          (&DAT_100687f8 + param_3 * 4 + *(int *)((int)this + 0x240) * 0x24 + param_1 * 900);
    *(undefined1 *)((int)this + 0x150) = (undefined1)param_3;
    break;
  case 6:
    *(undefined4 *)((int)this + 0x6c) =
         *(undefined4 *)
          (&DAT_100687f8 + param_3 * 4 + *(int *)((int)this + 0x240) * 0x24 + param_1 * 900);
    *(undefined1 *)((int)this + 0x70) = (undefined1)param_3;
    break;
  case 7:
    *(undefined4 *)((int)this + 0xa4) =
         *(undefined4 *)
          (&DAT_100687f8 + param_3 * 4 + *(int *)((int)this + 0x240) * 0x24 + param_1 * 900);
    *(undefined1 *)((int)this + 0xa8) = (undefined1)param_3;
  }
  return;
}

