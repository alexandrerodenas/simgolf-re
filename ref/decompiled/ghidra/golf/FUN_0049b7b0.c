/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049b7b0 @ 0x0049B7B0 */
/* Body size: 448 addresses */


void __fastcall FUN_0049b7b0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  int local_8;
  undefined4 local_4;
  
  if ((DAT_008400b0 != (int *)0x0) && (puVar1 = (uint *)param_1[1], puVar1 != (uint *)0x0)) {
    iVar4 = FUN_004a4c70(puVar1,&local_8,0,0);
    while (iVar4 != 0) {
      if (local_8 == 0) {
        uVar2 = *puVar1;
        if (uVar2 < 0x32) {
          if (uVar2 == 0x31) {
            (**(code **)(*param_1 + 0x14))();
            FUN_00497d10();
          }
          else if (uVar2 == 3) {
            if ((param_1[0x1df] == param_1[0x1e0]) && (puVar1[1] == 1)) {
              local_4 = 0x100;
              (**(code **)(*DAT_008400b0 + 0x54))(DAT_008400b0,puVar1[2],&DAT_0083ff9c,&local_4);
              if ((undefined1 *)puVar1[4] == (undefined1 *)0x0) {
                uVar3 = 0;
              }
              else {
                uVar3 = *(undefined1 *)puVar1[4];
              }
              FUN_0049b690(DAT_0083ffa8,puVar1[2],uVar3);
            }
          }
          else if ((uVar2 == 5) && (puVar1[1] == 1)) {
            FUN_0049acf0(puVar1[2],1);
          }
        }
        else if (uVar2 == 0x102) {
          iVar4 = 0;
          puVar5 = (uint *)(param_1 + 0x5c);
          do {
            if (*puVar5 == puVar1[2]) break;
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 0x16;
          } while (iVar4 < 0x10);
          if ((iVar4 != 0x10) && ((undefined1 *)puVar1[3] != (undefined1 *)0x0)) {
            *(undefined1 *)(param_1 + iVar4 * 0x16 + 0x61) = *(undefined1 *)puVar1[3];
          }
        }
        else if (uVar2 == 0x103) {
          (**(code **)(*param_1 + 0x10))(puVar1[6],puVar1[2]);
        }
      }
      else if ((*puVar1 & 0x80) == 0) {
        if (((*puVar1 & 0x10) != 0) && (iVar4 = 0, (char)puVar1[2] != '\0')) {
          puVar5 = puVar1 + 3;
          do {
            FUN_0049b690(puVar5 + 1,*puVar5,puVar5[9]);
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + 10;
          } while (iVar4 < (int)(uint)(byte)puVar1[2]);
        }
      }
      else {
        FUN_0049acf0(puVar1[2],1);
      }
      iVar4 = FUN_004a4c70(puVar1,&local_8,0,0);
    }
  }
  return;
}

