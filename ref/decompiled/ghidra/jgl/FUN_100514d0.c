/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100514d0 @ 0x100514D0 */


int __cdecl
FUN_100514d0(uint param_1,uint param_2,int *param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,int param_8)

{
  int iVar1;
  
  iVar1 = FUN_10051010(param_3,param_1,0x101,0x10057814,0x10057890,param_6,param_4,param_8);
  if (iVar1 == 0) {
    iVar1 = FUN_10051010(param_3 + param_1,param_2,0,0x1005790c,0x10057984,param_7,param_5,param_8);
    if (iVar1 != 0) {
      if (iVar1 == -3) {
        *(char **)(param_8 + 0x18) = s_oversubscribed_literal_length_tr_10057a68;
      }
      else if (iVar1 == -5) {
        FUN_10051720(*param_7,param_8);
        *(char **)(param_8 + 0x18) = s_incomplete_literal_length_tree_10057a48;
        iVar1 = -3;
      }
      FUN_10051720(*param_6,param_8);
      return iVar1;
    }
    iVar1 = 0;
  }
  else {
    if (iVar1 == -3) {
      *(char **)(param_8 + 0x18) = s_oversubscribed_literal_length_tr_10057a68;
      return -3;
    }
    if (iVar1 == -5) {
      FUN_10051720(*param_6,param_8);
      *(char **)(param_8 + 0x18) = s_incomplete_literal_length_tree_10057a48;
      return -3;
    }
  }
  return iVar1;
}

