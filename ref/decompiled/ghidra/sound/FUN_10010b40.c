/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010b40 @ 0x10010B40 */
/* Body size: 125 addresses */


int __fastcall FUN_10010b40(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *unaff_EDI;
  undefined4 *puStack_18;
  undefined4 local_8;
  undefined4 local_4;
  
  puStack_18 = &local_8;
  uVar1 = 0;
  local_8 = 0;
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0x60) + 0x10))(*(int **)(param_1 + 0x60),&local_4);
  puStack_18 = unaff_EDI;
  do {
    uVar2 = uVar1 + 1;
    if (0xffff < uVar1) break;
    (**(code **)(**(int **)(param_1 + 0x60) + 0x10))
              (*(int **)(param_1 + 0x60),&stack0xfffffff0,&puStack_18);
    uVar1 = uVar2;
  } while (puStack_18 == unaff_EDI);
  return (-(uint)(uVar2 < 0x10000) & 0xffffffd9) + 0x27;
}

