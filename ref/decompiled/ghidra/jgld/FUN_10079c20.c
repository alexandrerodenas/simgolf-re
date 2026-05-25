/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079c20 @ 0x10079C20 */


void __cdecl FUN_10079c20(int *param_1,int param_2,uint param_3)

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
  if ((((param_1[0x1a] & 1U) != 0) && ((param_1[0x1a] & 4U) != 0)) ||
     (FUN_10078fe0(param_1,"No image in file"), param_2 != 0)) {
    param_1[0x1a] = param_1[0x1a] | 0x18;
    if (param_3 != 0) {
      FUN_10079040((int)param_1,"Incorrect IEND chunk length");
    }
    FUN_10079510(param_1,param_3);
  }
  uStack_8 = 0x10079cad;
  __chkesp();
  return;
}

