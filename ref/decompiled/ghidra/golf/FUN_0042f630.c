/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f630 @ 0x0042F630 */
/* Body size: 172 addresses */


undefined4 FUN_0042f630(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_4;
  
  iVar3 = param_2;
  local_4 = 0;
  iVar5 = param_1 * 0x32;
  param_2 = 0;
  cVar1 = (&DAT_00543018)[iVar5 + iVar3];
  do {
    iVar7 = *(int *)((int)&DAT_004c2898 + param_2) + iVar3;
    iVar6 = *(int *)((int)&DAT_004c2878 + param_2) + param_1;
    iVar4 = FUN_0040bf60(iVar6,iVar7);
    if (((iVar4 == 0) &&
        (iVar7 = iVar7 + iVar6 * 0x32,
        *(char *)((int)&DAT_005722e8 + iVar7) == *(char *)((int)&DAT_005722e8 + iVar5 + iVar3))) &&
       (cVar2 = (&DAT_00543018)[iVar7], cVar2 < cVar1)) {
      (&DAT_00543018)[iVar5 + iVar3] = cVar2;
      local_4 = 1;
      cVar1 = cVar2;
    }
    param_2 = param_2 + 8;
  } while (param_2 < 0x20);
  return local_4;
}

