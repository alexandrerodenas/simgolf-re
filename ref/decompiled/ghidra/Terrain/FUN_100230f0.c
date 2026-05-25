/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100230f0 @ 0x100230F0 */


undefined4 __cdecl
FUN_100230f0(undefined **param_1,undefined **param_2,uint param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_c;
  
  local_c = 0;
  if ((param_1 == (undefined **)0x0) &&
     (iVar3 = FUN_1001a320(2,0x10060478,0x36,0,(byte *)"str != NULL"), iVar3 == 1)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if ((param_3 != 4) &&
     (((param_4 < (undefined *)0x2 || ((undefined *)0x7fffffff < param_4)) ||
      ((param_3 != 0 && (param_3 != 0x40)))))) {
    return 0xffffffff;
  }
  param_4 = (undefined *)((uint)param_4 & 0xfffffffe);
  FUN_1001e8e0(param_4,param_1);
  FUN_1001ec30((int *)param_1);
  FUN_1001eaf0(param_1);
  puVar1 = param_1[3];
  param_1[3] = (undefined *)((uint)puVar1 & 0xffffc2f3);
  if ((param_3 & 4) == 0) {
    if (param_2 == (undefined **)0x0) {
      param_2 = (undefined **)
                __malloc_dbg((undefined *)((uint)puVar1 & 0xffffc2f3),param_4,2,"setvbuf.c",0x85);
      if (param_2 == (undefined **)0x0) {
        DAT_10110858 = DAT_10110858 + 1;
        local_c = 0xffffffff;
        goto LAB_10023247;
      }
      param_1[3] = (undefined *)((uint)param_1[3] | 0x408);
    }
    else {
      param_1[3] = (undefined *)((uint)param_1[3] | 0x500);
    }
  }
  else {
    param_1[3] = (undefined *)((uint)param_1[3] | 4);
    param_2 = param_1 + 5;
    param_4 = (undefined *)0x2;
  }
  param_1[6] = param_4;
  param_1[2] = (undefined *)param_2;
  *param_1 = (undefined *)param_2;
  param_1[1] = (undefined *)0x0;
LAB_10023247:
  FUN_1001e950(param_1);
  return local_c;
}

