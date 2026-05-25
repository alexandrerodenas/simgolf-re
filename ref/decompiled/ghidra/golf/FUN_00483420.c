/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483420 @ 0x00483420 */


int __thiscall FUN_00483420(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_ESI;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint unaff_retaddr;
  int iVar7;
  int *piVar8;
  undefined4 local_70c;
  undefined1 local_700 [19];
  byte abStack_6ed [737];
  undefined4 auStack_40c [10];
  int aiStack_3e4 [247];
  uint uStack_8;
  uint uStack_4;
  
  local_70c = 200000;
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return 7;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x10))(local_700,0,0x100);
  if (param_2 != 0) {
    puVar6 = auStack_40c;
    for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar7 = 5;
    do {
      if (*(int *)(param_1 + 8) != -1) {
        uVar1 = (uint)param_1[0x10];
        if (uVar1 < param_1[0x11] + uVar1) {
          puVar6 = auStack_40c + uVar1;
          for (iVar2 = (param_1[0x11] + uVar1) - uVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = 1;
            puVar6 = puVar6 + 1;
          }
        }
      }
      iVar7 = iVar7 + -1;
      param_1 = param_1 + 0x10;
    } while (iVar7 != 0);
    piVar8 = aiStack_3e4;
    iVar7 = 10;
    pbVar5 = abStack_6ed;
    do {
      if ((*piVar8 == 0) &&
         (iVar3 = (uint)pbVar5[-1] - (uStack_8 & 0xff), iVar4 = (uint)*pbVar5 - (uStack_4 & 0xff),
         iVar2 = (uint)pbVar5[1] - (unaff_retaddr & 0xff),
         iVar2 = iVar2 * iVar2 + iVar3 * iVar3 + iVar4 * iVar4, iVar2 < unaff_EBX)) {
        unaff_EBX = iVar2;
        unaff_ESI = iVar7;
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 1;
      pbVar5 = pbVar5 + 3;
    } while (iVar7 < 0xf6);
    return unaff_ESI;
  }
  iVar7 = 0;
  pbVar5 = (byte *)((int)&local_70c + 1);
  do {
    iVar3 = (uint)pbVar5[-1] - (uStack_8 & 0xff);
    iVar2 = (uint)pbVar5[1] - (unaff_retaddr & 0xff);
    iVar4 = (uint)*pbVar5 - (uStack_4 & 0xff);
    iVar2 = iVar2 * iVar2 + iVar3 * iVar3 + iVar4 * iVar4;
    if (iVar2 < unaff_EBX) {
      unaff_EBX = iVar2;
      unaff_ESI = iVar7;
    }
    pbVar5 = pbVar5 + 3;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x100);
  return unaff_ESI;
}

