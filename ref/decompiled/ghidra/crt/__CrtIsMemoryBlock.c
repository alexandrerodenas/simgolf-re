/* Ghidra decompiled: jgld.dll */
/* Function: __CrtIsMemoryBlock @ 0x100814E0 */
/* Body size: 262 addresses */


/* Library Function - Single Match
    __CrtIsMemoryBlock
   
   Library: Visual Studio 2003 Debug */

undefined4
__CrtIsMemoryBlock(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f298;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  BVar1 = FUN_100813b0((int)param_1);
  if (BVar1 != 0) {
    FUN_100833f0(9);
    local_8 = 0;
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = __CrtIsValidPointer(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_10123354)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
    }
    local_8 = 0xffffffff;
    FUN_100815e6();
    uVar3 = FUN_100815f1();
    return uVar3;
  }
  ExceptionList = pvStack_14;
  return 0;
}

