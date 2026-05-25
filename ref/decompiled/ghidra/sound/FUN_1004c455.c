/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004c455 @ 0x1004C455 */


undefined4 FUN_1004c455(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  uVar2 = 1;
  FUN_10047710(1);
  if (param_1 == 0) {
    puVar1 = &DAT_100b5718;
    uVar4 = 2;
    pcVar3 = DAT_100b5718;
  }
  else {
    puVar1 = &DAT_100b571c;
    uVar4 = 0x15;
    pcVar3 = DAT_100b571c;
  }
  if (pcVar3 == (code *)0x0) {
    FUN_10047771(1);
    uVar2 = 0;
  }
  else if (pcVar3 == (code *)0x1) {
    FUN_10047771(1);
  }
  else {
    *puVar1 = 0;
    FUN_10047771(1);
    (*pcVar3)(uVar4);
  }
  return uVar2;
}

