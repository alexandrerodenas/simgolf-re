/* Ghidra decompiled: jgld.dll */
/* Function: ArrayUnwindFilter @ 0x10084700 */
/* Body size: 44 addresses */


/* Library Function - Single Match
    int __cdecl ArrayUnwindFilter(struct _EXCEPTION_POINTERS *)
   
   Library: Visual Studio */

int __cdecl ArrayUnwindFilter(_EXCEPTION_POINTERS *param_1)

{
  if (param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) {
    FUN_10084ff0();
  }
  return 0;
}

