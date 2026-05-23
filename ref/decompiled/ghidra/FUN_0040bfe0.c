/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040bfe0 @ 0x0040BFE0 */
/* Body size: 338 addresses */


uint FUN_0040bfe0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_2;
  uVar6 = param_1;
  if ((((-1 < (int)param_1) && ((int)param_1 < 0x32)) && (-1 < (int)param_2)) &&
     (((int)param_2 < 0x32 && ((param_3 & 1) != 0)))) {
    if ((param_4 != 0) &&
       (cVar3 = *(char *)((int)&DAT_0051b770 + (param_2 + param_1 * 0x32) * 8 + param_3),
       cVar3 != '\0')) {
      return (int)cVar3;
    }
    iVar2 = param_2 + param_1 * 0x32;
    uVar4 = *(uint *)(&DAT_0057837c + *(char *)((int)&DAT_005722e8 + iVar2) * 0x30);
    if ((uVar4 & 2) != 0) {
      if ((uVar4 & 1) != 0) {
        return (int)(char)(&DAT_00543018)[iVar2];
      }
      FUN_0042f4b0(param_1,param_2,&param_2,&param_1);
      return param_1;
    }
    if ((uVar4 & 4) != 0) {
      if ((uVar4 & 1) != 0) {
        return (int)(char)(&DAT_00543018)[iVar2];
      }
      FUN_0042f4b0(param_1,param_2,&param_2,&param_1);
      return param_2;
    }
    if ((uVar4 & 8) == 0) {
      iVar2 = param_2 - 1;
      iVar1 = param_1 + 1;
      param_4 = FUN_0040c170(iVar1,iVar2,0);
      uVar4 = FUN_0040c170(iVar1,uVar5,0);
      uVar5 = FUN_0040c170(uVar6,uVar5,0);
      uVar6 = FUN_0040c170(uVar6,iVar2,0);
      switch(param_3 & 7) {
      case 1:
        return param_4;
      default:
        uVar6 = param_3;
code_r0x0040c13a:
        return uVar6;
      case 3:
        return uVar4;
      case 5:
        return uVar5;
      case 7:
        goto code_r0x0040c13a;
      }
    }
  }
  return 3;
}

