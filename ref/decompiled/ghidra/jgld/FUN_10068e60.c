/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068e60 @ 0x10068E60 */


void __thiscall FUN_10068e60(void *this,LPCSTR param_1,int param_2)

{
  HGDIOBJ h;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  tagSIZE local_10;
  void *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (LPCSTR)0x0) {
    local_8 = this;
    SelectObject(DAT_10128724,*(HGDIOBJ *)((int)this + 0x18));
    __chkesp();
    GetTextExtentPoint32A(DAT_10128724,param_1,param_2,&local_10);
    __chkesp();
    GetStockObject(0xd);
    h = (HGDIOBJ)__chkesp();
    SelectObject(DAT_10128724,h);
    __chkesp();
  }
  local_8 = (void *)0x10068efd;
  __chkesp();
  return;
}

