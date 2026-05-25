/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007e120 @ 0x1007E120 */


void __cdecl FUN_1007e120(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_68 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = local_68;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_1007e0d0(param_1,param_2,param_3);
    local_8 = 0x3ee8bac7;
    FUN_1007dbd0(param_1,param_2,0.45454999804496765);
    local_c = 0x3ea01a37;
    local_10 = 0x3ea872b0;
    local_14 = 0x3f23d70a;
    local_18 = 0x3ea8f5c3;
    local_1c = 0x3e99999a;
    local_20 = 0x3f19999a;
    local_24 = 0x3e19999a;
    local_28 = 0x3d75c28f;
    FUN_1007db30(param_1,param_2,0.3127000033855438,0.32899999618530273,0.6399999856948853,
                 0.33000001311302185,0.30000001192092896,0.6000000238418579,0.15000000596046448,
                 0.05999999865889549);
  }
  local_8 = 0x1007e21a;
  __chkesp();
  return;
}

