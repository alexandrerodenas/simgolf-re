/* Ghidra decompiled: golf.exe */
/* Function: FUN_00407000 @ 0x00407000 */
/* Body size: 133 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00407000(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  
  uVar2 = 0;
  psVar3 = &DAT_0058bcbc;
  do {
    if ((psVar3[-2] == 4) && (*(int *)(psVar3 + 2) < 0x10)) {
      iVar1 = FUN_0040c4b0(param_1,param_2,(int)psVar3[-1],(int)*psVar3);
      if (iVar1 < (int)((*(uint *)(psVar3 + 2) * 5 + 0x28) * 5) / 3) {
        switch(*(uint *)(psVar3 + 2) & 3) {
        case 0:
          uVar2 = uVar2 | 1;
          break;
        case 1:
          uVar2 = uVar2 | 2;
          break;
        case 2:
          uVar2 = uVar2 | 4;
          break;
        case 3:
          uVar2 = uVar2 | 8;
        }
      }
    }
    psVar3 = psVar3 + 8;
  } while ((int)psVar3 < 0x58ccbc);
  _DAT_00541318 = uVar2;
  return (uVar2 & param_3) == param_3;
}

