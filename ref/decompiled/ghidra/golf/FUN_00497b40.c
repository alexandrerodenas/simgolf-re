/* Ghidra decompiled: golf.exe */
/* Function: FUN_00497b40 @ 0x00497B40 */


void __fastcall FUN_00497b40(int param_1)

{
  size_t _Size;
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int local_10;
  
  if ((*(int *)(param_1 + 0x77c) == *(int *)(param_1 + 0x780)) &&
     (local_10 = *(int *)(param_1 + 0x6f8), local_10 != 0)) {
    _Size = local_10 * 0x2c + 4;
    puVar2 = _malloc(_Size);
    *puVar2 = (char)local_10;
    if (0 < local_10) {
      pcVar6 = puVar2 + 8;
      puVar7 = (undefined1 *)(param_1 + 0x1a4);
      do {
        *(undefined4 *)(pcVar6 + -4) = *(undefined4 *)(puVar7 + -0x34);
        *pcVar6 = '\0';
        uVar3 = 0xffffffff;
        *puVar7 = 0;
        pcVar8 = puVar7 + -0x1f;
        do {
          pcVar10 = pcVar8;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar10 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar10;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar4 = -1;
        pcVar8 = pcVar6;
        do {
          pcVar9 = pcVar8;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        pcVar8 = pcVar10 + -uVar3;
        pcVar10 = pcVar9 + -1;
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        local_10 = local_10 + -1;
        *(uint *)(pcVar6 + 0x20) = (uint)(byte)puVar7[-0x20];
        pcVar6 = pcVar6 + 0x28;
        puVar7 = puVar7 + 0x58;
      } while (local_10 != 0);
    }
    FUN_00499140(puVar2,_Size,0,0x10,1);
    if (puVar2 != (undefined1 *)0x0) {
      FUN_004a5007(puVar2);
    }
  }
  return;
}

