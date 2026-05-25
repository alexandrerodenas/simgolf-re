/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006720 @ 0x10006720 */


void * __thiscall FUN_10006720(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iVar1 = 0x10;
  puVar2 = param_1;
  puVar3 = this;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar3 = *puVar2;
  }
  iVar1 = 0x10;
  puVar2 = this;
  while( true ) {
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar2 = *param_1;
  }
  *(undefined ***)this = &PTR_LAB_1011d024;
  return this;
}

