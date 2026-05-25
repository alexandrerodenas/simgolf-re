/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008f70 @ 0x10008F70 */


void FUN_10008f70(int *param_1,int *param_2,int *param_3)

{
  int hSrc;
  int wSrc;
  int hDest;
  int wDest;
  int iVar1;
  undefined4 *puVar2;
  HDC hdcSrc;
  int xSrc;
  DWORD rop;
  undefined4 local_54 [16];
  int *local_14;
  HDC local_10;
  HDC local_c;
  int *local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_14 = param_1;
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x28))();
    local_c = (HDC)__chkesp();
    if (local_c != (HDC)0x0) {
      (**(code **)(*local_8 + 0x28))();
      local_10 = (HDC)__chkesp();
      if (local_10 == (HDC)0x0) {
        (**(code **)(*local_14 + 0x2c))(1);
        __chkesp();
      }
      else {
        rop = 0xcc0020;
        hSrc = thunk_FUN_10009160((int)param_2);
        wSrc = thunk_FUN_10009120(param_2);
        iVar1 = param_2[1];
        xSrc = *param_2;
        hdcSrc = local_10;
        hDest = thunk_FUN_10009160((int)param_3);
        wDest = thunk_FUN_10009120(param_3);
        StretchBlt(local_c,*param_3,param_3[1],wDest,hDest,hdcSrc,xSrc,iVar1,wSrc,hSrc,rop);
        __chkesp();
        (**(code **)(*local_14 + 0x2c))(1);
        __chkesp();
        (**(code **)(*local_8 + 0x2c))(1);
        __chkesp();
      }
    }
  }
  local_8 = (int *)0x100090b8;
  __chkesp();
  return;
}

