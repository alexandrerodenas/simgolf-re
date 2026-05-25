/* Ghidra decompiled: Terrain.dll */
/* Function: loadNewCourseType @ 0x10001032 */


/* public: void __thiscall Terrain::loadNewCourseType(int) */

void __thiscall Terrain::loadNewCourseType(Terrain *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_48 [16];
  Terrain *pTStack_8;
  
                    /* 0x1032  21  ?loadNewCourseType@Terrain@@QAEXH@Z */
  puVar2 = auStack_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10070a0c != param_1) {
    DAT_10070a0c = param_1;
    pTStack_8 = this;
    thunk_FUN_10003980();
    thunk_FUN_100380a0((int)pTStack_8);
    thunk_FUN_100076e0((int)pTStack_8);
  }
  pTStack_8 = (Terrain *)0x10001b45;
  __chkesp();
  return;
}

