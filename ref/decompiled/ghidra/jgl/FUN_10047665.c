/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10047665 @ 0x10047665 */
/* Body size: 155 addresses */


void __cdecl FUN_10047665(undefined4 param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_10057e14 = (int *)FUN_1004ba07();
  DAT_10057e1c = DAT_10057e14[1] + -1;
  iVar1 = *DAT_10057e14;
  FUN_1004b990(param_2 + (iVar1 == 0x2d),param_3,(int)DAT_10057e14);
  DAT_10057e20 = DAT_10057e1c < DAT_10057e14[1] + -1;
  DAT_10057e1c = DAT_10057e14[1] + -1;
  if ((DAT_10057e1c < -4) || ((int)param_3 <= DAT_10057e1c)) {
    FUN_10047700(param_1,param_2,param_3,param_4);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_10057e20) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_10047727(param_1,param_2,param_3);
  }
  return;
}

