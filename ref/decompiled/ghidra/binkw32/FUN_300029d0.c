/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300029d0 @ 0x300029D0 */


void __cdecl FUN_300029d0(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_4;
  switch(param_2 & 0xf) {
  case 0:
    uVar3 = DAT_3004164c * param_4;
    if (param_5 != 0) {
      do {
        puVar4 = param_1;
        for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + param_3);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
      return;
    }
    break;
  case 1:
  case 3:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    uVar3 = DAT_3004164c * param_4;
    if (param_5 != 0) {
      do {
        puVar4 = param_1;
        for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + param_3);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
      return;
    }
    break;
  case 0xd:
    for (; param_5 != 0; param_5 = param_5 - 1) {
      puVar4 = param_1;
      for (uVar3 = param_4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0x80008000;
        puVar4 = puVar4 + 1;
      }
      for (uVar3 = param_4 & 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined2 *)puVar4 = 0x8000;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
      param_1 = (undefined4 *)((int)param_1 + param_3);
    }
    break;
  case 0xe:
    if (param_5 != 0) {
      do {
        puVar4 = param_1;
        for (uVar3 = param_4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0x800080;
          puVar4 = puVar4 + 1;
        }
        for (uVar3 = param_4 & 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined2 *)puVar4 = 0x80;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
        }
        param_1 = (undefined4 *)((int)param_1 + param_3);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
      return;
    }
    break;
  case 0xf:
    if (param_5 != 0) {
      param_4 = param_5;
      do {
        puVar4 = param_1;
        for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = 0x10101010;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = 0x10;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + param_3);
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    param_5 = param_5 >> 1;
    for (uVar1 = param_5; uVar1 != 0; uVar1 = uVar1 - 1) {
      puVar4 = param_1;
      for (uVar2 = uVar3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0x80808080;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = uVar3 >> 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = 0x80;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + (param_3 >> 1));
    }
    if (param_5 != 0) {
      do {
        puVar4 = param_1;
        for (uVar1 = uVar3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = 0x80808080;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = uVar3 >> 1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = 0x80;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = (undefined4 *)((int)param_1 + (param_3 >> 1));
        param_5 = param_5 - 1;
      } while (param_5 != 0);
      return;
    }
  }
  return;
}

