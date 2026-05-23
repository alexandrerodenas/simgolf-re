/* Ghidra decompiled: golf.exe */
/* Function: FUN_004823c0 @ 0x004823C0 */
/* Body size: 91 addresses */


void FUN_004823c0(undefined4 param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t unaff_retaddr;
  
  if (param_2 != 0) {
    iVar1 = FUN_00474860(param_1);
    if (iVar1 != 0) {
      DAT_00839650 = param_2;
      return;
    }
    MessageBoxA((HWND)0x0,s_out_of_heap_space_in_new_functio_004c1434,s_Aborting_004c1458,0);
    FUN_004a5108(3);
  }
  pvVar2 = _malloc(unaff_retaddr);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  DAT_00839650 = 0;
  return;
}

