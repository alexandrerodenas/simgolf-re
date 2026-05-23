/* Ghidra decompiled: Terrain.dll */
/* Function: setSplineHeight @ 0x10001339 */
/* Body size: 5 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::setSplineHeight(float) */

void __thiscall Terrain::setSplineHeight(Terrain *this,float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [17];
  
                    /* 0x1339  31  ?setSplineHeight@Terrain@@QAEXM@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  _DAT_10063e54 = param_1;
  return;
}

