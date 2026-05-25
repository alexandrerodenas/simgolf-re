/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000cc70 @ 0x1000CC70 */


undefined4 __fastcall FUN_1000cc70(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint local_8;
  
  uVar3 = *(uint *)(param_1 + 0x41d8);
  uVar1 = *(uint *)(param_1 + 0x41dc);
  if (uVar3 == uVar1) {
    return 0;
  }
  local_8 = uVar1 - uVar3 & 0xfff;
  if (local_8 != 0) {
    do {
      uVar3 = uVar3 + 1 & 0xfff;
      puVar2 = (undefined4 *)thunk_FUN_100088c0((void *)(param_1 + 0x1d8),uVar3);
      if (puVar2 != (undefined4 *)0x0) {
        switch(*puVar2) {
        case 4:
          if ((undefined4 *)puVar2[1] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)puVar2[1])(1);
          }
          puVar2[1] = 0;
        case 1:
        case 2:
        case 3:
          thunk_FUN_10008840(puVar2);
          FUN_1004249a((undefined *)puVar2);
        default:
          *(undefined4 *)(param_1 + 0x1d8 + uVar3 * 4) = 0;
        }
      }
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  *(uint *)(param_1 + 0x41d8) = uVar1;
  return 0;
}

