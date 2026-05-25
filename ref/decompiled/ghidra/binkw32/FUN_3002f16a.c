/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002f16a @ 0x3002F16A */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall FUN_3002f16a(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  void *this_00;
  byte bVar6;
  undefined *puVar7;
  void *local_c;
  byte *local_8;
  
  local_c = (void *)0x0;
  bVar6 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_30040e1c < 2) {
      uVar3 = (byte)PTR_DAT_30040c10[(uint)bVar6 * 2] & 8;
      this = PTR_DAT_30040c10;
    }
    else {
      puVar7 = (undefined *)0x8;
      uVar3 = FUN_3002f7b7(this,(uint)bVar6,8);
      this = puVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar6 == 0x2d) {
    param_4 = param_4 | 2;
LAB_3002f1c5:
    bVar6 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar6 == 0x2b) goto LAB_3002f1c5;
  if ((((int)param_3 < 0) || (param_3 == (void *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (void *)0x0;
  }
  this_00 = (void *)0x10;
  if (param_3 == (void *)0x0) {
    if (bVar6 != 0x30) {
      param_3 = (void *)0xa;
      goto LAB_3002f22f;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_3002f22f;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar6 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar6 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_3002f22f:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar6;
    if (DAT_30040e1c < 2) {
      uVar5 = (byte)PTR_DAT_30040c10[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_3002f7b7(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_30040e1c < 2) {
        uVar3 = *(ushort *)(PTR_DAT_30040c10 + uVar3 * 2) & 0x103;
      }
      else {
        pvVar2 = (void *)0x103;
        uVar3 = FUN_3002f7b7(this_00,uVar3,0x103);
        this_00 = pvVar2;
      }
      if (uVar3 == 0) {
LAB_3002f2db:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (void *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((void *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((void *)0x7fffffff < local_c)))))))) {
          _DAT_3004f240 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (void *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (void *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (void *)-(int)local_c;
      }
      uVar3 = FUN_3003182e(this_00,(int)(char)bVar6);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar6 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_3002f2db;
    if ((local_c < pvVar4) ||
       ((local_c == pvVar4 && (this_00 <= (void *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = (void *)((int)local_c * (int)param_3 + (int)this_00);
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar6 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}

