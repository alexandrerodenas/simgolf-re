/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002df70 @ 0x1002DF70 */


int __fastcall FUN_1002df70(void *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = *(uint **)((int)param_1 + 0x50);
  if (puVar2 == (uint *)0x0) {
    iVar3 = 8;
  }
  else {
    piVar1 = (int *)((int)param_1 + 0x40);
    if ((*(int *)((int)param_1 + 0x40) == 0) && (iVar3 = create_sound(piVar1,puVar2,2), iVar3 != 0))
    {
      return iVar3;
    }
    iVar3 = thunk_FUN_1002add0(param_1,puVar2);
    if ((iVar3 == 0) && ((*(byte *)((int)param_1 + 0x58) & 2) != 0)) {
      *(byte *)(*piVar1 + 0x58) = *(byte *)(*piVar1 + 0x58) | 2;
      if (*(int *)((int)param_1 + 0x5c) != 0) {
        *(int *)(*piVar1 + 0x5c) = *(int *)((int)param_1 + 0x5c);
        return 0;
      }
    }
  }
  return iVar3;
}

