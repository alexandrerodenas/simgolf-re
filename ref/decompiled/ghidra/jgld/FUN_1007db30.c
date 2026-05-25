/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007db30 @ 0x1007DB30 */


void __cdecl
FUN_1007db30(int param_1,int param_2,double param_3,double param_4,double param_5,double param_6,
            double param_7,double param_8,double param_9,double param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    *(float *)(param_2 + 0x80) = (float)param_3;
    *(float *)(param_2 + 0x84) = (float)param_4;
    *(float *)(param_2 + 0x88) = (float)param_5;
    *(float *)(param_2 + 0x8c) = (float)param_6;
    *(float *)(param_2 + 0x90) = (float)param_7;
    *(float *)(param_2 + 0x94) = (float)param_8;
    *(float *)(param_2 + 0x98) = (float)param_9;
    *(float *)(param_2 + 0x9c) = (float)param_10;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
  }
  return;
}

