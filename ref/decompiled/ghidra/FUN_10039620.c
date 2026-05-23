/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039620 @ 0x10039620 */
/* Body size: 66 addresses */


undefined4 __fastcall FUN_10039620(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined *)*param_1;
  if (puVar1 == (undefined *)0x0) {
    return 0;
  }
  puVar2 = *(undefined4 **)(puVar1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    *puVar2 = 0;
    *param_1 = puVar2;
  }
  uVar3 = *(undefined4 *)(puVar1 + 8);
  FUN_1004249a(puVar1);
  param_1[3] = param_1[3] + -1;
  return uVar3;
}

