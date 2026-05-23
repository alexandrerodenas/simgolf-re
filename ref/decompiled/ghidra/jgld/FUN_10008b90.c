/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008b90 @ 0x10008B90 */
/* Body size: 130 addresses */


void __fastcall FUN_10008b90(int *param_1)

{
  HGDIOBJ h;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  HDC local_c;
  int *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  (**(code **)(*param_1 + 0x28))();
  local_c = (HDC)__chkesp();
  GetStockObject(0xd);
  h = (HGDIOBJ)__chkesp();
  SelectObject(local_c,h);
  __chkesp();
  (**(code **)(*local_8 + 0x2c))(1);
  __chkesp();
  local_c = (HDC)0x10008c0e;
  __chkesp();
  return;
}

