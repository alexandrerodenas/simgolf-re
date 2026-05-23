/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10007b40 @ 0x10007B40 */
/* Body size: 693 addresses */


undefined4 FUN_10007b40(LPCSTR param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  undefined1 local_330 [768];
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  uint local_1c;
  FILE *local_18;
  uint local_14;
  undefined4 *local_10;
  uint *local_c;
  int *local_8;
  
  pFVar1 = (FILE *)FUN_10046bd5(param_1,&DAT_100550f8);
  if (pFVar1 == (FILE *)0x0) {
    return 6;
  }
  local_18 = pFVar1;
  local_8 = FUN_1003d5c0(s_1_0_5_100550f0,0,&LAB_10007b30,&LAB_10007b30);
  if (local_8 == (int *)0x0) {
    FUN_10046b5f(pFVar1);
    return 1;
  }
  local_c = FUN_10042a80((int)local_8);
  if (local_c == (uint *)0x0) {
    FUN_10046b5f(pFVar1);
    FUN_1003e0a0(&local_8,(undefined4 *)0x0,(undefined4 *)0x0);
    return 1;
  }
  iVar2 = __setjmp3(local_8,0,unaff_EDI,unaff_ESI);
  pFVar1 = local_18;
  if (iVar2 == 0) {
    FUN_10042b80((int)local_8,local_18);
    FUN_1003d710(local_8,local_c);
    FUN_1003e750((int)local_8,local_c,&local_24,&local_14,&local_28,&local_1c,&local_30,(uint *)0x0,
                 (uint *)0x0);
    if ((local_1c != 2) && (*(char *)((int)local_c + 0x1e) != '\x18')) {
      FUN_1003e0a0(&local_8,&local_c,(undefined4 *)0x0);
      FUN_10046b5f(pFVar1);
      return 0x17;
    }
    if (local_28 == 0x10) {
      FUN_1003e370((int)local_8);
    }
    if ((local_1c & 4) != 0) {
      FUN_1003e880((int)local_8);
    }
    if ((param_2 != (int *)0x0) && (local_1c == 3)) {
      local_10 = (undefined4 *)0x100;
      FUN_1003e840((int)local_8,(int)local_c,&local_2c,(uint *)&local_10);
      puVar6 = local_330 + 1;
      iVar2 = 0x100;
      puVar3 = (undefined1 *)(local_2c + 2);
      do {
        puVar6[-1] = puVar3[-2];
        *puVar6 = puVar3[-1];
        (puVar3 + 3)[(int)(local_330 + (-3 - local_2c))] = *puVar3;
        puVar6 = puVar6 + 3;
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + 3;
      } while (iVar2 != 0);
      (**(code **)(*param_2 + 0x14))(&local_30,param_3,param_4);
      (**(code **)(*local_20 + 0xec))(param_2);
    }
    FUN_1003e360((int)local_8);
    (**(code **)(*(int *)local_20[0x20] + 4))
              (local_24,local_14,*(undefined1 *)((int)local_c + 0x1e));
    (**(code **)(*local_20 + 0x44))(0,2);
    puVar4 = _malloc(local_14 << 2);
    uVar7 = 0;
    local_10 = puVar4;
    if (local_14 != 0) {
      do {
        uVar5 = (**(code **)(*local_20 + 0xc))(0,uVar7);
        *puVar4 = uVar5;
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar7 < local_14);
    }
    FUN_1003de30(local_8,local_10);
    FUN_1003de90(local_8,local_c);
    FUN_1003e0a0(&local_8,&local_c,(undefined4 *)0x0);
    FUN_10046b5f(local_18);
    if (local_10 != (undefined4 *)0x0) {
      FUN_10046abc(local_10);
    }
    return 0;
  }
  FUN_1003e0a0(&local_8,&local_c,(undefined4 *)0x0);
  FUN_10046b5f(local_18);
  return 1;
}

