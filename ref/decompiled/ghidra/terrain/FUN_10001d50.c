/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001d50 @ 0x10001D50 */
/* Body size: 107 addresses */


int __thiscall FUN_10001d50(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((((param_1 < *(int *)((int)this + 0x14)) && (-1 < param_1)) &&
      (param_2 < *(int *)((int)this + 0x18))) && (-1 < param_2)) {
    iVar1 = (int)this + (param_1 + param_2 * *(int *)((int)this + 0x14)) * 0x248 + 0x3a4;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

