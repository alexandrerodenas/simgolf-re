/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042d50 @ 0x10042D50 */
/* Body size: 49 addresses */


undefined4 * __cdecl
FUN_10042d50(undefined4 param_1,undefined4 *param_2,undefined1 param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = param_3;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_2;
}

