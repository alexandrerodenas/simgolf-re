/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10051760 @ 0x10051760 */


void __cdecl
FUN_10051760(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(param_5 + 0x20))(*(undefined4 *)(param_5 + 0x28),1,0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 4) = param_1;
    *(undefined1 *)((int)puVar1 + 0x11) = param_2;
    *puVar1 = 0;
    puVar1[5] = param_3;
    puVar1[6] = param_4;
  }
  return;
}

