/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100381a0 @ 0x100381A0 */
/* Body size: 1877 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100381a0(int param_1,undefined4 param_2,float param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_e4 [16];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar5 = local_e4;
  for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_c = thunk_FUN_10005960(param_1);
  local_10 = thunk_FUN_10006810(param_1);
  thunk_FUN_1000b280(&local_14);
  if (param_3 == _DAT_1005f1e0) {
    cVar1 = thunk_FUN_1000b040(local_8 + 0x164ac4);
    if (cVar1 == '\0') {
      piVar3 = (int *)thunk_FUN_1000af70((void *)(local_8 + 0x164ac4),&local_18);
      local_14 = *piVar3;
      while( true ) {
        piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_1c);
        cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
        if (cVar1 == '\0') break;
        piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
        iVar4 = thunk_FUN_10005960(*piVar3);
        if (iVar4 <= local_c) break;
        thunk_FUN_1000b320(&local_14,&local_20);
      }
      piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_24);
      bVar2 = thunk_FUN_1000b380(&local_14,piVar3);
      if (!bVar2) {
        piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
        iVar4 = thunk_FUN_10005960(*piVar3);
        if (local_c <= iVar4) {
          while( true ) {
            piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_2c);
            cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
            if (cVar1 == '\0') break;
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10006810(*piVar3);
            if (local_10 <= iVar4) break;
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10005960(*piVar3);
            if (iVar4 != local_c) break;
            thunk_FUN_1000b320(&local_14,&local_30);
          }
          piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_34);
          cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
          if (cVar1 != '\0') {
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10006810(*piVar3);
            if (iVar4 == local_10) {
              piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
              iVar4 = thunk_FUN_10005960(*piVar3);
              if (iVar4 == local_c) goto LAB_100388df;
            }
          }
          thunk_FUN_1000b100(&local_38,local_14,&param_1);
          goto LAB_100388df;
        }
      }
      thunk_FUN_1000b100(&local_28,local_14,&param_1);
    }
    else {
      thunk_FUN_1000b090((void *)(local_8 + 0x164ac4),&param_1);
    }
  }
  else if (param_3 == 90.0) {
    cVar1 = thunk_FUN_1000b040(local_8 + 0x164ac4);
    if (cVar1 == '\0') {
      piVar3 = (int *)thunk_FUN_1000af70((void *)(local_8 + 0x164ac4),&local_3c);
      local_14 = *piVar3;
      while( true ) {
        piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_40);
        cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
        if (cVar1 == '\0') break;
        piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
        iVar4 = thunk_FUN_10006810(*piVar3);
        if (iVar4 <= local_10) break;
        thunk_FUN_1000b320(&local_14,&local_44);
      }
      piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_48);
      bVar2 = thunk_FUN_1000b380(&local_14,piVar3);
      if (!bVar2) {
        piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
        iVar4 = thunk_FUN_10006810(*piVar3);
        if (local_10 <= iVar4) {
          while( true ) {
            piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_50);
            cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
            if (cVar1 == '\0') break;
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10005960(*piVar3);
            if (iVar4 <= local_c) break;
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10006810(*piVar3);
            if (iVar4 != local_10) break;
            thunk_FUN_1000b320(&local_14,&local_54);
          }
          piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_58);
          cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
          if (cVar1 != '\0') {
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10006810(*piVar3);
            if (iVar4 == local_10) {
              piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
              iVar4 = thunk_FUN_10005960(*piVar3);
              if (iVar4 == local_c) goto LAB_100388df;
            }
          }
          thunk_FUN_1000b100(&local_5c,local_14,&param_1);
          goto LAB_100388df;
        }
      }
      thunk_FUN_1000b100(&local_4c,local_14,&param_1);
    }
    else {
      thunk_FUN_1000b090((void *)(local_8 + 0x164ac4),&param_1);
    }
  }
  else if (param_3 == 180.0) {
    cVar1 = thunk_FUN_1000b040(local_8 + 0x164ac4);
    if (cVar1 == '\0') {
      piVar3 = (int *)thunk_FUN_1000af70((void *)(local_8 + 0x164ac4),&local_60);
      local_14 = *piVar3;
      while( true ) {
        piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_64);
        cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
        if (cVar1 == '\0') break;
        piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
        iVar4 = thunk_FUN_10005960(*piVar3);
        if (local_c <= iVar4) break;
        thunk_FUN_1000b320(&local_14,&local_68);
      }
      piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_6c);
      bVar2 = thunk_FUN_1000b380(&local_14,piVar3);
      if (!bVar2) {
        piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
        iVar4 = thunk_FUN_10005960(*piVar3);
        if (iVar4 <= local_c) {
          while( true ) {
            piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_74);
            cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
            if (cVar1 == '\0') break;
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10006810(*piVar3);
            if (iVar4 <= local_10) break;
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10005960(*piVar3);
            if (iVar4 != local_c) break;
            thunk_FUN_1000b320(&local_14,&local_78);
          }
          piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_7c);
          cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
          if (cVar1 != '\0') {
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10006810(*piVar3);
            if (iVar4 == local_10) {
              piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
              iVar4 = thunk_FUN_10005960(*piVar3);
              if (iVar4 == local_c) goto LAB_100388df;
            }
          }
          thunk_FUN_1000b100(&local_80,local_14,&param_1);
          goto LAB_100388df;
        }
      }
      thunk_FUN_1000b100(&local_70,local_14,&param_1);
    }
    else {
      thunk_FUN_1000b090((void *)(local_8 + 0x164ac4),&param_1);
    }
  }
  else {
    cVar1 = thunk_FUN_1000b040(local_8 + 0x164ac4);
    if (cVar1 == '\0') {
      piVar3 = (int *)thunk_FUN_1000af70((void *)(local_8 + 0x164ac4),&local_84);
      local_14 = *piVar3;
      while( true ) {
        piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_88);
        cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
        if (cVar1 == '\0') break;
        piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
        iVar4 = thunk_FUN_10006810(*piVar3);
        if (local_10 <= iVar4) break;
        thunk_FUN_1000b320(&local_14,&local_8c);
      }
      piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_90);
      bVar2 = thunk_FUN_1000b380(&local_14,piVar3);
      if (!bVar2) {
        piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
        iVar4 = thunk_FUN_10006810(*piVar3);
        if (local_10 <= iVar4) {
          while( true ) {
            piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_98);
            cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
            if (cVar1 == '\0') break;
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10005960(*piVar3);
            if (local_c <= iVar4) break;
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10006810(*piVar3);
            if (iVar4 != local_10) break;
            thunk_FUN_1000b320(&local_14,&local_9c);
          }
          piVar3 = (int *)thunk_FUN_1000afe0((void *)(local_8 + 0x164ac4),&local_a0);
          cVar1 = thunk_FUN_1000b3d0(&local_14,piVar3);
          if (cVar1 != '\0') {
            piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
            iVar4 = thunk_FUN_10006810(*piVar3);
            if (iVar4 == local_10) {
              piVar3 = (int *)thunk_FUN_1000b2d0(&local_14);
              iVar4 = thunk_FUN_10005960(*piVar3);
              if (iVar4 == local_c) goto LAB_100388df;
            }
          }
          thunk_FUN_1000b100(&local_a4,local_14,&param_1);
          goto LAB_100388df;
        }
      }
      thunk_FUN_1000b100(&local_94,local_14,&param_1);
    }
    else {
      thunk_FUN_1000b090((void *)(local_8 + 0x164ac4),&param_1);
    }
  }
LAB_100388df:
  local_8 = 0x100388ef;
  __chkesp();
  return;
}

