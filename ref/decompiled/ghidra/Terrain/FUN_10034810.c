/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034810 @ 0x10034810 */


void * __thiscall FUN_10034810(void *this,int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_10033dc0((int)this);
  if ((CONCAT31(extraout_var,bVar1) == 0) || (iVar2 = FUN_100342c0((int)this), iVar2 == 0)) {
    if ((param_1 == 0) || (param_2 < 1)) {
      FUN_10034880(this,1);
    }
    else {
      FUN_10034090((int)this);
      FUN_10036410(this,param_1,param_1 + param_2,0);
      FUN_10034150((int)this);
    }
  }
  else {
    this = (void *)0x0;
  }
  return this;
}

