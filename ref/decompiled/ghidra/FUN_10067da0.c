/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10067da0 @ 0x10067DA0 */
/* Body size: 70 addresses */


void FUN_10067da0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_1 = DAT_10122dc0;
  *param_2 = DAT_10122dc4;
  *param_3 = DAT_10122dc8;
  return;
}

