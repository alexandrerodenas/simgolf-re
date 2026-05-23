/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003e0a0 @ 0x1003E0A0 */
/* Body size: 143 addresses */


void __cdecl FUN_1003e0a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)0x0;
  puVar1 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_2;
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_3;
  }
  FUN_1003e130(puVar3,puVar2,puVar1);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_10042d00((int)puVar3,(LPVOID)puVar2[0xe]);
    FUN_10042cb0(puVar2);
    *param_2 = 0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10042d00((int)puVar3,(LPVOID)puVar1[0xe]);
    FUN_10042cb0(puVar1);
    *param_3 = 0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_10042cb0(puVar3);
    *param_1 = 0;
  }
  return;
}

