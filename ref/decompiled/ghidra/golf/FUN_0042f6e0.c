/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f6e0 @ 0x0042F6E0 */
/* Body size: 181 addresses */


undefined4 FUN_0042f6e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_4;
  
  iVar5 = 0;
  local_4 = 0;
  iVar1 = param_2 + param_1 * 0x32;
  cVar2 = (&DAT_00543018)[iVar1];
  do {
    iVar7 = *(int *)((int)&DAT_004c2898 + iVar5) + param_2;
    iVar6 = *(int *)((int)&DAT_004c2878 + iVar5) + param_1;
    iVar4 = FUN_0040bf60(iVar6,iVar7);
    if ((((iVar4 == 0) &&
         (iVar7 = iVar7 + iVar6 * 0x32,
         *(char *)((int)&DAT_005722e8 + iVar7) == *(char *)((int)&DAT_005722e8 + iVar1))) &&
        ((param_3 == 0 ||
         (*(char *)((int)&DAT_0056988c + iVar7) == *(char *)((int)&DAT_0056988c + iVar1))))) &&
       (cVar3 = (&DAT_00543018)[iVar7], cVar2 < cVar3)) {
      (&DAT_00543018)[iVar1] = cVar3;
      local_4 = 1;
      cVar2 = cVar3;
    }
    iVar5 = iVar5 + 8;
  } while (iVar5 < 0x20);
  return local_4;
}

