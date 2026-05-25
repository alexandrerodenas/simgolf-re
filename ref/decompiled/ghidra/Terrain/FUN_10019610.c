/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10019610 @ 0x10019610 */


void __cdecl FUN_10019610(uint *param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  DWORD DVar2;
  size_t sVar3;
  size_t sVar4;
  void *this;
  int iVar5;
  uint local_328 [65];
  uint *local_224;
  uint local_220 [135];
  
  if ((DAT_10110794 == 1) || ((DAT_10110794 == 0 && (DAT_10110798 == 1)))) {
    if ((DAT_100662c4 & 0x10c) == 0) {
      FUN_100230f0((undefined **)&DAT_100662b8,(undefined **)0x0,4,(undefined *)0x0);
    }
    FUN_10023020((undefined **)&DAT_100662b8,(byte *)s_Assertion_failed___s__file__s__l_10063ef0);
    FUN_1001eb90(this,(undefined **)&DAT_100662b8);
  }
  else {
    FUN_10018580(local_220,(uint *)"Assertion failed!");
    FUN_10018590(local_220,(uint *)PTR_DAT_10063f20);
    FUN_10018590(local_220,(uint *)"Program: ");
    DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_328,0x104);
    if (DVar2 == 0) {
      FUN_10018580(local_328,(uint *)"<program name unknown>");
    }
    local_224 = local_328;
    sVar3 = _strlen((char *)local_328);
    if (0x3c < sVar3 + 0xb) {
      sVar3 = _strlen((char *)local_328);
      local_224 = (uint *)((int)local_224 + (sVar3 - 0x31));
      _strncpy((char *)local_224,PTR_DAT_10063f18,3);
    }
    FUN_10018590(local_220,local_224);
    FUN_10018590(local_220,(uint *)PTR_DAT_10063f1c);
    FUN_10018590(local_220,(uint *)"File: ");
    sVar3 = _strlen((char *)param_2);
    if (sVar3 + 8 < 0x3d) {
      FUN_10018590(local_220,param_2);
    }
    else {
      _strncat((char *)local_220,(char *)param_2,0x31);
      FUN_10018590(local_220,(uint *)PTR_DAT_10063f18);
    }
    FUN_10018590(local_220,(uint *)PTR_DAT_10063f1c);
    FUN_10018590(local_220,(uint *)"Line: ");
    iVar5 = 10;
    sVar3 = _strlen((char *)local_220);
    __itoa(param_3,(char *)((int)local_220 + sVar3),iVar5);
    FUN_10018590(local_220,(uint *)PTR_DAT_10063f20);
    FUN_10018590(local_220,(uint *)"Expression: ");
    sVar3 = _strlen((char *)local_220);
    sVar4 = _strlen((char *)param_1);
    if (sVar3 + 0xb0 + sVar4 < 0x21d) {
      FUN_10018590(local_220,param_1);
    }
    else {
      sVar3 = _strlen((char *)local_220);
      _strncat((char *)local_220,(char *)param_1,0x21c - (sVar3 + 0xb3));
      FUN_10018590(local_220,(uint *)PTR_DAT_10063f18);
    }
    FUN_10018590(local_220,(uint *)PTR_DAT_10063f20);
    FUN_10018590(local_220,
                 (uint *)
                 "For information on how your program can cause an assertion\nfailure, see the Visual C++ documentation on asserts"
                );
    FUN_10018590(local_220,(uint *)PTR_DAT_10063f20);
    FUN_10018590(local_220,(uint *)"(Press Retry to debug the application - JIT must be enabled)");
    iVar5 = FUN_10022a40(local_220,"Microsoft Visual C++ Runtime Library",0x12012);
    if (iVar5 == 3) {
      FUN_10022780(0x16);
                    /* WARNING: Subroutine does not return */
      __exit(3);
    }
    if (iVar5 == 4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (iVar5 == 5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

