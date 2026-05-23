/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000ba40 @ 0x1000BA40 */
/* Body size: 89 addresses */


void __cdecl FUN_1000ba40(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined4 *local_c;
  undefined4 local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = (undefined4 *)thunk_FUN_1000bab0(4,param_1);
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    *local_c = *param_2;
  }
  local_8 = 0x1000ba95;
  __chkesp();
  return;
}

