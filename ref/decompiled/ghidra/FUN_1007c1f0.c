/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007c1f0 @ 0x1007C1F0 */
/* Body size: 282 addresses */


void __cdecl FUN_1007c1f0(int *param_1,byte *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (((((((*param_2 < 0x29) || (0x7a < *param_2)) || ((0x5a < *param_2 && (*param_2 < 0x61)))) ||
        ((param_2[1] < 0x29 || (0x7a < param_2[1])))) ||
       ((0x5a < param_2[1] && (param_2[1] < 0x61)))) ||
      ((((param_2[2] < 0x29 || (0x7a < param_2[2])) || ((0x5a < param_2[2] && (param_2[2] < 0x61))))
       || ((param_2[3] < 0x29 || (0x7a < param_2[3])))))) ||
     ((0x5a < param_2[3] && (param_2[3] < 0x61)))) {
    FUN_100790a0(param_1,(undefined4 *)"invalid chunk type");
  }
  uStack_8 = 0x1007c306;
  __chkesp();
  return;
}

