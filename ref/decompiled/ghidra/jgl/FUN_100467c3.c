/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100467c3 @ 0x100467C3 */
/* Body size: 114 addresses */


undefined4 __cdecl FUN_100467c3(PEXCEPTION_RECORD param_1,PVOID param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_10047909(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_10046611(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1004682d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}

