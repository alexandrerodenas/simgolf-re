/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100016a0 @ 0x100016A0 */
/* Body size: 480 addresses */


void __cdecl FUN_100016a0(LPCSTR param_1,int *param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_64 [16];
  uint local_24 [2];
  int local_1a;
  uint local_14;
  size_t local_10;
  char *local_c;
  undefined **local_8;
  
  puVar5 = local_64;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_8 = (undefined **)FUN_10018080(param_1,"rb");
  if (local_8 != (undefined **)0x0) {
    uVar1 = FUN_10017d70(local_8,(char *)local_24,0xe,1,local_8);
    if (uVar1 == 0) {
      FUN_10017c20(local_8);
    }
    else if ((local_24[0] & 0xffff) == 0x4d42) {
      local_14 = local_1a - 0xe;
      pvVar2 = _malloc(local_14);
      *param_2 = (int)pvVar2;
      if (*param_2 == 0) {
        FUN_10017c20(local_8);
      }
      else {
        uVar1 = FUN_10017d70(param_2,(char *)*param_2,1,local_14,local_8);
        if (uVar1 < local_14) {
          FUN_10016470((void *)*param_2);
          FUN_10017c20(local_8);
        }
        else {
          local_10 = *(size_t *)(*param_2 + 0x14);
          if (local_10 == 0) {
            iVar4 = *(int *)(*param_2 + 4) * (uint)*(ushort *)(*param_2 + 0xe) + 7;
            iVar3 = FUN_100158b0(*(int *)(*param_2 + 8));
            local_10 = ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) * iVar3;
          }
          local_c = _malloc(local_10);
          if (local_c == (char *)0x0) {
            FUN_10016470((void *)*param_2);
            FUN_10017c20(local_8);
          }
          else {
            uVar1 = FUN_10017d70(local_8,local_c,1,local_10,local_8);
            if (uVar1 < local_10) {
              FUN_10016470((void *)*param_2);
              FUN_10016470(local_c);
              FUN_10017c20(local_8);
            }
            else {
              FUN_10017c20(local_8);
            }
          }
        }
      }
    }
    else {
      FUN_10017c20(local_8);
    }
  }
  local_8 = (undefined **)0x1000187c;
  __chkesp();
  return;
}

