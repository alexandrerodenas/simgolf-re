/* Ghidra decompiled: Terrain.dll */
/* Function: IsEmpty @ 0x10035860 */
/* Body size: 25 addresses */


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CArray<struct CTaskDialog::_CTaskDialogButton,struct
   CTaskDialog::_CTaskDialogButton const &>::IsEmpty(void)const 
    public: int __thiscall CByteArray::IsEmpty(void)const 
    public: int __thiscall CDWordArray::IsEmpty(void)const 
    public: int __thiscall CObArray::IsEmpty(void)const 
     8 names - too many to list
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

bool __fastcall IsEmpty(int param_1)

{
  return *(int *)(param_1 + 8) == 0;
}

