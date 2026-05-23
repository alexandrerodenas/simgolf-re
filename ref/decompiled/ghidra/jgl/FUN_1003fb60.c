/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003fb60 @ 0x1003FB60 */
/* Body size: 269 addresses */


void __cdecl FUN_1003fb60(int *param_1,int param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if ((char)param_1[2] == '\x06') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar2 = (undefined1 *)(param_1[1] + param_2);
      puVar4 = puVar2;
      if (iVar5 != 0) {
        do {
          puVar4[-1] = -1 - puVar2[-1];
          puVar3 = puVar2 + -3;
          puVar4[-2] = puVar2[-2];
          puVar2 = puVar2 + -4;
          puVar4[-3] = *puVar3;
          iVar5 = iVar5 + -1;
          puVar4[-4] = *puVar2;
          puVar4 = puVar4 + -4;
        } while (iVar5 != 0);
        return;
      }
    }
    else {
      puVar2 = (undefined1 *)(param_1[1] + param_2);
      puVar4 = puVar2;
      if (iVar5 != 0) {
        do {
          puVar4[-1] = -1 - puVar2[-1];
          puVar4[-2] = -1 - puVar2[-2];
          puVar4[-3] = puVar2[-3];
          puVar4[-4] = puVar2[-4];
          puVar4[-5] = puVar2[-5];
          puVar3 = puVar2 + -7;
          puVar4[-6] = puVar2[-6];
          puVar2 = puVar2 + -8;
          puVar4[-7] = *puVar3;
          iVar5 = iVar5 + -1;
          puVar4[-8] = *puVar2;
          puVar4 = puVar4 + -8;
        } while (iVar5 != 0);
        return;
      }
    }
  }
  else if ((char)param_1[2] == '\x04') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar2 = (undefined1 *)(param_1[1] + param_2);
      puVar4 = puVar2;
      if (iVar5 != 0) {
        do {
          pcVar1 = puVar2 + -1;
          puVar2 = puVar2 + -2;
          puVar4[-1] = -1 - *pcVar1;
          iVar5 = iVar5 + -1;
          puVar4[-2] = *puVar2;
          puVar4 = puVar4 + -2;
        } while (iVar5 != 0);
        return;
      }
    }
    else {
      puVar4 = (undefined1 *)(param_1[1] + param_2);
      puVar2 = puVar4;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2[-1] = -1 - puVar4[-1];
        puVar3 = puVar4 + -3;
        puVar2[-2] = -1 - puVar4[-2];
        puVar4 = puVar4 + -4;
        puVar2[-3] = *puVar3;
        puVar2 = puVar2 + -4;
        *puVar2 = *puVar4;
      }
    }
  }
  return;
}

