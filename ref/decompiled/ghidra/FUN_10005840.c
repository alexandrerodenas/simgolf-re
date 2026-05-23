/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10005840 @ 0x10005840 */
/* Body size: 70 addresses */


void __cdecl FUN_10005840(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [10];
  undefined4 local_48 [16];
  float local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  auVar3 = FUN_10019389(0,SUB84((double)param_1,0),(uint)((ulonglong)(double)param_1 >> 0x20),
                        SUB84((double)param_2,0),(uint)((ulonglong)(double)param_2 >> 0x20));
  local_8 = (float)(float10)auVar3;
  __chkesp();
  return;
}

