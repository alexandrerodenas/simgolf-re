/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10069b90 @ 0x10069B90 */
/* Body size: 171 addresses */


void __cdecl FUN_10069b90(HWND param_1,uint param_2,LPARAM param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [13];
  undefined4 uStack_10;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  InvalidateRect(param_1,(RECT *)0x0,0);
  __chkesp();
  if ((param_2 != 0) && (param_4 == 0)) {
    thunk_FUN_100699c0(param_1);
  }
  (**(code **)(*DAT_1012872c + 0x2c))(param_2,param_4);
  __chkesp();
  DefWindowProcA(param_1,6,param_2 & 0xffff | param_4 << 0x10,param_3);
  __chkesp();
  uStack_10 = 0x10069c37;
  __chkesp();
  return;
}

