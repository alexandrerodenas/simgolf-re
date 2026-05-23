/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035b80 @ 0x10035B80 */
/* Body size: 162 addresses */


void * __thiscall FUN_10035b80(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x4c) == -1) {
    FUN_10034090((int)this);
    *(int *)((int)this + 0x4c) = param_1;
    if (param_1 != -1) {
      iVar1 = FUN_10034350((int)this);
      if (iVar1 == 0) {
        iVar1 = FUN_100342c0((int)this);
        if (iVar1 == 0) {
          iVar1 = FUN_10037510(0x200,2,"filebuf1.cpp",0x34);
          if (iVar1 == 0) {
            FUN_10034880(this,1);
          }
          else {
            FUN_10036410(this,iVar1,iVar1 + 0x200,1);
          }
        }
      }
    }
    FUN_10034150((int)this);
  }
  else {
    this = (void *)0x0;
  }
  return this;
}

