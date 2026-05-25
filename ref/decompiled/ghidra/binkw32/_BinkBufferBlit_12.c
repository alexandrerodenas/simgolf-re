/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferBlit@12 @ 0x30003050 */


void _BinkBufferBlit_12(uint *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint hDest;
  uint xSrc;
  uint hSrc;
  uint uVar3;
  uint *puVar4;
  undefined4 local_98 [20];
  undefined4 local_48;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  HDC local_c;
  uint local_8;
  
                    /* 0x3050  1  _BinkBufferBlit@12 */
  puVar2 = param_1;
  uVar3 = 0;
  if ((param_1 != (uint *)0x0) && (param_3 != 0)) {
    if (param_1[0x19] != 0) {
      (**(code **)(*DAT_3004163c + 0x70))(DAT_3004163c,param_1[0x13]);
      local_48 = DAT_3004152c;
      local_98[0] = 100;
      if (param_2 != 0) goto LAB_300030c2;
      local_1c = param_1[0x14];
      local_18 = param_1[0x15];
      local_14 = param_1[0xf] + local_1c;
      local_10 = param_1[0x10] + local_18;
      param_3 = 0;
      while( true ) {
        (**(code **)(*DAT_3004163c + 0x14))(DAT_3004163c,&local_1c,0,&local_1c,0x1000400,local_98);
        uVar3 = uVar3 + 1;
        if (param_3 <= uVar3) break;
LAB_300030c2:
        piVar1 = (int *)(uVar3 * 0x10 + param_2);
        local_1c = param_1[0x14] + *piVar1;
        local_18 = piVar1[1] + param_1[0x15];
        local_14 = piVar1[2] + local_1c;
        local_10 = piVar1[3] + local_18;
      }
      (**(code **)(*DAT_3004163c + 0x70))(DAT_3004163c,0);
      return;
    }
    if (param_1[0x1a] != 0) {
      (**(code **)(*DAT_3004163c + 0x70))(DAT_3004163c,param_1[0x13]);
      if (param_2 != 0) goto LAB_30003183;
      local_34 = param_1[0x14];
      local_30 = param_1[0x15];
      local_2c = param_1[0xf] + local_34;
      local_28 = param_1[0x10] + local_30;
      local_14 = *param_1;
      local_10 = param_1[1];
      local_18 = 0;
      local_1c = 0;
      param_3 = 0;
      while( true ) {
        (**(code **)(*DAT_3004163c + 0x14))
                  (DAT_3004163c,&local_34,param_1[0x12],&local_1c,0x1000000,0);
        uVar3 = uVar3 + 1;
        if (param_3 <= uVar3) break;
LAB_30003183:
        puVar2 = (uint *)(uVar3 * 0x10 + param_2);
        local_34 = param_1[0x14] +
                   (int)(((ulonglong)*puVar2 * (ulonglong)param_1[0xf]) / (ulonglong)*param_1);
        local_30 = param_1[0x15] +
                   (int)(((ulonglong)puVar2[1] * (ulonglong)param_1[0x10]) / (ulonglong)param_1[1]);
        local_8 = param_1[0x10];
        local_2c = (int)(((ulonglong)puVar2[2] * (ulonglong)param_1[0xf]) / (ulonglong)*param_1) +
                   local_34;
        local_c = (HDC)puVar2[3];
        local_28 = (int)((ZEXT48(local_c) * (ulonglong)local_8) / (ulonglong)param_1[1]) + local_30;
        local_18 = puVar2[1];
        local_1c = *puVar2;
        local_14 = puVar2[2] + local_1c;
        local_10 = puVar2[3] + local_18;
      }
      (**(code **)(*DAT_3004163c + 0x70))(DAT_3004163c,0);
      return;
    }
    if (param_1[0x23] != 0) {
      local_c = GetDC((HWND)param_1[0x18]);
      SetStretchBltMode(local_c,3);
      param_1 = (uint *)0x0;
      if (param_2 != 0) goto LAB_300032d7;
      local_2c = puVar2[0xf];
      local_30 = puVar2[0x17];
      local_14 = *puVar2;
      uVar3 = puVar2[0x16];
      xSrc = 0;
      hDest = puVar2[0x10];
      hSrc = puVar2[1];
      local_18 = 0;
      param_3 = 0;
      param_1 = (uint *)0x0;
      while( true ) {
        StretchBlt(local_c,uVar3,local_30,local_2c,hDest,(HDC)puVar2[0x27],xSrc,local_18,local_14,
                   hSrc,0xcc0020);
        param_1 = (uint *)((int)param_1 + 1);
        if (param_3 <= param_1) break;
LAB_300032d7:
        puVar4 = (uint *)((int)param_1 * 0x10 + param_2);
        uVar3 = puVar2[0x16] +
                (int)(((ulonglong)*puVar4 * (ulonglong)puVar2[0xf]) / (ulonglong)*puVar2);
        local_30 = puVar2[0x17] +
                   (int)(((ulonglong)puVar4[1] * (ulonglong)puVar2[0x10]) / (ulonglong)puVar2[1]);
        local_2c = (uint)(((ulonglong)puVar4[2] * (ulonglong)puVar2[0xf]) / (ulonglong)*puVar2);
        local_20 = puVar2[1];
        local_24 = puVar2[0x10];
        local_8 = puVar4[3];
        hDest = (uint)(((ulonglong)local_8 * (ulonglong)local_24) / (ulonglong)local_20);
        local_18 = puVar4[1];
        xSrc = *puVar4;
        local_14 = puVar4[2];
        hSrc = puVar4[3];
      }
      ReleaseDC((HWND)puVar2[0x18],local_c);
    }
  }
  return;
}

