/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10045e40 @ 0x10045E40 */


void __cdecl FUN_10045e40(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x5a) = *param_3;
    *(undefined4 *)(param_2 + 0x5e) = param_3[1];
    *(undefined2 *)(param_2 + 0x62) = *(undefined2 *)(param_3 + 2);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  }
  return;
}

