/* Ghidra decompiled: golf.exe */
/* Function: FUN_004aee30 @ 0x004AEE30 */


void FUN_004aee30(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  piVar1 = param_1;
  param_1[1] = 0;
  local_4 = FUN_004b04b0(param_1);
  puVar2 = (undefined4 *)FUN_004b0460(piVar1,0x50);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004a0890(piVar1);
    *(undefined4 *)(*piVar1 + 0x14) = 0x35;
    *(undefined4 *)(*piVar1 + 0x18) = 0;
    (**(code **)*piVar1)(piVar1);
  }
  *puVar2 = FUN_004aef70;
  puVar2[1] = FUN_004af0c0;
  puVar2[2] = FUN_004af170;
  puVar2[3] = FUN_004af220;
  puVar2[4] = FUN_004af2d0;
  puVar2[5] = FUN_004af340;
  puVar2[6] = FUN_004af3b0;
  puVar2[7] = &LAB_004af540;
  puVar2[8] = &LAB_004af730;
  puVar2[9] = FUN_004af920;
  puVar2[10] = &LAB_004afa20;
  puVar2[0xb] = local_4;
  puVar3 = puVar2 + 0xf;
  iVar4 = 2;
  do {
    puVar3[-2] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0x50;
  piVar1[1] = (int)puVar2;
  iVar4 = FUN_004ad91d(s_JPEGMEM_004e6d04);
  if (iVar4 != 0) {
    param_1 = (int *)CONCAT31(param_1._1_3_,0x78);
    iVar4 = FUN_004b6628(iVar4,s__ld_c_004e6cfc,&local_4,&param_1);
    if (0 < iVar4) {
      if (((char)param_1 == 'm') || ((char)param_1 == 'M')) {
        puVar2[0xb] = local_4 * 1000000;
        return;
      }
      puVar2[0xb] = local_4 * 1000;
    }
  }
  return;
}

