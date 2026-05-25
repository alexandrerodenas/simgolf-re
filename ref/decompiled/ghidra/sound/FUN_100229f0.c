/* Ghidra decompiled: sound.dll */
/* Function: FUN_100229f0 @ 0x100229F0 */


undefined4 __thiscall FUN_100229f0(void *this,undefined4 *param_1)

{
  int *this_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *this_01;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058d56;
  local_c = ExceptionList;
  puVar5 = (undefined4 *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 10;
  }
  else {
    ExceptionList = &local_c;
    puVar2 = operator_new(0x38);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar5 = thunk_FUN_1000b000(puVar2);
    }
    puVar2 = puVar5;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1 = (undefined4 *)0x0;
    uVar6 = puVar5[2];
    local_4 = 0xffffffff;
    if (uVar6 <= (uint)puVar5[3]) {
      do {
        thunk_FUN_1001d780((void *)((int)this + 0x60),(int *)&param_1,uVar6);
        if (param_1 != (undefined4 *)0x0) {
          param_1[0x116] = puVar5;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 <= (uint)puVar5[3]);
    }
    if (*(int *)((int)this + 0x224) == 0) {
      thunk_FUN_1001f150((int)this + 0x60);
      puVar3 = operator_new(0xc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = puVar5;
      }
      if (*(int *)((int)this + 0x21c) == 0) {
        *(undefined4 **)((int)this + 0x218) = puVar3;
      }
      else {
        *(undefined4 **)(*(int *)((int)this + 0x21c) + 4) = puVar3;
        *puVar3 = *(undefined4 *)((int)this + 0x21c);
      }
      *(undefined4 **)((int)this + 0x21c) = puVar3;
      *(int *)((int)this + 0x224) = *(int *)((int)this + 0x224) + 1;
      puVar3 = operator_new(0xc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = puVar5;
      }
      if (*(int *)((int)this + 0x22c) == 0) {
        *(undefined4 **)((int)this + 0x228) = puVar3;
      }
      else {
        *(undefined4 **)(*(int *)((int)this + 0x22c) + 4) = puVar3;
        *puVar3 = *(undefined4 *)((int)this + 0x22c);
      }
      *(undefined4 **)((int)this + 0x22c) = puVar3;
      *(int *)((int)this + 0x234) = *(int *)((int)this + 0x234) + 1;
    }
    else {
      iVar4 = *(int *)((int)this + 0x218);
      this_00 = (int *)((int)this + 0x218);
      *(int *)((int)this + 0x220) = iVar4;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
      *(undefined4 *)((int)this + 0x230) = *(undefined4 *)((int)this + 0x228);
      while (iVar4 != 0) {
        if ((uint)puVar5[1] <= *(uint *)(iVar4 + 4)) {
          if (iVar4 != 0) {
            if (*(undefined4 **)((int)this + 0x220) != (undefined4 *)0x0) {
              *(undefined4 *)((int)this + 0x220) = **(undefined4 **)((int)this + 0x220);
            }
            if (*this_00 == 0) {
              thunk_FUN_10024de0(this_00,puVar5);
            }
            else if (*(int *)((int)this + 0x220) == 0) {
              thunk_FUN_10024f90(this_00,puVar5);
            }
            else {
              puVar3 = *(undefined4 **)(*(int *)((int)this + 0x220) + 4);
              if (puVar3 == (undefined4 *)0x0) {
                thunk_FUN_10024de0(this_00,puVar5);
              }
              else {
                this_01 = operator_new(0xc);
                local_4 = 1;
                if (this_01 == (void *)0x0) {
                  puVar2 = (undefined4 *)0x0;
                }
                else {
                  puVar2 = (undefined4 *)thunk_FUN_10025010(this_01,puVar5);
                }
                local_4 = 0xffffffff;
                *(undefined4 **)(*(int *)((int)this + 0x220) + 4) = puVar2;
                *puVar3 = puVar2;
                uVar1 = *(undefined4 *)((int)this + 0x220);
                puVar2[1] = puVar3;
                *puVar2 = uVar1;
                *(int *)((int)this + 0x224) = *(int *)((int)this + 0x224) + 1;
              }
            }
            if (*(undefined4 **)((int)this + 0x230) != (undefined4 *)0x0) {
              *(undefined4 *)((int)this + 0x230) = **(undefined4 **)((int)this + 0x230);
            }
            thunk_FUN_10024e60((void *)((int)this + 0x228),puVar5);
            goto LAB_10022ba6;
          }
          break;
        }
        if (*(int *)((int)this + 0x220) == 0) {
LAB_10022b83:
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)((int)this + 0x220) + 4);
          *(int *)((int)this + 0x220) = iVar4;
          if (iVar4 == 0) goto LAB_10022b83;
          iVar4 = *(int *)(iVar4 + 8);
        }
        if (*(int *)((int)this + 0x230) != 0) {
          *(undefined4 *)((int)this + 0x230) = *(undefined4 *)(*(int *)((int)this + 0x230) + 4);
        }
      }
      thunk_FUN_10024de0(this_00,puVar5);
      thunk_FUN_10024de0((void *)((int)this + 0x228),puVar5);
    }
LAB_10022ba6:
    uVar1 = 0;
  }
  ExceptionList = local_c;
  return uVar1;
}

