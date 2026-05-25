/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetSoundOnOff@8 @ 0x30006E80 */


int _BinkSetSoundOnOff_8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
                    /* 0x6e80  48  _BinkSetSoundOnOff@8 */
  iVar3 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1ec) != -1)) &&
     (*(code **)(param_1 + 0x2c0) != (code *)0x0)) {
    iVar3 = (**(code **)(param_1 + 0x2c0))(param_1 + 0x2a8,param_2);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x230) != 0) {
        piVar1 = (int *)(param_1 + 0x2a0);
        LOCK();
        *(char *)piVar1 = *(char *)piVar1 + '\x01';
        UNLOCK();
        iVar3 = *piVar1;
        while (iVar3 != 1) {
          Sleep(0);
          iVar3 = *piVar1;
        }
        *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x288);
        *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x288);
        *(undefined4 *)(param_1 + 0x29c) = 0;
        *(undefined4 *)(param_1 + 0x230) = 0;
        LOCK();
        *(char *)piVar1 = *(char *)piVar1 + -1;
        UNLOCK();
        return 0;
      }
    }
    else if (*(int *)(param_1 + 0x230) == 0) {
      piVar1 = (int *)(param_1 + 0x2a0);
      LOCK();
      *(char *)piVar1 = *(char *)piVar1 + '\x01';
      UNLOCK();
      iVar2 = *piVar1;
      while (iVar2 != 1) {
        Sleep(0);
        iVar2 = *piVar1;
      }
      if ((*(int *)(param_1 + 0xc) != 1) && (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0xec))) {
        uVar5 = *(uint *)(param_1 + 0x378);
        *(uint *)(param_1 + 0x29c) = uVar5;
        puVar6 = *(undefined4 **)(param_1 + 0x288);
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x29c) + *(int *)(param_1 + 0x288);
        *(int *)(param_1 + 0x294) = *(int *)(param_1 + 0x288);
      }
      *(undefined4 *)(param_1 + 0x230) = 1;
      *(undefined4 *)(param_1 + 0x210) = 0;
      LOCK();
      *(char *)piVar1 = *(char *)piVar1 + -1;
      UNLOCK();
    }
  }
  return iVar3;
}

