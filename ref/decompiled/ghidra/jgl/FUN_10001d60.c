/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001d60 @ 0x10001D60 */


undefined4 __fastcall FUN_10001d60(int *param_1)

{
  HDC hdc;
  HGDIOBJ h;
  
  hdc = (HDC)(**(code **)(*param_1 + 0x28))();
  h = GetStockObject(0xd);
  SelectObject(hdc,h);
  (**(code **)(*param_1 + 0x2c))(1);
  return 0;
}

