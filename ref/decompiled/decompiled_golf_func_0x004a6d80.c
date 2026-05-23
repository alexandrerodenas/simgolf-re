/**
 * func_004a6d80 — Auto-décompilé
 * Adresse: 0x004a6d80 [golf.exe]
 * Taille: 165 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: False
 * Constantes: 0x4a6ddc, 0x4a6dbc, 0x4a6dd4, 0x4a6da0, 0x4a6f18
 */
void func_004a6d80(void) {
    /* 33 instructions */

    // push ebp
    // mov ebp, esp
    // push edi
    // push esi
    // mov esi, dword ptr [ebp + 0xc]
    // mov ecx, dword ptr [ebp + 0x10]
    // mov edi, dword ptr [ebp + 8]
    // mov eax, ecx
    // mov edx, ecx
    // add eax, esi
    // cmp edi, esi
    // jbe 0x4a6da0
    // cmp edi, eax
    // if (...) GOTO(0x4a6f18)
    // test edi, 3
    // if (...) GOTO(0x4a6dbc)
    // shr ecx, 2
    // and edx, 3
    // cmp ecx, 8
    // if (...) GOTO(0x4a6ddc)
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // if (...) GOTO(dword)
    // mov eax, edi
    // mov edx, 3
    // sub ecx, 4
    // if (...) GOTO(0x4a6dd4)
    // and eax, 3
    // add ecx, eax
    // if (...) GOTO(dword)
    // if (...) GOTO(dword)
    // // nop
    // if (...) GOTO(dword)
    // // nop
}