/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b380 @ 0x1000B380 */
/* Body size: 53 addresses */


bool __thiscall FUN_1000b380(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(int *)this == *param_1;
}

