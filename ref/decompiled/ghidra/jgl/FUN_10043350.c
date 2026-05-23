/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10043350 @ 0x10043350 */
/* Body size: 348 addresses */


void __cdecl FUN_10043350(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  
  piVar3 = param_1;
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    pcVar6 = s_Missing_IHDR_before_PLTE_10055af4;
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_10042dc0((int)param_1,s_Invalid_PLTE_after_IDAT_10055adc);
      FUN_10042fd0(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) goto LAB_10043396;
    pcVar6 = s_Duplicate_PLTE_chunk_10055ac4;
  }
  FUN_10042d90(param_1,pcVar6);
LAB_10043396:
  uVar1 = param_3;
  param_1[0x1a] = param_1[0x1a] | 2;
  if (param_3 % 3 != 0) {
    if (*(char *)((int)param_1 + 0x126) != '\x03') {
      FUN_10042dc0((int)param_1,s_Invalid_palette_chunk_10055aac);
      FUN_10042fd0(param_1,uVar1);
      return;
    }
    FUN_10042d90(param_1,s_Invalid_palette_chunk_10055aac);
  }
  piVar2 = (int *)((int)uVar1 / 3);
  puVar4 = FUN_10042980(param_1,(int)piVar2,3);
  param_1[0x1b] = param_1[0x1b] | 0x1000;
  if (0 < (int)piVar2) {
    puVar5 = (undefined1 *)((int)puVar4 + 2);
    param_1 = piVar2;
    do {
      FUN_10042fa0(piVar3,(byte *)&param_3,3);
      puVar5[-2] = (undefined1)param_3;
      puVar5[-1] = param_3._1_1_;
      *puVar5 = param_3._2_1_;
      puVar5 = puVar5 + 3;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  FUN_10042fd0(piVar3,0);
  piVar3[0x45] = (int)puVar4;
  *(short *)(piVar3 + 0x46) = (short)piVar2;
  FUN_100461b0((int)piVar3,param_2,puVar4,(short)piVar2);
  if ((((*(char *)((int)piVar3 + 0x126) == '\x03') && (param_2 != 0)) &&
      ((*(byte *)(param_2 + 8) & 0x10) != 0)) &&
     (*(ushort *)(piVar3 + 0x46) < *(ushort *)((int)piVar3 + 0x11a))) {
    FUN_10042dc0((int)piVar3,s_Truncating_incorrect_tRNS_chunk_l_10055a84);
    *(short *)((int)piVar3 + 0x11a) = (short)piVar3[0x46];
  }
  return;
}

