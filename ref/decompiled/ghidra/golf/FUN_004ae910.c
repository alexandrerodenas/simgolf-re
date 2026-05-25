/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae910 @ 0x004AE910 */


void FUN_004ae910(int *param_1)

{
  switch(param_1[9]) {
  case 0:
    FUN_004ae990(param_1,0);
    return;
  case 1:
    FUN_004ae990(param_1,1);
    return;
  case 2:
  case 3:
    FUN_004ae990(param_1,3);
    return;
  case 4:
    FUN_004ae990(param_1,4);
    return;
  case 5:
    FUN_004ae990(param_1,5);
    return;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 7;
    (**(code **)*param_1)(param_1);
    return;
  }
}

