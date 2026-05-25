/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10011ef0 @ 0x10011EF0 */


void __thiscall FUN_10011ef0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_64 [16];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  puVar2 = local_64;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_8 = this;
  if (*(int *)((int)this + param_1 * 4 + 0x34) != 0) {
    local_c = thunk_FUN_100153c0(*(int *)((int)this + param_1 * 4 + 0x34));
  }
  if (((*(int *)((int)local_8 + param_2 * 4 + 0x34) != 0) &&
      (local_10 = thunk_FUN_100153c0(*(int *)((int)local_8 + param_2 * 4 + 0x34)),
      *(int *)((int)local_8 + param_1 * 4 + 0x34) != 0)) &&
     (*(int *)(*(int *)((int)local_8 + param_2 * 4 + 0x34) + 0x34 + param_1 * 4) != 0)) {
    local_14 = thunk_FUN_100153c0(*(int *)(*(int *)((int)local_8 + param_2 * 4 + 0x34) + 0x34 +
                                          param_1 * 4));
  }
  if (param_1 == 0) {
    if (param_2 == 2) {
      thunk_FUN_10011d60((int *)((int)local_8 + 0x48));
      thunk_FUN_10011d60((int *)((int)local_8 + 0x80));
      thunk_FUN_10011d60((int *)((int)local_8 + 0xb8));
      thunk_FUN_10011d60((int *)((int)local_8 + 0x128));
      if (local_c != 0) {
        thunk_FUN_10011d60((int *)(local_c + 0xe4));
        thunk_FUN_10011d60((int *)(local_c + 0x11c));
        thunk_FUN_10011d60((int *)(local_c + 0x154));
      }
      if (local_10 != 0) {
        thunk_FUN_10011d60((int *)(local_10 + 0x74));
        thunk_FUN_10011d60((int *)(local_10 + 0xac));
        thunk_FUN_10011d60((int *)(local_10 + 0x18c));
      }
      if (local_14 != 0) {
        thunk_FUN_10011d60((int *)(local_14 + 0x154));
        thunk_FUN_10011d60((int *)(local_14 + 0x18c));
      }
      for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
        *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x88) * 0xc) =
             *(float *)((int)local_8 + local_18 * 4 + 0xac) +
             *(float *)((int)local_8 + local_18 * 4 + 0xe4);
        *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x4c) * 0xc) =
             *(float *)((int)local_8 + local_18 * 4 + 0x74) +
             *(float *)((int)local_8 + local_18 * 4 + 0x154);
        *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x48) * 0xc) =
             *(float *)((int)local_8 + local_18 * 4 + 0x74) +
             *(float *)((int)local_8 + local_18 * 4 + 0xac);
        if (local_c != 0) {
          *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x48) * 0xc) =
               *(float *)(local_c + 0x110 + local_18 * 4) +
               *(float *)(local_c + 0x148 + local_18 * 4) +
               *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x48) * 0xc);
          *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x88) * 0xc) =
               *(float *)(local_c + 0x148 + local_18 * 4) +
               *(float *)(local_c + 0x180 + local_18 * 4) +
               *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x88) * 0xc);
        }
        if (local_10 != 0) {
          *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x48) * 0xc) =
               *(float *)(local_10 + 0xa0 + local_18 * 4) +
               *(float *)(local_10 + 0xd8 + local_18 * 4) +
               *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x48) * 0xc);
          *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x4c) * 0xc) =
               *(float *)(local_10 + 0xd8 + local_18 * 4) +
               *(float *)(local_10 + 0x1b8 + local_18 * 4) +
               *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x4c) * 0xc);
        }
        if (local_14 != 0) {
          *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x48) * 0xc) =
               *(float *)(local_14 + 0x180 + local_18 * 4) +
               *(float *)(local_14 + 0x1b8 + local_18 * 4) +
               *(float *)(&DAT_10070a18 + local_18 * 4 + *(int *)((int)local_8 + 0x48) * 0xc);
        }
      }
      thunk_FUN_10037c80((float *)(&DAT_10070a18 + *(int *)((int)local_8 + 0x48) * 0xc));
      thunk_FUN_10037c80((float *)(&DAT_10070a18 + *(int *)((int)local_8 + 0x4c) * 0xc));
      thunk_FUN_10037c80((float *)(&DAT_10070a18 + *(int *)((int)local_8 + 0x88) * 0xc));
    }
    if (param_2 == 3) {
      thunk_FUN_10011d60((int *)((int)local_8 + 0xb8));
      thunk_FUN_10011d60((int *)((int)local_8 + 0xf0));
      thunk_FUN_10011d60((int *)((int)local_8 + 0x1d0));
      if (local_c != 0) {
        thunk_FUN_10011d60((int *)(local_c + 0x154));
        thunk_FUN_10011d60((int *)(local_c + 0x18c));
      }
      if (local_10 != 0) {
        thunk_FUN_10011d60((int *)(local_10 + 4));
        thunk_FUN_10011d60((int *)(local_10 + 0xe4));
      }
      if (local_14 != 0) {
        thunk_FUN_10011d60((int *)(local_14 + 0xe4));
        thunk_FUN_10011d60((int *)(local_14 + 0x11c));
      }
      for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
        *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf4) * 0xc) =
             *(float *)((int)local_8 + local_1c * 4 + 0x1fc) +
             *(float *)((int)local_8 + local_1c * 4 + 0x11c);
        *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf8) * 0xc) =
             *(float *)((int)local_8 + local_1c * 4 + 0xe4) +
             *(float *)((int)local_8 + local_1c * 4 + 0x11c);
        if (local_c != 0) {
          *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf8) * 0xc) =
               *(float *)(local_c + 0x180 + local_1c * 4) +
               *(float *)(local_c + 0x1b8 + local_1c * 4) +
               *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf8) * 0xc);
        }
        if (local_10 != 0) {
          *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf8) * 0xc) =
               *(float *)(local_10 + 0x30 + local_1c * 4) +
               *(float *)(local_10 + 0x68 + local_1c * 4) +
               *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf8) * 0xc);
          *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf4) * 0xc) =
               *(float *)(local_10 + 0x30 + local_1c * 4) +
               *(float *)(local_10 + 0x110 + local_1c * 4) +
               *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf4) * 0xc);
        }
        if (local_14 != 0) {
          *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf8) * 0xc) =
               *(float *)(local_14 + 0x110 + local_1c * 4) +
               *(float *)(local_14 + 0x148 + local_1c * 4) +
               *(float *)(&DAT_10070a18 + local_1c * 4 + *(int *)((int)local_8 + 0xf8) * 0xc);
        }
      }
      thunk_FUN_10037c80((float *)(&DAT_10070a18 + *(int *)((int)local_8 + 0xf4) * 0xc));
      thunk_FUN_10037c80((float *)(&DAT_10070a18 + *(int *)((int)local_8 + 0xf8) * 0xc));
    }
  }
  else if (param_1 == 1) {
    if (param_2 == 2) {
      thunk_FUN_10011d60((int *)((int)local_8 + 0x128));
      thunk_FUN_10011d60((int *)((int)local_8 + 0x160));
      thunk_FUN_10011d60((int *)((int)local_8 + 0x198));
      if (local_c != 0) {
        thunk_FUN_10011d60((int *)(local_c + 4));
        thunk_FUN_10011d60((int *)(local_c + 0x3c));
        thunk_FUN_10011d60((int *)(local_c + 0x74));
      }
      if (local_10 != 0) {
        thunk_FUN_10011d60((int *)(local_10 + 0x154));
        thunk_FUN_10011d60((int *)(local_10 + 0x18c));
      }
      if (local_14 != 0) {
        thunk_FUN_10011d60((int *)(local_14 + 0x74));
        thunk_FUN_10011d60((int *)(local_14 + 0xac));
      }
      for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
        *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 300) * 0xc) =
             *(float *)((int)local_8 + local_20 * 4 + 0x18c) +
             *(float *)((int)local_8 + local_20 * 4 + 0x154);
        *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 0x164) * 0xc) =
             *(float *)((int)local_8 + local_20 * 4 + 0x18c) +
             *(float *)((int)local_8 + local_20 * 4 + 0x1c4);
        if (local_c != 0) {
          *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 300) * 0xc) =
               *(float *)(local_c + 0x30 + local_20 * 4) + *(float *)(local_c + 0x68 + local_20 * 4)
               + *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 300) * 0xc);
          *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 0x164) * 0xc) =
               *(float *)(local_c + 0x68 + local_20 * 4) + *(float *)(local_c + 0xa0 + local_20 * 4)
               + *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 0x164) * 0xc);
        }
        if (local_10 != 0) {
          *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 300) * 0xc) =
               *(float *)(local_10 + 0x180 + local_20 * 4) +
               *(float *)(local_10 + 0x1b8 + local_20 * 4) +
               *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 300) * 0xc);
        }
        if (local_14 != 0) {
          *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 300) * 0xc) =
               *(float *)(local_14 + 0xa0 + local_20 * 4) +
               *(float *)(local_14 + 0xd8 + local_20 * 4) +
               *(float *)(&DAT_10070a18 + local_20 * 4 + *(int *)((int)local_8 + 300) * 0xc);
        }
      }
      thunk_FUN_10037c80((float *)(&DAT_10070a18 + *(int *)((int)local_8 + 300) * 0xc));
      thunk_FUN_10037c80((float *)(&DAT_10070a18 + *(int *)((int)local_8 + 0x164) * 0xc));
    }
    if (param_2 == 3) {
      thunk_FUN_10011d60((int *)((int)local_8 + 0x198));
      thunk_FUN_10011d60((int *)((int)local_8 + 0x1d0));
      if (local_c != 0) {
        thunk_FUN_10011d60((int *)(local_c + 0x74));
        thunk_FUN_10011d60((int *)(local_c + 0xac));
      }
      if (local_10 != 0) {
        thunk_FUN_10011d60((int *)(local_10 + 0xe4));
        thunk_FUN_10011d60((int *)(local_10 + 0x11c));
      }
      if (local_14 != 0) {
        thunk_FUN_10011d60((int *)(local_14 + 4));
        thunk_FUN_10011d60((int *)(local_14 + 0x3c));
      }
      for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
        *(float *)(&DAT_10070a18 + local_24 * 4 + *(int *)((int)local_8 + 0x1d4) * 0xc) =
             *(float *)((int)local_8 + local_24 * 4 + 0x1fc) +
             *(float *)((int)local_8 + local_24 * 4 + 0x1c4);
        if (local_c != 0) {
          *(float *)(&DAT_10070a18 + local_24 * 4 + *(int *)((int)local_8 + 0x1d4) * 0xc) =
               *(float *)(local_c + 0xa0 + local_24 * 4) + *(float *)(local_c + 0xd8 + local_24 * 4)
               + *(float *)(&DAT_10070a18 + local_24 * 4 + *(int *)((int)local_8 + 0x1d4) * 0xc);
        }
        if (local_10 != 0) {
          *(float *)(&DAT_10070a18 + local_24 * 4 + *(int *)((int)local_8 + 0x1d4) * 0xc) =
               *(float *)(local_10 + 0x110 + local_24 * 4) +
               *(float *)(local_10 + 0x148 + local_24 * 4) +
               *(float *)(&DAT_10070a18 + local_24 * 4 + *(int *)((int)local_8 + 0x1d4) * 0xc);
        }
        if (local_14 != 0) {
          *(float *)(&DAT_10070a18 + local_24 * 4 + *(int *)((int)local_8 + 0x1d4) * 0xc) =
               *(float *)(local_14 + 0x30 + local_24 * 4) +
               *(float *)(local_14 + 0x68 + local_24 * 4) +
               *(float *)(&DAT_10070a18 + local_24 * 4 + *(int *)((int)local_8 + 0x1d4) * 0xc);
        }
      }
      thunk_FUN_10037c80((float *)(&DAT_10070a18 + *(int *)((int)local_8 + 0x1d4) * 0xc));
    }
  }
  local_8 = (void *)0x10012a15;
  __chkesp();
  return;
}

