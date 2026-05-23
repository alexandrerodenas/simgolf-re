/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10029b80 @ 0x10029B80 */
/* Body size: 148 addresses */


void __cdecl FUN_10029b80(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (((param_1 != 0) && (param_1 != 1)) &&
     (iVar2 = FUN_1001a320(2,0x10060824,0xa1,0,(byte *)"flag == 0 || flag == 1"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 != 0) && ((param_2[3] & 0x1000U) != 0)) {
    FUN_1001ec30(param_2);
    param_2[3] = param_2[3] & 0xffffeeff;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}

