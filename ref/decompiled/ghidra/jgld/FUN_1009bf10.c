/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009bf10 @ 0x1009BF10 */


void __cdecl FUN_1009bf10(int param_1,int param_2,char *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((((param_3 != (char *)0x0) && (*param_3 == s_1_0_2_1011dba8[0])) && (param_4 == 0x38)) &&
     (param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = FUN_1009e680;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(code **)(param_1 + 0x24) = FUN_1009e6d0;
    }
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x18);
    uVar1 = __chkesp();
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 0;
      if (param_2 < 0) {
        param_2 = -param_2;
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 1;
      }
      if ((param_2 < 8) || (0xf < param_2)) {
        FUN_1009be70(param_1);
      }
      else {
        *(int *)(*(int *)(param_1 + 0x1c) + 0x10) = param_2;
        uVar1 = FUN_1009cd90(param_1,~-(uint)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0) &
                                     0x1009e370,1 << ((byte)param_2 & 0x1f));
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14) = uVar1;
        if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) == 0) {
          FUN_1009be70(param_1);
        }
        else {
          FUN_1009bdd0(param_1);
        }
      }
    }
  }
  uStack_8 = 0x1009c09f;
  __chkesp();
  return;
}

