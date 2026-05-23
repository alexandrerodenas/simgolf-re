/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a0600 @ 0x004A0600 */
/* Body size: 317 addresses */


int __thiscall
FUN_004a0600(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(int *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  iVar2 = FUN_00401d10(param_3);
  if (iVar2 == 0) {
    param_2 = *(int *)(param_1 + 0x10);
    uVar7 = param_2 - 1;
    if (0 < (int)uVar7) {
      do {
        iVar2 = *(int *)(param_1 + 0x10);
        if ((int)uVar7 <= iVar2 + -1) {
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
          if ((int)uVar7 < 0) {
            iVar3 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
            if (iVar2 < iVar3) goto LAB_004a071a;
            if (0 < iVar3) {
              do {
                iVar3 = iVar3 + -1;
                *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10);
              } while (iVar3 != 0);
            }
            uVar5 = iVar2 + uVar7;
          }
          else {
            uVar6 = uVar7;
            uVar5 = uVar7;
            if (0 < (int)uVar7) {
              do {
                uVar6 = uVar6 - 1;
                *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc);
              } while (uVar6 != 0);
            }
          }
          *(uint *)(param_1 + 0x14) = uVar5;
          uVar6 = param_2 % iVar2;
          iVar3 = *(int *)(param_1 + 0xc);
          if ((int)uVar6 <= iVar2 + -1) {
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
            if ((int)uVar6 < 0) {
              iVar4 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
              if (iVar2 < iVar4) goto LAB_004a071a;
              if (0 < iVar4) {
                do {
                  iVar4 = iVar4 + -1;
                  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10);
                } while (iVar4 != 0);
              }
              uVar6 = uVar6 + iVar2;
            }
            else {
              uVar5 = uVar6;
              if (0 < (int)uVar6) {
                do {
                  uVar5 = uVar5 - 1;
                  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc);
                } while (uVar5 != 0);
              }
            }
            iVar2 = *(int *)(param_1 + 0xc);
            *(uint *)(param_1 + 0x14) = uVar6;
            uVar6 = *(uint *)(iVar3 + 4) ^ *(uint *)(iVar2 + 4);
            *(uint *)(iVar3 + 4) = uVar6;
            uVar6 = *(uint *)(iVar2 + 4) ^ uVar6;
            *(uint *)(iVar2 + 4) = uVar6;
            uVar1 = *(undefined4 *)(iVar3 + 8);
            *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) ^ uVar6;
            *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
            *(undefined4 *)(iVar2 + 8) = uVar1;
          }
        }
LAB_004a071a:
        uVar7 = uVar7 - 1;
        param_2 = param_2 + -1;
        if ((int)uVar7 < 1) {
          return 0;
        }
      } while( true );
    }
  }
  return iVar2;
}

