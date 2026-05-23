/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10019000 @ 0x10019000 */
/* Body size: 325 addresses */


byte * __cdecl FUN_10019000(byte *param_1,byte *param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte *pbVar3;
  byte *local_34;
  byte abStack_30 [32];
  int local_10;
  byte *local_8;
  
  local_34 = param_2;
  pDVar2 = FUN_100219c0();
  for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
    abStack_30[local_10] = 0;
  }
  do {
    abStack_30[(int)(uint)*local_34 >> 3] =
         abStack_30[(int)(uint)*local_34 >> 3] | (byte)(1 << (*local_34 & 7));
    bVar1 = *local_34;
    local_34 = local_34 + 1;
  } while (bVar1 != 0);
  if (param_1 == (byte *)0x0) {
    local_8 = (byte *)pDVar2[6];
  }
  else {
    local_8 = param_1;
  }
  for (; (pbVar3 = local_8, ((uint)abStack_30[(int)(uint)*local_8 >> 3] & 1 << (*local_8 & 7)) != 0
         && (*local_8 != 0)); local_8 = local_8 + 1) {
  }
  do {
    if (*local_8 == 0) {
LAB_10019129:
      pDVar2[6] = (DWORD)local_8;
      if (pbVar3 == local_8) {
        pbVar3 = (byte *)0x0;
      }
      return pbVar3;
    }
    if (((uint)abStack_30[(int)(uint)*local_8 >> 3] & 1 << (*local_8 & 7)) != 0) {
      *local_8 = 0;
      local_8 = local_8 + 1;
      goto LAB_10019129;
    }
    local_8 = local_8 + 1;
  } while( true );
}

