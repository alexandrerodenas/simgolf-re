/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009ef00 @ 0x1009EF00 */


void __cdecl
FUN_1009ef00(uint param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,int *param_6,
            int *param_7,int param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = FUN_1009e7a0(param_3,param_1,0x101,0x101272bc,0x10127338,param_6,param_4,param_8);
  if (local_8 == 0) {
    local_8 = FUN_1009e7a0(param_3 + param_1,param_2,0,0x101273b4,0x1012742c,param_7,param_5,param_8
                          );
    if (local_8 != 0) {
      if (local_8 == -3) {
        *(char **)(param_8 + 0x18) = "oversubscribed literal/length tree";
      }
      else if (local_8 == -5) {
        FUN_1009f250(*param_7,param_8);
        *(char **)(param_8 + 0x18) = "incomplete literal/length tree";
        local_8 = -3;
      }
      FUN_1009f250(*param_6,param_8);
    }
  }
  else if (local_8 == -3) {
    *(char **)(param_8 + 0x18) = "oversubscribed literal/length tree";
  }
  else if (local_8 == -5) {
    FUN_1009f250(*param_6,param_8);
    *(char **)(param_8 + 0x18) = "incomplete literal/length tree";
  }
  local_8 = 0x1009f027;
  __chkesp();
  return;
}

