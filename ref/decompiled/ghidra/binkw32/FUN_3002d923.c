/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d923 @ 0x3002D923 */


void __cdecl FUN_3002d923(undefined4 param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_3004f230 = (int *)FUN_3002fee7();
  DAT_3004f238 = DAT_3004f230[1] + -1;
  iVar1 = *DAT_3004f230;
  FUN_3002fe70(param_2 + (iVar1 == 0x2d),param_3,(int)DAT_3004f230);
  DAT_3004f23c = DAT_3004f238 < DAT_3004f230[1] + -1;
  DAT_3004f238 = DAT_3004f230[1] + -1;
  if ((DAT_3004f238 < -4) || ((int)param_3 <= DAT_3004f238)) {
    FUN_3002d9be(param_1,param_2,param_3,param_4);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_3004f23c) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_3002d9e5(param_1,param_2,param_3);
  }
  return;
}

