/* Ghidra decompiled: golf.exe */
/* Function: FUN_004accc1 @ 0x004ACCC1 */
/* Body size: 417 addresses */


/* WARNING: Removing unreachable block (ram,0x004acf9b) */
/* WARNING: Removing unreachable block (ram,0x004acfa4) */
/* WARNING: Removing unreachable block (ram,0x004ad039) */
/* WARNING: Removing unreachable block (ram,0x004ad121) */
/* WARNING: Removing unreachable block (ram,0x004ad048) */
/* WARNING: Removing unreachable block (ram,0x004ad065) */
/* WARNING: Removing unreachable block (ram,0x004ad050) */
/* WARNING: Removing unreachable block (ram,0x004ad056) */
/* WARNING: Removing unreachable block (ram,0x004ad059) */
/* WARNING: Removing unreachable block (ram,0x004ad068) */
/* WARNING: Removing unreachable block (ram,0x004ad117) */
/* WARNING: Removing unreachable block (ram,0x004ad072) */
/* WARNING: Removing unreachable block (ram,0x004ad078) */
/* WARNING: Removing unreachable block (ram,0x004ad080) */
/* WARNING: Removing unreachable block (ram,0x004ad09d) */
/* WARNING: Removing unreachable block (ram,0x004ad09f) */
/* WARNING: Removing unreachable block (ram,0x004ad0a7) */
/* WARNING: Removing unreachable block (ram,0x004ad0aa) */
/* WARNING: Removing unreachable block (ram,0x004ad0af) */
/* WARNING: Removing unreachable block (ram,0x004ad0b2) */
/* WARNING: Removing unreachable block (ram,0x004ad0e9) */
/* WARNING: Removing unreachable block (ram,0x004ad0f9) */
/* WARNING: Removing unreachable block (ram,0x004ad0f0) */
/* WARNING: Removing unreachable block (ram,0x004ad0b9) */
/* WARNING: Removing unreachable block (ram,0x004ad0c0) */
/* WARNING: Removing unreachable block (ram,0x004ad0cc) */
/* WARNING: Removing unreachable block (ram,0x004ad132) */
/* WARNING: Removing unreachable block (ram,0x004ad138) */
/* WARNING: Removing unreachable block (ram,0x004ad0d2) */
/* WARNING: Removing unreachable block (ram,0x004ad147) */

undefined4 FUN_004accc1(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_60 [44];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = 0;
  local_c = 0;
  local_18 = 0;
  for (; (((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
         (cVar1 == '\r')); param_3 = param_3 + 1) {
  }
                    /* WARNING: Could not recover jumptable at 0x004acd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_LAB_004ad162)();
  return uVar2;
}

