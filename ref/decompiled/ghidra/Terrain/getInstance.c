/* Ghidra decompiled: Terrain.dll */
/* Function: getInstance @ 0x10001136 */


/* public: static class Terrain * __cdecl Terrain::getInstance(void) */

Terrain * __cdecl Terrain::getInstance(void)

{
  Terrain *pTVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_5c [16];
  int iStack_1c;
  void *pvStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1136  12  ?getInstance@Terrain@@SAPAV1@XZ */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1004115b;
  pvStack_10 = ExceptionList;
  puVar3 = auStack_5c;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (DAT_10106b4c == 0) {
    ExceptionList = &pvStack_10;
    pvStack_18 = operator_new(0x164ad0);
    uStack_8 = 0;
    if (pvStack_18 == (void *)0x0) {
      iStack_1c = 0;
    }
    else {
      iStack_1c = thunk_FUN_10002ae0(pvStack_18,0x32,0x32);
    }
    iStack_14 = iStack_1c;
    DAT_10106b4c = iStack_1c;
  }
  ExceptionList = pvStack_10;
  uStack_8 = 0x1000323d;
  pTVar1 = (Terrain *)__chkesp();
  return pTVar1;
}

