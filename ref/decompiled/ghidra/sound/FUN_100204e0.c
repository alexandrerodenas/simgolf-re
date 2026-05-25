/* Ghidra decompiled: sound.dll */
/* Function: FUN_100204e0 @ 0x100204E0 */


void FUN_100204e0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  DAT_100b4ff0 = DAT_100b4fe8;
  if (DAT_100b4fe8 != (int *)0x0) {
    puVar1 = (undefined4 *)DAT_100b4fe8[2];
    while (puVar1 != (undefined4 *)0x0) {
      if (((int)puVar1[0x84] < 1) &&
         (uVar4 = thunk_FUN_1001ad30((int)puVar1), piVar3 = DAT_100b4ff0, (char)uVar4 == '\0')) {
        if (DAT_100b4ff0 != (int *)0x0) {
          if (*DAT_100b4ff0 == 0) {
            DAT_100b4fe8 = (int *)DAT_100b4ff0[1];
          }
          else {
            *(int *)(*DAT_100b4ff0 + 4) = DAT_100b4ff0[1];
          }
          piVar2 = (int *)DAT_100b4ff0[1];
          if (piVar2 == (int *)0x0) {
            DAT_100b4fec = *DAT_100b4ff0;
            DAT_100b4ff0 = (int *)0x0;
          }
          else {
            *piVar2 = *DAT_100b4ff0;
            DAT_100b4ff0 = piVar2;
          }
          FUN_1004249a((undefined *)piVar3);
          DAT_100b4ff4 = DAT_100b4ff4 + -1;
        }
        thunk_FUN_1001abd0(puVar1);
        FUN_1004249a((undefined *)puVar1);
      }
      else {
        if (DAT_100b4ff0 == (int *)0x0) {
          return;
        }
        DAT_100b4ff0 = (int *)DAT_100b4ff0[1];
      }
      if (DAT_100b4ff0 == (int *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)DAT_100b4ff0[2];
    }
  }
  return;
}

