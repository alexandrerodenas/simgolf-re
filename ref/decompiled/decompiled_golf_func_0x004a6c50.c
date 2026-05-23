/**
 * func_004a6c50 — Auto-décompilé
 * Adresse: 0x004a6c50 [golf.exe]
 * Taille: 855 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: False
 * Appelle: dword
 * Constantes: 0x4a6ddc, 0x4a6cfb, 0x4a6d5b, 0x4a6d03, 0x4a6da0, 0x4a6cfe, 0x4a6d47, 0x4a6c73
 */
void func_004a6c50(void) {
    /* 171 instructions */

    // push ebp
    // mov ebp, esp
    // push edi
    // mov edi, dword ptr [ebp + 8]
    // xor eax, eax
    // or ecx, 0xffffffff
    // repne scasb al, byte ptr es:[edi]
    // inc ecx
    // neg ecx
    // dec edi
    // mov al, byte ptr [ebp + 0xc]
    // std 
    // repne scasb al, byte ptr es:[edi]
    // inc edi
    // cmp byte ptr [edi], al
    // if (...) GOTO(0x4a6c71)
    // xor eax, eax
    // if (...) GOTO(0x4a6c73)
    // mov eax, edi
    // cld 
    // pop edi
    // leave 
    // return;
    // CALL(dword)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // mov ecx, dword ptr [esp + 0xc]
    // push edi
    // test ecx, ecx
    // if (...) GOTO(0x4a6d03)
    // push esi
    // push ebx
    // mov ebx, ecx
    // mov esi, dword ptr [esp + 0x14]
    // test esi, 3
    // mov edi, dword ptr [esp + 0x10]
    // if (...) GOTO(0x4a6ca4)
    // shr ecx, 2
    // if (...) GOTO(0x4a6d11)
    // if (...) GOTO(0x4a6cc5)
    // mov al, byte ptr [esi]
    // inc esi
    // mov byte ptr [edi], al
    // inc edi
    // dec ecx
    // if (...) GOTO(0x4a6cd2)
    // test al, al
    // if (...) GOTO(0x4a6cda)
    // test esi, 3
    // if (...) GOTO(0x4a6ca4)
    // mov ebx, ecx
    // shr ecx, 2
    // if (...) GOTO(0x4a6d11)
    // and ebx, 3
    // if (...) GOTO(0x4a6cd2)
    // mov al, byte ptr [esi]
    // inc esi
    // mov byte ptr [edi], al
    // inc edi
    // test al, al
    // if (...) GOTO(0x4a6cfe)
    // dec ebx
    // if (...) GOTO(0x4a6cc5)
    // mov eax, dword ptr [esp + 0x10]
    // pop ebx
    // pop esi
    // pop edi
    // return;
    // test edi, 3
    // if (...) GOTO(0x4a6cf4)
    // mov byte ptr [edi], al
    // inc edi
    // dec ecx
    // if (...) GOTO(0x4a6d76)
    // test edi, 3
    // if (...) GOTO(0x4a6ce2)
    // mov ebx, ecx
    // shr ecx, 2
    // if (...) GOTO(0x4a6d67)
    // mov byte ptr [edi], al
    // inc edi
    // dec ebx
    // if (...) GOTO(0x4a6cfb)
    // pop ebx
    // pop esi
    // mov eax, dword ptr [esp + 8]
    // pop edi
    // return;
    // mov dword ptr [edi], edx
    // add edi, 4
    // dec ecx
    // if (...) GOTO(0x4a6cc0)
    // mov edx, 0x7efefeff
    // mov eax, dword ptr [esi]
    // add edx, eax
    // xor eax, 0xffffffff
    // xor eax, edx
    // mov edx, dword ptr [esi]
    // add esi, 4
    // test eax, 0x81010100
    // if (...) GOTO(0x4a6d09)
    // test dl, dl
    // if (...) GOTO(0x4a6d5b)
    // test dh, dh
    // if (...) GOTO(0x4a6d51)
    // test edx, 0xff0000
    // if (...) GOTO(0x4a6d47)
    // test edx, 0xff000000
    // if (...) GOTO(0x4a6d09)
    // mov dword ptr [edi], edx
    // if (...) GOTO(0x4a6d5f)
    // and edx, 0xffff
    // mov dword ptr [edi], edx
    // if (...) GOTO(0x4a6d5f)
    // and edx, 0xff
    // mov dword ptr [edi], edx
    // if (...) GOTO(0x4a6d5f)
    // xor edx, edx
    // mov dword ptr [edi], edx
    // add edi, 4
    // xor eax, eax
    // dec ecx
    // if (...) GOTO(0x4a6d71)
    // xor eax, eax
    // mov dword ptr [edi], eax
    // add edi, 4
    // dec ecx
    // if (...) GOTO(0x4a6d69)
    // and ebx, 3
    // if (...) GOTO(0x4a6cfb)
    // mov eax, dword ptr [esp + 0x10]
    // pop ebx
    // pop esi
    // pop edi
    // return;
    // // __debugbreak()
    // // __debugbreak()
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