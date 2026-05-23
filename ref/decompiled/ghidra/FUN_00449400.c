/* Ghidra decompiled: golf.exe */
/* Function: FUN_00449400 @ 0x00449400 */
/* Body size: 107 addresses */


void FUN_00449400(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int local_5c [23];
  
  piVar2 = local_5c;
  pcVar1 = &DAT_00578372;
  do {
    *piVar2 = (int)pcVar1[4];
    if ((((DAT_005a34e0 == '\x01') && ('\0' < *pcVar1)) && (pcVar1 != &DAT_00578462)) &&
       (pcVar1 != &DAT_005784c2)) {
      *piVar2 = 4;
    }
    pcVar1 = pcVar1 + 0x30;
    piVar2 = piVar2 + 1;
  } while ((int)pcVar1 < 0x5787c2);
  Terrain::passCollarInfo(DAT_00820ed0,local_5c,0x17);
  Terrain::loadNewCourseType(DAT_00820ed0,param_1);
  return;
}

