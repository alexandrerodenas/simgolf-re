/* Ghidra decompiled: golf.exe */
/* Function: FUN_00449790 @ 0x00449790 */
/* Body size: 208 addresses */


void FUN_00449790(int param_1,int param_2)

{
  char *pcVar1;
  HDC__ *pHVar2;
  int *piVar3;
  undefined1 uVar4;
  int local_f0 [23];
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  piVar3 = local_f0;
  GetVersionExA(&local_94);
  if (4 < local_94.dwMajorVersion) {
    DAT_00820f28 = 1;
  }
  DAT_00820f30 = param_1;
  DAT_00820f34 = param_2;
  pcVar1 = &DAT_00578372;
  do {
    *piVar3 = (int)pcVar1[4];
    if ((((DAT_005a34e0 == '\x01') && ('\0' < *pcVar1)) && (pcVar1 != &DAT_00578462)) &&
       (pcVar1 != &DAT_005784c2)) {
      *piVar3 = 4;
    }
    pcVar1 = pcVar1 + 0x30;
    piVar3 = piVar3 + 1;
  } while ((int)pcVar1 < 0x5787c2);
  Terrain::passCollarInfo(DAT_00820ed0,local_f0,0x17);
  uVar4 = DAT_00820f28;
  pHVar2 = (HDC__ *)(**(code **)(*DAT_00519cd8 + 0x28))();
  Terrain::initSystem(DAT_00820ed0,param_1,param_2,pHVar2,(bool)uVar4);
  Terrain::initTerrain(DAT_00820ed0);
  FUN_00449540();
  return;
}

