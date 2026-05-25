/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100085f0 @ 0x100085F0 */


void __cdecl FUN_100085f0(RECT *param_1,RECT *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  EqualRect(param_1,param_2);
  __chkesp();
  uStack_8 = 0x1000862c;
  __chkesp();
  return;
}

