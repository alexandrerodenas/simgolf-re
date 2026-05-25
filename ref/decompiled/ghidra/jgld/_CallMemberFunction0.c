/* Ghidra decompiled: jgld.dll */
/* Function: _CallMemberFunction0 @ 0x1007EB30 */


/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1007eb35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}

