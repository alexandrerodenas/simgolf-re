/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10050fb0 @ 0x10050FB0 */


int __cdecl FUN_10050fb0(int *param_1,uint *param_2,uint *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_10051010(param_1,0x13,0x13,0,0,param_3,param_2,param_4);
  if (iVar1 == -3) {
    *(char **)(param_4 + 0x18) = s_oversubscribed_dynamic_bit_lengt_10057a20;
    return -3;
  }
  if (iVar1 == -5) {
    FUN_10051720(*param_3,param_4);
    *(char **)(param_4 + 0x18) = s_incomplete_dynamic_bit_lengths_t_100579fc;
    iVar1 = -3;
  }
  return iVar1;
}

