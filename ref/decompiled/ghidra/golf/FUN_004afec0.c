/* Ghidra decompiled: golf.exe */
/* Function: FUN_004afec0 @ 0x004AFEC0 */
/* Body size: 214 addresses */


int FUN_004afec0(int *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = (ushort *)param_1[param_2 + 0x10];
  if (puVar2 == (ushort *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x33;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  iVar5 = 0;
  iVar4 = 0x40;
  puVar3 = puVar2;
  do {
    if (0xff < *puVar3) {
      iVar5 = 1;
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)(puVar2 + 0x40) == 0) {
    FUN_004afbf0(param_1,0xdb);
    FUN_004afc10(param_1,(-(iVar5 != 0) & 0x40U) + 0x43);
    FUN_004afbb0(param_1,iVar5 * 0x10 + param_2);
    piVar6 = &DAT_004bd0ac;
    do {
      uVar1 = puVar2[*piVar6];
      if (iVar5 != 0) {
        FUN_004afbb0(param_1,uVar1 >> 8);
      }
      FUN_004afbb0(param_1,uVar1 & 0xff);
      piVar6 = piVar6 + 1;
    } while ((int)piVar6 < 0x4bd1ac);
    puVar2[0x40] = 1;
    puVar2[0x41] = 0;
  }
  return iVar5;
}

