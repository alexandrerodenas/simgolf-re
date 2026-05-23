/**
 * func_004a6ad0 — Auto-décompilé
 * Adresse: 0x004a6ad0 [golf.exe]
 * Taille: 1745 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: False
 * Appelle: 0x4aaad1, 0x4a6b08, dword
 * Constantes: 0x4a6be9, 0x4a6ddc, 0x4a6b69, 0x4a6b85, 0x4a6cfb, 0x4a6d5b, 0x4a6c33, 0x4a6c3f
 */
void func_004a6ad0(void) {
    /* 349 instructions */

    // push ebp
    // mov ebp, esp
    // push edi
    // push esi
    // push ebx
    // mov ecx, dword ptr [ebp + 0x10]
    // jecxz 0x4a6b01
    // mov ebx, ecx
    // mov edi, dword ptr [ebp + 8]
    // mov esi, edi
    // xor eax, eax
    // repne scasb al, byte ptr es:[edi]
    // neg ecx
    // add ecx, ebx
    // mov edi, esi
    // mov esi, dword ptr [ebp + 0xc]
    // repe cmpsb byte ptr [esi], byte ptr es:[edi]
    // mov al, byte ptr [esi - 1]
    // xor ecx, ecx
    // cmp al, byte ptr [edi - 1]
    // if (...) GOTO(0x4a6aff)
    // if (...) GOTO(0x4a6b01)
    // dec ecx
    // dec ecx
    // not ecx
    // mov eax, ecx
    // pop ebx
    // pop esi
    // pop edi
    // leave 
    // return;
    // push ebx
    // push ebp
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x14]
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4a6b28)
    // movzx eax, byte ptr [edi]
    // push 8
    // push eax
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4a6b37)
    // movzx eax, byte ptr [edi]
    // mov ecx, dword ptr [0x4e5010]
    // mov al, byte ptr [ecx + eax*2]
    // and eax, 8
    // test eax, eax
    // if (...) GOTO(0x4a6b3e)
    // inc edi
    // if (...) GOTO(0x4a6b10)
    // movzx esi, byte ptr [edi]
    // inc edi
    // cmp esi, 0x2d
    // mov ebp, esi
    // if (...) GOTO(0x4a6b4e)
    // cmp esi, 0x2b
    // if (...) GOTO(0x4a6b52)
    // movzx esi, byte ptr [edi]
    // inc edi
    // xor ebx, ebx
    // cmp dword ptr [0x4e521c], 1
    // if (...) GOTO(0x4a6b69)
    // push 4
    // push esi
    // CALL(0x4aaad1)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4a6b74)
    // mov eax, dword ptr [0x4e5010]
    // mov al, byte ptr [eax + esi*2]
    // and eax, 4
    // test eax, eax
    // if (...) GOTO(0x4a6b85)
    // lea eax, [ebx + ebx*4]
    // lea ebx, [esi + eax*2 - 0x30]
    // movzx esi, byte ptr [edi]
    // inc edi
    // if (...) GOTO(0x4a6b54)
    // cmp ebp, 0x2d
    // mov eax, ebx
    // if (...) GOTO(0x4a6b8e)
    // neg eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // return;
    // push dword ptr [esp + 4]
    // CALL(0x4a6b08)
    // pop ecx
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [esp + 0xc]
    // push ebx
    // test eax, eax
    // if (...) GOTO(0x4a6bf3)
    // mov edx, dword ptr [esp + 8]
    // xor ebx, ebx
    // mov bl, byte ptr [esp + 0xc]
    // test edx, 3
    // if (...) GOTO(0x4a6bcd)
    // mov cl, byte ptr [edx]
    // inc edx
    // xor cl, bl
    // if (...) GOTO(0x4a6c2e)
    // dec eax
    // if (...) GOTO(0x4a6bf3)
    // test edx, 3
    // if (...) GOTO(0x4a6bbb)
    // sub eax, 4
    // if (...) GOTO(0x4a6be4)
    // push edi
    // mov edi, ebx
    // shl ebx, 8
    // add ebx, edi
    // mov edi, ebx
    // shl ebx, 0x10
    // add ebx, edi
    // if (...) GOTO(0x4a6bfa)
    // pop edi
    // add eax, 4
    // if (...) GOTO(0x4a6bf3)
    // mov cl, byte ptr [edx]
    // inc edx
    // xor cl, bl
    // if (...) GOTO(0x4a6c2e)
    // dec eax
    // if (...) GOTO(0x4a6be9)
    // pop ebx
    // return;
    // sub eax, 4
    // if (...) GOTO(0x4a6be3)
    // mov ecx, dword ptr [edx]
    // xor ecx, ebx
    // mov edi, 0x7efefeff
    // add edi, ecx
    // xor ecx, 0xffffffff
    // xor ecx, edi
    // add edx, 4
    // and ecx, 0x81010100
    // if (...) GOTO(0x4a6bf5)
    // mov ecx, dword ptr [edx - 4]
    // xor cl, bl
    // if (...) GOTO(0x4a6c3f)
    // xor ch, bl
    // if (...) GOTO(0x4a6c39)
    // shr ecx, 0x10
    // xor cl, bl
    // if (...) GOTO(0x4a6c33)
    // xor ch, bl
    // if (...) GOTO(0x4a6c2d)
    // if (...) GOTO(0x4a6bf5)
    // pop edi
    // lea eax, [edx - 1]
    // pop ebx
    // return;
    // lea eax, [edx - 2]
    // pop edi
    // pop ebx
    // return;
    // lea eax, [edx - 3]
    // pop edi
    // pop ebx
    // return;
    // lea eax, [edx - 4]
    // pop edi
    // pop ebx
    // return;
    // CALL(dword)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
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