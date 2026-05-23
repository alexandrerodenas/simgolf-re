/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006c340 @ 0x1006C340 */
/* Body size: 82 addresses */


void __cdecl FUN_1006c340(int *param_1,int *param_2)

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
  if ((param_1[0x1b] & 0x40U) == 0) {
    FUN_1007d6b0(param_1);
  }
  FUN_100714c0((int)param_1,param_2);
  uStack_8 = 0x1006c38e;
  __chkesp();
  return;
}

