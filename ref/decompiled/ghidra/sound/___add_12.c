/* Ghidra decompiled: sound.dll */
/* Function: ___add_12 @ 0x1004D0BA */


/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004d099(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1004d099(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1004d099(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1004d099(param_1[2],param_2[2],param_1 + 2);
  return;
}

