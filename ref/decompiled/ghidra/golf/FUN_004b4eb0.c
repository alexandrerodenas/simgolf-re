/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b4eb0 @ 0x004B4EB0 */
/* Body size: 174 addresses */


void FUN_004b4eb0(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar2 = *(int *)(*(int *)(param_1 + 0x158) + 8);
  if (-1 < param_5 + -1) {
    param_4 = param_4 * 4;
    param_1 = param_5;
    do {
      param_4 = param_4 + 4;
      pbVar4 = (byte *)*param_2;
      param_2 = param_2 + 1;
      iVar3 = *(int *)(*param_3 + -4 + param_4);
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          *(char *)(uVar5 + iVar3) =
               (char)((uint)(*(int *)(iVar2 + 0x800 + (uint)pbVar4[2] * 4) +
                             *(int *)(iVar2 + 0x400 + (uint)pbVar4[1] * 4) +
                            *(int *)(iVar2 + (uint)*pbVar4 * 4)) >> 0x10);
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 3;
        } while (uVar5 < uVar1);
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

