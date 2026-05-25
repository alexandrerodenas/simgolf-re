/* Ghidra decompiled: golf.exe */
/* Function: FUN_00848000 @ 0x00848000 */


/* WARNING: Instruction at (ram,0x008480c7) overlaps instruction at (ram,0x008480c6)
    */

void __fastcall FUN_00848000(undefined2 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  char cVar6;
  byte bVar13;
  undefined4 in_EAX;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  int iVar14;
  short sVar15;
  undefined1 *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined1 *unaff_EDI;
  int iStack00000005;
  undefined1 in_stack_00000001 [11];
  undefined8 in_stack_00000020;
  
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'o') | 0x1968087d;
  uVar3 = in((short)param_2);
  *unaff_EDI = uVar3;
  puVar8 = (uint *)CONCAT31((int3)(uVar7 >> 8),(byte)uVar7 | (byte)((uint)param_2 >> 8));
  pcVar9 = (char *)((uint)puVar8 | *puVar8);
  cVar6 = (char)pcVar9;
  *pcVar9 = *pcVar9 + cVar6;
  pcVar9[0x268000b] = pcVar9[0x268000b] + (char)((uint)pcVar9 >> 8);
  *pcVar9 = *pcVar9 + cVar6;
  pcVar11 = (char *)CONCAT31((int3)((uint)pcVar9 >> 8),cVar6 + 'H');
  *pcVar11 = *pcVar11 + cVar6 + 'H';
  *(char *)((int)pcVar11 * 2) = *(char *)((int)pcVar11 * 2) + '\x10';
  uVar4 = TaskRegister();
  *param_1 = uVar4;
  pcVar9 = (char *)((int)pcVar11 * 2 + 0x7d);
  *pcVar9 = *pcVar9 + -0x27;
  lVar5 = CONCAT44(param_2,pcVar11) % (longlong)*(int *)(unaff_EDI + 0xf10001);
  uVar10 = in(0xf7);
  pbVar1 = (byte *)((int)lVar5 + 0x51);
  bVar2 = *pbVar1;
  bVar13 = (byte)((uint)uVar10 >> 8);
  *pbVar1 = *pbVar1 + bVar13;
  if (CARRY1(bVar2,bVar13)) {
    *unaff_EBX = 0xe9;
    *(undefined4 *)(unaff_EBX + 1) = uVar10;
    uVar10 = 0;
    if (iStack00000005 != 0) {
      uVar10 = *(undefined4 *)(unaff_EBP + 8);
    }
    iVar12 = FUN_00848109(uVar10);
    iVar14 = in_stack_00000020._1_4_;
    if (iVar12 != 0) {
      *unaff_EBX = 0xc2;
      unaff_EBX[1] = 0xc;
      if (iStack00000005 != 0) goto LAB_00848056;
      (*pcRam00848029)();
    }
  }
  else {
    sVar15 = (short)lVar5;
    out(*unaff_ESI,sVar15);
    uRam00000000 = in(sVar15 + -1);
    pcVar11 = (char *)(unaff_ESI[0x1e] * 0x46);
    *pcVar11 = *pcVar11 + (char)pcVar11;
    pcVar9 = (char *)(CONCAT22((short)((uint)(unaff_EBP + 1) >> 0x10),(short)(unaff_EBP + 1) + 1) +
                     0x6e);
    *pcVar9 = *pcVar9 + (char)((uint)pcVar11 >> 8);
    if ((*pcVar9 != '\0') && (*pcVar9 < '\0')) {
LAB_00848056:
      entry();
      return;
    }
  }
  *(char *)(iVar14 + 0x5d) = *(char *)(iVar14 + 0x5d) << 1;
  entry();
  return;
}

