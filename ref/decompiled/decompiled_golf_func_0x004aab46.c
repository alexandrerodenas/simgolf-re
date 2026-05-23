/**
 * func_004aab46 — Auto-décompilé
 * Adresse: 0x004aab46 [golf.exe]
 * Taille: 37540 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: True
 * Appelle: dword, 0x4adce5, 0x4a6070, 0x4a8e53, 0x4aaea8, ebx, 0x4ac8bc, 0x4ac4a2
 * Constantes: 0x4aadab, 0x4ab10a, 0x4aa6c0, 0x4aaefd, 0x4a6c80, 0x4aaf1a, 0x4bc87c, 0x4ab218
 */
void func_004aab46(void) {
    /* 7508 instructions */

    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc5b0)  // ptr?
    // push(0x4a8f7c)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0x1c
    // push ebx
    // push esi
    // push edi
    // mov dword ptr [ebp - 0x18], esp
    // xor edi, edi
    // cmp dword ptr [0x840b5c], edi
    // if (...) GOTO(0x4aabbc)
    // push edi
    // push edi
    // push 1
    // pop ebx
    // push ebx
    // push(0x4bc5a8)  // ptr?
    // mov esi, 0x100
    // push esi
    // push edi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4aab9a)
    // mov dword ptr [0x840b5c], ebx
    // if (...) GOTO(0x4aabbc)
    // push edi
    // push edi
    // push ebx
    // push(0x4bc5a4)  // ptr?
    // push esi
    // push edi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4aacd4)
    // mov dword ptr [0x840b5c], 2
    // cmp dword ptr [ebp + 0x14], edi
    // if (...) GOTO(0x4aabd1)
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // CALL(0x4adce5)
    // pop ecx
    // pop ecx
    // mov dword ptr [ebp + 0x14], eax
    // mov eax, dword ptr [0x840b5c]
    // cmp eax, 2
    // if (...) GOTO(0x4aabf8)
    // push dword ptr [ebp + 0x1c]
    // push dword ptr [ebp + 0x18]
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(dword)
    // if (...) GOTO(0x4aacd6)
    // cmp eax, 1
    // if (...) GOTO(0x4aacd4)
    // cmp dword ptr [ebp + 0x20], edi
    // if (...) GOTO(0x4aac0e)
    // mov eax, dword ptr [0x840b54]
    // mov dword ptr [ebp + 0x20], eax
    // push edi
    // push edi
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // mov eax, dword ptr [ebp + 0x24]
    // neg eax
    // sbb eax, eax
    // and eax, 8
    // inc eax
    // push eax
    // push dword ptr [ebp + 0x20]
    // CALL(dword)
    // mov ebx, eax
    // mov dword ptr [ebp - 0x1c], ebx
    // cmp ebx, edi
    // if (...) GOTO(0x4aacd4)
    // mov dword ptr [ebp - 4], edi
    // lea eax, [ebx + ebx]
    // add eax, 3
    // and al, 0xfc
    // CALL(0x4a6070)
    // mov dword ptr [ebp - 0x18], esp
    // mov eax, esp
    // mov dword ptr [ebp - 0x24], eax
    // or dword ptr [ebp - 4], 0xffffffff
    // if (...) GOTO(0x4aac69)
    // push 1
    // pop eax
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // xor edi, edi
    // mov dword ptr [ebp - 0x24], edi
    // or dword ptr [ebp - 4], 0xffffffff
    // mov ebx, dword ptr [ebp - 0x1c]
    // cmp dword ptr [ebp - 0x24], edi
    // if (...) GOTO(0x4aacd4)
    // push ebx
    // push dword ptr [ebp - 0x24]
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push 1
    // push dword ptr [ebp + 0x20]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4aacd4)
    // push edi
    // push edi
    // push ebx
    // push dword ptr [ebp - 0x24]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(dword)
    // mov esi, eax
    // mov dword ptr [ebp - 0x28], esi
    // cmp esi, edi
    // if (...) GOTO(0x4aacd4)
    // test byte ptr [ebp + 0xd], 4
    // if (...) GOTO(0x4aace8)
    // cmp dword ptr [ebp + 0x1c], edi
    // if (...) GOTO(0x4aad63)
    // cmp esi, dword ptr [ebp + 0x1c]
    // if (...) GOTO(0x4aacd4)
    // push dword ptr [ebp + 0x1c]
    // push dword ptr [ebp + 0x18]
    // push ebx
    // push dword ptr [ebp - 0x24]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4aad63)
    // xor eax, eax
    // lea esp, [ebp - 0x38]
    // mov ecx, dword ptr [ebp - 0x10]
    // mov dword ptr fs:[0], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov dword ptr [ebp - 4], 1
    // lea eax, [esi + esi]
    // add eax, 3
    // and al, 0xfc
    // CALL(0x4a6070)
    // mov dword ptr [ebp - 0x18], esp
    // mov ebx, esp
    // mov dword ptr [ebp - 0x20], ebx
    // or dword ptr [ebp - 4], 0xffffffff
    // if (...) GOTO(0x4aad1c)
    // push 1
    // pop eax
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // xor edi, edi
    // xor ebx, ebx
    // or dword ptr [ebp - 4], 0xffffffff
    // mov esi, dword ptr [ebp - 0x28]
    // cmp ebx, edi
    // if (...) GOTO(0x4aacd4)
    // push esi
    // push ebx
    // push dword ptr [ebp - 0x1c]
    // push dword ptr [ebp - 0x24]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4aacd4)
    // cmp dword ptr [ebp + 0x1c], edi
    // push edi
    // push edi
    // if (...) GOTO(0x4aad43)
    // push edi
    // push edi
    // if (...) GOTO(0x4aad49)
    // push dword ptr [ebp + 0x1c]
    // push dword ptr [ebp + 0x18]
    // push esi
    // push ebx
    // push(0x220)
    // push dword ptr [ebp + 0x20]
    // CALL(dword)
    // mov esi, eax
    // cmp esi, edi
    // if (...) GOTO(0x4aacd4)
    // mov eax, esi
    // if (...) GOTO(0x4aacd6)
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ebx
    // push esi
    // CALL(0x4a8e53)
    // mov esi, eax
    // push dword ptr [esi + 0x50]
    // push dword ptr [ebp + 8]
    // CALL(0x4aaea8)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aae9b)
    // mov ebx, dword ptr [eax + 8]
    // test ebx, ebx
    // mov dword ptr [ebp + 8], ebx
    // if (...) GOTO(0x4aae9b)
    // cmp ebx, 5
    // if (...) GOTO(0x4aadab)
    // and dword ptr [eax + 8], 0
    // push 1
    // pop eax
    // if (...) GOTO(0x4aaea4)
    // cmp ebx, 1
    // if (...) GOTO(0x4aae96)
    // mov ecx, dword ptr [esi + 0x54]
    // mov dword ptr [ebp - 4], ecx
    // mov ecx, dword ptr [ebp + 0xc]
    // mov dword ptr [esi + 0x54], ecx
    // mov ecx, dword ptr [eax + 4]
    // cmp ecx, 8
    // if (...) GOTO(0x4aae88)
    // mov edx, dword ptr [0x4e53b0]
    // mov ecx, dword ptr [0x4e53b4]
    // add ecx, edx
    // push edi
    // cmp edx, ecx
    // if (...) GOTO(0x4aae06)
    // lea ecx, [edx + edx*2]
    // shl ecx, 2
    // mov edi, dword ptr [esi + 0x50]
    // add ecx, 0xc
    // and dword ptr [ecx + edi - 4], 0
    // mov edi, dword ptr [0x4e53b0]
    // mov ebx, dword ptr [0x4e53b4]
    // inc edx
    // add ebx, edi
    // cmp edx, ebx
    // if (...) GOTO(0x4aade5)
    // mov ebx, dword ptr [ebp + 8]
    // mov eax, dword ptr [eax]
    // mov edi, dword ptr [esi + 0x58]
    // cmp eax, 0xc000008e
    // if (...) GOTO(0x4aae1b)
    // mov dword ptr [esi + 0x58], 0x83
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc0000090
    // if (...) GOTO(0x4aae2b)
    // mov dword ptr [esi + 0x58], 0x81
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc0000091
    // if (...) GOTO(0x4aae3b)
    // mov dword ptr [esi + 0x58], 0x84
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc0000093
    // if (...) GOTO(0x4aae4b)
    // mov dword ptr [esi + 0x58], 0x85
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc000008d
    // if (...) GOTO(0x4aae5b)
    // mov dword ptr [esi + 0x58], 0x82
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc000008f
    // if (...) GOTO(0x4aae6b)
    // mov dword ptr [esi + 0x58], 0x86
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc0000092
    // if (...) GOTO(0x4aae79)
    // mov dword ptr [esi + 0x58], 0x8a
    // push dword ptr [esi + 0x58]
    // push 8
    // CALL(ebx)
    // pop ecx
    // mov dword ptr [esi + 0x58], edi
    // pop ecx
    // pop edi
    // if (...) GOTO(0x4aae90)
    // and dword ptr [eax + 8], 0
    // push ecx
    // CALL(ebx)
    // pop ecx
    // mov eax, dword ptr [ebp - 4]
    // mov dword ptr [esi + 0x54], eax
    // or eax, 0xffffffff
    // if (...) GOTO(0x4aaea4)
    // push dword ptr [ebp + 0xc]
    // CALL(dword)
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov edx, dword ptr [esp + 8]
    // mov ecx, dword ptr [0x4e53bc]
    // push esi
    // mov esi, dword ptr [esp + 8]
    // cmp dword ptr [edx], esi
    // push edi
    // mov eax, edx
    // if (...) GOTO(0x4aaecf)
    // lea edi, [ecx + ecx*2]
    // lea edi, [edx + edi*4]
    // add eax, 0xc
    // cmp eax, edi
    // jae 0x4aaecf
    // cmp dword ptr [eax], esi
    // if (...) GOTO(0x4aaec4)
    // lea ecx, [ecx + ecx*2]
    // lea ecx, [edx + ecx*4]
    // cmp eax, ecx
    // jae 0x4aaedd
    // cmp dword ptr [eax], esi
    // if (...) GOTO(0x4aaedf)
    // xor eax, eax
    // pop edi
    // pop esi
    // return;
    // cmp dword ptr [0x842168], 0
    // if (...) GOTO(0x4aaef0)
    // CALL(0x4ac8bc)
    // push esi
    // mov esi, dword ptr [0x842160]
    // mov al, byte ptr [esi]
    // cmp al, 0x22
    // if (...) GOTO(0x4aaf22)
    // mov al, byte ptr [esi + 1]
    // inc esi
    // cmp al, 0x22
    // if (...) GOTO(0x4aaf1a)
    // test al, al
    // if (...) GOTO(0x4aaf1a)
    // movzx eax, al
    // push eax
    // CALL(0x4ac4a2)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aaefd)
    // inc esi
    // if (...) GOTO(0x4aaefd)
    // cmp byte ptr [esi], 0x22
    // if (...) GOTO(0x4aaf2c)
    // inc esi
    // if (...) GOTO(0x4aaf2c)
    // cmp al, 0x20
    // jbe 0x4aaf2c
    // inc esi
    // cmp byte ptr [esi], 0x20
    // if (...) GOTO(0x4aaf26)
    // mov al, byte ptr [esi]
    // test al, al
    // if (...) GOTO(0x4aaf36)
    // cmp al, 0x20
    // jbe 0x4aaf1f
    // mov eax, esi
    // pop esi
    // return;
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x842168], ebx
    // push esi
    // push edi
    // if (...) GOTO(0x4aaf4c)
    // CALL(0x4ac8bc)
    // mov esi, dword ptr [0x840aac]
    // xor edi, edi
    // mov al, byte ptr [esi]
    // cmp al, bl
    // if (...) GOTO(0x4aaf6c)
    // cmp al, 0x3d
    // if (...) GOTO(0x4aaf5f)
    // inc edi
    // push esi
    // CALL(0x4abdf0)
    // pop ecx
    // lea esi, [esi + eax + 1]
    // if (...) GOTO(0x4aaf54)
    // lea eax, [edi*4 + 4]
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // cmp esi, ebx
    // mov dword ptr [0x840a88], esi
    // if (...) GOTO(0x4aaf8e)
    // push 9
    // CALL(0x4a6937)
    // pop ecx
    // mov edi, dword ptr [0x840aac]
    // cmp byte ptr [edi], bl
    // if (...) GOTO(0x4aafd1)
    // push ebp
    // push edi
    // CALL(0x4abdf0)
    // mov ebp, eax
    // pop ecx
    // inc ebp
    // cmp byte ptr [edi], 0x3d
    // if (...) GOTO(0x4aafca)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, ebx
    // pop ecx
    // mov dword ptr [esi], eax
    // if (...) GOTO(0x4aafbd)
    // push 9
    // CALL(0x4a6937)
    // pop ecx
    // push edi
    // push dword ptr [esi]
    // CALL(0x4abca0)
    // pop ecx
    // add esi, 4
    // pop ecx
    // add edi, ebp
    // cmp byte ptr [edi], bl
    // if (...) GOTO(0x4aaf99)
    // pop ebp
    // push dword ptr [0x840aac]
    // CALL(0x4a5007)
    // pop ecx
    // mov dword ptr [0x840aac], ebx
    // mov dword ptr [esi], ebx
    // pop edi
    // pop esi
    // mov dword ptr [0x842164], 1
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x842168], ebx
    // push esi
    // push edi
    // if (...) GOTO(0x4ab00a)
    // CALL(0x4ac8bc)
    // mov esi, 0x840b60
    // push(0x104)
    // push esi
    // push ebx
    // CALL(dword)
    // mov eax, dword ptr [0x842160]
    // mov dword ptr [0x840a98], esi
    // mov edi, esi
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab02f)
    // mov edi, eax
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // push ebx
    // push ebx
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, dword ptr [ebp - 4]
    // lea eax, [eax + ecx*4]
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // add esp, 0x18
    // cmp esi, ebx
    // if (...) GOTO(0x4ab05f)
    // push 8
    // CALL(0x4a6937)
    // pop ecx
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // mov eax, dword ptr [ebp - 4]
    // lea eax, [esi + eax*4]
    // push eax
    // push esi
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 4]
    // add esp, 0x14
    // dec eax
    // mov dword ptr [0x840a80], esi
    // pop edi
    // pop esi
    // mov dword ptr [0x840a7c], eax
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov ecx, dword ptr [ebp + 0x18]
    // mov eax, dword ptr [ebp + 0x14]
    // push ebx
    // push esi
    // and dword ptr [ecx], 0
    // mov esi, dword ptr [ebp + 0x10]
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // mov dword ptr [eax], 1
    // mov eax, dword ptr [ebp + 8]
    // test edi, edi
    // if (...) GOTO(0x4ab0b6)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab0ff)
    // mov dl, byte ptr [eax + 1]
    // inc eax
    // cmp dl, 0x22
    // if (...) GOTO(0x4ab0ed)
    // test dl, dl
    // if (...) GOTO(0x4ab0ed)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab0e0)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0e0)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0bb)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab0bb)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0f7)
    // and byte ptr [esi], 0
    // inc esi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab142)
    // inc eax
    // if (...) GOTO(0x4ab142)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab10a)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // mov dl, byte ptr [eax]
    // inc eax
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab125)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab124)
    // mov bl, byte ptr [eax]
    // mov byte ptr [esi], bl
    // inc esi
    // inc eax
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab133)
    // test dl, dl
    // if (...) GOTO(0x4ab137)
    // cmp dl, 9
    // if (...) GOTO(0x4ab0ff)
    // test dl, dl
    // if (...) GOTO(0x4ab13a)
    // dec eax
    // if (...) GOTO(0x4ab142)
    // test esi, esi
    // if (...) GOTO(0x4ab142)
    // and byte ptr [esi - 1], 0
    // and dword ptr [ebp + 0x18], 0
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // mov dl, byte ptr [eax]
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab15b)
    // cmp dl, 9
    // if (...) GOTO(0x4ab15e)
    // inc eax
    // if (...) GOTO(0x4ab14f)
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // test edi, edi
    // if (...) GOTO(0x4ab173)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // mov edx, dword ptr [ebp + 0x14]
    // inc dword ptr [edx]
    // mov dword ptr [ebp + 8], 1
    // xor ebx, ebx
    // cmp byte ptr [eax], 0x5c
    // if (...) GOTO(0x4ab18a)
    // inc eax
    // inc ebx
    // if (...) GOTO(0x4ab181)
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab1bb)
    // test bl, 1
    // if (...) GOTO(0x4ab1b9)
    // xor edi, edi
    // cmp dword ptr [ebp + 0x18], edi
    // if (...) GOTO(0x4ab1a8)
    // cmp byte ptr [eax + 1], 0x22
    // lea edx, [eax + 1]
    // if (...) GOTO(0x4ab1a8)
    // mov eax, edx
    // if (...) GOTO(0x4ab1ab)
    // mov dword ptr [ebp + 8], edi
    // mov edi, dword ptr [ebp + 0xc]
    // xor edx, edx
    // cmp dword ptr [ebp + 0x18], edx
    // sete dl
    // mov dword ptr [ebp + 0x18], edx
    // shr ebx, 1
    // mov edx, ebx
    // dec ebx
    // test edx, edx
    // if (...) GOTO(0x4ab1d0)
    // inc ebx
    // test esi, esi
    // if (...) GOTO(0x4ab1cb)
    // mov byte ptr [esi], 0x5c
    // inc esi
    // inc dword ptr [ecx]
    // dec ebx
    // if (...) GOTO(0x4ab1c3)
    // mov dl, byte ptr [eax]
    // test dl, dl
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 0x18], 0
    // if (...) GOTO(0x4ab1e6)
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab220)
    // cmp dl, 9
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 8], 0
    // if (...) GOTO(0x4ab21a)
    // test esi, esi
    // if (...) GOTO(0x4ab209)
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab202)
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab218)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab218)
    // inc eax
    // inc dword ptr [ecx]
    // inc dword ptr [ecx]
    // inc eax
    // if (...) GOTO(0x4ab178)
    // test esi, esi
    // if (...) GOTO(0x4ab228)
    // and byte ptr [esi], 0
    // inc esi
    // inc dword ptr [ecx]
    // if (...) GOTO(0x4ab146)
    // test edi, edi
    // if (...) GOTO(0x4ab236)
    // and dword ptr [edi], 0
    // mov eax, dword ptr [ebp + 0x14]
    // pop edi
    // pop esi
    // pop ebx
    // inc dword ptr [eax]
    // pop ebp
    // return;
    // push ecx
    // push ecx
    // mov eax, dword ptr [0x840c64]
    // push ebx
    // push ebp
    // mov ebp, dword ptr [0x4ba048]
    // push esi
    // push edi
    // xor ebx, ebx
    // xor esi, esi
    // xor edi, edi
    // cmp eax, ebx
    // if (...) GOTO(0x4ab28e)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab26f)
    // mov dword ptr [0x840c64], 1
    // if (...) GOTO(0x4ab297)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // mov dword ptr [0x840c64], 2
    // if (...) GOTO(0x4ab31d)
    // cmp eax, 1
    // if (...) GOTO(0x4ab318)
    // cmp esi, ebx
    // if (...) GOTO(0x4ab2a7)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp word ptr [esi], bx
    // mov eax, esi
    // if (...) GOTO(0x4ab2bc)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // sub eax, esi
    // mov edi, dword ptr [0x4ba104]
    // sar eax, 1
    // push ebx
    // push ebx
    // inc eax
    // push ebx
    // push ebx
    // push eax
    // push esi
    // push ebx
    // push ebx
    // mov dword ptr [esp + 0x34], eax
    // CALL(edi)
    // mov ebp, eax
    // cmp ebp, ebx
    // if (...) GOTO(0x4ab30d)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, ebx
    // pop ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4ab30d)
    // push ebx
    // push ebx
    // push ebp
    // push eax
    // push dword ptr [esp + 0x24]
    // push esi
    // push ebx
    // push ebx
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x4ab309)
    // push dword ptr [esp + 0x10]
    // CALL(0x4a5007)
    // pop ecx
    // mov dword ptr [esp + 0x10], ebx
    // mov ebx, dword ptr [esp + 0x10]
    // push esi
    // CALL(dword)
    // mov eax, ebx
    // if (...) GOTO(0x4ab36b)
    // cmp eax, 2
    // if (...) GOTO(0x4ab369)
    // cmp edi, ebx
    // if (...) GOTO(0x4ab32d)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp byte ptr [edi], bl
    // mov eax, edi
    // if (...) GOTO(0x4ab33d)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // sub eax, edi
    // inc eax
    // mov ebp, eax
    // push ebp
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // cmp esi, ebx
    // if (...) GOTO(0x4ab353)
    // xor esi, esi
    // if (...) GOTO(0x4ab35e)
    // push ebp
    // push edi
    // push esi
    // CALL(0x4aa6c0)
    // add esp, 0xc
    // push edi
    // CALL(dword)
    // mov eax, esi
    // if (...) GOTO(0x4ab36b)
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // pop ecx
    // return;
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab389)
    // test eax, eax
    // if (...) GOTO(0x4ab3aa)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab3aa)
    // push(0xfc)
    // CALL(0x4ab3ab)
    // mov eax, dword ptr [0x840c68]
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4ab39f)
    // CALL(eax)
    // push(0xff)
    // CALL(0x4ab3ab)
    // pop ecx
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x1a4
    // mov edx, dword ptr [ebp + 8]
    // xor ecx, ecx
    // mov eax, 0x4e53c0
    // cmp edx, dword ptr [eax]
    // if (...) GOTO(0x4ab3cd)
    // add eax, 8
    // inc ecx
    // cmp eax, 0x4e5450
    // if (...) GOTO(0x4ab3be)
    // push esi
    // mov esi, ecx
    // shl esi, 3
    // cmp edx, dword ptr [esi + 0x4e53c0]
    // if (...) GOTO(0x4ab4fb)
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab4d5)
    // test eax, eax
    // if (...) GOTO(0x4ab3fe)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab4d5)
    // cmp edx, 0xfc
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp - 0x1a4]
    // push(0x104)
    // push eax
    // push 0
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4ab435)
    // lea eax, [ebp - 0x1a4]
    // push(0x4bc89c)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // pop ecx
    // pop ecx
    // lea eax, [ebp - 0x1a4]
    // push edi
    // push eax
    // lea edi, [ebp - 0x1a4]
    // CALL(0x4abdf0)
    // inc eax
    // pop ecx
    // cmp eax, 0x3c
    // jbe 0x4ab478
    // lea eax, [ebp - 0x1a4]
    // push eax
    // CALL(0x4abdf0)
    // mov edi, eax
    // lea eax, [ebp - 0x1a4]
    // sub eax, 0x3b
    // push 3
    // add edi, eax
    // push(0x4c5db4)  // ptr?
    // push edi
    // CALL(0x4a6c80)
    // add esp, 0x10
    // lea eax, [ebp - 0xa0]
    // push(0x4bc880)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // lea eax, [ebp - 0xa0]
    // push edi
    // push eax
    // CALL(0x4abcb0)
    // lea eax, [ebp - 0xa0]
    // push(0x4bc87c)  // ptr?
    // push eax
    // CALL(0x4abcb0)
    // push dword ptr [esi + 0x4e53c4]
    // lea eax, [ebp - 0xa0]
    // push eax
    // CALL(0x4abcb0)
    // push(0x12010)  // ptr?
    // lea eax, [ebp - 0xa0]
    // push(0x4bc854)  // ptr?
    // push eax
    // CALL(0x4ac8d8)
    // add esp, 0x2c
    // pop edi
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp + 8]
    // lea esi, [esi + 0x4e53c4]
    // push 0
    // push eax
    // push dword ptr [esi]
    // CALL(0x4abdf0)
    // pop ecx
    // push eax
    // push dword ptr [esi]
    // push -0xc
    // CALL(dword)
    // push eax
    // CALL(dword)
    // pop esi
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 0x10]
    // or ecx, eax
    // mov ecx, dword ptr [esp + 0xc]
    // if (...) GOTO(0x4ab519)
    // mov eax, dword ptr [esp + 4]
    // mul ecx
    // return;
    // push ebx
    // mul ecx
    // mov ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul dword ptr [esp + 0x14]
    // add ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul ecx
    // add edx, ebx
    // pop ebx
    // return;
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // imul esi, dword ptr [esp + 0x14]
    // cmp esi, -0x20
    // mov ebx, esi
    // if (...) GOTO(0x4ab554)
    // test esi, esi
    // if (...) GOTO(0x4ab54e)
    // push 1
    // pop esi
    // add esi, 0xf
    // and esi, 0xfffffff0
    // xor edi, edi
    // cmp esi, -0x20
    // if (...) GOTO(0x4ab595)
    // cmp ebx, dword ptr [0x4e4bdc]
    // if (...) GOTO(0x4ab580)
    // push 9
    // CALL(0x4a79b2)
    // push ebx
    // CALL(0x4a7dbc)
    // push 9
    // mov edi, eax
    // CALL(0x4a7a13)
    // add esp, 0xc
    // test edi, edi
    // if (...) GOTO(0x4ab5ab)
    // push esi
    // push 8
    // push dword ptr [0x84215c]
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x4ab5b7)
    // cmp dword ptr [0x840b18], 0
    // if (...) GOTO(0x4ab5b7)
    // push esi
    // CALL(0x4a8567)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab5bd)
    // if (...) GOTO(0x4ab554)
    // push ebx
    // push 0
    // push edi
    // CALL(0x4abd90)
    // add esp, 0xc
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // xor eax, eax
    // if (...) GOTO(0x4ab5b9)
    // push ebp
    // mov ebp, esp
    // push ecx
    // push esi
    // wait 
    // fnstcw word ptr [ebp - 4]
    // push dword ptr [ebp - 4]
    // CALL(0x4ab60c)
    // mov esi, eax
    // mov eax, dword ptr [ebp + 0xc]
    // not eax
    // and esi, eax
    // mov eax, dword ptr [ebp + 8]
    // and eax, dword ptr [ebp + 0xc]
    // or esi, eax
    // push esi
    // CALL(0x4ab69e)
    // pop ecx
    // mov dword ptr [ebp + 0xc], eax
    // pop ecx
    // fldcw word ptr [ebp + 0xc]
    // mov eax, esi
    // pop esi
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // and eax, 0xfff7ffff
    // push eax
    // push dword ptr [esp + 8]
    // CALL(0x4ab5c1)
    // pop ecx
    // pop ecx
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push ebp
    // test bl, 1
    // push edi
    // if (...) GOTO(0x4ab61d)
    // push(0x10)
    // pop eax
    // test bl, 4
    // if (...) GOTO(0x4ab624)
    // or al, 8
    // test bl, 8
    // if (...) GOTO(0x4ab62b)
    // or al, 4
    // test bl, 0x10
    // if (...) GOTO(0x4ab632)
    // or al, 2
    // test bl, 0x20
    // if (...) GOTO(0x4ab639)
    // or al, 1
    // test bl, 2
    // if (...) GOTO(0x4ab643)
    // or eax, 0x80000
    // movzx ecx, bx
    // push esi
    // mov edx, ecx
    // mov esi, 0xc00
    // mov edi, 0x300
    // and edx, esi
    // mov ebp, 0x200
    // if (...) GOTO(0x4ab67b)
    // cmp edx, 0x400
    // if (...) GOTO(0x4ab678)
    // cmp edx, 0x800
    // if (...) GOTO(0x4ab674)
    // cmp edx, esi
    // if (...) GOTO(0x4ab67b)
    // or eax, edi
    // if (...) GOTO(0x4ab67b)
    // or eax, ebp
    // if (...) GOTO(0x4ab67b)
    // or ah, 1
    // and ecx, edi
    // pop esi
    // if (...) GOTO(0x4ab68b)
    // cmp ecx, ebp
    // if (...) GOTO(0x4ab690)
    // or eax, 0x10000
    // if (...) GOTO(0x4ab690)
    // or eax, 0x20000
    // pop edi
    // pop ebp
    // test bh, 0x10
    // pop ebx
    // if (...) GOTO(0x4ab69d)
    // or eax, 0x40000
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push esi
    // test bl, 0x10
    // if (...) GOTO(0x4ab6ae)
    // push 1
    // pop eax
    // test bl, 8
    // if (...) GOTO(0x4ab6b5)
    // or al, 4
    // test bl, 4
    // if (...) GOTO(0x4ab6bc)
    // or al, 8
    // test bl, 2
    // if (...) GOTO(0x4ab6c3)
    // or al, 0x10
    // test bl, 1
    // if (...) GOTO(0x4ab6ca)
    // or al, 0x20
    // test ebx, 0x80000
    // if (...) GOTO(0x4ab6d4)
    // or al, 2
    // mov ecx, ebx
    // mov edx, 0x300
    // and ecx, edx
    // mov esi, 0x200
    // if (...) GOTO(0x4ab701)
    // cmp ecx, 0x100
    // if (...) GOTO(0x4ab6fe)
    // cmp ecx, esi
    // if (...) GOTO(0x4ab6f9)
    // cmp ecx, edx
    // if (...) GOTO(0x4ab701)
    // or ah, 0xc
    // if (...) GOTO(0x4ab701)
    // or ah, 8
    // if (...) GOTO(0x4ab701)
    // or ah, 4
    // mov ecx, ebx
    // and ecx, 0x30000
    // if (...) GOTO(0x4ab717)
    // cmp ecx, 0x10000
    // if (...) GOTO(0x4ab719)
    // or eax, esi
    // if (...) GOTO(0x4ab719)
    // or eax, edx
    // pop esi
    // test ebx, 0x40000
    // pop ebx
    // if (...) GOTO(0x4ab726)
    // or ah, 0x10
    // return;
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push(0x20)
    // cdq 
    // pop ecx
    // idiv ecx
    // push(0x1f)
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x10]
    // cdq 
    // idiv ecx
    // pop ecx
    // mov eax, dword ptr [esp + 8]
    // sub ecx, edx
    // or edx, 0xffffffff
    // shl edx, cl
    // not edx
    // test dword ptr [eax + esi*4], edx
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // cmp esi, 3
    // if (...) GOTO(0x4ab767)
    // lea eax, [eax + esi*4]
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // add eax, 4
    // cmp esi, 3
    // if (...) GOTO(0x4ab759)
    // push 1
    // pop eax
    // pop esi
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 8]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov ebx, dword ptr [esp + 0x14]
    // cdq 
    // pop ecx
    // idiv ecx
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x14]
    // cdq 
    // idiv ecx
    // lea edi, [ebx + esi*4]
    // push edi
    // push(0x1f)
    // pop ecx
    // push 1
    // pop eax
    // sub ecx, edx
    // shl eax, cl
    // push eax
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // js 0x4ab7c2
    // lea edi, [ebx + esi*4]
    // test eax, eax
    // if (...) GOTO(0x4ab7c2)
    // push edi
    // push 1
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // sub edi, 4
    // test esi, esi
    // if (...) GOTO(0x4ab7a9)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // lea edi, [eax - 1]
    // push(0x20)
    // pop ecx
    // and dword ptr [ebp - 4], 0
    // lea ebx, [edi + 1]
    // push(0x20)
    // mov eax, ebx
    // pop esi
    // cdq 
    // idiv ecx
    // push(0x1f)
    // mov ecx, eax
    // mov eax, ebx
    // cdq 
    // idiv esi
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // push 1
    // mov dword ptr [ebp - 8], ecx
    // lea eax, [eax + ecx*4]
    // mov dword ptr [ebp + 0xc], eax
    // sub esi, edx
    // pop edx
    // mov ecx, esi
    // shl edx, cl
    // test dword ptr [eax], edx
    // if (...) GOTO(0x4ab82a)
    // inc ebx
    // push ebx
    // push dword ptr [ebp + 8]
    // CALL(0x4ab727)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab827)
    // push edi
    // push dword ptr [ebp + 8]
    // CALL(0x4ab770)
    // pop ecx
    // mov dword ptr [ebp - 4], eax
    // pop ecx
    // mov eax, dword ptr [ebp + 0xc]
    // or edx, 0xffffffff
    // mov ecx, esi
    // shl edx, cl
    // push 3
    // pop ecx
    // and dword ptr [eax], edx
    // mov eax, dword ptr [ebp - 8]
    // inc eax
    // cmp eax, ecx
    // if (...) GOTO(0x4ab84a)
    // mov edx, dword ptr [ebp + 8]
    // sub ecx, eax
    // lea edi, [edx + eax*4]
    // xor eax, eax
    // rep stosd dword ptr es:[edi], eax
    // mov eax, dword ptr [ebp - 4]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // push 3
    // sub ecx, eax
    // pop edx
    // mov esi, dword ptr [eax]
    // mov dword ptr [ecx + eax], esi
    // add eax, 4
    // dec edx
    // if (...) GOTO(0x4ab860)
    // pop esi
    // return;
    // push edi
    // mov edi, dword ptr [esp + 8]
    // xor eax, eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // pop edi
    // return;
    // mov eax, dword ptr [esp + 4]
    // xor ecx, ecx
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab891)
    // inc ecx
    // add eax, 4
    // cmp ecx, 3
    // if (...) GOTO(0x4ab87f)
    // push 1
    // pop eax
    // return;
    // xor eax, eax
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov edi, dword ptr [ebp + 8]
    // pop ebx
    // or esi, 0xffffffff
    // cdq 
    // mov ecx, ebx
    // mov dword ptr [ebp - 4], 3
    // idiv ecx
    // mov dword ptr [ebp - 0xc], eax
    // mov eax, dword ptr [ebp + 0xc]
    // cdq 
    // idiv ecx
    // and dword ptr [ebp + 0xc], 0
    // mov ecx, edx
    // shl esi, cl
    // sub ebx, edx
    // not esi
    // mov eax, dword ptr [edi]
    // mov ecx, eax
    // and ecx, esi
    // mov dword ptr [ebp - 8], ecx
    // mov ecx, edx
    // shr eax, cl
    // or eax, dword ptr [ebp + 0xc]
    // mov dword ptr [edi], eax
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, ebx
    // add edi, 4
    // shl eax, cl
    // dec dword ptr [ebp - 4]
    // mov dword ptr [ebp + 0xc], eax
    // if (...) GOTO(0x4ab8ca)
    // mov edi, dword ptr [ebp - 0xc]
    // push 2
    // pop ebx
    // mov esi, edi
    // push 8
    // pop ecx
    // shl esi, 2
    // cmp ebx, edi
    // if (...) GOTO(0x4ab90f)
    // mov edx, dword ptr [ebp + 8]
    // mov eax, ecx
    // sub eax, esi
    // mov eax, dword ptr [eax + edx]
    // mov dword ptr [ecx + edx], eax
    // if (...) GOTO(0x4ab916)
    // mov eax, dword ptr [ebp + 8]
    // and dword ptr [ecx + eax], 0
    // dec ebx
    // sub ecx, 4
    // jns 0x4ab8fc
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x18
    // mov eax, dword ptr [ebp + 8]
    // push ebx
    // push esi
    // push edi
    // movzx ecx, word ptr [eax + 0xa]
    // mov ebx, ecx
    // and ecx, 0x8000
    // mov dword ptr [ebp + 8], ecx
    // mov ecx, dword ptr [eax + 6]
    // mov dword ptr [ebp - 0xc], ecx
    // mov ecx, dword ptr [eax + 2]
    // movzx eax, word ptr [eax]
    // mov edi, dword ptr [ebp + 0x10]
    // and ebx, 0x7fff
    // sub ebx, 0x3fff
    // mov dword ptr [ebp - 8], ecx
    // shl eax, 0x10
    // cmp ebx, 0xffffc001
    // mov dword ptr [ebp - 4], eax
    // if (...) GOTO(0x4ab98e)
    // lea eax, [ebp - 0xc]
    // xor esi, esi
    // push eax
    // CALL(0x4ab879)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aba4d)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // push 2
    // pop eax
    // if (...) GOTO(0x4aba4f)
    // lea eax, [ebp - 0xc]
    // push eax
    // lea eax, [ebp - 0x18]
    // push eax
    // CALL(0x4ab852)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // add esp, 0x10
    // test eax, eax
    // if (...) GOTO(0x4ab9af)
    // inc ebx
    // mov eax, dword ptr [edi + 4]
    // mov ecx, eax
    // sub ecx, dword ptr [edi + 8]
    // cmp ebx, ecx
    // if (...) GOTO(0x4ab9c7)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // if (...) GOTO(0x4aba03)
    // cmp ebx, eax
    // if (...) GOTO(0x4aba0a)
    // sub eax, ebx
    // mov esi, eax
    // lea eax, [ebp - 0x18]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab852)
    // lea eax, [ebp - 0xc]
    // push esi
    // push eax
    // CALL(0x4ab894)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // mov eax, dword ptr [edi + 0xc]
    // inc eax
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // add esp, 0x20
    // xor esi, esi
    // if (...) GOTO(0x4ab986)
    // cmp ebx, dword ptr [edi]
    // if (...) GOTO(0x4aba36)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // push dword ptr [edi + 0xc]
    // or byte ptr [ebp - 9], 0x80
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // mov esi, dword ptr [edi + 0x14]
    // add esp, 0xc
    // add esi, dword ptr [edi]
    // push 1
    // if (...) GOTO(0x4ab988)
    // push dword ptr [edi + 0xc]
    // mov esi, dword ptr [edi + 0x14]
    // and byte ptr [ebp - 9], 0x7f
    // lea eax, [ebp - 0xc]
    // push eax
    // add esi, ebx
    // CALL(0x4ab894)
    // pop ecx
    // pop ecx
    // xor eax, eax
    // push(0x1f)
    // pop ecx
    // sub ecx, dword ptr [edi + 0xc]
    // mov edi, dword ptr [edi + 0x10]
    // shl esi, cl
    // mov ecx, dword ptr [ebp + 8]
    // neg ecx
    // sbb ecx, ecx
    // and ecx, 0x80000000
    // or esi, ecx
    // or esi, dword ptr [ebp - 0xc]
    // cmp edi, 0x40
    // if (...) GOTO(0x4aba7e)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ebp - 8]
    // mov dword ptr [ecx + 4], esi
    // mov dword ptr [ecx], edx
    // if (...) GOTO(0x4aba88)
    // cmp edi, 0x20
    // if (...) GOTO(0x4aba88)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov dword ptr [ecx], esi
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push(0x4e5568)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push(0x4e5580)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4aba8d)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abaa3)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov edx, dword ptr [ebp + 0x10]
    // push ebx
    // mov ebx, dword ptr [ebp + 0xc]
    // push esi
    // mov esi, dword ptr [ebp + 8]
    // mov ecx, dword ptr [edx + 0xc]
    // push edi
    // lea edi, [esi + 1]
    // mov byte ptr [esi], 0x30
    // test ebx, ebx
    // mov eax, edi
    // if (...) GOTO(0x4abb50)
    // mov dword ptr [ebp + 8], ebx
    // xor ebx, ebx
    // mov dl, byte ptr [ecx]
    // test dl, dl
    // if (...) GOTO(0x4abb42)
    // movsx edx, dl
    // inc ecx
    // if (...) GOTO(0x4abb45)
    // push(0x30)
    // pop edx
    // mov byte ptr [eax], dl
    // inc eax
    // dec dword ptr [ebp + 8]
    // if (...) GOTO(0x4abb36)
    // mov edx, dword ptr [ebp + 0x10]
    // and byte ptr [eax], 0
    // test ebx, ebx
    // if (...) GOTO(0x4abb69)
    // cmp byte ptr [ecx], 0x35
    // if (...) GOTO(0x4abb69)
    // dec eax
    // cmp byte ptr [eax], 0x39
    // if (...) GOTO(0x4abb67)
    // mov byte ptr [eax], 0x30
    // if (...) GOTO(0x4abb5c)
    // inc byte ptr [eax]
    // cmp byte ptr [esi], 0x31
    // if (...) GOTO(0x4abb73)
    // inc dword ptr [edx + 4]
    // if (...) GOTO(0x4abb85)
    // push edi
    // CALL(0x4abdf0)
    // inc eax
    // push eax
    // push edi
    // push esi
    // CALL(0x4a6d80)
    // add esp, 0x10
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x28
    // push esi
    // lea eax, [ebp + 8]
    // push edi
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abbe6)
    // pop ecx
    // lea eax, [ebp - 0x28]
    // pop ecx
    // lea esi, [ebp - 0xc]
    // push eax
    // push 0
    // push(0x11)
    // sub esp, 0xc
    // mov edi, esp
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsw word ptr es:[edi], word ptr [esi]
    // CALL(0x4ad192)
    // mov esi, dword ptr [ebp + 0x10]
    // mov edi, dword ptr [ebp + 0x14]
    // mov dword ptr [esi + 8], eax
    // movsx eax, byte ptr [ebp - 0x26]
    // mov dword ptr [esi], eax
    // movsx eax, word ptr [ebp - 0x28]
    // mov dword ptr [esi + 4], eax
    // lea eax, [ebp - 0x24]
    // push eax
    // push edi
    // CALL(0x4abca0)
    // add esp, 0x20
    // mov dword ptr [esi + 0xc], edi
    // mov eax, esi
    // pop edi
    // pop esi
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // mov edx, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // mov ax, word ptr [edx + 6]
    // mov edi, 0x7ff
    // mov ecx, eax
    // and eax, 0x8000
    // shr ecx, 4
    // and ecx, edi
    // mov dword ptr [ebp + 0xc], eax
    // mov eax, dword ptr [edx + 4]
    // mov edx, dword ptr [edx]
    // movzx ebx, cx
    // mov esi, 0x80000000
    // and eax, 0xfffff
    // test ebx, ebx
    // mov dword ptr [ebp - 4], esi
    // if (...) GOTO(0x4abc34)
    // cmp ebx, edi
    // if (...) GOTO(0x4abc2d)
    // lea edi, [ecx + 0x3c00]
    // if (...) GOTO(0x4abc55)
    // mov edi, 0x7fff
    // if (...) GOTO(0x4abc55)
    // xor ebx, ebx
    // cmp eax, ebx
    // if (...) GOTO(0x4abc4c)
    // cmp edx, ebx
    // if (...) GOTO(0x4abc4c)
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [eax + 4], ebx
    // mov dword ptr [eax], ebx
    // mov word ptr [eax + 8], bx
    // if (...) GOTO(0x4abc97)
    // lea edi, [ecx + 0x3c01]
    // mov dword ptr [ebp - 4], ebx
    // mov ecx, edx
    // shr ecx, 0x15
    // shl eax, 0xb
    // or ecx, eax
    // mov eax, dword ptr [ebp + 8]
    // or ecx, dword ptr [ebp - 4]
    // shl edx, 0xb
    // mov dword ptr [eax + 4], ecx
    // mov dword ptr [eax], edx
    // test esi, ecx
    // if (...) GOTO(0x4abc8e)
    // mov edx, dword ptr [eax]
    // add ecx, ecx
    // mov ebx, edx
    // shr ebx, 0x1f
    // or ebx, ecx
    // lea ecx, [edx + edx]
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 4], ebx
    // add edi, 0xffff
    // mov ecx, ebx
    // if (...) GOTO(0x4abc6d)
    // mov ecx, dword ptr [ebp + 0xc]
    // or ecx, edi
    // mov word ptr [eax + 8], cx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ebx
    // push esi
    // CALL(0x4a8e53)
    // mov esi, eax
    // push dword ptr [esi + 0x50]
    // push dword ptr [ebp + 8]
    // CALL(0x4aaea8)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aae9b)
    // mov ebx, dword ptr [eax + 8]
    // test ebx, ebx
    // mov dword ptr [ebp + 8], ebx
    // if (...) GOTO(0x4aae9b)
    // cmp ebx, 5
    // if (...) GOTO(0x4aadab)
    // and dword ptr [eax + 8], 0
    // push 1
    // pop eax
    // if (...) GOTO(0x4aaea4)
    // cmp ebx, 1
    // if (...) GOTO(0x4aae96)
    // mov ecx, dword ptr [esi + 0x54]
    // mov dword ptr [ebp - 4], ecx
    // mov ecx, dword ptr [ebp + 0xc]
    // mov dword ptr [esi + 0x54], ecx
    // mov ecx, dword ptr [eax + 4]
    // cmp ecx, 8
    // if (...) GOTO(0x4aae88)
    // mov edx, dword ptr [0x4e53b0]
    // mov ecx, dword ptr [0x4e53b4]
    // add ecx, edx
    // push edi
    // cmp edx, ecx
    // if (...) GOTO(0x4aae06)
    // lea ecx, [edx + edx*2]
    // shl ecx, 2
    // mov edi, dword ptr [esi + 0x50]
    // add ecx, 0xc
    // and dword ptr [ecx + edi - 4], 0
    // mov edi, dword ptr [0x4e53b0]
    // mov ebx, dword ptr [0x4e53b4]
    // inc edx
    // add ebx, edi
    // cmp edx, ebx
    // if (...) GOTO(0x4aade5)
    // mov ebx, dword ptr [ebp + 8]
    // mov eax, dword ptr [eax]
    // mov edi, dword ptr [esi + 0x58]
    // cmp eax, 0xc000008e
    // if (...) GOTO(0x4aae1b)
    // mov dword ptr [esi + 0x58], 0x83
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc0000090
    // if (...) GOTO(0x4aae2b)
    // mov dword ptr [esi + 0x58], 0x81
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc0000091
    // if (...) GOTO(0x4aae3b)
    // mov dword ptr [esi + 0x58], 0x84
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc0000093
    // if (...) GOTO(0x4aae4b)
    // mov dword ptr [esi + 0x58], 0x85
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc000008d
    // if (...) GOTO(0x4aae5b)
    // mov dword ptr [esi + 0x58], 0x82
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc000008f
    // if (...) GOTO(0x4aae6b)
    // mov dword ptr [esi + 0x58], 0x86
    // if (...) GOTO(0x4aae79)
    // cmp eax, 0xc0000092
    // if (...) GOTO(0x4aae79)
    // mov dword ptr [esi + 0x58], 0x8a
    // push dword ptr [esi + 0x58]
    // push 8
    // CALL(ebx)
    // pop ecx
    // mov dword ptr [esi + 0x58], edi
    // pop ecx
    // pop edi
    // if (...) GOTO(0x4aae90)
    // and dword ptr [eax + 8], 0
    // push ecx
    // CALL(ebx)
    // pop ecx
    // mov eax, dword ptr [ebp - 4]
    // mov dword ptr [esi + 0x54], eax
    // or eax, 0xffffffff
    // if (...) GOTO(0x4aaea4)
    // push dword ptr [ebp + 0xc]
    // CALL(dword)
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov edx, dword ptr [esp + 8]
    // mov ecx, dword ptr [0x4e53bc]
    // push esi
    // mov esi, dword ptr [esp + 8]
    // cmp dword ptr [edx], esi
    // push edi
    // mov eax, edx
    // if (...) GOTO(0x4aaecf)
    // lea edi, [ecx + ecx*2]
    // lea edi, [edx + edi*4]
    // add eax, 0xc
    // cmp eax, edi
    // jae 0x4aaecf
    // cmp dword ptr [eax], esi
    // if (...) GOTO(0x4aaec4)
    // lea ecx, [ecx + ecx*2]
    // lea ecx, [edx + ecx*4]
    // cmp eax, ecx
    // jae 0x4aaedd
    // cmp dword ptr [eax], esi
    // if (...) GOTO(0x4aaedf)
    // xor eax, eax
    // pop edi
    // pop esi
    // return;
    // cmp dword ptr [0x842168], 0
    // if (...) GOTO(0x4aaef0)
    // CALL(0x4ac8bc)
    // push esi
    // mov esi, dword ptr [0x842160]
    // mov al, byte ptr [esi]
    // cmp al, 0x22
    // if (...) GOTO(0x4aaf22)
    // mov al, byte ptr [esi + 1]
    // inc esi
    // cmp al, 0x22
    // if (...) GOTO(0x4aaf1a)
    // test al, al
    // if (...) GOTO(0x4aaf1a)
    // movzx eax, al
    // push eax
    // CALL(0x4ac4a2)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aaefd)
    // inc esi
    // if (...) GOTO(0x4aaefd)
    // cmp byte ptr [esi], 0x22
    // if (...) GOTO(0x4aaf2c)
    // inc esi
    // if (...) GOTO(0x4aaf2c)
    // cmp al, 0x20
    // jbe 0x4aaf2c
    // inc esi
    // cmp byte ptr [esi], 0x20
    // if (...) GOTO(0x4aaf26)
    // mov al, byte ptr [esi]
    // test al, al
    // if (...) GOTO(0x4aaf36)
    // cmp al, 0x20
    // jbe 0x4aaf1f
    // mov eax, esi
    // pop esi
    // return;
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x842168], ebx
    // push esi
    // push edi
    // if (...) GOTO(0x4aaf4c)
    // CALL(0x4ac8bc)
    // mov esi, dword ptr [0x840aac]
    // xor edi, edi
    // mov al, byte ptr [esi]
    // cmp al, bl
    // if (...) GOTO(0x4aaf6c)
    // cmp al, 0x3d
    // if (...) GOTO(0x4aaf5f)
    // inc edi
    // push esi
    // CALL(0x4abdf0)
    // pop ecx
    // lea esi, [esi + eax + 1]
    // if (...) GOTO(0x4aaf54)
    // lea eax, [edi*4 + 4]
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // cmp esi, ebx
    // mov dword ptr [0x840a88], esi
    // if (...) GOTO(0x4aaf8e)
    // push 9
    // CALL(0x4a6937)
    // pop ecx
    // mov edi, dword ptr [0x840aac]
    // cmp byte ptr [edi], bl
    // if (...) GOTO(0x4aafd1)
    // push ebp
    // push edi
    // CALL(0x4abdf0)
    // mov ebp, eax
    // pop ecx
    // inc ebp
    // cmp byte ptr [edi], 0x3d
    // if (...) GOTO(0x4aafca)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, ebx
    // pop ecx
    // mov dword ptr [esi], eax
    // if (...) GOTO(0x4aafbd)
    // push 9
    // CALL(0x4a6937)
    // pop ecx
    // push edi
    // push dword ptr [esi]
    // CALL(0x4abca0)
    // pop ecx
    // add esi, 4
    // pop ecx
    // add edi, ebp
    // cmp byte ptr [edi], bl
    // if (...) GOTO(0x4aaf99)
    // pop ebp
    // push dword ptr [0x840aac]
    // CALL(0x4a5007)
    // pop ecx
    // mov dword ptr [0x840aac], ebx
    // mov dword ptr [esi], ebx
    // pop edi
    // pop esi
    // mov dword ptr [0x842164], 1
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x842168], ebx
    // push esi
    // push edi
    // if (...) GOTO(0x4ab00a)
    // CALL(0x4ac8bc)
    // mov esi, 0x840b60
    // push(0x104)
    // push esi
    // push ebx
    // CALL(dword)
    // mov eax, dword ptr [0x842160]
    // mov dword ptr [0x840a98], esi
    // mov edi, esi
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab02f)
    // mov edi, eax
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // push ebx
    // push ebx
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, dword ptr [ebp - 4]
    // lea eax, [eax + ecx*4]
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // add esp, 0x18
    // cmp esi, ebx
    // if (...) GOTO(0x4ab05f)
    // push 8
    // CALL(0x4a6937)
    // pop ecx
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // mov eax, dword ptr [ebp - 4]
    // lea eax, [esi + eax*4]
    // push eax
    // push esi
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 4]
    // add esp, 0x14
    // dec eax
    // mov dword ptr [0x840a80], esi
    // pop edi
    // pop esi
    // mov dword ptr [0x840a7c], eax
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov ecx, dword ptr [ebp + 0x18]
    // mov eax, dword ptr [ebp + 0x14]
    // push ebx
    // push esi
    // and dword ptr [ecx], 0
    // mov esi, dword ptr [ebp + 0x10]
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // mov dword ptr [eax], 1
    // mov eax, dword ptr [ebp + 8]
    // test edi, edi
    // if (...) GOTO(0x4ab0b6)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab0ff)
    // mov dl, byte ptr [eax + 1]
    // inc eax
    // cmp dl, 0x22
    // if (...) GOTO(0x4ab0ed)
    // test dl, dl
    // if (...) GOTO(0x4ab0ed)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab0e0)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0e0)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0bb)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab0bb)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0f7)
    // and byte ptr [esi], 0
    // inc esi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab142)
    // inc eax
    // if (...) GOTO(0x4ab142)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab10a)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // mov dl, byte ptr [eax]
    // inc eax
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab125)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab124)
    // mov bl, byte ptr [eax]
    // mov byte ptr [esi], bl
    // inc esi
    // inc eax
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab133)
    // test dl, dl
    // if (...) GOTO(0x4ab137)
    // cmp dl, 9
    // if (...) GOTO(0x4ab0ff)
    // test dl, dl
    // if (...) GOTO(0x4ab13a)
    // dec eax
    // if (...) GOTO(0x4ab142)
    // test esi, esi
    // if (...) GOTO(0x4ab142)
    // and byte ptr [esi - 1], 0
    // and dword ptr [ebp + 0x18], 0
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // mov dl, byte ptr [eax]
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab15b)
    // cmp dl, 9
    // if (...) GOTO(0x4ab15e)
    // inc eax
    // if (...) GOTO(0x4ab14f)
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // test edi, edi
    // if (...) GOTO(0x4ab173)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // mov edx, dword ptr [ebp + 0x14]
    // inc dword ptr [edx]
    // mov dword ptr [ebp + 8], 1
    // xor ebx, ebx
    // cmp byte ptr [eax], 0x5c
    // if (...) GOTO(0x4ab18a)
    // inc eax
    // inc ebx
    // if (...) GOTO(0x4ab181)
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab1bb)
    // test bl, 1
    // if (...) GOTO(0x4ab1b9)
    // xor edi, edi
    // cmp dword ptr [ebp + 0x18], edi
    // if (...) GOTO(0x4ab1a8)
    // cmp byte ptr [eax + 1], 0x22
    // lea edx, [eax + 1]
    // if (...) GOTO(0x4ab1a8)
    // mov eax, edx
    // if (...) GOTO(0x4ab1ab)
    // mov dword ptr [ebp + 8], edi
    // mov edi, dword ptr [ebp + 0xc]
    // xor edx, edx
    // cmp dword ptr [ebp + 0x18], edx
    // sete dl
    // mov dword ptr [ebp + 0x18], edx
    // shr ebx, 1
    // mov edx, ebx
    // dec ebx
    // test edx, edx
    // if (...) GOTO(0x4ab1d0)
    // inc ebx
    // test esi, esi
    // if (...) GOTO(0x4ab1cb)
    // mov byte ptr [esi], 0x5c
    // inc esi
    // inc dword ptr [ecx]
    // dec ebx
    // if (...) GOTO(0x4ab1c3)
    // mov dl, byte ptr [eax]
    // test dl, dl
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 0x18], 0
    // if (...) GOTO(0x4ab1e6)
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab220)
    // cmp dl, 9
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 8], 0
    // if (...) GOTO(0x4ab21a)
    // test esi, esi
    // if (...) GOTO(0x4ab209)
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab202)
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab218)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab218)
    // inc eax
    // inc dword ptr [ecx]
    // inc dword ptr [ecx]
    // inc eax
    // if (...) GOTO(0x4ab178)
    // test esi, esi
    // if (...) GOTO(0x4ab228)
    // and byte ptr [esi], 0
    // inc esi
    // inc dword ptr [ecx]
    // if (...) GOTO(0x4ab146)
    // test edi, edi
    // if (...) GOTO(0x4ab236)
    // and dword ptr [edi], 0
    // mov eax, dword ptr [ebp + 0x14]
    // pop edi
    // pop esi
    // pop ebx
    // inc dword ptr [eax]
    // pop ebp
    // return;
    // push ecx
    // push ecx
    // mov eax, dword ptr [0x840c64]
    // push ebx
    // push ebp
    // mov ebp, dword ptr [0x4ba048]
    // push esi
    // push edi
    // xor ebx, ebx
    // xor esi, esi
    // xor edi, edi
    // cmp eax, ebx
    // if (...) GOTO(0x4ab28e)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab26f)
    // mov dword ptr [0x840c64], 1
    // if (...) GOTO(0x4ab297)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // mov dword ptr [0x840c64], 2
    // if (...) GOTO(0x4ab31d)
    // cmp eax, 1
    // if (...) GOTO(0x4ab318)
    // cmp esi, ebx
    // if (...) GOTO(0x4ab2a7)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp word ptr [esi], bx
    // mov eax, esi
    // if (...) GOTO(0x4ab2bc)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // sub eax, esi
    // mov edi, dword ptr [0x4ba104]
    // sar eax, 1
    // push ebx
    // push ebx
    // inc eax
    // push ebx
    // push ebx
    // push eax
    // push esi
    // push ebx
    // push ebx
    // mov dword ptr [esp + 0x34], eax
    // CALL(edi)
    // mov ebp, eax
    // cmp ebp, ebx
    // if (...) GOTO(0x4ab30d)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, ebx
    // pop ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4ab30d)
    // push ebx
    // push ebx
    // push ebp
    // push eax
    // push dword ptr [esp + 0x24]
    // push esi
    // push ebx
    // push ebx
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x4ab309)
    // push dword ptr [esp + 0x10]
    // CALL(0x4a5007)
    // pop ecx
    // mov dword ptr [esp + 0x10], ebx
    // mov ebx, dword ptr [esp + 0x10]
    // push esi
    // CALL(dword)
    // mov eax, ebx
    // if (...) GOTO(0x4ab36b)
    // cmp eax, 2
    // if (...) GOTO(0x4ab369)
    // cmp edi, ebx
    // if (...) GOTO(0x4ab32d)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp byte ptr [edi], bl
    // mov eax, edi
    // if (...) GOTO(0x4ab33d)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // sub eax, edi
    // inc eax
    // mov ebp, eax
    // push ebp
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // cmp esi, ebx
    // if (...) GOTO(0x4ab353)
    // xor esi, esi
    // if (...) GOTO(0x4ab35e)
    // push ebp
    // push edi
    // push esi
    // CALL(0x4aa6c0)
    // add esp, 0xc
    // push edi
    // CALL(dword)
    // mov eax, esi
    // if (...) GOTO(0x4ab36b)
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // pop ecx
    // return;
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab389)
    // test eax, eax
    // if (...) GOTO(0x4ab3aa)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab3aa)
    // push(0xfc)
    // CALL(0x4ab3ab)
    // mov eax, dword ptr [0x840c68]
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4ab39f)
    // CALL(eax)
    // push(0xff)
    // CALL(0x4ab3ab)
    // pop ecx
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x1a4
    // mov edx, dword ptr [ebp + 8]
    // xor ecx, ecx
    // mov eax, 0x4e53c0
    // cmp edx, dword ptr [eax]
    // if (...) GOTO(0x4ab3cd)
    // add eax, 8
    // inc ecx
    // cmp eax, 0x4e5450
    // if (...) GOTO(0x4ab3be)
    // push esi
    // mov esi, ecx
    // shl esi, 3
    // cmp edx, dword ptr [esi + 0x4e53c0]
    // if (...) GOTO(0x4ab4fb)
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab4d5)
    // test eax, eax
    // if (...) GOTO(0x4ab3fe)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab4d5)
    // cmp edx, 0xfc
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp - 0x1a4]
    // push(0x104)
    // push eax
    // push 0
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4ab435)
    // lea eax, [ebp - 0x1a4]
    // push(0x4bc89c)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // pop ecx
    // pop ecx
    // lea eax, [ebp - 0x1a4]
    // push edi
    // push eax
    // lea edi, [ebp - 0x1a4]
    // CALL(0x4abdf0)
    // inc eax
    // pop ecx
    // cmp eax, 0x3c
    // jbe 0x4ab478
    // lea eax, [ebp - 0x1a4]
    // push eax
    // CALL(0x4abdf0)
    // mov edi, eax
    // lea eax, [ebp - 0x1a4]
    // sub eax, 0x3b
    // push 3
    // add edi, eax
    // push(0x4c5db4)  // ptr?
    // push edi
    // CALL(0x4a6c80)
    // add esp, 0x10
    // lea eax, [ebp - 0xa0]
    // push(0x4bc880)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // lea eax, [ebp - 0xa0]
    // push edi
    // push eax
    // CALL(0x4abcb0)
    // lea eax, [ebp - 0xa0]
    // push(0x4bc87c)  // ptr?
    // push eax
    // CALL(0x4abcb0)
    // push dword ptr [esi + 0x4e53c4]
    // lea eax, [ebp - 0xa0]
    // push eax
    // CALL(0x4abcb0)
    // push(0x12010)  // ptr?
    // lea eax, [ebp - 0xa0]
    // push(0x4bc854)  // ptr?
    // push eax
    // CALL(0x4ac8d8)
    // add esp, 0x2c
    // pop edi
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp + 8]
    // lea esi, [esi + 0x4e53c4]
    // push 0
    // push eax
    // push dword ptr [esi]
    // CALL(0x4abdf0)
    // pop ecx
    // push eax
    // push dword ptr [esi]
    // push -0xc
    // CALL(dword)
    // push eax
    // CALL(dword)
    // pop esi
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 0x10]
    // or ecx, eax
    // mov ecx, dword ptr [esp + 0xc]
    // if (...) GOTO(0x4ab519)
    // mov eax, dword ptr [esp + 4]
    // mul ecx
    // return;
    // push ebx
    // mul ecx
    // mov ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul dword ptr [esp + 0x14]
    // add ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul ecx
    // add edx, ebx
    // pop ebx
    // return;
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // imul esi, dword ptr [esp + 0x14]
    // cmp esi, -0x20
    // mov ebx, esi
    // if (...) GOTO(0x4ab554)
    // test esi, esi
    // if (...) GOTO(0x4ab54e)
    // push 1
    // pop esi
    // add esi, 0xf
    // and esi, 0xfffffff0
    // xor edi, edi
    // cmp esi, -0x20
    // if (...) GOTO(0x4ab595)
    // cmp ebx, dword ptr [0x4e4bdc]
    // if (...) GOTO(0x4ab580)
    // push 9
    // CALL(0x4a79b2)
    // push ebx
    // CALL(0x4a7dbc)
    // push 9
    // mov edi, eax
    // CALL(0x4a7a13)
    // add esp, 0xc
    // test edi, edi
    // if (...) GOTO(0x4ab5ab)
    // push esi
    // push 8
    // push dword ptr [0x84215c]
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x4ab5b7)
    // cmp dword ptr [0x840b18], 0
    // if (...) GOTO(0x4ab5b7)
    // push esi
    // CALL(0x4a8567)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab5bd)
    // if (...) GOTO(0x4ab554)
    // push ebx
    // push 0
    // push edi
    // CALL(0x4abd90)
    // add esp, 0xc
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // xor eax, eax
    // if (...) GOTO(0x4ab5b9)
    // push ebp
    // mov ebp, esp
    // push ecx
    // push esi
    // wait 
    // fnstcw word ptr [ebp - 4]
    // push dword ptr [ebp - 4]
    // CALL(0x4ab60c)
    // mov esi, eax
    // mov eax, dword ptr [ebp + 0xc]
    // not eax
    // and esi, eax
    // mov eax, dword ptr [ebp + 8]
    // and eax, dword ptr [ebp + 0xc]
    // or esi, eax
    // push esi
    // CALL(0x4ab69e)
    // pop ecx
    // mov dword ptr [ebp + 0xc], eax
    // pop ecx
    // fldcw word ptr [ebp + 0xc]
    // mov eax, esi
    // pop esi
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // and eax, 0xfff7ffff
    // push eax
    // push dword ptr [esp + 8]
    // CALL(0x4ab5c1)
    // pop ecx
    // pop ecx
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push ebp
    // test bl, 1
    // push edi
    // if (...) GOTO(0x4ab61d)
    // push(0x10)
    // pop eax
    // test bl, 4
    // if (...) GOTO(0x4ab624)
    // or al, 8
    // test bl, 8
    // if (...) GOTO(0x4ab62b)
    // or al, 4
    // test bl, 0x10
    // if (...) GOTO(0x4ab632)
    // or al, 2
    // test bl, 0x20
    // if (...) GOTO(0x4ab639)
    // or al, 1
    // test bl, 2
    // if (...) GOTO(0x4ab643)
    // or eax, 0x80000
    // movzx ecx, bx
    // push esi
    // mov edx, ecx
    // mov esi, 0xc00
    // mov edi, 0x300
    // and edx, esi
    // mov ebp, 0x200
    // if (...) GOTO(0x4ab67b)
    // cmp edx, 0x400
    // if (...) GOTO(0x4ab678)
    // cmp edx, 0x800
    // if (...) GOTO(0x4ab674)
    // cmp edx, esi
    // if (...) GOTO(0x4ab67b)
    // or eax, edi
    // if (...) GOTO(0x4ab67b)
    // or eax, ebp
    // if (...) GOTO(0x4ab67b)
    // or ah, 1
    // and ecx, edi
    // pop esi
    // if (...) GOTO(0x4ab68b)
    // cmp ecx, ebp
    // if (...) GOTO(0x4ab690)
    // or eax, 0x10000
    // if (...) GOTO(0x4ab690)
    // or eax, 0x20000
    // pop edi
    // pop ebp
    // test bh, 0x10
    // pop ebx
    // if (...) GOTO(0x4ab69d)
    // or eax, 0x40000
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push esi
    // test bl, 0x10
    // if (...) GOTO(0x4ab6ae)
    // push 1
    // pop eax
    // test bl, 8
    // if (...) GOTO(0x4ab6b5)
    // or al, 4
    // test bl, 4
    // if (...) GOTO(0x4ab6bc)
    // or al, 8
    // test bl, 2
    // if (...) GOTO(0x4ab6c3)
    // or al, 0x10
    // test bl, 1
    // if (...) GOTO(0x4ab6ca)
    // or al, 0x20
    // test ebx, 0x80000
    // if (...) GOTO(0x4ab6d4)
    // or al, 2
    // mov ecx, ebx
    // mov edx, 0x300
    // and ecx, edx
    // mov esi, 0x200
    // if (...) GOTO(0x4ab701)
    // cmp ecx, 0x100
    // if (...) GOTO(0x4ab6fe)
    // cmp ecx, esi
    // if (...) GOTO(0x4ab6f9)
    // cmp ecx, edx
    // if (...) GOTO(0x4ab701)
    // or ah, 0xc
    // if (...) GOTO(0x4ab701)
    // or ah, 8
    // if (...) GOTO(0x4ab701)
    // or ah, 4
    // mov ecx, ebx
    // and ecx, 0x30000
    // if (...) GOTO(0x4ab717)
    // cmp ecx, 0x10000
    // if (...) GOTO(0x4ab719)
    // or eax, esi
    // if (...) GOTO(0x4ab719)
    // or eax, edx
    // pop esi
    // test ebx, 0x40000
    // pop ebx
    // if (...) GOTO(0x4ab726)
    // or ah, 0x10
    // return;
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push(0x20)
    // cdq 
    // pop ecx
    // idiv ecx
    // push(0x1f)
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x10]
    // cdq 
    // idiv ecx
    // pop ecx
    // mov eax, dword ptr [esp + 8]
    // sub ecx, edx
    // or edx, 0xffffffff
    // shl edx, cl
    // not edx
    // test dword ptr [eax + esi*4], edx
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // cmp esi, 3
    // if (...) GOTO(0x4ab767)
    // lea eax, [eax + esi*4]
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // add eax, 4
    // cmp esi, 3
    // if (...) GOTO(0x4ab759)
    // push 1
    // pop eax
    // pop esi
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 8]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov ebx, dword ptr [esp + 0x14]
    // cdq 
    // pop ecx
    // idiv ecx
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x14]
    // cdq 
    // idiv ecx
    // lea edi, [ebx + esi*4]
    // push edi
    // push(0x1f)
    // pop ecx
    // push 1
    // pop eax
    // sub ecx, edx
    // shl eax, cl
    // push eax
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // js 0x4ab7c2
    // lea edi, [ebx + esi*4]
    // test eax, eax
    // if (...) GOTO(0x4ab7c2)
    // push edi
    // push 1
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // sub edi, 4
    // test esi, esi
    // if (...) GOTO(0x4ab7a9)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // lea edi, [eax - 1]
    // push(0x20)
    // pop ecx
    // and dword ptr [ebp - 4], 0
    // lea ebx, [edi + 1]
    // push(0x20)
    // mov eax, ebx
    // pop esi
    // cdq 
    // idiv ecx
    // push(0x1f)
    // mov ecx, eax
    // mov eax, ebx
    // cdq 
    // idiv esi
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // push 1
    // mov dword ptr [ebp - 8], ecx
    // lea eax, [eax + ecx*4]
    // mov dword ptr [ebp + 0xc], eax
    // sub esi, edx
    // pop edx
    // mov ecx, esi
    // shl edx, cl
    // test dword ptr [eax], edx
    // if (...) GOTO(0x4ab82a)
    // inc ebx
    // push ebx
    // push dword ptr [ebp + 8]
    // CALL(0x4ab727)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab827)
    // push edi
    // push dword ptr [ebp + 8]
    // CALL(0x4ab770)
    // pop ecx
    // mov dword ptr [ebp - 4], eax
    // pop ecx
    // mov eax, dword ptr [ebp + 0xc]
    // or edx, 0xffffffff
    // mov ecx, esi
    // shl edx, cl
    // push 3
    // pop ecx
    // and dword ptr [eax], edx
    // mov eax, dword ptr [ebp - 8]
    // inc eax
    // cmp eax, ecx
    // if (...) GOTO(0x4ab84a)
    // mov edx, dword ptr [ebp + 8]
    // sub ecx, eax
    // lea edi, [edx + eax*4]
    // xor eax, eax
    // rep stosd dword ptr es:[edi], eax
    // mov eax, dword ptr [ebp - 4]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // push 3
    // sub ecx, eax
    // pop edx
    // mov esi, dword ptr [eax]
    // mov dword ptr [ecx + eax], esi
    // add eax, 4
    // dec edx
    // if (...) GOTO(0x4ab860)
    // pop esi
    // return;
    // push edi
    // mov edi, dword ptr [esp + 8]
    // xor eax, eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // pop edi
    // return;
    // mov eax, dword ptr [esp + 4]
    // xor ecx, ecx
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab891)
    // inc ecx
    // add eax, 4
    // cmp ecx, 3
    // if (...) GOTO(0x4ab87f)
    // push 1
    // pop eax
    // return;
    // xor eax, eax
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov edi, dword ptr [ebp + 8]
    // pop ebx
    // or esi, 0xffffffff
    // cdq 
    // mov ecx, ebx
    // mov dword ptr [ebp - 4], 3
    // idiv ecx
    // mov dword ptr [ebp - 0xc], eax
    // mov eax, dword ptr [ebp + 0xc]
    // cdq 
    // idiv ecx
    // and dword ptr [ebp + 0xc], 0
    // mov ecx, edx
    // shl esi, cl
    // sub ebx, edx
    // not esi
    // mov eax, dword ptr [edi]
    // mov ecx, eax
    // and ecx, esi
    // mov dword ptr [ebp - 8], ecx
    // mov ecx, edx
    // shr eax, cl
    // or eax, dword ptr [ebp + 0xc]
    // mov dword ptr [edi], eax
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, ebx
    // add edi, 4
    // shl eax, cl
    // dec dword ptr [ebp - 4]
    // mov dword ptr [ebp + 0xc], eax
    // if (...) GOTO(0x4ab8ca)
    // mov edi, dword ptr [ebp - 0xc]
    // push 2
    // pop ebx
    // mov esi, edi
    // push 8
    // pop ecx
    // shl esi, 2
    // cmp ebx, edi
    // if (...) GOTO(0x4ab90f)
    // mov edx, dword ptr [ebp + 8]
    // mov eax, ecx
    // sub eax, esi
    // mov eax, dword ptr [eax + edx]
    // mov dword ptr [ecx + edx], eax
    // if (...) GOTO(0x4ab916)
    // mov eax, dword ptr [ebp + 8]
    // and dword ptr [ecx + eax], 0
    // dec ebx
    // sub ecx, 4
    // jns 0x4ab8fc
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x18
    // mov eax, dword ptr [ebp + 8]
    // push ebx
    // push esi
    // push edi
    // movzx ecx, word ptr [eax + 0xa]
    // mov ebx, ecx
    // and ecx, 0x8000
    // mov dword ptr [ebp + 8], ecx
    // mov ecx, dword ptr [eax + 6]
    // mov dword ptr [ebp - 0xc], ecx
    // mov ecx, dword ptr [eax + 2]
    // movzx eax, word ptr [eax]
    // mov edi, dword ptr [ebp + 0x10]
    // and ebx, 0x7fff
    // sub ebx, 0x3fff
    // mov dword ptr [ebp - 8], ecx
    // shl eax, 0x10
    // cmp ebx, 0xffffc001
    // mov dword ptr [ebp - 4], eax
    // if (...) GOTO(0x4ab98e)
    // lea eax, [ebp - 0xc]
    // xor esi, esi
    // push eax
    // CALL(0x4ab879)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aba4d)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // push 2
    // pop eax
    // if (...) GOTO(0x4aba4f)
    // lea eax, [ebp - 0xc]
    // push eax
    // lea eax, [ebp - 0x18]
    // push eax
    // CALL(0x4ab852)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // add esp, 0x10
    // test eax, eax
    // if (...) GOTO(0x4ab9af)
    // inc ebx
    // mov eax, dword ptr [edi + 4]
    // mov ecx, eax
    // sub ecx, dword ptr [edi + 8]
    // cmp ebx, ecx
    // if (...) GOTO(0x4ab9c7)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // if (...) GOTO(0x4aba03)
    // cmp ebx, eax
    // if (...) GOTO(0x4aba0a)
    // sub eax, ebx
    // mov esi, eax
    // lea eax, [ebp - 0x18]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab852)
    // lea eax, [ebp - 0xc]
    // push esi
    // push eax
    // CALL(0x4ab894)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // mov eax, dword ptr [edi + 0xc]
    // inc eax
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // add esp, 0x20
    // xor esi, esi
    // if (...) GOTO(0x4ab986)
    // cmp ebx, dword ptr [edi]
    // if (...) GOTO(0x4aba36)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // push dword ptr [edi + 0xc]
    // or byte ptr [ebp - 9], 0x80
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // mov esi, dword ptr [edi + 0x14]
    // add esp, 0xc
    // add esi, dword ptr [edi]
    // push 1
    // if (...) GOTO(0x4ab988)
    // push dword ptr [edi + 0xc]
    // mov esi, dword ptr [edi + 0x14]
    // and byte ptr [ebp - 9], 0x7f
    // lea eax, [ebp - 0xc]
    // push eax
    // add esi, ebx
    // CALL(0x4ab894)
    // pop ecx
    // pop ecx
    // xor eax, eax
    // push(0x1f)
    // pop ecx
    // sub ecx, dword ptr [edi + 0xc]
    // mov edi, dword ptr [edi + 0x10]
    // shl esi, cl
    // mov ecx, dword ptr [ebp + 8]
    // neg ecx
    // sbb ecx, ecx
    // and ecx, 0x80000000
    // or esi, ecx
    // or esi, dword ptr [ebp - 0xc]
    // cmp edi, 0x40
    // if (...) GOTO(0x4aba7e)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ebp - 8]
    // mov dword ptr [ecx + 4], esi
    // mov dword ptr [ecx], edx
    // if (...) GOTO(0x4aba88)
    // cmp edi, 0x20
    // if (...) GOTO(0x4aba88)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov dword ptr [ecx], esi
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push(0x4e5568)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push(0x4e5580)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4aba8d)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abaa3)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov edx, dword ptr [ebp + 0x10]
    // push ebx
    // mov ebx, dword ptr [ebp + 0xc]
    // push esi
    // mov esi, dword ptr [ebp + 8]
    // mov ecx, dword ptr [edx + 0xc]
    // push edi
    // lea edi, [esi + 1]
    // mov byte ptr [esi], 0x30
    // test ebx, ebx
    // mov eax, edi
    // if (...) GOTO(0x4abb50)
    // mov dword ptr [ebp + 8], ebx
    // xor ebx, ebx
    // mov dl, byte ptr [ecx]
    // test dl, dl
    // if (...) GOTO(0x4abb42)
    // movsx edx, dl
    // inc ecx
    // if (...) GOTO(0x4abb45)
    // push(0x30)
    // pop edx
    // mov byte ptr [eax], dl
    // inc eax
    // dec dword ptr [ebp + 8]
    // if (...) GOTO(0x4abb36)
    // mov edx, dword ptr [ebp + 0x10]
    // and byte ptr [eax], 0
    // test ebx, ebx
    // if (...) GOTO(0x4abb69)
    // cmp byte ptr [ecx], 0x35
    // if (...) GOTO(0x4abb69)
    // dec eax
    // cmp byte ptr [eax], 0x39
    // if (...) GOTO(0x4abb67)
    // mov byte ptr [eax], 0x30
    // if (...) GOTO(0x4abb5c)
    // inc byte ptr [eax]
    // cmp byte ptr [esi], 0x31
    // if (...) GOTO(0x4abb73)
    // inc dword ptr [edx + 4]
    // if (...) GOTO(0x4abb85)
    // push edi
    // CALL(0x4abdf0)
    // inc eax
    // push eax
    // push edi
    // push esi
    // CALL(0x4a6d80)
    // add esp, 0x10
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x28
    // push esi
    // lea eax, [ebp + 8]
    // push edi
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abbe6)
    // pop ecx
    // lea eax, [ebp - 0x28]
    // pop ecx
    // lea esi, [ebp - 0xc]
    // push eax
    // push 0
    // push(0x11)
    // sub esp, 0xc
    // mov edi, esp
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsw word ptr es:[edi], word ptr [esi]
    // CALL(0x4ad192)
    // mov esi, dword ptr [ebp + 0x10]
    // mov edi, dword ptr [ebp + 0x14]
    // mov dword ptr [esi + 8], eax
    // movsx eax, byte ptr [ebp - 0x26]
    // mov dword ptr [esi], eax
    // movsx eax, word ptr [ebp - 0x28]
    // mov dword ptr [esi + 4], eax
    // lea eax, [ebp - 0x24]
    // push eax
    // push edi
    // CALL(0x4abca0)
    // add esp, 0x20
    // mov dword ptr [esi + 0xc], edi
    // mov eax, esi
    // pop edi
    // pop esi
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // mov edx, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // mov ax, word ptr [edx + 6]
    // mov edi, 0x7ff
    // mov ecx, eax
    // and eax, 0x8000
    // shr ecx, 4
    // and ecx, edi
    // mov dword ptr [ebp + 0xc], eax
    // mov eax, dword ptr [edx + 4]
    // mov edx, dword ptr [edx]
    // movzx ebx, cx
    // mov esi, 0x80000000
    // and eax, 0xfffff
    // test ebx, ebx
    // mov dword ptr [ebp - 4], esi
    // if (...) GOTO(0x4abc34)
    // cmp ebx, edi
    // if (...) GOTO(0x4abc2d)
    // lea edi, [ecx + 0x3c00]
    // if (...) GOTO(0x4abc55)
    // mov edi, 0x7fff
    // if (...) GOTO(0x4abc55)
    // xor ebx, ebx
    // cmp eax, ebx
    // if (...) GOTO(0x4abc4c)
    // cmp edx, ebx
    // if (...) GOTO(0x4abc4c)
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [eax + 4], ebx
    // mov dword ptr [eax], ebx
    // mov word ptr [eax + 8], bx
    // if (...) GOTO(0x4abc97)
    // lea edi, [ecx + 0x3c01]
    // mov dword ptr [ebp - 4], ebx
    // mov ecx, edx
    // shr ecx, 0x15
    // shl eax, 0xb
    // or ecx, eax
    // mov eax, dword ptr [ebp + 8]
    // or ecx, dword ptr [ebp - 4]
    // shl edx, 0xb
    // mov dword ptr [eax + 4], ecx
    // mov dword ptr [eax], edx
    // test esi, ecx
    // if (...) GOTO(0x4abc8e)
    // mov edx, dword ptr [eax]
    // add ecx, ecx
    // mov ebx, edx
    // shr ebx, 0x1f
    // or ebx, ecx
    // lea ecx, [edx + edx]
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 4], ebx
    // add edi, 0xffff
    // mov ecx, ebx
    // if (...) GOTO(0x4abc6d)
    // mov ecx, dword ptr [ebp + 0xc]
    // or ecx, edi
    // mov word ptr [eax + 8], cx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // cmp dword ptr [0x842168], 0
    // if (...) GOTO(0x4aaef0)
    // CALL(0x4ac8bc)
    // push esi
    // mov esi, dword ptr [0x842160]
    // mov al, byte ptr [esi]
    // cmp al, 0x22
    // if (...) GOTO(0x4aaf22)
    // mov al, byte ptr [esi + 1]
    // inc esi
    // cmp al, 0x22
    // if (...) GOTO(0x4aaf1a)
    // test al, al
    // if (...) GOTO(0x4aaf1a)
    // movzx eax, al
    // push eax
    // CALL(0x4ac4a2)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aaefd)
    // inc esi
    // if (...) GOTO(0x4aaefd)
    // cmp byte ptr [esi], 0x22
    // if (...) GOTO(0x4aaf2c)
    // inc esi
    // if (...) GOTO(0x4aaf2c)
    // cmp al, 0x20
    // jbe 0x4aaf2c
    // inc esi
    // cmp byte ptr [esi], 0x20
    // if (...) GOTO(0x4aaf26)
    // mov al, byte ptr [esi]
    // test al, al
    // if (...) GOTO(0x4aaf36)
    // cmp al, 0x20
    // jbe 0x4aaf1f
    // mov eax, esi
    // pop esi
    // return;
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x842168], ebx
    // push esi
    // push edi
    // if (...) GOTO(0x4aaf4c)
    // CALL(0x4ac8bc)
    // mov esi, dword ptr [0x840aac]
    // xor edi, edi
    // mov al, byte ptr [esi]
    // cmp al, bl
    // if (...) GOTO(0x4aaf6c)
    // cmp al, 0x3d
    // if (...) GOTO(0x4aaf5f)
    // inc edi
    // push esi
    // CALL(0x4abdf0)
    // pop ecx
    // lea esi, [esi + eax + 1]
    // if (...) GOTO(0x4aaf54)
    // lea eax, [edi*4 + 4]
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // cmp esi, ebx
    // mov dword ptr [0x840a88], esi
    // if (...) GOTO(0x4aaf8e)
    // push 9
    // CALL(0x4a6937)
    // pop ecx
    // mov edi, dword ptr [0x840aac]
    // cmp byte ptr [edi], bl
    // if (...) GOTO(0x4aafd1)
    // push ebp
    // push edi
    // CALL(0x4abdf0)
    // mov ebp, eax
    // pop ecx
    // inc ebp
    // cmp byte ptr [edi], 0x3d
    // if (...) GOTO(0x4aafca)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, ebx
    // pop ecx
    // mov dword ptr [esi], eax
    // if (...) GOTO(0x4aafbd)
    // push 9
    // CALL(0x4a6937)
    // pop ecx
    // push edi
    // push dword ptr [esi]
    // CALL(0x4abca0)
    // pop ecx
    // add esi, 4
    // pop ecx
    // add edi, ebp
    // cmp byte ptr [edi], bl
    // if (...) GOTO(0x4aaf99)
    // pop ebp
    // push dword ptr [0x840aac]
    // CALL(0x4a5007)
    // pop ecx
    // mov dword ptr [0x840aac], ebx
    // mov dword ptr [esi], ebx
    // pop edi
    // pop esi
    // mov dword ptr [0x842164], 1
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x842168], ebx
    // push esi
    // push edi
    // if (...) GOTO(0x4ab00a)
    // CALL(0x4ac8bc)
    // mov esi, 0x840b60
    // push(0x104)
    // push esi
    // push ebx
    // CALL(dword)
    // mov eax, dword ptr [0x842160]
    // mov dword ptr [0x840a98], esi
    // mov edi, esi
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab02f)
    // mov edi, eax
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // push ebx
    // push ebx
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, dword ptr [ebp - 4]
    // lea eax, [eax + ecx*4]
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // add esp, 0x18
    // cmp esi, ebx
    // if (...) GOTO(0x4ab05f)
    // push 8
    // CALL(0x4a6937)
    // pop ecx
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // mov eax, dword ptr [ebp - 4]
    // lea eax, [esi + eax*4]
    // push eax
    // push esi
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 4]
    // add esp, 0x14
    // dec eax
    // mov dword ptr [0x840a80], esi
    // pop edi
    // pop esi
    // mov dword ptr [0x840a7c], eax
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov ecx, dword ptr [ebp + 0x18]
    // mov eax, dword ptr [ebp + 0x14]
    // push ebx
    // push esi
    // and dword ptr [ecx], 0
    // mov esi, dword ptr [ebp + 0x10]
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // mov dword ptr [eax], 1
    // mov eax, dword ptr [ebp + 8]
    // test edi, edi
    // if (...) GOTO(0x4ab0b6)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab0ff)
    // mov dl, byte ptr [eax + 1]
    // inc eax
    // cmp dl, 0x22
    // if (...) GOTO(0x4ab0ed)
    // test dl, dl
    // if (...) GOTO(0x4ab0ed)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab0e0)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0e0)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0bb)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab0bb)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0f7)
    // and byte ptr [esi], 0
    // inc esi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab142)
    // inc eax
    // if (...) GOTO(0x4ab142)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab10a)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // mov dl, byte ptr [eax]
    // inc eax
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab125)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab124)
    // mov bl, byte ptr [eax]
    // mov byte ptr [esi], bl
    // inc esi
    // inc eax
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab133)
    // test dl, dl
    // if (...) GOTO(0x4ab137)
    // cmp dl, 9
    // if (...) GOTO(0x4ab0ff)
    // test dl, dl
    // if (...) GOTO(0x4ab13a)
    // dec eax
    // if (...) GOTO(0x4ab142)
    // test esi, esi
    // if (...) GOTO(0x4ab142)
    // and byte ptr [esi - 1], 0
    // and dword ptr [ebp + 0x18], 0
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // mov dl, byte ptr [eax]
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab15b)
    // cmp dl, 9
    // if (...) GOTO(0x4ab15e)
    // inc eax
    // if (...) GOTO(0x4ab14f)
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // test edi, edi
    // if (...) GOTO(0x4ab173)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // mov edx, dword ptr [ebp + 0x14]
    // inc dword ptr [edx]
    // mov dword ptr [ebp + 8], 1
    // xor ebx, ebx
    // cmp byte ptr [eax], 0x5c
    // if (...) GOTO(0x4ab18a)
    // inc eax
    // inc ebx
    // if (...) GOTO(0x4ab181)
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab1bb)
    // test bl, 1
    // if (...) GOTO(0x4ab1b9)
    // xor edi, edi
    // cmp dword ptr [ebp + 0x18], edi
    // if (...) GOTO(0x4ab1a8)
    // cmp byte ptr [eax + 1], 0x22
    // lea edx, [eax + 1]
    // if (...) GOTO(0x4ab1a8)
    // mov eax, edx
    // if (...) GOTO(0x4ab1ab)
    // mov dword ptr [ebp + 8], edi
    // mov edi, dword ptr [ebp + 0xc]
    // xor edx, edx
    // cmp dword ptr [ebp + 0x18], edx
    // sete dl
    // mov dword ptr [ebp + 0x18], edx
    // shr ebx, 1
    // mov edx, ebx
    // dec ebx
    // test edx, edx
    // if (...) GOTO(0x4ab1d0)
    // inc ebx
    // test esi, esi
    // if (...) GOTO(0x4ab1cb)
    // mov byte ptr [esi], 0x5c
    // inc esi
    // inc dword ptr [ecx]
    // dec ebx
    // if (...) GOTO(0x4ab1c3)
    // mov dl, byte ptr [eax]
    // test dl, dl
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 0x18], 0
    // if (...) GOTO(0x4ab1e6)
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab220)
    // cmp dl, 9
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 8], 0
    // if (...) GOTO(0x4ab21a)
    // test esi, esi
    // if (...) GOTO(0x4ab209)
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab202)
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab218)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab218)
    // inc eax
    // inc dword ptr [ecx]
    // inc dword ptr [ecx]
    // inc eax
    // if (...) GOTO(0x4ab178)
    // test esi, esi
    // if (...) GOTO(0x4ab228)
    // and byte ptr [esi], 0
    // inc esi
    // inc dword ptr [ecx]
    // if (...) GOTO(0x4ab146)
    // test edi, edi
    // if (...) GOTO(0x4ab236)
    // and dword ptr [edi], 0
    // mov eax, dword ptr [ebp + 0x14]
    // pop edi
    // pop esi
    // pop ebx
    // inc dword ptr [eax]
    // pop ebp
    // return;
    // push ecx
    // push ecx
    // mov eax, dword ptr [0x840c64]
    // push ebx
    // push ebp
    // mov ebp, dword ptr [0x4ba048]
    // push esi
    // push edi
    // xor ebx, ebx
    // xor esi, esi
    // xor edi, edi
    // cmp eax, ebx
    // if (...) GOTO(0x4ab28e)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab26f)
    // mov dword ptr [0x840c64], 1
    // if (...) GOTO(0x4ab297)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // mov dword ptr [0x840c64], 2
    // if (...) GOTO(0x4ab31d)
    // cmp eax, 1
    // if (...) GOTO(0x4ab318)
    // cmp esi, ebx
    // if (...) GOTO(0x4ab2a7)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp word ptr [esi], bx
    // mov eax, esi
    // if (...) GOTO(0x4ab2bc)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // sub eax, esi
    // mov edi, dword ptr [0x4ba104]
    // sar eax, 1
    // push ebx
    // push ebx
    // inc eax
    // push ebx
    // push ebx
    // push eax
    // push esi
    // push ebx
    // push ebx
    // mov dword ptr [esp + 0x34], eax
    // CALL(edi)
    // mov ebp, eax
    // cmp ebp, ebx
    // if (...) GOTO(0x4ab30d)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, ebx
    // pop ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4ab30d)
    // push ebx
    // push ebx
    // push ebp
    // push eax
    // push dword ptr [esp + 0x24]
    // push esi
    // push ebx
    // push ebx
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x4ab309)
    // push dword ptr [esp + 0x10]
    // CALL(0x4a5007)
    // pop ecx
    // mov dword ptr [esp + 0x10], ebx
    // mov ebx, dword ptr [esp + 0x10]
    // push esi
    // CALL(dword)
    // mov eax, ebx
    // if (...) GOTO(0x4ab36b)
    // cmp eax, 2
    // if (...) GOTO(0x4ab369)
    // cmp edi, ebx
    // if (...) GOTO(0x4ab32d)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp byte ptr [edi], bl
    // mov eax, edi
    // if (...) GOTO(0x4ab33d)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // sub eax, edi
    // inc eax
    // mov ebp, eax
    // push ebp
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // cmp esi, ebx
    // if (...) GOTO(0x4ab353)
    // xor esi, esi
    // if (...) GOTO(0x4ab35e)
    // push ebp
    // push edi
    // push esi
    // CALL(0x4aa6c0)
    // add esp, 0xc
    // push edi
    // CALL(dword)
    // mov eax, esi
    // if (...) GOTO(0x4ab36b)
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // pop ecx
    // return;
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab389)
    // test eax, eax
    // if (...) GOTO(0x4ab3aa)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab3aa)
    // push(0xfc)
    // CALL(0x4ab3ab)
    // mov eax, dword ptr [0x840c68]
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4ab39f)
    // CALL(eax)
    // push(0xff)
    // CALL(0x4ab3ab)
    // pop ecx
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x1a4
    // mov edx, dword ptr [ebp + 8]
    // xor ecx, ecx
    // mov eax, 0x4e53c0
    // cmp edx, dword ptr [eax]
    // if (...) GOTO(0x4ab3cd)
    // add eax, 8
    // inc ecx
    // cmp eax, 0x4e5450
    // if (...) GOTO(0x4ab3be)
    // push esi
    // mov esi, ecx
    // shl esi, 3
    // cmp edx, dword ptr [esi + 0x4e53c0]
    // if (...) GOTO(0x4ab4fb)
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab4d5)
    // test eax, eax
    // if (...) GOTO(0x4ab3fe)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab4d5)
    // cmp edx, 0xfc
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp - 0x1a4]
    // push(0x104)
    // push eax
    // push 0
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4ab435)
    // lea eax, [ebp - 0x1a4]
    // push(0x4bc89c)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // pop ecx
    // pop ecx
    // lea eax, [ebp - 0x1a4]
    // push edi
    // push eax
    // lea edi, [ebp - 0x1a4]
    // CALL(0x4abdf0)
    // inc eax
    // pop ecx
    // cmp eax, 0x3c
    // jbe 0x4ab478
    // lea eax, [ebp - 0x1a4]
    // push eax
    // CALL(0x4abdf0)
    // mov edi, eax
    // lea eax, [ebp - 0x1a4]
    // sub eax, 0x3b
    // push 3
    // add edi, eax
    // push(0x4c5db4)  // ptr?
    // push edi
    // CALL(0x4a6c80)
    // add esp, 0x10
    // lea eax, [ebp - 0xa0]
    // push(0x4bc880)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // lea eax, [ebp - 0xa0]
    // push edi
    // push eax
    // CALL(0x4abcb0)
    // lea eax, [ebp - 0xa0]
    // push(0x4bc87c)  // ptr?
    // push eax
    // CALL(0x4abcb0)
    // push dword ptr [esi + 0x4e53c4]
    // lea eax, [ebp - 0xa0]
    // push eax
    // CALL(0x4abcb0)
    // push(0x12010)  // ptr?
    // lea eax, [ebp - 0xa0]
    // push(0x4bc854)  // ptr?
    // push eax
    // CALL(0x4ac8d8)
    // add esp, 0x2c
    // pop edi
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp + 8]
    // lea esi, [esi + 0x4e53c4]
    // push 0
    // push eax
    // push dword ptr [esi]
    // CALL(0x4abdf0)
    // pop ecx
    // push eax
    // push dword ptr [esi]
    // push -0xc
    // CALL(dword)
    // push eax
    // CALL(dword)
    // pop esi
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 0x10]
    // or ecx, eax
    // mov ecx, dword ptr [esp + 0xc]
    // if (...) GOTO(0x4ab519)
    // mov eax, dword ptr [esp + 4]
    // mul ecx
    // return;
    // push ebx
    // mul ecx
    // mov ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul dword ptr [esp + 0x14]
    // add ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul ecx
    // add edx, ebx
    // pop ebx
    // return;
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // imul esi, dword ptr [esp + 0x14]
    // cmp esi, -0x20
    // mov ebx, esi
    // if (...) GOTO(0x4ab554)
    // test esi, esi
    // if (...) GOTO(0x4ab54e)
    // push 1
    // pop esi
    // add esi, 0xf
    // and esi, 0xfffffff0
    // xor edi, edi
    // cmp esi, -0x20
    // if (...) GOTO(0x4ab595)
    // cmp ebx, dword ptr [0x4e4bdc]
    // if (...) GOTO(0x4ab580)
    // push 9
    // CALL(0x4a79b2)
    // push ebx
    // CALL(0x4a7dbc)
    // push 9
    // mov edi, eax
    // CALL(0x4a7a13)
    // add esp, 0xc
    // test edi, edi
    // if (...) GOTO(0x4ab5ab)
    // push esi
    // push 8
    // push dword ptr [0x84215c]
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x4ab5b7)
    // cmp dword ptr [0x840b18], 0
    // if (...) GOTO(0x4ab5b7)
    // push esi
    // CALL(0x4a8567)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab5bd)
    // if (...) GOTO(0x4ab554)
    // push ebx
    // push 0
    // push edi
    // CALL(0x4abd90)
    // add esp, 0xc
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // xor eax, eax
    // if (...) GOTO(0x4ab5b9)
    // push ebp
    // mov ebp, esp
    // push ecx
    // push esi
    // wait 
    // fnstcw word ptr [ebp - 4]
    // push dword ptr [ebp - 4]
    // CALL(0x4ab60c)
    // mov esi, eax
    // mov eax, dword ptr [ebp + 0xc]
    // not eax
    // and esi, eax
    // mov eax, dword ptr [ebp + 8]
    // and eax, dword ptr [ebp + 0xc]
    // or esi, eax
    // push esi
    // CALL(0x4ab69e)
    // pop ecx
    // mov dword ptr [ebp + 0xc], eax
    // pop ecx
    // fldcw word ptr [ebp + 0xc]
    // mov eax, esi
    // pop esi
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // and eax, 0xfff7ffff
    // push eax
    // push dword ptr [esp + 8]
    // CALL(0x4ab5c1)
    // pop ecx
    // pop ecx
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push ebp
    // test bl, 1
    // push edi
    // if (...) GOTO(0x4ab61d)
    // push(0x10)
    // pop eax
    // test bl, 4
    // if (...) GOTO(0x4ab624)
    // or al, 8
    // test bl, 8
    // if (...) GOTO(0x4ab62b)
    // or al, 4
    // test bl, 0x10
    // if (...) GOTO(0x4ab632)
    // or al, 2
    // test bl, 0x20
    // if (...) GOTO(0x4ab639)
    // or al, 1
    // test bl, 2
    // if (...) GOTO(0x4ab643)
    // or eax, 0x80000
    // movzx ecx, bx
    // push esi
    // mov edx, ecx
    // mov esi, 0xc00
    // mov edi, 0x300
    // and edx, esi
    // mov ebp, 0x200
    // if (...) GOTO(0x4ab67b)
    // cmp edx, 0x400
    // if (...) GOTO(0x4ab678)
    // cmp edx, 0x800
    // if (...) GOTO(0x4ab674)
    // cmp edx, esi
    // if (...) GOTO(0x4ab67b)
    // or eax, edi
    // if (...) GOTO(0x4ab67b)
    // or eax, ebp
    // if (...) GOTO(0x4ab67b)
    // or ah, 1
    // and ecx, edi
    // pop esi
    // if (...) GOTO(0x4ab68b)
    // cmp ecx, ebp
    // if (...) GOTO(0x4ab690)
    // or eax, 0x10000
    // if (...) GOTO(0x4ab690)
    // or eax, 0x20000
    // pop edi
    // pop ebp
    // test bh, 0x10
    // pop ebx
    // if (...) GOTO(0x4ab69d)
    // or eax, 0x40000
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push esi
    // test bl, 0x10
    // if (...) GOTO(0x4ab6ae)
    // push 1
    // pop eax
    // test bl, 8
    // if (...) GOTO(0x4ab6b5)
    // or al, 4
    // test bl, 4
    // if (...) GOTO(0x4ab6bc)
    // or al, 8
    // test bl, 2
    // if (...) GOTO(0x4ab6c3)
    // or al, 0x10
    // test bl, 1
    // if (...) GOTO(0x4ab6ca)
    // or al, 0x20
    // test ebx, 0x80000
    // if (...) GOTO(0x4ab6d4)
    // or al, 2
    // mov ecx, ebx
    // mov edx, 0x300
    // and ecx, edx
    // mov esi, 0x200
    // if (...) GOTO(0x4ab701)
    // cmp ecx, 0x100
    // if (...) GOTO(0x4ab6fe)
    // cmp ecx, esi
    // if (...) GOTO(0x4ab6f9)
    // cmp ecx, edx
    // if (...) GOTO(0x4ab701)
    // or ah, 0xc
    // if (...) GOTO(0x4ab701)
    // or ah, 8
    // if (...) GOTO(0x4ab701)
    // or ah, 4
    // mov ecx, ebx
    // and ecx, 0x30000
    // if (...) GOTO(0x4ab717)
    // cmp ecx, 0x10000
    // if (...) GOTO(0x4ab719)
    // or eax, esi
    // if (...) GOTO(0x4ab719)
    // or eax, edx
    // pop esi
    // test ebx, 0x40000
    // pop ebx
    // if (...) GOTO(0x4ab726)
    // or ah, 0x10
    // return;
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push(0x20)
    // cdq 
    // pop ecx
    // idiv ecx
    // push(0x1f)
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x10]
    // cdq 
    // idiv ecx
    // pop ecx
    // mov eax, dword ptr [esp + 8]
    // sub ecx, edx
    // or edx, 0xffffffff
    // shl edx, cl
    // not edx
    // test dword ptr [eax + esi*4], edx
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // cmp esi, 3
    // if (...) GOTO(0x4ab767)
    // lea eax, [eax + esi*4]
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // add eax, 4
    // cmp esi, 3
    // if (...) GOTO(0x4ab759)
    // push 1
    // pop eax
    // pop esi
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 8]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov ebx, dword ptr [esp + 0x14]
    // cdq 
    // pop ecx
    // idiv ecx
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x14]
    // cdq 
    // idiv ecx
    // lea edi, [ebx + esi*4]
    // push edi
    // push(0x1f)
    // pop ecx
    // push 1
    // pop eax
    // sub ecx, edx
    // shl eax, cl
    // push eax
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // js 0x4ab7c2
    // lea edi, [ebx + esi*4]
    // test eax, eax
    // if (...) GOTO(0x4ab7c2)
    // push edi
    // push 1
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // sub edi, 4
    // test esi, esi
    // if (...) GOTO(0x4ab7a9)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // lea edi, [eax - 1]
    // push(0x20)
    // pop ecx
    // and dword ptr [ebp - 4], 0
    // lea ebx, [edi + 1]
    // push(0x20)
    // mov eax, ebx
    // pop esi
    // cdq 
    // idiv ecx
    // push(0x1f)
    // mov ecx, eax
    // mov eax, ebx
    // cdq 
    // idiv esi
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // push 1
    // mov dword ptr [ebp - 8], ecx
    // lea eax, [eax + ecx*4]
    // mov dword ptr [ebp + 0xc], eax
    // sub esi, edx
    // pop edx
    // mov ecx, esi
    // shl edx, cl
    // test dword ptr [eax], edx
    // if (...) GOTO(0x4ab82a)
    // inc ebx
    // push ebx
    // push dword ptr [ebp + 8]
    // CALL(0x4ab727)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab827)
    // push edi
    // push dword ptr [ebp + 8]
    // CALL(0x4ab770)
    // pop ecx
    // mov dword ptr [ebp - 4], eax
    // pop ecx
    // mov eax, dword ptr [ebp + 0xc]
    // or edx, 0xffffffff
    // mov ecx, esi
    // shl edx, cl
    // push 3
    // pop ecx
    // and dword ptr [eax], edx
    // mov eax, dword ptr [ebp - 8]
    // inc eax
    // cmp eax, ecx
    // if (...) GOTO(0x4ab84a)
    // mov edx, dword ptr [ebp + 8]
    // sub ecx, eax
    // lea edi, [edx + eax*4]
    // xor eax, eax
    // rep stosd dword ptr es:[edi], eax
    // mov eax, dword ptr [ebp - 4]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // push 3
    // sub ecx, eax
    // pop edx
    // mov esi, dword ptr [eax]
    // mov dword ptr [ecx + eax], esi
    // add eax, 4
    // dec edx
    // if (...) GOTO(0x4ab860)
    // pop esi
    // return;
    // push edi
    // mov edi, dword ptr [esp + 8]
    // xor eax, eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // pop edi
    // return;
    // mov eax, dword ptr [esp + 4]
    // xor ecx, ecx
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab891)
    // inc ecx
    // add eax, 4
    // cmp ecx, 3
    // if (...) GOTO(0x4ab87f)
    // push 1
    // pop eax
    // return;
    // xor eax, eax
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov edi, dword ptr [ebp + 8]
    // pop ebx
    // or esi, 0xffffffff
    // cdq 
    // mov ecx, ebx
    // mov dword ptr [ebp - 4], 3
    // idiv ecx
    // mov dword ptr [ebp - 0xc], eax
    // mov eax, dword ptr [ebp + 0xc]
    // cdq 
    // idiv ecx
    // and dword ptr [ebp + 0xc], 0
    // mov ecx, edx
    // shl esi, cl
    // sub ebx, edx
    // not esi
    // mov eax, dword ptr [edi]
    // mov ecx, eax
    // and ecx, esi
    // mov dword ptr [ebp - 8], ecx
    // mov ecx, edx
    // shr eax, cl
    // or eax, dword ptr [ebp + 0xc]
    // mov dword ptr [edi], eax
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, ebx
    // add edi, 4
    // shl eax, cl
    // dec dword ptr [ebp - 4]
    // mov dword ptr [ebp + 0xc], eax
    // if (...) GOTO(0x4ab8ca)
    // mov edi, dword ptr [ebp - 0xc]
    // push 2
    // pop ebx
    // mov esi, edi
    // push 8
    // pop ecx
    // shl esi, 2
    // cmp ebx, edi
    // if (...) GOTO(0x4ab90f)
    // mov edx, dword ptr [ebp + 8]
    // mov eax, ecx
    // sub eax, esi
    // mov eax, dword ptr [eax + edx]
    // mov dword ptr [ecx + edx], eax
    // if (...) GOTO(0x4ab916)
    // mov eax, dword ptr [ebp + 8]
    // and dword ptr [ecx + eax], 0
    // dec ebx
    // sub ecx, 4
    // jns 0x4ab8fc
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x18
    // mov eax, dword ptr [ebp + 8]
    // push ebx
    // push esi
    // push edi
    // movzx ecx, word ptr [eax + 0xa]
    // mov ebx, ecx
    // and ecx, 0x8000
    // mov dword ptr [ebp + 8], ecx
    // mov ecx, dword ptr [eax + 6]
    // mov dword ptr [ebp - 0xc], ecx
    // mov ecx, dword ptr [eax + 2]
    // movzx eax, word ptr [eax]
    // mov edi, dword ptr [ebp + 0x10]
    // and ebx, 0x7fff
    // sub ebx, 0x3fff
    // mov dword ptr [ebp - 8], ecx
    // shl eax, 0x10
    // cmp ebx, 0xffffc001
    // mov dword ptr [ebp - 4], eax
    // if (...) GOTO(0x4ab98e)
    // lea eax, [ebp - 0xc]
    // xor esi, esi
    // push eax
    // CALL(0x4ab879)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aba4d)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // push 2
    // pop eax
    // if (...) GOTO(0x4aba4f)
    // lea eax, [ebp - 0xc]
    // push eax
    // lea eax, [ebp - 0x18]
    // push eax
    // CALL(0x4ab852)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // add esp, 0x10
    // test eax, eax
    // if (...) GOTO(0x4ab9af)
    // inc ebx
    // mov eax, dword ptr [edi + 4]
    // mov ecx, eax
    // sub ecx, dword ptr [edi + 8]
    // cmp ebx, ecx
    // if (...) GOTO(0x4ab9c7)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // if (...) GOTO(0x4aba03)
    // cmp ebx, eax
    // if (...) GOTO(0x4aba0a)
    // sub eax, ebx
    // mov esi, eax
    // lea eax, [ebp - 0x18]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab852)
    // lea eax, [ebp - 0xc]
    // push esi
    // push eax
    // CALL(0x4ab894)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // mov eax, dword ptr [edi + 0xc]
    // inc eax
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // add esp, 0x20
    // xor esi, esi
    // if (...) GOTO(0x4ab986)
    // cmp ebx, dword ptr [edi]
    // if (...) GOTO(0x4aba36)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // push dword ptr [edi + 0xc]
    // or byte ptr [ebp - 9], 0x80
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // mov esi, dword ptr [edi + 0x14]
    // add esp, 0xc
    // add esi, dword ptr [edi]
    // push 1
    // if (...) GOTO(0x4ab988)
    // push dword ptr [edi + 0xc]
    // mov esi, dword ptr [edi + 0x14]
    // and byte ptr [ebp - 9], 0x7f
    // lea eax, [ebp - 0xc]
    // push eax
    // add esi, ebx
    // CALL(0x4ab894)
    // pop ecx
    // pop ecx
    // xor eax, eax
    // push(0x1f)
    // pop ecx
    // sub ecx, dword ptr [edi + 0xc]
    // mov edi, dword ptr [edi + 0x10]
    // shl esi, cl
    // mov ecx, dword ptr [ebp + 8]
    // neg ecx
    // sbb ecx, ecx
    // and ecx, 0x80000000
    // or esi, ecx
    // or esi, dword ptr [ebp - 0xc]
    // cmp edi, 0x40
    // if (...) GOTO(0x4aba7e)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ebp - 8]
    // mov dword ptr [ecx + 4], esi
    // mov dword ptr [ecx], edx
    // if (...) GOTO(0x4aba88)
    // cmp edi, 0x20
    // if (...) GOTO(0x4aba88)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov dword ptr [ecx], esi
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push(0x4e5568)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push(0x4e5580)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4aba8d)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abaa3)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov edx, dword ptr [ebp + 0x10]
    // push ebx
    // mov ebx, dword ptr [ebp + 0xc]
    // push esi
    // mov esi, dword ptr [ebp + 8]
    // mov ecx, dword ptr [edx + 0xc]
    // push edi
    // lea edi, [esi + 1]
    // mov byte ptr [esi], 0x30
    // test ebx, ebx
    // mov eax, edi
    // if (...) GOTO(0x4abb50)
    // mov dword ptr [ebp + 8], ebx
    // xor ebx, ebx
    // mov dl, byte ptr [ecx]
    // test dl, dl
    // if (...) GOTO(0x4abb42)
    // movsx edx, dl
    // inc ecx
    // if (...) GOTO(0x4abb45)
    // push(0x30)
    // pop edx
    // mov byte ptr [eax], dl
    // inc eax
    // dec dword ptr [ebp + 8]
    // if (...) GOTO(0x4abb36)
    // mov edx, dword ptr [ebp + 0x10]
    // and byte ptr [eax], 0
    // test ebx, ebx
    // if (...) GOTO(0x4abb69)
    // cmp byte ptr [ecx], 0x35
    // if (...) GOTO(0x4abb69)
    // dec eax
    // cmp byte ptr [eax], 0x39
    // if (...) GOTO(0x4abb67)
    // mov byte ptr [eax], 0x30
    // if (...) GOTO(0x4abb5c)
    // inc byte ptr [eax]
    // cmp byte ptr [esi], 0x31
    // if (...) GOTO(0x4abb73)
    // inc dword ptr [edx + 4]
    // if (...) GOTO(0x4abb85)
    // push edi
    // CALL(0x4abdf0)
    // inc eax
    // push eax
    // push edi
    // push esi
    // CALL(0x4a6d80)
    // add esp, 0x10
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x28
    // push esi
    // lea eax, [ebp + 8]
    // push edi
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abbe6)
    // pop ecx
    // lea eax, [ebp - 0x28]
    // pop ecx
    // lea esi, [ebp - 0xc]
    // push eax
    // push 0
    // push(0x11)
    // sub esp, 0xc
    // mov edi, esp
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsw word ptr es:[edi], word ptr [esi]
    // CALL(0x4ad192)
    // mov esi, dword ptr [ebp + 0x10]
    // mov edi, dword ptr [ebp + 0x14]
    // mov dword ptr [esi + 8], eax
    // movsx eax, byte ptr [ebp - 0x26]
    // mov dword ptr [esi], eax
    // movsx eax, word ptr [ebp - 0x28]
    // mov dword ptr [esi + 4], eax
    // lea eax, [ebp - 0x24]
    // push eax
    // push edi
    // CALL(0x4abca0)
    // add esp, 0x20
    // mov dword ptr [esi + 0xc], edi
    // mov eax, esi
    // pop edi
    // pop esi
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // mov edx, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // mov ax, word ptr [edx + 6]
    // mov edi, 0x7ff
    // mov ecx, eax
    // and eax, 0x8000
    // shr ecx, 4
    // and ecx, edi
    // mov dword ptr [ebp + 0xc], eax
    // mov eax, dword ptr [edx + 4]
    // mov edx, dword ptr [edx]
    // movzx ebx, cx
    // mov esi, 0x80000000
    // and eax, 0xfffff
    // test ebx, ebx
    // mov dword ptr [ebp - 4], esi
    // if (...) GOTO(0x4abc34)
    // cmp ebx, edi
    // if (...) GOTO(0x4abc2d)
    // lea edi, [ecx + 0x3c00]
    // if (...) GOTO(0x4abc55)
    // mov edi, 0x7fff
    // if (...) GOTO(0x4abc55)
    // xor ebx, ebx
    // cmp eax, ebx
    // if (...) GOTO(0x4abc4c)
    // cmp edx, ebx
    // if (...) GOTO(0x4abc4c)
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [eax + 4], ebx
    // mov dword ptr [eax], ebx
    // mov word ptr [eax + 8], bx
    // if (...) GOTO(0x4abc97)
    // lea edi, [ecx + 0x3c01]
    // mov dword ptr [ebp - 4], ebx
    // mov ecx, edx
    // shr ecx, 0x15
    // shl eax, 0xb
    // or ecx, eax
    // mov eax, dword ptr [ebp + 8]
    // or ecx, dword ptr [ebp - 4]
    // shl edx, 0xb
    // mov dword ptr [eax + 4], ecx
    // mov dword ptr [eax], edx
    // test esi, ecx
    // if (...) GOTO(0x4abc8e)
    // mov edx, dword ptr [eax]
    // add ecx, ecx
    // mov ebx, edx
    // shr ebx, 0x1f
    // or ebx, ecx
    // lea ecx, [edx + edx]
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 4], ebx
    // add edi, 0xffff
    // mov ecx, ebx
    // if (...) GOTO(0x4abc6d)
    // mov ecx, dword ptr [ebp + 0xc]
    // or ecx, edi
    // mov word ptr [eax + 8], cx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x842168], ebx
    // push esi
    // push edi
    // if (...) GOTO(0x4aaf4c)
    // CALL(0x4ac8bc)
    // mov esi, dword ptr [0x840aac]
    // xor edi, edi
    // mov al, byte ptr [esi]
    // cmp al, bl
    // if (...) GOTO(0x4aaf6c)
    // cmp al, 0x3d
    // if (...) GOTO(0x4aaf5f)
    // inc edi
    // push esi
    // CALL(0x4abdf0)
    // pop ecx
    // lea esi, [esi + eax + 1]
    // if (...) GOTO(0x4aaf54)
    // lea eax, [edi*4 + 4]
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // cmp esi, ebx
    // mov dword ptr [0x840a88], esi
    // if (...) GOTO(0x4aaf8e)
    // push 9
    // CALL(0x4a6937)
    // pop ecx
    // mov edi, dword ptr [0x840aac]
    // cmp byte ptr [edi], bl
    // if (...) GOTO(0x4aafd1)
    // push ebp
    // push edi
    // CALL(0x4abdf0)
    // mov ebp, eax
    // pop ecx
    // inc ebp
    // cmp byte ptr [edi], 0x3d
    // if (...) GOTO(0x4aafca)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, ebx
    // pop ecx
    // mov dword ptr [esi], eax
    // if (...) GOTO(0x4aafbd)
    // push 9
    // CALL(0x4a6937)
    // pop ecx
    // push edi
    // push dword ptr [esi]
    // CALL(0x4abca0)
    // pop ecx
    // add esi, 4
    // pop ecx
    // add edi, ebp
    // cmp byte ptr [edi], bl
    // if (...) GOTO(0x4aaf99)
    // pop ebp
    // push dword ptr [0x840aac]
    // CALL(0x4a5007)
    // pop ecx
    // mov dword ptr [0x840aac], ebx
    // mov dword ptr [esi], ebx
    // pop edi
    // pop esi
    // mov dword ptr [0x842164], 1
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x842168], ebx
    // push esi
    // push edi
    // if (...) GOTO(0x4ab00a)
    // CALL(0x4ac8bc)
    // mov esi, 0x840b60
    // push(0x104)
    // push esi
    // push ebx
    // CALL(dword)
    // mov eax, dword ptr [0x842160]
    // mov dword ptr [0x840a98], esi
    // mov edi, esi
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab02f)
    // mov edi, eax
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // push ebx
    // push ebx
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, dword ptr [ebp - 4]
    // lea eax, [eax + ecx*4]
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // add esp, 0x18
    // cmp esi, ebx
    // if (...) GOTO(0x4ab05f)
    // push 8
    // CALL(0x4a6937)
    // pop ecx
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // mov eax, dword ptr [ebp - 4]
    // lea eax, [esi + eax*4]
    // push eax
    // push esi
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 4]
    // add esp, 0x14
    // dec eax
    // mov dword ptr [0x840a80], esi
    // pop edi
    // pop esi
    // mov dword ptr [0x840a7c], eax
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov ecx, dword ptr [ebp + 0x18]
    // mov eax, dword ptr [ebp + 0x14]
    // push ebx
    // push esi
    // and dword ptr [ecx], 0
    // mov esi, dword ptr [ebp + 0x10]
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // mov dword ptr [eax], 1
    // mov eax, dword ptr [ebp + 8]
    // test edi, edi
    // if (...) GOTO(0x4ab0b6)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab0ff)
    // mov dl, byte ptr [eax + 1]
    // inc eax
    // cmp dl, 0x22
    // if (...) GOTO(0x4ab0ed)
    // test dl, dl
    // if (...) GOTO(0x4ab0ed)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab0e0)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0e0)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0bb)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab0bb)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0f7)
    // and byte ptr [esi], 0
    // inc esi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab142)
    // inc eax
    // if (...) GOTO(0x4ab142)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab10a)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // mov dl, byte ptr [eax]
    // inc eax
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab125)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab124)
    // mov bl, byte ptr [eax]
    // mov byte ptr [esi], bl
    // inc esi
    // inc eax
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab133)
    // test dl, dl
    // if (...) GOTO(0x4ab137)
    // cmp dl, 9
    // if (...) GOTO(0x4ab0ff)
    // test dl, dl
    // if (...) GOTO(0x4ab13a)
    // dec eax
    // if (...) GOTO(0x4ab142)
    // test esi, esi
    // if (...) GOTO(0x4ab142)
    // and byte ptr [esi - 1], 0
    // and dword ptr [ebp + 0x18], 0
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // mov dl, byte ptr [eax]
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab15b)
    // cmp dl, 9
    // if (...) GOTO(0x4ab15e)
    // inc eax
    // if (...) GOTO(0x4ab14f)
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // test edi, edi
    // if (...) GOTO(0x4ab173)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // mov edx, dword ptr [ebp + 0x14]
    // inc dword ptr [edx]
    // mov dword ptr [ebp + 8], 1
    // xor ebx, ebx
    // cmp byte ptr [eax], 0x5c
    // if (...) GOTO(0x4ab18a)
    // inc eax
    // inc ebx
    // if (...) GOTO(0x4ab181)
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab1bb)
    // test bl, 1
    // if (...) GOTO(0x4ab1b9)
    // xor edi, edi
    // cmp dword ptr [ebp + 0x18], edi
    // if (...) GOTO(0x4ab1a8)
    // cmp byte ptr [eax + 1], 0x22
    // lea edx, [eax + 1]
    // if (...) GOTO(0x4ab1a8)
    // mov eax, edx
    // if (...) GOTO(0x4ab1ab)
    // mov dword ptr [ebp + 8], edi
    // mov edi, dword ptr [ebp + 0xc]
    // xor edx, edx
    // cmp dword ptr [ebp + 0x18], edx
    // sete dl
    // mov dword ptr [ebp + 0x18], edx
    // shr ebx, 1
    // mov edx, ebx
    // dec ebx
    // test edx, edx
    // if (...) GOTO(0x4ab1d0)
    // inc ebx
    // test esi, esi
    // if (...) GOTO(0x4ab1cb)
    // mov byte ptr [esi], 0x5c
    // inc esi
    // inc dword ptr [ecx]
    // dec ebx
    // if (...) GOTO(0x4ab1c3)
    // mov dl, byte ptr [eax]
    // test dl, dl
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 0x18], 0
    // if (...) GOTO(0x4ab1e6)
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab220)
    // cmp dl, 9
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 8], 0
    // if (...) GOTO(0x4ab21a)
    // test esi, esi
    // if (...) GOTO(0x4ab209)
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab202)
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab218)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab218)
    // inc eax
    // inc dword ptr [ecx]
    // inc dword ptr [ecx]
    // inc eax
    // if (...) GOTO(0x4ab178)
    // test esi, esi
    // if (...) GOTO(0x4ab228)
    // and byte ptr [esi], 0
    // inc esi
    // inc dword ptr [ecx]
    // if (...) GOTO(0x4ab146)
    // test edi, edi
    // if (...) GOTO(0x4ab236)
    // and dword ptr [edi], 0
    // mov eax, dword ptr [ebp + 0x14]
    // pop edi
    // pop esi
    // pop ebx
    // inc dword ptr [eax]
    // pop ebp
    // return;
    // push ecx
    // push ecx
    // mov eax, dword ptr [0x840c64]
    // push ebx
    // push ebp
    // mov ebp, dword ptr [0x4ba048]
    // push esi
    // push edi
    // xor ebx, ebx
    // xor esi, esi
    // xor edi, edi
    // cmp eax, ebx
    // if (...) GOTO(0x4ab28e)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab26f)
    // mov dword ptr [0x840c64], 1
    // if (...) GOTO(0x4ab297)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // mov dword ptr [0x840c64], 2
    // if (...) GOTO(0x4ab31d)
    // cmp eax, 1
    // if (...) GOTO(0x4ab318)
    // cmp esi, ebx
    // if (...) GOTO(0x4ab2a7)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp word ptr [esi], bx
    // mov eax, esi
    // if (...) GOTO(0x4ab2bc)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // sub eax, esi
    // mov edi, dword ptr [0x4ba104]
    // sar eax, 1
    // push ebx
    // push ebx
    // inc eax
    // push ebx
    // push ebx
    // push eax
    // push esi
    // push ebx
    // push ebx
    // mov dword ptr [esp + 0x34], eax
    // CALL(edi)
    // mov ebp, eax
    // cmp ebp, ebx
    // if (...) GOTO(0x4ab30d)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, ebx
    // pop ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4ab30d)
    // push ebx
    // push ebx
    // push ebp
    // push eax
    // push dword ptr [esp + 0x24]
    // push esi
    // push ebx
    // push ebx
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x4ab309)
    // push dword ptr [esp + 0x10]
    // CALL(0x4a5007)
    // pop ecx
    // mov dword ptr [esp + 0x10], ebx
    // mov ebx, dword ptr [esp + 0x10]
    // push esi
    // CALL(dword)
    // mov eax, ebx
    // if (...) GOTO(0x4ab36b)
    // cmp eax, 2
    // if (...) GOTO(0x4ab369)
    // cmp edi, ebx
    // if (...) GOTO(0x4ab32d)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp byte ptr [edi], bl
    // mov eax, edi
    // if (...) GOTO(0x4ab33d)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // sub eax, edi
    // inc eax
    // mov ebp, eax
    // push ebp
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // cmp esi, ebx
    // if (...) GOTO(0x4ab353)
    // xor esi, esi
    // if (...) GOTO(0x4ab35e)
    // push ebp
    // push edi
    // push esi
    // CALL(0x4aa6c0)
    // add esp, 0xc
    // push edi
    // CALL(dword)
    // mov eax, esi
    // if (...) GOTO(0x4ab36b)
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // pop ecx
    // return;
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab389)
    // test eax, eax
    // if (...) GOTO(0x4ab3aa)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab3aa)
    // push(0xfc)
    // CALL(0x4ab3ab)
    // mov eax, dword ptr [0x840c68]
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4ab39f)
    // CALL(eax)
    // push(0xff)
    // CALL(0x4ab3ab)
    // pop ecx
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x1a4
    // mov edx, dword ptr [ebp + 8]
    // xor ecx, ecx
    // mov eax, 0x4e53c0
    // cmp edx, dword ptr [eax]
    // if (...) GOTO(0x4ab3cd)
    // add eax, 8
    // inc ecx
    // cmp eax, 0x4e5450
    // if (...) GOTO(0x4ab3be)
    // push esi
    // mov esi, ecx
    // shl esi, 3
    // cmp edx, dword ptr [esi + 0x4e53c0]
    // if (...) GOTO(0x4ab4fb)
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab4d5)
    // test eax, eax
    // if (...) GOTO(0x4ab3fe)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab4d5)
    // cmp edx, 0xfc
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp - 0x1a4]
    // push(0x104)
    // push eax
    // push 0
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4ab435)
    // lea eax, [ebp - 0x1a4]
    // push(0x4bc89c)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // pop ecx
    // pop ecx
    // lea eax, [ebp - 0x1a4]
    // push edi
    // push eax
    // lea edi, [ebp - 0x1a4]
    // CALL(0x4abdf0)
    // inc eax
    // pop ecx
    // cmp eax, 0x3c
    // jbe 0x4ab478
    // lea eax, [ebp - 0x1a4]
    // push eax
    // CALL(0x4abdf0)
    // mov edi, eax
    // lea eax, [ebp - 0x1a4]
    // sub eax, 0x3b
    // push 3
    // add edi, eax
    // push(0x4c5db4)  // ptr?
    // push edi
    // CALL(0x4a6c80)
    // add esp, 0x10
    // lea eax, [ebp - 0xa0]
    // push(0x4bc880)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // lea eax, [ebp - 0xa0]
    // push edi
    // push eax
    // CALL(0x4abcb0)
    // lea eax, [ebp - 0xa0]
    // push(0x4bc87c)  // ptr?
    // push eax
    // CALL(0x4abcb0)
    // push dword ptr [esi + 0x4e53c4]
    // lea eax, [ebp - 0xa0]
    // push eax
    // CALL(0x4abcb0)
    // push(0x12010)  // ptr?
    // lea eax, [ebp - 0xa0]
    // push(0x4bc854)  // ptr?
    // push eax
    // CALL(0x4ac8d8)
    // add esp, 0x2c
    // pop edi
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp + 8]
    // lea esi, [esi + 0x4e53c4]
    // push 0
    // push eax
    // push dword ptr [esi]
    // CALL(0x4abdf0)
    // pop ecx
    // push eax
    // push dword ptr [esi]
    // push -0xc
    // CALL(dword)
    // push eax
    // CALL(dword)
    // pop esi
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 0x10]
    // or ecx, eax
    // mov ecx, dword ptr [esp + 0xc]
    // if (...) GOTO(0x4ab519)
    // mov eax, dword ptr [esp + 4]
    // mul ecx
    // return;
    // push ebx
    // mul ecx
    // mov ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul dword ptr [esp + 0x14]
    // add ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul ecx
    // add edx, ebx
    // pop ebx
    // return;
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // imul esi, dword ptr [esp + 0x14]
    // cmp esi, -0x20
    // mov ebx, esi
    // if (...) GOTO(0x4ab554)
    // test esi, esi
    // if (...) GOTO(0x4ab54e)
    // push 1
    // pop esi
    // add esi, 0xf
    // and esi, 0xfffffff0
    // xor edi, edi
    // cmp esi, -0x20
    // if (...) GOTO(0x4ab595)
    // cmp ebx, dword ptr [0x4e4bdc]
    // if (...) GOTO(0x4ab580)
    // push 9
    // CALL(0x4a79b2)
    // push ebx
    // CALL(0x4a7dbc)
    // push 9
    // mov edi, eax
    // CALL(0x4a7a13)
    // add esp, 0xc
    // test edi, edi
    // if (...) GOTO(0x4ab5ab)
    // push esi
    // push 8
    // push dword ptr [0x84215c]
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x4ab5b7)
    // cmp dword ptr [0x840b18], 0
    // if (...) GOTO(0x4ab5b7)
    // push esi
    // CALL(0x4a8567)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab5bd)
    // if (...) GOTO(0x4ab554)
    // push ebx
    // push 0
    // push edi
    // CALL(0x4abd90)
    // add esp, 0xc
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // xor eax, eax
    // if (...) GOTO(0x4ab5b9)
    // push ebp
    // mov ebp, esp
    // push ecx
    // push esi
    // wait 
    // fnstcw word ptr [ebp - 4]
    // push dword ptr [ebp - 4]
    // CALL(0x4ab60c)
    // mov esi, eax
    // mov eax, dword ptr [ebp + 0xc]
    // not eax
    // and esi, eax
    // mov eax, dword ptr [ebp + 8]
    // and eax, dword ptr [ebp + 0xc]
    // or esi, eax
    // push esi
    // CALL(0x4ab69e)
    // pop ecx
    // mov dword ptr [ebp + 0xc], eax
    // pop ecx
    // fldcw word ptr [ebp + 0xc]
    // mov eax, esi
    // pop esi
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // and eax, 0xfff7ffff
    // push eax
    // push dword ptr [esp + 8]
    // CALL(0x4ab5c1)
    // pop ecx
    // pop ecx
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push ebp
    // test bl, 1
    // push edi
    // if (...) GOTO(0x4ab61d)
    // push(0x10)
    // pop eax
    // test bl, 4
    // if (...) GOTO(0x4ab624)
    // or al, 8
    // test bl, 8
    // if (...) GOTO(0x4ab62b)
    // or al, 4
    // test bl, 0x10
    // if (...) GOTO(0x4ab632)
    // or al, 2
    // test bl, 0x20
    // if (...) GOTO(0x4ab639)
    // or al, 1
    // test bl, 2
    // if (...) GOTO(0x4ab643)
    // or eax, 0x80000
    // movzx ecx, bx
    // push esi
    // mov edx, ecx
    // mov esi, 0xc00
    // mov edi, 0x300
    // and edx, esi
    // mov ebp, 0x200
    // if (...) GOTO(0x4ab67b)
    // cmp edx, 0x400
    // if (...) GOTO(0x4ab678)
    // cmp edx, 0x800
    // if (...) GOTO(0x4ab674)
    // cmp edx, esi
    // if (...) GOTO(0x4ab67b)
    // or eax, edi
    // if (...) GOTO(0x4ab67b)
    // or eax, ebp
    // if (...) GOTO(0x4ab67b)
    // or ah, 1
    // and ecx, edi
    // pop esi
    // if (...) GOTO(0x4ab68b)
    // cmp ecx, ebp
    // if (...) GOTO(0x4ab690)
    // or eax, 0x10000
    // if (...) GOTO(0x4ab690)
    // or eax, 0x20000
    // pop edi
    // pop ebp
    // test bh, 0x10
    // pop ebx
    // if (...) GOTO(0x4ab69d)
    // or eax, 0x40000
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push esi
    // test bl, 0x10
    // if (...) GOTO(0x4ab6ae)
    // push 1
    // pop eax
    // test bl, 8
    // if (...) GOTO(0x4ab6b5)
    // or al, 4
    // test bl, 4
    // if (...) GOTO(0x4ab6bc)
    // or al, 8
    // test bl, 2
    // if (...) GOTO(0x4ab6c3)
    // or al, 0x10
    // test bl, 1
    // if (...) GOTO(0x4ab6ca)
    // or al, 0x20
    // test ebx, 0x80000
    // if (...) GOTO(0x4ab6d4)
    // or al, 2
    // mov ecx, ebx
    // mov edx, 0x300
    // and ecx, edx
    // mov esi, 0x200
    // if (...) GOTO(0x4ab701)
    // cmp ecx, 0x100
    // if (...) GOTO(0x4ab6fe)
    // cmp ecx, esi
    // if (...) GOTO(0x4ab6f9)
    // cmp ecx, edx
    // if (...) GOTO(0x4ab701)
    // or ah, 0xc
    // if (...) GOTO(0x4ab701)
    // or ah, 8
    // if (...) GOTO(0x4ab701)
    // or ah, 4
    // mov ecx, ebx
    // and ecx, 0x30000
    // if (...) GOTO(0x4ab717)
    // cmp ecx, 0x10000
    // if (...) GOTO(0x4ab719)
    // or eax, esi
    // if (...) GOTO(0x4ab719)
    // or eax, edx
    // pop esi
    // test ebx, 0x40000
    // pop ebx
    // if (...) GOTO(0x4ab726)
    // or ah, 0x10
    // return;
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push(0x20)
    // cdq 
    // pop ecx
    // idiv ecx
    // push(0x1f)
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x10]
    // cdq 
    // idiv ecx
    // pop ecx
    // mov eax, dword ptr [esp + 8]
    // sub ecx, edx
    // or edx, 0xffffffff
    // shl edx, cl
    // not edx
    // test dword ptr [eax + esi*4], edx
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // cmp esi, 3
    // if (...) GOTO(0x4ab767)
    // lea eax, [eax + esi*4]
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // add eax, 4
    // cmp esi, 3
    // if (...) GOTO(0x4ab759)
    // push 1
    // pop eax
    // pop esi
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 8]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov ebx, dword ptr [esp + 0x14]
    // cdq 
    // pop ecx
    // idiv ecx
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x14]
    // cdq 
    // idiv ecx
    // lea edi, [ebx + esi*4]
    // push edi
    // push(0x1f)
    // pop ecx
    // push 1
    // pop eax
    // sub ecx, edx
    // shl eax, cl
    // push eax
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // js 0x4ab7c2
    // lea edi, [ebx + esi*4]
    // test eax, eax
    // if (...) GOTO(0x4ab7c2)
    // push edi
    // push 1
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // sub edi, 4
    // test esi, esi
    // if (...) GOTO(0x4ab7a9)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // lea edi, [eax - 1]
    // push(0x20)
    // pop ecx
    // and dword ptr [ebp - 4], 0
    // lea ebx, [edi + 1]
    // push(0x20)
    // mov eax, ebx
    // pop esi
    // cdq 
    // idiv ecx
    // push(0x1f)
    // mov ecx, eax
    // mov eax, ebx
    // cdq 
    // idiv esi
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // push 1
    // mov dword ptr [ebp - 8], ecx
    // lea eax, [eax + ecx*4]
    // mov dword ptr [ebp + 0xc], eax
    // sub esi, edx
    // pop edx
    // mov ecx, esi
    // shl edx, cl
    // test dword ptr [eax], edx
    // if (...) GOTO(0x4ab82a)
    // inc ebx
    // push ebx
    // push dword ptr [ebp + 8]
    // CALL(0x4ab727)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab827)
    // push edi
    // push dword ptr [ebp + 8]
    // CALL(0x4ab770)
    // pop ecx
    // mov dword ptr [ebp - 4], eax
    // pop ecx
    // mov eax, dword ptr [ebp + 0xc]
    // or edx, 0xffffffff
    // mov ecx, esi
    // shl edx, cl
    // push 3
    // pop ecx
    // and dword ptr [eax], edx
    // mov eax, dword ptr [ebp - 8]
    // inc eax
    // cmp eax, ecx
    // if (...) GOTO(0x4ab84a)
    // mov edx, dword ptr [ebp + 8]
    // sub ecx, eax
    // lea edi, [edx + eax*4]
    // xor eax, eax
    // rep stosd dword ptr es:[edi], eax
    // mov eax, dword ptr [ebp - 4]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // push 3
    // sub ecx, eax
    // pop edx
    // mov esi, dword ptr [eax]
    // mov dword ptr [ecx + eax], esi
    // add eax, 4
    // dec edx
    // if (...) GOTO(0x4ab860)
    // pop esi
    // return;
    // push edi
    // mov edi, dword ptr [esp + 8]
    // xor eax, eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // pop edi
    // return;
    // mov eax, dword ptr [esp + 4]
    // xor ecx, ecx
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab891)
    // inc ecx
    // add eax, 4
    // cmp ecx, 3
    // if (...) GOTO(0x4ab87f)
    // push 1
    // pop eax
    // return;
    // xor eax, eax
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov edi, dword ptr [ebp + 8]
    // pop ebx
    // or esi, 0xffffffff
    // cdq 
    // mov ecx, ebx
    // mov dword ptr [ebp - 4], 3
    // idiv ecx
    // mov dword ptr [ebp - 0xc], eax
    // mov eax, dword ptr [ebp + 0xc]
    // cdq 
    // idiv ecx
    // and dword ptr [ebp + 0xc], 0
    // mov ecx, edx
    // shl esi, cl
    // sub ebx, edx
    // not esi
    // mov eax, dword ptr [edi]
    // mov ecx, eax
    // and ecx, esi
    // mov dword ptr [ebp - 8], ecx
    // mov ecx, edx
    // shr eax, cl
    // or eax, dword ptr [ebp + 0xc]
    // mov dword ptr [edi], eax
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, ebx
    // add edi, 4
    // shl eax, cl
    // dec dword ptr [ebp - 4]
    // mov dword ptr [ebp + 0xc], eax
    // if (...) GOTO(0x4ab8ca)
    // mov edi, dword ptr [ebp - 0xc]
    // push 2
    // pop ebx
    // mov esi, edi
    // push 8
    // pop ecx
    // shl esi, 2
    // cmp ebx, edi
    // if (...) GOTO(0x4ab90f)
    // mov edx, dword ptr [ebp + 8]
    // mov eax, ecx
    // sub eax, esi
    // mov eax, dword ptr [eax + edx]
    // mov dword ptr [ecx + edx], eax
    // if (...) GOTO(0x4ab916)
    // mov eax, dword ptr [ebp + 8]
    // and dword ptr [ecx + eax], 0
    // dec ebx
    // sub ecx, 4
    // jns 0x4ab8fc
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x18
    // mov eax, dword ptr [ebp + 8]
    // push ebx
    // push esi
    // push edi
    // movzx ecx, word ptr [eax + 0xa]
    // mov ebx, ecx
    // and ecx, 0x8000
    // mov dword ptr [ebp + 8], ecx
    // mov ecx, dword ptr [eax + 6]
    // mov dword ptr [ebp - 0xc], ecx
    // mov ecx, dword ptr [eax + 2]
    // movzx eax, word ptr [eax]
    // mov edi, dword ptr [ebp + 0x10]
    // and ebx, 0x7fff
    // sub ebx, 0x3fff
    // mov dword ptr [ebp - 8], ecx
    // shl eax, 0x10
    // cmp ebx, 0xffffc001
    // mov dword ptr [ebp - 4], eax
    // if (...) GOTO(0x4ab98e)
    // lea eax, [ebp - 0xc]
    // xor esi, esi
    // push eax
    // CALL(0x4ab879)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aba4d)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // push 2
    // pop eax
    // if (...) GOTO(0x4aba4f)
    // lea eax, [ebp - 0xc]
    // push eax
    // lea eax, [ebp - 0x18]
    // push eax
    // CALL(0x4ab852)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // add esp, 0x10
    // test eax, eax
    // if (...) GOTO(0x4ab9af)
    // inc ebx
    // mov eax, dword ptr [edi + 4]
    // mov ecx, eax
    // sub ecx, dword ptr [edi + 8]
    // cmp ebx, ecx
    // if (...) GOTO(0x4ab9c7)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // if (...) GOTO(0x4aba03)
    // cmp ebx, eax
    // if (...) GOTO(0x4aba0a)
    // sub eax, ebx
    // mov esi, eax
    // lea eax, [ebp - 0x18]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab852)
    // lea eax, [ebp - 0xc]
    // push esi
    // push eax
    // CALL(0x4ab894)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // mov eax, dword ptr [edi + 0xc]
    // inc eax
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // add esp, 0x20
    // xor esi, esi
    // if (...) GOTO(0x4ab986)
    // cmp ebx, dword ptr [edi]
    // if (...) GOTO(0x4aba36)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // push dword ptr [edi + 0xc]
    // or byte ptr [ebp - 9], 0x80
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // mov esi, dword ptr [edi + 0x14]
    // add esp, 0xc
    // add esi, dword ptr [edi]
    // push 1
    // if (...) GOTO(0x4ab988)
    // push dword ptr [edi + 0xc]
    // mov esi, dword ptr [edi + 0x14]
    // and byte ptr [ebp - 9], 0x7f
    // lea eax, [ebp - 0xc]
    // push eax
    // add esi, ebx
    // CALL(0x4ab894)
    // pop ecx
    // pop ecx
    // xor eax, eax
    // push(0x1f)
    // pop ecx
    // sub ecx, dword ptr [edi + 0xc]
    // mov edi, dword ptr [edi + 0x10]
    // shl esi, cl
    // mov ecx, dword ptr [ebp + 8]
    // neg ecx
    // sbb ecx, ecx
    // and ecx, 0x80000000
    // or esi, ecx
    // or esi, dword ptr [ebp - 0xc]
    // cmp edi, 0x40
    // if (...) GOTO(0x4aba7e)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ebp - 8]
    // mov dword ptr [ecx + 4], esi
    // mov dword ptr [ecx], edx
    // if (...) GOTO(0x4aba88)
    // cmp edi, 0x20
    // if (...) GOTO(0x4aba88)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov dword ptr [ecx], esi
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push(0x4e5568)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push(0x4e5580)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4aba8d)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abaa3)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov edx, dword ptr [ebp + 0x10]
    // push ebx
    // mov ebx, dword ptr [ebp + 0xc]
    // push esi
    // mov esi, dword ptr [ebp + 8]
    // mov ecx, dword ptr [edx + 0xc]
    // push edi
    // lea edi, [esi + 1]
    // mov byte ptr [esi], 0x30
    // test ebx, ebx
    // mov eax, edi
    // if (...) GOTO(0x4abb50)
    // mov dword ptr [ebp + 8], ebx
    // xor ebx, ebx
    // mov dl, byte ptr [ecx]
    // test dl, dl
    // if (...) GOTO(0x4abb42)
    // movsx edx, dl
    // inc ecx
    // if (...) GOTO(0x4abb45)
    // push(0x30)
    // pop edx
    // mov byte ptr [eax], dl
    // inc eax
    // dec dword ptr [ebp + 8]
    // if (...) GOTO(0x4abb36)
    // mov edx, dword ptr [ebp + 0x10]
    // and byte ptr [eax], 0
    // test ebx, ebx
    // if (...) GOTO(0x4abb69)
    // cmp byte ptr [ecx], 0x35
    // if (...) GOTO(0x4abb69)
    // dec eax
    // cmp byte ptr [eax], 0x39
    // if (...) GOTO(0x4abb67)
    // mov byte ptr [eax], 0x30
    // if (...) GOTO(0x4abb5c)
    // inc byte ptr [eax]
    // cmp byte ptr [esi], 0x31
    // if (...) GOTO(0x4abb73)
    // inc dword ptr [edx + 4]
    // if (...) GOTO(0x4abb85)
    // push edi
    // CALL(0x4abdf0)
    // inc eax
    // push eax
    // push edi
    // push esi
    // CALL(0x4a6d80)
    // add esp, 0x10
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x28
    // push esi
    // lea eax, [ebp + 8]
    // push edi
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abbe6)
    // pop ecx
    // lea eax, [ebp - 0x28]
    // pop ecx
    // lea esi, [ebp - 0xc]
    // push eax
    // push 0
    // push(0x11)
    // sub esp, 0xc
    // mov edi, esp
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsw word ptr es:[edi], word ptr [esi]
    // CALL(0x4ad192)
    // mov esi, dword ptr [ebp + 0x10]
    // mov edi, dword ptr [ebp + 0x14]
    // mov dword ptr [esi + 8], eax
    // movsx eax, byte ptr [ebp - 0x26]
    // mov dword ptr [esi], eax
    // movsx eax, word ptr [ebp - 0x28]
    // mov dword ptr [esi + 4], eax
    // lea eax, [ebp - 0x24]
    // push eax
    // push edi
    // CALL(0x4abca0)
    // add esp, 0x20
    // mov dword ptr [esi + 0xc], edi
    // mov eax, esi
    // pop edi
    // pop esi
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // mov edx, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // mov ax, word ptr [edx + 6]
    // mov edi, 0x7ff
    // mov ecx, eax
    // and eax, 0x8000
    // shr ecx, 4
    // and ecx, edi
    // mov dword ptr [ebp + 0xc], eax
    // mov eax, dword ptr [edx + 4]
    // mov edx, dword ptr [edx]
    // movzx ebx, cx
    // mov esi, 0x80000000
    // and eax, 0xfffff
    // test ebx, ebx
    // mov dword ptr [ebp - 4], esi
    // if (...) GOTO(0x4abc34)
    // cmp ebx, edi
    // if (...) GOTO(0x4abc2d)
    // lea edi, [ecx + 0x3c00]
    // if (...) GOTO(0x4abc55)
    // mov edi, 0x7fff
    // if (...) GOTO(0x4abc55)
    // xor ebx, ebx
    // cmp eax, ebx
    // if (...) GOTO(0x4abc4c)
    // cmp edx, ebx
    // if (...) GOTO(0x4abc4c)
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [eax + 4], ebx
    // mov dword ptr [eax], ebx
    // mov word ptr [eax + 8], bx
    // if (...) GOTO(0x4abc97)
    // lea edi, [ecx + 0x3c01]
    // mov dword ptr [ebp - 4], ebx
    // mov ecx, edx
    // shr ecx, 0x15
    // shl eax, 0xb
    // or ecx, eax
    // mov eax, dword ptr [ebp + 8]
    // or ecx, dword ptr [ebp - 4]
    // shl edx, 0xb
    // mov dword ptr [eax + 4], ecx
    // mov dword ptr [eax], edx
    // test esi, ecx
    // if (...) GOTO(0x4abc8e)
    // mov edx, dword ptr [eax]
    // add ecx, ecx
    // mov ebx, edx
    // shr ebx, 0x1f
    // or ebx, ecx
    // lea ecx, [edx + edx]
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 4], ebx
    // add edi, 0xffff
    // mov ecx, ebx
    // if (...) GOTO(0x4abc6d)
    // mov ecx, dword ptr [ebp + 0xc]
    // or ecx, edi
    // mov word ptr [eax + 8], cx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // push ebx
    // xor ebx, ebx
    // cmp dword ptr [0x842168], ebx
    // push esi
    // push edi
    // if (...) GOTO(0x4ab00a)
    // CALL(0x4ac8bc)
    // mov esi, 0x840b60
    // push(0x104)
    // push esi
    // push ebx
    // CALL(dword)
    // mov eax, dword ptr [0x842160]
    // mov dword ptr [0x840a98], esi
    // mov edi, esi
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab02f)
    // mov edi, eax
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // push ebx
    // push ebx
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, dword ptr [ebp - 4]
    // lea eax, [eax + ecx*4]
    // push eax
    // CALL(0x4a504f)
    // mov esi, eax
    // add esp, 0x18
    // cmp esi, ebx
    // if (...) GOTO(0x4ab05f)
    // push 8
    // CALL(0x4a6937)
    // pop ecx
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // mov eax, dword ptr [ebp - 4]
    // lea eax, [esi + eax*4]
    // push eax
    // push esi
    // push edi
    // CALL(0x4ab08c)
    // mov eax, dword ptr [ebp - 4]
    // add esp, 0x14
    // dec eax
    // mov dword ptr [0x840a80], esi
    // pop edi
    // pop esi
    // mov dword ptr [0x840a7c], eax
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov ecx, dword ptr [ebp + 0x18]
    // mov eax, dword ptr [ebp + 0x14]
    // push ebx
    // push esi
    // and dword ptr [ecx], 0
    // mov esi, dword ptr [ebp + 0x10]
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // mov dword ptr [eax], 1
    // mov eax, dword ptr [ebp + 8]
    // test edi, edi
    // if (...) GOTO(0x4ab0b6)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab0ff)
    // mov dl, byte ptr [eax + 1]
    // inc eax
    // cmp dl, 0x22
    // if (...) GOTO(0x4ab0ed)
    // test dl, dl
    // if (...) GOTO(0x4ab0ed)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab0e0)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0e0)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0bb)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab0bb)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab0f7)
    // and byte ptr [esi], 0
    // inc esi
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab142)
    // inc eax
    // if (...) GOTO(0x4ab142)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab10a)
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // mov dl, byte ptr [eax]
    // inc eax
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab125)
    // inc dword ptr [ecx]
    // test esi, esi
    // if (...) GOTO(0x4ab124)
    // mov bl, byte ptr [eax]
    // mov byte ptr [esi], bl
    // inc esi
    // inc eax
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab133)
    // test dl, dl
    // if (...) GOTO(0x4ab137)
    // cmp dl, 9
    // if (...) GOTO(0x4ab0ff)
    // test dl, dl
    // if (...) GOTO(0x4ab13a)
    // dec eax
    // if (...) GOTO(0x4ab142)
    // test esi, esi
    // if (...) GOTO(0x4ab142)
    // and byte ptr [esi - 1], 0
    // and dword ptr [ebp + 0x18], 0
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // mov dl, byte ptr [eax]
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab15b)
    // cmp dl, 9
    // if (...) GOTO(0x4ab15e)
    // inc eax
    // if (...) GOTO(0x4ab14f)
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4ab22f)
    // test edi, edi
    // if (...) GOTO(0x4ab173)
    // mov dword ptr [edi], esi
    // add edi, 4
    // mov dword ptr [ebp + 0xc], edi
    // mov edx, dword ptr [ebp + 0x14]
    // inc dword ptr [edx]
    // mov dword ptr [ebp + 8], 1
    // xor ebx, ebx
    // cmp byte ptr [eax], 0x5c
    // if (...) GOTO(0x4ab18a)
    // inc eax
    // inc ebx
    // if (...) GOTO(0x4ab181)
    // cmp byte ptr [eax], 0x22
    // if (...) GOTO(0x4ab1bb)
    // test bl, 1
    // if (...) GOTO(0x4ab1b9)
    // xor edi, edi
    // cmp dword ptr [ebp + 0x18], edi
    // if (...) GOTO(0x4ab1a8)
    // cmp byte ptr [eax + 1], 0x22
    // lea edx, [eax + 1]
    // if (...) GOTO(0x4ab1a8)
    // mov eax, edx
    // if (...) GOTO(0x4ab1ab)
    // mov dword ptr [ebp + 8], edi
    // mov edi, dword ptr [ebp + 0xc]
    // xor edx, edx
    // cmp dword ptr [ebp + 0x18], edx
    // sete dl
    // mov dword ptr [ebp + 0x18], edx
    // shr ebx, 1
    // mov edx, ebx
    // dec ebx
    // test edx, edx
    // if (...) GOTO(0x4ab1d0)
    // inc ebx
    // test esi, esi
    // if (...) GOTO(0x4ab1cb)
    // mov byte ptr [esi], 0x5c
    // inc esi
    // inc dword ptr [ecx]
    // dec ebx
    // if (...) GOTO(0x4ab1c3)
    // mov dl, byte ptr [eax]
    // test dl, dl
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 0x18], 0
    // if (...) GOTO(0x4ab1e6)
    // cmp dl, 0x20
    // if (...) GOTO(0x4ab220)
    // cmp dl, 9
    // if (...) GOTO(0x4ab220)
    // cmp dword ptr [ebp + 8], 0
    // if (...) GOTO(0x4ab21a)
    // test esi, esi
    // if (...) GOTO(0x4ab209)
    // movzx ebx, dl
    // test byte ptr [ebx + 0x840f01], 4
    // if (...) GOTO(0x4ab202)
    // mov byte ptr [esi], dl
    // inc esi
    // inc eax
    // inc dword ptr [ecx]
    // mov dl, byte ptr [eax]
    // mov byte ptr [esi], dl
    // inc esi
    // if (...) GOTO(0x4ab218)
    // movzx edx, dl
    // test byte ptr [edx + 0x840f01], 4
    // if (...) GOTO(0x4ab218)
    // inc eax
    // inc dword ptr [ecx]
    // inc dword ptr [ecx]
    // inc eax
    // if (...) GOTO(0x4ab178)
    // test esi, esi
    // if (...) GOTO(0x4ab228)
    // and byte ptr [esi], 0
    // inc esi
    // inc dword ptr [ecx]
    // if (...) GOTO(0x4ab146)
    // test edi, edi
    // if (...) GOTO(0x4ab236)
    // and dword ptr [edi], 0
    // mov eax, dword ptr [ebp + 0x14]
    // pop edi
    // pop esi
    // pop ebx
    // inc dword ptr [eax]
    // pop ebp
    // return;
    // push ecx
    // push ecx
    // mov eax, dword ptr [0x840c64]
    // push ebx
    // push ebp
    // mov ebp, dword ptr [0x4ba048]
    // push esi
    // push edi
    // xor ebx, ebx
    // xor esi, esi
    // xor edi, edi
    // cmp eax, ebx
    // if (...) GOTO(0x4ab28e)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab26f)
    // mov dword ptr [0x840c64], 1
    // if (...) GOTO(0x4ab297)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // mov dword ptr [0x840c64], 2
    // if (...) GOTO(0x4ab31d)
    // cmp eax, 1
    // if (...) GOTO(0x4ab318)
    // cmp esi, ebx
    // if (...) GOTO(0x4ab2a7)
    // CALL(ebp)
    // mov esi, eax
    // cmp esi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp word ptr [esi], bx
    // mov eax, esi
    // if (...) GOTO(0x4ab2bc)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // inc eax
    // inc eax
    // cmp word ptr [eax], bx
    // if (...) GOTO(0x4ab2ae)
    // sub eax, esi
    // mov edi, dword ptr [0x4ba104]
    // sar eax, 1
    // push ebx
    // push ebx
    // inc eax
    // push ebx
    // push ebx
    // push eax
    // push esi
    // push ebx
    // push ebx
    // mov dword ptr [esp + 0x34], eax
    // CALL(edi)
    // mov ebp, eax
    // cmp ebp, ebx
    // if (...) GOTO(0x4ab30d)
    // push ebp
    // CALL(0x4a504f)
    // cmp eax, ebx
    // pop ecx
    // mov dword ptr [esp + 0x10], eax
    // if (...) GOTO(0x4ab30d)
    // push ebx
    // push ebx
    // push ebp
    // push eax
    // push dword ptr [esp + 0x24]
    // push esi
    // push ebx
    // push ebx
    // CALL(edi)
    // test eax, eax
    // if (...) GOTO(0x4ab309)
    // push dword ptr [esp + 0x10]
    // CALL(0x4a5007)
    // pop ecx
    // mov dword ptr [esp + 0x10], ebx
    // mov ebx, dword ptr [esp + 0x10]
    // push esi
    // CALL(dword)
    // mov eax, ebx
    // if (...) GOTO(0x4ab36b)
    // cmp eax, 2
    // if (...) GOTO(0x4ab369)
    // cmp edi, ebx
    // if (...) GOTO(0x4ab32d)
    // CALL(dword)
    // mov edi, eax
    // cmp edi, ebx
    // if (...) GOTO(0x4ab369)
    // cmp byte ptr [edi], bl
    // mov eax, edi
    // if (...) GOTO(0x4ab33d)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // inc eax
    // cmp byte ptr [eax], bl
    // if (...) GOTO(0x4ab333)
    // sub eax, edi
    // inc eax
    // mov ebp, eax
    // push ebp
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // cmp esi, ebx
    // if (...) GOTO(0x4ab353)
    // xor esi, esi
    // if (...) GOTO(0x4ab35e)
    // push ebp
    // push edi
    // push esi
    // CALL(0x4aa6c0)
    // add esp, 0xc
    // push edi
    // CALL(dword)
    // mov eax, esi
    // if (...) GOTO(0x4ab36b)
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // pop ecx
    // return;
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab389)
    // test eax, eax
    // if (...) GOTO(0x4ab3aa)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab3aa)
    // push(0xfc)
    // CALL(0x4ab3ab)
    // mov eax, dword ptr [0x840c68]
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4ab39f)
    // CALL(eax)
    // push(0xff)
    // CALL(0x4ab3ab)
    // pop ecx
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x1a4
    // mov edx, dword ptr [ebp + 8]
    // xor ecx, ecx
    // mov eax, 0x4e53c0
    // cmp edx, dword ptr [eax]
    // if (...) GOTO(0x4ab3cd)
    // add eax, 8
    // inc ecx
    // cmp eax, 0x4e5450
    // if (...) GOTO(0x4ab3be)
    // push esi
    // mov esi, ecx
    // shl esi, 3
    // cmp edx, dword ptr [esi + 0x4e53c0]
    // if (...) GOTO(0x4ab4fb)
    // mov eax, dword ptr [0x840ab4]
    // cmp eax, 1
    // if (...) GOTO(0x4ab4d5)
    // test eax, eax
    // if (...) GOTO(0x4ab3fe)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4ab4d5)
    // cmp edx, 0xfc
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp - 0x1a4]
    // push(0x104)
    // push eax
    // push 0
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4ab435)
    // lea eax, [ebp - 0x1a4]
    // push(0x4bc89c)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // pop ecx
    // pop ecx
    // lea eax, [ebp - 0x1a4]
    // push edi
    // push eax
    // lea edi, [ebp - 0x1a4]
    // CALL(0x4abdf0)
    // inc eax
    // pop ecx
    // cmp eax, 0x3c
    // jbe 0x4ab478
    // lea eax, [ebp - 0x1a4]
    // push eax
    // CALL(0x4abdf0)
    // mov edi, eax
    // lea eax, [ebp - 0x1a4]
    // sub eax, 0x3b
    // push 3
    // add edi, eax
    // push(0x4c5db4)  // ptr?
    // push edi
    // CALL(0x4a6c80)
    // add esp, 0x10
    // lea eax, [ebp - 0xa0]
    // push(0x4bc880)  // ptr?
    // push eax
    // CALL(0x4abca0)
    // lea eax, [ebp - 0xa0]
    // push edi
    // push eax
    // CALL(0x4abcb0)
    // lea eax, [ebp - 0xa0]
    // push(0x4bc87c)  // ptr?
    // push eax
    // CALL(0x4abcb0)
    // push dword ptr [esi + 0x4e53c4]
    // lea eax, [ebp - 0xa0]
    // push eax
    // CALL(0x4abcb0)
    // push(0x12010)  // ptr?
    // lea eax, [ebp - 0xa0]
    // push(0x4bc854)  // ptr?
    // push eax
    // CALL(0x4ac8d8)
    // add esp, 0x2c
    // pop edi
    // if (...) GOTO(0x4ab4fb)
    // lea eax, [ebp + 8]
    // lea esi, [esi + 0x4e53c4]
    // push 0
    // push eax
    // push dword ptr [esi]
    // CALL(0x4abdf0)
    // pop ecx
    // push eax
    // push dword ptr [esi]
    // push -0xc
    // CALL(dword)
    // push eax
    // CALL(dword)
    // pop esi
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 0x10]
    // or ecx, eax
    // mov ecx, dword ptr [esp + 0xc]
    // if (...) GOTO(0x4ab519)
    // mov eax, dword ptr [esp + 4]
    // mul ecx
    // return;
    // push ebx
    // mul ecx
    // mov ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul dword ptr [esp + 0x14]
    // add ebx, eax
    // mov eax, dword ptr [esp + 8]
    // mul ecx
    // add edx, ebx
    // pop ebx
    // return;
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // imul esi, dword ptr [esp + 0x14]
    // cmp esi, -0x20
    // mov ebx, esi
    // if (...) GOTO(0x4ab554)
    // test esi, esi
    // if (...) GOTO(0x4ab54e)
    // push 1
    // pop esi
    // add esi, 0xf
    // and esi, 0xfffffff0
    // xor edi, edi
    // cmp esi, -0x20
    // if (...) GOTO(0x4ab595)
    // cmp ebx, dword ptr [0x4e4bdc]
    // if (...) GOTO(0x4ab580)
    // push 9
    // CALL(0x4a79b2)
    // push ebx
    // CALL(0x4a7dbc)
    // push 9
    // mov edi, eax
    // CALL(0x4a7a13)
    // add esp, 0xc
    // test edi, edi
    // if (...) GOTO(0x4ab5ab)
    // push esi
    // push 8
    // push dword ptr [0x84215c]
    // CALL(dword)
    // mov edi, eax
    // test edi, edi
    // if (...) GOTO(0x4ab5b7)
    // cmp dword ptr [0x840b18], 0
    // if (...) GOTO(0x4ab5b7)
    // push esi
    // CALL(0x4a8567)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab5bd)
    // if (...) GOTO(0x4ab554)
    // push ebx
    // push 0
    // push edi
    // CALL(0x4abd90)
    // add esp, 0xc
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // xor eax, eax
    // if (...) GOTO(0x4ab5b9)
    // push ebp
    // mov ebp, esp
    // push ecx
    // push esi
    // wait 
    // fnstcw word ptr [ebp - 4]
    // push dword ptr [ebp - 4]
    // CALL(0x4ab60c)
    // mov esi, eax
    // mov eax, dword ptr [ebp + 0xc]
    // not eax
    // and esi, eax
    // mov eax, dword ptr [ebp + 8]
    // and eax, dword ptr [ebp + 0xc]
    // or esi, eax
    // push esi
    // CALL(0x4ab69e)
    // pop ecx
    // mov dword ptr [ebp + 0xc], eax
    // pop ecx
    // fldcw word ptr [ebp + 0xc]
    // mov eax, esi
    // pop esi
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // and eax, 0xfff7ffff
    // push eax
    // push dword ptr [esp + 8]
    // CALL(0x4ab5c1)
    // pop ecx
    // pop ecx
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push ebp
    // test bl, 1
    // push edi
    // if (...) GOTO(0x4ab61d)
    // push(0x10)
    // pop eax
    // test bl, 4
    // if (...) GOTO(0x4ab624)
    // or al, 8
    // test bl, 8
    // if (...) GOTO(0x4ab62b)
    // or al, 4
    // test bl, 0x10
    // if (...) GOTO(0x4ab632)
    // or al, 2
    // test bl, 0x20
    // if (...) GOTO(0x4ab639)
    // or al, 1
    // test bl, 2
    // if (...) GOTO(0x4ab643)
    // or eax, 0x80000
    // movzx ecx, bx
    // push esi
    // mov edx, ecx
    // mov esi, 0xc00
    // mov edi, 0x300
    // and edx, esi
    // mov ebp, 0x200
    // if (...) GOTO(0x4ab67b)
    // cmp edx, 0x400
    // if (...) GOTO(0x4ab678)
    // cmp edx, 0x800
    // if (...) GOTO(0x4ab674)
    // cmp edx, esi
    // if (...) GOTO(0x4ab67b)
    // or eax, edi
    // if (...) GOTO(0x4ab67b)
    // or eax, ebp
    // if (...) GOTO(0x4ab67b)
    // or ah, 1
    // and ecx, edi
    // pop esi
    // if (...) GOTO(0x4ab68b)
    // cmp ecx, ebp
    // if (...) GOTO(0x4ab690)
    // or eax, 0x10000
    // if (...) GOTO(0x4ab690)
    // or eax, 0x20000
    // pop edi
    // pop ebp
    // test bh, 0x10
    // pop ebx
    // if (...) GOTO(0x4ab69d)
    // or eax, 0x40000
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 8]
    // xor eax, eax
    // push esi
    // test bl, 0x10
    // if (...) GOTO(0x4ab6ae)
    // push 1
    // pop eax
    // test bl, 8
    // if (...) GOTO(0x4ab6b5)
    // or al, 4
    // test bl, 4
    // if (...) GOTO(0x4ab6bc)
    // or al, 8
    // test bl, 2
    // if (...) GOTO(0x4ab6c3)
    // or al, 0x10
    // test bl, 1
    // if (...) GOTO(0x4ab6ca)
    // or al, 0x20
    // test ebx, 0x80000
    // if (...) GOTO(0x4ab6d4)
    // or al, 2
    // mov ecx, ebx
    // mov edx, 0x300
    // and ecx, edx
    // mov esi, 0x200
    // if (...) GOTO(0x4ab701)
    // cmp ecx, 0x100
    // if (...) GOTO(0x4ab6fe)
    // cmp ecx, esi
    // if (...) GOTO(0x4ab6f9)
    // cmp ecx, edx
    // if (...) GOTO(0x4ab701)
    // or ah, 0xc
    // if (...) GOTO(0x4ab701)
    // or ah, 8
    // if (...) GOTO(0x4ab701)
    // or ah, 4
    // mov ecx, ebx
    // and ecx, 0x30000
    // if (...) GOTO(0x4ab717)
    // cmp ecx, 0x10000
    // if (...) GOTO(0x4ab719)
    // or eax, esi
    // if (...) GOTO(0x4ab719)
    // or eax, edx
    // pop esi
    // test ebx, 0x40000
    // pop ebx
    // if (...) GOTO(0x4ab726)
    // or ah, 0x10
    // return;
    // mov eax, dword ptr [esp + 8]
    // push esi
    // push(0x20)
    // cdq 
    // pop ecx
    // idiv ecx
    // push(0x1f)
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x10]
    // cdq 
    // idiv ecx
    // pop ecx
    // mov eax, dword ptr [esp + 8]
    // sub ecx, edx
    // or edx, 0xffffffff
    // shl edx, cl
    // not edx
    // test dword ptr [eax + esi*4], edx
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // cmp esi, 3
    // if (...) GOTO(0x4ab767)
    // lea eax, [eax + esi*4]
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab76c)
    // inc esi
    // add eax, 4
    // cmp esi, 3
    // if (...) GOTO(0x4ab759)
    // push 1
    // pop eax
    // pop esi
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 8]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov ebx, dword ptr [esp + 0x14]
    // cdq 
    // pop ecx
    // idiv ecx
    // mov esi, eax
    // mov eax, dword ptr [esp + 0x14]
    // cdq 
    // idiv ecx
    // lea edi, [ebx + esi*4]
    // push edi
    // push(0x1f)
    // pop ecx
    // push 1
    // pop eax
    // sub ecx, edx
    // shl eax, cl
    // push eax
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // js 0x4ab7c2
    // lea edi, [ebx + esi*4]
    // test eax, eax
    // if (...) GOTO(0x4ab7c2)
    // push edi
    // push 1
    // push dword ptr [edi]
    // CALL(0x4acb20)
    // add esp, 0xc
    // dec esi
    // sub edi, 4
    // test esi, esi
    // if (...) GOTO(0x4ab7a9)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // lea edi, [eax - 1]
    // push(0x20)
    // pop ecx
    // and dword ptr [ebp - 4], 0
    // lea ebx, [edi + 1]
    // push(0x20)
    // mov eax, ebx
    // pop esi
    // cdq 
    // idiv ecx
    // push(0x1f)
    // mov ecx, eax
    // mov eax, ebx
    // cdq 
    // idiv esi
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // push 1
    // mov dword ptr [ebp - 8], ecx
    // lea eax, [eax + ecx*4]
    // mov dword ptr [ebp + 0xc], eax
    // sub esi, edx
    // pop edx
    // mov ecx, esi
    // shl edx, cl
    // test dword ptr [eax], edx
    // if (...) GOTO(0x4ab82a)
    // inc ebx
    // push ebx
    // push dword ptr [ebp + 8]
    // CALL(0x4ab727)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4ab827)
    // push edi
    // push dword ptr [ebp + 8]
    // CALL(0x4ab770)
    // pop ecx
    // mov dword ptr [ebp - 4], eax
    // pop ecx
    // mov eax, dword ptr [ebp + 0xc]
    // or edx, 0xffffffff
    // mov ecx, esi
    // shl edx, cl
    // push 3
    // pop ecx
    // and dword ptr [eax], edx
    // mov eax, dword ptr [ebp - 8]
    // inc eax
    // cmp eax, ecx
    // if (...) GOTO(0x4ab84a)
    // mov edx, dword ptr [ebp + 8]
    // sub ecx, eax
    // lea edi, [edx + eax*4]
    // xor eax, eax
    // rep stosd dword ptr es:[edi], eax
    // mov eax, dword ptr [ebp - 4]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [esp + 8]
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // push 3
    // sub ecx, eax
    // pop edx
    // mov esi, dword ptr [eax]
    // mov dword ptr [ecx + eax], esi
    // add eax, 4
    // dec edx
    // if (...) GOTO(0x4ab860)
    // pop esi
    // return;
    // push edi
    // mov edi, dword ptr [esp + 8]
    // xor eax, eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // stosd dword ptr es:[edi], eax
    // pop edi
    // return;
    // mov eax, dword ptr [esp + 4]
    // xor ecx, ecx
    // cmp dword ptr [eax], 0
    // if (...) GOTO(0x4ab891)
    // inc ecx
    // add eax, 4
    // cmp ecx, 3
    // if (...) GOTO(0x4ab87f)
    // push 1
    // pop eax
    // return;
    // xor eax, eax
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // mov eax, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // push(0x20)
    // mov edi, dword ptr [ebp + 8]
    // pop ebx
    // or esi, 0xffffffff
    // cdq 
    // mov ecx, ebx
    // mov dword ptr [ebp - 4], 3
    // idiv ecx
    // mov dword ptr [ebp - 0xc], eax
    // mov eax, dword ptr [ebp + 0xc]
    // cdq 
    // idiv ecx
    // and dword ptr [ebp + 0xc], 0
    // mov ecx, edx
    // shl esi, cl
    // sub ebx, edx
    // not esi
    // mov eax, dword ptr [edi]
    // mov ecx, eax
    // and ecx, esi
    // mov dword ptr [ebp - 8], ecx
    // mov ecx, edx
    // shr eax, cl
    // or eax, dword ptr [ebp + 0xc]
    // mov dword ptr [edi], eax
    // mov eax, dword ptr [ebp - 8]
    // mov ecx, ebx
    // add edi, 4
    // shl eax, cl
    // dec dword ptr [ebp - 4]
    // mov dword ptr [ebp + 0xc], eax
    // if (...) GOTO(0x4ab8ca)
    // mov edi, dword ptr [ebp - 0xc]
    // push 2
    // pop ebx
    // mov esi, edi
    // push 8
    // pop ecx
    // shl esi, 2
    // cmp ebx, edi
    // if (...) GOTO(0x4ab90f)
    // mov edx, dword ptr [ebp + 8]
    // mov eax, ecx
    // sub eax, esi
    // mov eax, dword ptr [eax + edx]
    // mov dword ptr [ecx + edx], eax
    // if (...) GOTO(0x4ab916)
    // mov eax, dword ptr [ebp + 8]
    // and dword ptr [ecx + eax], 0
    // dec ebx
    // sub ecx, 4
    // jns 0x4ab8fc
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x18
    // mov eax, dword ptr [ebp + 8]
    // push ebx
    // push esi
    // push edi
    // movzx ecx, word ptr [eax + 0xa]
    // mov ebx, ecx
    // and ecx, 0x8000
    // mov dword ptr [ebp + 8], ecx
    // mov ecx, dword ptr [eax + 6]
    // mov dword ptr [ebp - 0xc], ecx
    // mov ecx, dword ptr [eax + 2]
    // movzx eax, word ptr [eax]
    // mov edi, dword ptr [ebp + 0x10]
    // and ebx, 0x7fff
    // sub ebx, 0x3fff
    // mov dword ptr [ebp - 8], ecx
    // shl eax, 0x10
    // cmp ebx, 0xffffc001
    // mov dword ptr [ebp - 4], eax
    // if (...) GOTO(0x4ab98e)
    // lea eax, [ebp - 0xc]
    // xor esi, esi
    // push eax
    // CALL(0x4ab879)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aba4d)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // push 2
    // pop eax
    // if (...) GOTO(0x4aba4f)
    // lea eax, [ebp - 0xc]
    // push eax
    // lea eax, [ebp - 0x18]
    // push eax
    // CALL(0x4ab852)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // add esp, 0x10
    // test eax, eax
    // if (...) GOTO(0x4ab9af)
    // inc ebx
    // mov eax, dword ptr [edi + 4]
    // mov ecx, eax
    // sub ecx, dword ptr [edi + 8]
    // cmp ebx, ecx
    // if (...) GOTO(0x4ab9c7)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // pop ecx
    // if (...) GOTO(0x4aba03)
    // cmp ebx, eax
    // if (...) GOTO(0x4aba0a)
    // sub eax, ebx
    // mov esi, eax
    // lea eax, [ebp - 0x18]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab852)
    // lea eax, [ebp - 0xc]
    // push esi
    // push eax
    // CALL(0x4ab894)
    // push dword ptr [edi + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab7c6)
    // mov eax, dword ptr [edi + 0xc]
    // inc eax
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // add esp, 0x20
    // xor esi, esi
    // if (...) GOTO(0x4ab986)
    // cmp ebx, dword ptr [edi]
    // if (...) GOTO(0x4aba36)
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab86d)
    // push dword ptr [edi + 0xc]
    // or byte ptr [ebp - 9], 0x80
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4ab894)
    // mov esi, dword ptr [edi + 0x14]
    // add esp, 0xc
    // add esi, dword ptr [edi]
    // push 1
    // if (...) GOTO(0x4ab988)
    // push dword ptr [edi + 0xc]
    // mov esi, dword ptr [edi + 0x14]
    // and byte ptr [ebp - 9], 0x7f
    // lea eax, [ebp - 0xc]
    // push eax
    // add esi, ebx
    // CALL(0x4ab894)
    // pop ecx
    // pop ecx
    // xor eax, eax
    // push(0x1f)
    // pop ecx
    // sub ecx, dword ptr [edi + 0xc]
    // mov edi, dword ptr [edi + 0x10]
    // shl esi, cl
    // mov ecx, dword ptr [ebp + 8]
    // neg ecx
    // sbb ecx, ecx
    // and ecx, 0x80000000
    // or esi, ecx
    // or esi, dword ptr [ebp - 0xc]
    // cmp edi, 0x40
    // if (...) GOTO(0x4aba7e)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov edx, dword ptr [ebp - 8]
    // mov dword ptr [ecx + 4], esi
    // mov dword ptr [ecx], edx
    // if (...) GOTO(0x4aba88)
    // cmp edi, 0x20
    // if (...) GOTO(0x4aba88)
    // mov ecx, dword ptr [ebp + 0xc]
    // mov dword ptr [ecx], esi
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push(0x4e5568)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push(0x4e5580)  // ptr?
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4ab921)
    // add esp, 0xc
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4aba8d)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push dword ptr [ebp + 0xc]
    // lea eax, [ebp + 0xc]
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4accc1)
    // push dword ptr [ebp + 8]
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abaa3)
    // add esp, 0x24
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // mov edx, dword ptr [ebp + 0x10]
    // push ebx
    // mov ebx, dword ptr [ebp + 0xc]
    // push esi
    // mov esi, dword ptr [ebp + 8]
    // mov ecx, dword ptr [edx + 0xc]
    // push edi
    // lea edi, [esi + 1]
    // mov byte ptr [esi], 0x30
    // test ebx, ebx
    // mov eax, edi
    // if (...) GOTO(0x4abb50)
    // mov dword ptr [ebp + 8], ebx
    // xor ebx, ebx
    // mov dl, byte ptr [ecx]
    // test dl, dl
    // if (...) GOTO(0x4abb42)
    // movsx edx, dl
    // inc ecx
    // if (...) GOTO(0x4abb45)
    // push(0x30)
    // pop edx
    // mov byte ptr [eax], dl
    // inc eax
    // dec dword ptr [ebp + 8]
    // if (...) GOTO(0x4abb36)
    // mov edx, dword ptr [ebp + 0x10]
    // and byte ptr [eax], 0
    // test ebx, ebx
    // if (...) GOTO(0x4abb69)
    // cmp byte ptr [ecx], 0x35
    // if (...) GOTO(0x4abb69)
    // dec eax
    // cmp byte ptr [eax], 0x39
    // if (...) GOTO(0x4abb67)
    // mov byte ptr [eax], 0x30
    // if (...) GOTO(0x4abb5c)
    // inc byte ptr [eax]
    // cmp byte ptr [esi], 0x31
    // if (...) GOTO(0x4abb73)
    // inc dword ptr [edx + 4]
    // if (...) GOTO(0x4abb85)
    // push edi
    // CALL(0x4abdf0)
    // inc eax
    // push eax
    // push edi
    // push esi
    // CALL(0x4a6d80)
    // add esp, 0x10
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x28
    // push esi
    // lea eax, [ebp + 8]
    // push edi
    // push eax
    // lea eax, [ebp - 0xc]
    // push eax
    // CALL(0x4abbe6)
    // pop ecx
    // lea eax, [ebp - 0x28]
    // pop ecx
    // lea esi, [ebp - 0xc]
    // push eax
    // push 0
    // push(0x11)
    // sub esp, 0xc
    // mov edi, esp
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsd dword ptr es:[edi], dword ptr [esi]
    // movsw word ptr es:[edi], word ptr [esi]
    // CALL(0x4ad192)
    // mov esi, dword ptr [ebp + 0x10]
    // mov edi, dword ptr [ebp + 0x14]
    // mov dword ptr [esi + 8], eax
    // movsx eax, byte ptr [ebp - 0x26]
    // mov dword ptr [esi], eax
    // movsx eax, word ptr [ebp - 0x28]
    // mov dword ptr [esi + 4], eax
    // lea eax, [ebp - 0x24]
    // push eax
    // push edi
    // CALL(0x4abca0)
    // add esp, 0x20
    // mov dword ptr [esi + 0xc], edi
    // mov eax, esi
    // pop edi
    // pop esi
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // mov edx, dword ptr [ebp + 0xc]
    // push ebx
    // push esi
    // push edi
    // mov ax, word ptr [edx + 6]
    // mov edi, 0x7ff
    // mov ecx, eax
    // and eax, 0x8000
    // shr ecx, 4
    // and ecx, edi
    // mov dword ptr [ebp + 0xc], eax
    // mov eax, dword ptr [edx + 4]
    // mov edx, dword ptr [edx]
    // movzx ebx, cx
    // mov esi, 0x80000000
    // and eax, 0xfffff
    // test ebx, ebx
    // mov dword ptr [ebp - 4], esi
    // if (...) GOTO(0x4abc34)
    // cmp ebx, edi
    // if (...) GOTO(0x4abc2d)
    // lea edi, [ecx + 0x3c00]
    // if (...) GOTO(0x4abc55)
    // mov edi, 0x7fff
    // if (...) GOTO(0x4abc55)
    // xor ebx, ebx
    // cmp eax, ebx
    // if (...) GOTO(0x4abc4c)
    // cmp edx, ebx
    // if (...) GOTO(0x4abc4c)
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [eax + 4], ebx
    // mov dword ptr [eax], ebx
    // mov word ptr [eax + 8], bx
    // if (...) GOTO(0x4abc97)
    // lea edi, [ecx + 0x3c01]
    // mov dword ptr [ebp - 4], ebx
    // mov ecx, edx
    // shr ecx, 0x15
    // shl eax, 0xb
    // or ecx, eax
    // mov eax, dword ptr [ebp + 8]
    // or ecx, dword ptr [ebp - 4]
    // shl edx, 0xb
    // mov dword ptr [eax + 4], ecx
    // mov dword ptr [eax], edx
    // test esi, ecx
    // if (...) GOTO(0x4abc8e)
    // mov edx, dword ptr [eax]
    // add ecx, ecx
    // mov ebx, edx
    // shr ebx, 0x1f
    // or ebx, ecx
    // lea ecx, [edx + edx]
    // mov dword ptr [eax], ecx
    // mov dword ptr [eax + 4], ebx
    // add edi, 0xffff
    // mov ecx, ebx
    // if (...) GOTO(0x4abc6d)
    // mov ecx, dword ptr [ebp + 0xc]
    // or ecx, edi
    // mov word ptr [eax + 8], cx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
}