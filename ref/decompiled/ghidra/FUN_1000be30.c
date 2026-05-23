/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000be30 @ 0x1000BE30 */
/* Body size: 786 addresses */


void __cdecl FUN_1000be30(LPCSTR param_1)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *this;
  undefined4 *puVar5;
  undefined4 local_94 [16];
  char *local_54;
  char *local_50;
  char *local_4c;
  int local_48;
  undefined **local_44;
  char *local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  void *local_2c;
  int local_28;
  char local_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  byte bStack_20;
  char local_1c [12];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_8;
  
  puVar5 = local_94;
  for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_10 = 0;
  local_f = 0;
  local_e = 2;
  local_d = 0;
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_8 = 0;
  local_44 = (undefined **)FUN_10018080(param_1,"rb");
  if (local_44 != (undefined **)0x0) {
    uVar2 = FUN_10017d70(local_44,local_1c,1,0xc,local_44);
    if (((uVar2 == 0xc) && (iVar4 = _memcmp(&local_10,local_1c,0xc), iVar4 == 0)) &&
       (uVar2 = FUN_10017d70(this,&local_24,1,6,local_44), uVar2 == 6)) {
      local_38 = (CONCAT12(uStack_21,CONCAT11(uStack_22,uStack_23)) & 0xff) * 0x100 +
                 (CONCAT12(uStack_22,CONCAT11(uStack_23,local_24)) & 0xff);
      local_3c = (CONCAT11(bStack_20,uStack_21) & 0xff) * 0x100 +
                 (CONCAT12(bStack_20,CONCAT11(uStack_21,uStack_22)) & 0xff);
      if (((local_38 == 0) || (local_3c == 0)) || ((bStack_20 != 0x18 && (bStack_20 != 0x20)))) {
        FUN_10017c20(local_44);
      }
      else {
        local_28 = (int)(uint)bStack_20 >> 3;
        local_2c = (void *)(local_38 * local_3c * local_28);
        local_4c = operator_new((uint)local_2c);
        local_40 = local_4c;
        if ((local_4c == (char *)0x0) ||
           (pvVar3 = (void *)FUN_10017d70(local_2c,local_4c,1,(uint)local_2c,local_44),
           pvVar3 != local_2c)) {
          FUN_10017c20(local_44);
          if (local_40 != (char *)0x0) {
            local_50 = local_40;
            FUN_10018be0(local_40,local_40);
          }
        }
        else {
          for (local_48 = 0; local_48 < (int)local_2c; local_48 = local_48 + local_28) {
            bVar1 = local_40[local_48];
            local_30 = (uint)bVar1;
            local_40[local_48] = local_40[local_48 + 2];
            local_40[local_48 + 2] = bVar1;
          }
          FUN_10017c20(local_44);
          glGenTextures(1,&local_34);
          __chkesp();
          glBindTexture(0xde1,local_34);
          __chkesp();
          glTexParameterf(0xde1,0x2801,0x46180400);
          __chkesp();
          glTexParameterf(0xde1,0x2800,0x46180400);
          __chkesp();
          if (local_28 == 3) {
            glTexImage2D(0xde1,0,0x1907,local_38,local_3c,0,0x1907,0x1401,local_40);
            __chkesp();
          }
          else {
            glTexImage2D(0xde1,0,0x1908,local_38,local_3c,0,0x1908,0x1401,local_40);
            __chkesp();
          }
          if (local_40 != (char *)0x0) {
            local_54 = local_40;
            FUN_10018be0(local_40,local_40);
          }
        }
      }
    }
    else {
      FUN_10017c20(local_44);
    }
  }
  local_8 = 0x1000c13e;
  __chkesp();
  return;
}

