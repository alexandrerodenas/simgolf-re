/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100145a0 @ 0x100145A0 */


undefined4 FUN_100145a0(LPCSTR param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar3;
  undefined4 local_388 [16];
  uint local_348;
  undefined4 *local_344;
  undefined1 auStack_340 [768];
  int local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined **local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18 [2];
  uint *local_10;
  int *local_c;
  int *local_8;
  
  puVar3 = local_388;
  for (iVar2 = 0xe1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_18[1] = 0;
  local_2c = (undefined **)FUN_1007faa0(param_1,"rb");
  if (local_2c == (undefined **)0x0) {
    uVar1 = 6;
  }
  else {
    local_c = FUN_1006bac0("1.0.5",0,&LAB_1000117c,&LAB_1000117c);
    if (local_c == (int *)0x0) {
      FUN_1007f850(local_2c);
      uVar1 = 1;
    }
    else {
      local_10 = (uint *)FUN_10078870((int)local_c);
      if (local_10 == (uint *)0x0) {
        FUN_1007f850(local_2c);
        FUN_1006d150(&local_c,(undefined4 *)0x0,(undefined4 *)0x0);
        uVar1 = 1;
      }
      else {
        iVar2 = __setjmp3(local_c,0,unaff_EDI,unaff_ESI);
        if (iVar2 == 0) {
          FUN_10078ad0((int)local_c,local_2c);
          FUN_1006be20(local_c,local_10);
          FUN_1006eae0((int)local_c,local_10,local_18,&local_1c,&local_20,&local_24,&local_28,
                       (uint *)0x0,(uint *)0x0);
          if ((local_24 == 2) || (*(char *)((int)local_10 + 0x1e) == '\x18')) {
            if (local_20 == 0x10) {
              FUN_1006d630((int)local_c);
            }
            if ((local_24 & 4) != 0) {
              FUN_1006f360((int)local_c);
            }
            if ((param_2 != (int *)0x0) && (local_24 == 3)) {
              local_3c = 0x100;
              FUN_1006ee50((int)local_c,(int)local_10,&local_38,&local_3c);
              for (local_40 = 0; local_40 < 0x100; local_40 = local_40 + 1) {
                auStack_340[local_40 * 3] = *(undefined1 *)(local_38 + local_40 * 3);
                auStack_340[local_40 * 3 + 1] = *(undefined1 *)(local_38 + 1 + local_40 * 3);
                auStack_340[local_40 * 3 + 2] = *(undefined1 *)(local_38 + 2 + local_40 * 3);
              }
              (**(code **)(*param_2 + 0x14))(auStack_340 + local_40 * 3,param_3,param_4);
              __chkesp();
              (**(code **)(*local_8 + 0xec))(param_2);
              __chkesp();
            }
            local_30 = 0x3f800000;
            FUN_1006d600((int)local_c);
            (**(code **)(*(int *)local_8[0x20] + 4))
                      (local_18[0],local_1c,*(undefined1 *)((int)local_10 + 0x1e));
            local_34 = __chkesp();
            (**(code **)(*local_8 + 0x44))(0,2);
            __chkesp();
            local_344 = (undefined4 *)thunk_FUN_10014a40(local_1c << 2);
            for (local_348 = 0; local_348 < local_1c; local_348 = local_348 + 1) {
              (**(code **)(*local_8 + 0xc))(0,local_348);
              uVar1 = __chkesp();
              local_344[local_348] = uVar1;
            }
            FUN_1006cc50(local_c,local_344);
            FUN_1006cd00(local_c,local_10);
            FUN_1006d150(&local_c,&local_10,(undefined4 *)0x0);
            FUN_1007f850(local_2c);
            thunk_FUN_10014a90(local_344);
            uVar1 = 0;
          }
          else {
            FUN_1006d150(&local_c,&local_10,(undefined4 *)0x0);
            FUN_1007f850(local_2c);
            uVar1 = 0x17;
          }
        }
        else {
          FUN_1006d150(&local_c,&local_10,(undefined4 *)0x0);
          FUN_1007f850(local_2c);
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

