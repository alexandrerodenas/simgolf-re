/* Ghidra decompiled: Terrain.dll */
/* Function: passCollarInfo @ 0x100010B4 */


/* public: void __thiscall Terrain::passCollarInfo(int * const,int) */

void __thiscall Terrain::passCollarInfo(Terrain *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_58 [16];
  void *pvStack_18;
  void *pvStack_14;
  void *pvStack_10;
  int iStack_c;
  Terrain *pTStack_8;
  
                    /* 0x10b4  25  ?passCollarInfo@Terrain@@QAEXQAHH@Z */
  puVar2 = auStack_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  pTStack_8 = this;
  if (DAT_10106b48 == (void *)0x0) {
    DAT_10106b48 = operator_new(param_2 << 2);
    pvStack_10 = DAT_10106b48;
  }
  else {
    pvStack_14 = DAT_10106b48;
    FUN_10018be0(this,DAT_10106b48);
    DAT_10106b48 = operator_new(param_2 << 2);
    pvStack_18 = DAT_10106b48;
  }
  for (iStack_c = 0; iStack_c < param_2; iStack_c = iStack_c + 1) {
    *(int *)((int)DAT_10106b48 + iStack_c * 4) = param_1[iStack_c];
  }
  pTStack_8 = (Terrain *)0x1000a930;
  __chkesp();
  return;
}

