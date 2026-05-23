/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006f230 @ 0x1006F230 */
/* Body size: 249 addresses */


void __cdecl FUN_1006f230(int param_1,undefined4 *param_2,int param_3,int param_4,double param_5)

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
  if (param_3 == 0) {
    FUN_10079040(param_1,"Application must supply a known background gamma");
  }
  else {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x80;
    FUN_1007f3a0((undefined4 *)(param_1 + 0x138),param_2,10);
    *(float *)(param_1 + 0x134) = (float)param_5;
    *(undefined1 *)(param_1 + 0x130) = (undefined1)param_3;
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | -(uint)(param_4 != 0) & 0x100;
    if (((param_4 != 0) && ((*(byte *)(param_1 + 0x126) & 2) == 0)) ||
       ((param_4 == 0 &&
        ((*(short *)((int)param_2 + 2) == *(short *)(param_2 + 1) &&
         (*(short *)((int)param_2 + 2) == *(short *)((int)param_2 + 6))))))) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x20000;
    }
  }
  uStack_8 = 0x1006f325;
  __chkesp();
  return;
}

