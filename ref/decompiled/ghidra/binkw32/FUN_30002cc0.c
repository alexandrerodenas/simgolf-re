/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30002cc0 @ 0x30002CC0 */


int __cdecl FUN_30002cc0(HDC param_1,undefined4 *param_2)

{
  HBITMAP hbm;
  int iVar1;
  tagBITMAPINFO *ptVar2;
  tagBITMAPINFO local_428 [24];
  
  if (2 < DAT_3004164c) {
    *param_2 = 0xff0000;
    param_2[1] = 0xff00;
    param_2[2] = 0xff;
    return ((DAT_3004164c != 3) - 1 & 0xfffffffe) + 3;
  }
  ptVar2 = local_428;
  for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
    (ptVar2->bmiHeader).biSize = 0;
    ptVar2 = (tagBITMAPINFO *)&(ptVar2->bmiHeader).biWidth;
  }
  local_428[0].bmiHeader.biSize = 0x28;
  hbm = CreateCompatibleBitmap(param_1,1,1);
  if (hbm != (HBITMAP)0x0) {
    GetDIBits(param_1,hbm,0,1,(LPVOID)0x0,local_428,0);
    GetDIBits(param_1,hbm,0,1,(LPVOID)0x0,local_428,0);
    DeleteObject(hbm);
    if ((local_428[0].bmiHeader.biCompression == 3) &&
       (local_428[0].bmiColors[0] == (RGBQUAD)0xf800)) {
      *param_2 = 0xf800;
      param_2[1] = 0x7e0;
      param_2[2] = 0x1f;
      return 10;
    }
  }
  *param_2 = 0x7c00;
  param_2[1] = 0x3e0;
  param_2[2] = 0x1f;
  return 9;
}

