/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006d7a0 @ 0x1006D7A0 */


void __cdecl FUN_1006d7a0(int param_1,byte param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x8000;
  *(ushort *)(param_1 + 0x12e) = (ushort)param_2;
  if (param_3 == 1) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x80;
  }
  else {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffff7f;
  }
  if (*(char *)(param_1 + 0x126) == '\x02') {
    *(undefined1 *)(param_1 + 299) = 4;
  }
  if ((*(char *)(param_1 + 0x126) == '\0') && (7 < *(byte *)(param_1 + 0x127))) {
    *(undefined1 *)(param_1 + 299) = 2;
  }
  return;
}

