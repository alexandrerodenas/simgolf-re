/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078b00 @ 0x10078B00 */


/* WARNING: Removing unreachable block (ram,0x10078ba6) */

void __cdecl FUN_10078b00(int *param_1)

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
  if (param_1[0x84] == 0) {
    iVar1 = FUN_10078e60(param_1,0x1d);
    param_1[0x84] = iVar1;
  }
  FUN_10082c80((undefined1 *)param_1[0x84],(byte *)"%d %s %d %02d:%02d:%02d +0000");
  uStack_8 = 0x10078bd9;
  __chkesp();
  return;
}

