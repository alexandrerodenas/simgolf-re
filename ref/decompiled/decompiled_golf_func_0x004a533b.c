/**
 * func_004a533b — Auto-décompilé
 * Adresse: 0x004a533b [golf.exe]
 * Taille: 8345 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: True
 * Appelle: 0x4a8e53, dword, 0x4a8582, 0x4a523d, 0x4a8f1b, 0x4b65d0, 0x4a55ba, 0x4a563c
 * Constantes: 0x4a5ba5, 0x4a575a, 0x4a9874, 0x4a57bc, 0x4aa6c0, 0x4a621e, 0x4a561b, 0x4a5af1
 */
void func_004a533b(void) {
    /* 1669 instructions */

    // push ebp
    // mov ebp, esp
    // sub esp, 0x34
    // push ebx
    // push esi
    // push edi
    // and dword ptr [ebp - 0x28], 0
    // mov dword ptr [ebp - 0x24], 0x4a53f1
    // mov eax, dword ptr [ebp + 0x18]
    // mov dword ptr [ebp - 0x20], eax
    // mov eax, dword ptr [ebp + 0xc]
    // mov dword ptr [ebp - 0x1c], eax
    // mov eax, dword ptr [ebp + 0x1c]
    // mov dword ptr [ebp - 0x18], eax
    // mov eax, dword ptr [ebp + 0x20]
    // mov dword ptr [ebp - 0x14], eax
    // and dword ptr [ebp - 0x10], 0
    // and dword ptr [ebp - 0xc], 0
    // and dword ptr [ebp - 8], 0
    // and dword ptr [ebp - 4], 0
    // mov dword ptr [ebp - 0x10], 0x4a53c3
    // mov dword ptr [ebp - 0xc], esp
    // mov dword ptr [ebp - 8], ebp
    // mov eax, dword ptr fs:[0]
    // mov dword ptr [ebp - 0x28], eax
    // lea eax, [ebp - 0x28]
    // mov dword ptr fs:[0], eax
    // mov dword ptr [ebp - 0x34], 1
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [ebp - 0x30], eax
    // mov eax, dword ptr [ebp + 0x10]
    // mov dword ptr [ebp - 0x2c], eax
    // lea eax, [ebp - 0x30]
    // push eax
    // mov eax, dword ptr [ebp + 8]
    // push dword ptr [eax]
    // CALL(0x4a8e53)
    // CALL(dword)
    // pop ecx
    // pop ecx
    // and dword ptr [ebp - 0x34], 0
    // cmp dword ptr [ebp - 4], 0
    // if (...) GOTO(0x4a53e0)
    // mov ebx, dword ptr fs:[0]
    // mov eax, dword ptr [ebx]
    // mov ebx, dword ptr [ebp - 0x28]
    // mov dword ptr [ebx], eax
    // mov dword ptr fs:[0], ebx
    // if (...) GOTO(0x4a53e9)
    // mov eax, dword ptr [ebp - 0x28]
    // mov dword ptr fs:[0], eax
    // mov eax, dword ptr [ebp - 0x34]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // push ebx
    // push esi
    // push edi
    // cld 
    // mov eax, dword ptr [ebp + 8]
    // mov eax, dword ptr [eax + 4]
    // and eax, 0x66
    // test eax, eax
    // if (...) GOTO(0x4a5414)
    // mov eax, dword ptr [ebp + 0xc]
    // mov dword ptr [eax + 0x24], 1
    // push 1
    // pop eax
    // if (...) GOTO(0x4a5461)
    // push 1
    // mov eax, dword ptr [ebp + 0xc]
    // push dword ptr [eax + 0x14]
    // mov eax, dword ptr [ebp + 0xc]
    // push dword ptr [eax + 0x10]
    // mov eax, dword ptr [ebp + 0xc]
    // push dword ptr [eax + 8]
    // push 0
    // push dword ptr [ebp + 0x10]
    // mov eax, dword ptr [ebp + 0xc]
    // push dword ptr [eax + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a8582)
    // add esp, 0x20
    // mov eax, dword ptr [ebp + 0xc]
    // cmp dword ptr [eax + 0x24], 0
    // if (...) GOTO(0x4a5452)
    // push dword ptr [ebp + 8]
    // push dword ptr [ebp + 0xc]
    // CALL(0x4a523d)
    // mov ebx, dword ptr [ebp + 0xc]
    // mov esp, dword ptr [ebx + 0x1c]
    // mov ebp, dword ptr [ebx + 0x20]
    // if (...) GOTO(dword)
    // push 1
    // pop eax
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ebx
    // push esi
    // cmp dword ptr [ebp + 0xc], 0
    // push edi
    // mov edi, dword ptr [ebp + 8]
    // mov esi, dword ptr [edi + 0xc]
    // mov ebx, dword ptr [edi + 0x10]
    // mov eax, esi
    // mov dword ptr [ebp + 8], esi
    // mov dword ptr [ebp - 4], eax
    // if (...) GOTO(0x4a54bd)
    // cmp esi, -1
    // if (...) GOTO(0x4a548e)
    // CALL(0x4a8f1b)
    // mov ecx, dword ptr [ebp + 0x10]
    // dec esi
    // lea eax, [esi + esi*4]
    // cmp dword ptr [ebx + eax*4 + 4], ecx
    // lea eax, [ebx + eax*4]
    // if (...) GOTO(0x4a54a3)
    // cmp ecx, dword ptr [eax + 8]
    // if (...) GOTO(0x4a54a8)
    // cmp esi, -1
    // if (...) GOTO(0x4a54b4)
    // mov eax, dword ptr [ebp + 8]
    // dec dword ptr [ebp + 0xc]
    // mov dword ptr [ebp - 4], eax
    // mov dword ptr [ebp + 8], esi
    // cmp dword ptr [ebp + 0xc], 0
    // if (...) GOTO(0x4a5484)
    // mov eax, dword ptr [ebp - 4]
    // mov ecx, dword ptr [ebp + 0x14]
    // inc esi
    // mov dword ptr [ecx], esi
    // mov ecx, dword ptr [ebp + 0x18]
    // mov dword ptr [ecx], eax
    // cmp eax, dword ptr [edi + 0xc]
    // if (...) GOTO(0x4a54d1)
    // cmp esi, eax
    // jbe 0x4a54d6
    // CALL(0x4a8f1b)
    // lea eax, [esi + esi*4]
    // pop edi
    // pop esi
    // lea eax, [ebx + eax*4]
    // pop ebx
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push ebp
    // mov ebp, esp
    // push ebx
    // push esi
    // push edi
    // push ebp
    // push 0
    // push 0
    // push(0x4a54fc)  // ptr?
    // push dword ptr [ebp + 8]
    // CALL(0x4b65d0)
    // pop ebp
    // pop edi
    // pop esi
    // pop ebx
    // mov esp, ebp
    // pop ebp
    // return;
    // mov ecx, dword ptr [esp + 4]
    // test dword ptr [ecx + 4], 6
    // mov eax, 1
    // if (...) GOTO(0x4a5525)
    // mov eax, dword ptr [esp + 8]
    // mov edx, dword ptr [esp + 0x10]
    // mov dword ptr [edx], eax
    // mov eax, 3
    // return;
    // push ebx
    // push esi
    // push edi
    // mov eax, dword ptr [esp + 0x10]
    // push eax
    // push -2
    // push(0x4a5504)  // ptr?
    // push dword ptr fs:[0]
    // mov dword ptr fs:[0], esp
    // mov eax, dword ptr [esp + 0x20]
    // mov ebx, dword ptr [eax + 8]
    // mov esi, dword ptr [eax + 0xc]
    // cmp esi, -1
    // if (...) GOTO(0x4a5580)
    // cmp esi, dword ptr [esp + 0x24]
    // if (...) GOTO(0x4a5580)
    // lea esi, [esi + esi*2]
    // mov ecx, dword ptr [ebx + esi*4]
    // mov dword ptr [esp + 8], ecx
    // mov dword ptr [eax + 0xc], ecx
    // cmp dword ptr [ebx + esi*4 + 4], 0
    // if (...) GOTO(0x4a557e)
    // push(0x101)
    // mov eax, dword ptr [ebx + esi*4 + 8]
    // CALL(0x4a55ba)
    // CALL(dword)
    // if (...) GOTO(0x4a5543)
    // pop dword ptr fs:[0]
    // add esp, 0xc
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // xor eax, eax
    // mov ecx, dword ptr fs:[0]
    // cmp dword ptr [ecx + 4], 0x4a5504
    // if (...) GOTO(0x4a55b0)
    // mov edx, dword ptr [ecx + 0xc]
    // mov edx, dword ptr [edx + 0xc]
    // cmp dword ptr [ecx + 8], edx
    // if (...) GOTO(0x4a55b0)
    // mov eax, 1
    // return;
    // push ebx
    // push ecx
    // mov ebx, 0x4e4ad0
    // if (...) GOTO(0x4a55c4)
    // push ebx
    // push ecx
    // mov ebx, 0x4e4ad0
    // mov ecx, dword ptr [ebp + 8]
    // mov dword ptr [ebx + 8], ecx
    // mov dword ptr [ebx + 4], eax
    // mov dword ptr [ebx + 0xc], ebp
    // pop ecx
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc438)  // ptr?
    // push(0x4a8f7c)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0x10
    // push ebx
    // push esi
    // push edi
    // xor eax, eax
    // mov dword ptr [ebp - 0x20], eax
    // mov dword ptr [ebp - 4], eax
    // mov dword ptr [ebp - 0x1c], eax
    // mov eax, dword ptr [ebp - 0x1c]
    // cmp eax, dword ptr [ebp + 0x10]
    // if (...) GOTO(0x4a561b)
    // mov esi, dword ptr [ebp + 8]
    // mov ecx, esi
    // CALL(dword)
    // add esi, dword ptr [ebp + 0xc]
    // mov dword ptr [ebp + 8], esi
    // inc dword ptr [ebp - 0x1c]
    // if (...) GOTO(0x4a5600)
    // mov dword ptr [ebp - 0x20], 1
    // or dword ptr [ebp - 4], 0xffffffff
    // CALL(0x4a563c)
    // mov ecx, dword ptr [ebp - 0x10]
    // mov dword ptr fs:[0], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // cmp dword ptr [ebp - 0x20], 0
    // if (...) GOTO(0x4a5653)
    // push dword ptr [ebp + 0x18]
    // push dword ptr [ebp - 0x1c]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a5793)
    // return;
    // push esi
    // CALL(0x4a51cf)
    // push dword ptr [0x842170]
    // CALL(0x4a9054)
    // mov edx, dword ptr [0x842170]
    // pop ecx
    // mov ecx, dword ptr [0x84216c]
    // mov esi, ecx
    // sub esi, edx
    // add esi, 4
    // cmp eax, esi
    // jae 0x4a56ba
    // push edx
    // CALL(0x4a9054)
    // add eax, 0x10
    // push eax
    // push dword ptr [0x842170]
    // CALL(0x4a6980)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4a569d)
    // xor esi, esi
    // if (...) GOTO(0x4a56c9)
    // mov ecx, dword ptr [0x84216c]
    // sub ecx, dword ptr [0x842170]
    // mov dword ptr [0x842170], eax
    // sar ecx, 2
    // lea ecx, [eax + ecx*4]
    // mov dword ptr [0x84216c], ecx
    // mov eax, dword ptr [esp + 8]
    // mov dword ptr [ecx], eax
    // add dword ptr [0x84216c], 4
    // mov esi, eax
    // CALL(0x4a51d8)
    // mov eax, esi
    // pop esi
    // return;
    // push dword ptr [esp + 4]
    // CALL(0x4a5654)
    // neg eax
    // sbb eax, eax
    // pop ecx
    // neg eax
    // dec eax
    // return;
    // push(0x80)
    // CALL(0x4a504f)
    // test eax, eax
    // pop ecx
    // mov dword ptr [0x842170], eax
    // if (...) GOTO(0x4a5705)
    // push(0x18)
    // CALL(0x4a6937)
    // mov eax, dword ptr [0x842170]
    // pop ecx
    // and dword ptr [eax], 0
    // mov eax, dword ptr [0x842170]
    // mov dword ptr [0x84216c], eax
    // return;
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc448)  // ptr?
    // push(0x4a8f7c)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0xc
    // push ebx
    // push esi
    // push edi
    // and dword ptr [ebp - 0x1c], 0
    // mov esi, dword ptr [ebp + 0xc]
    // mov eax, esi
    // imul eax, dword ptr [ebp + 0x10]
    // add dword ptr [ebp + 8], eax
    // and dword ptr [ebp - 4], 0
    // dec dword ptr [ebp + 0x10]
    // js 0x4a575a
    // sub dword ptr [ebp + 8], esi
    // mov ecx, dword ptr [ebp + 8]
    // CALL(dword)
    // if (...) GOTO(0x4a574a)
    // mov dword ptr [ebp - 0x1c], 1
    // or dword ptr [ebp - 4], 0xffffffff
    // CALL(0x4a577b)
    // mov ecx, dword ptr [ebp - 0x10]
    // mov dword ptr fs:[0], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // cmp dword ptr [ebp - 0x1c], 0
    // if (...) GOTO(0x4a5792)
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a5793)
    // return;
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc458)  // ptr?
    // push(0x4a8f7c)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // push ecx
    // push ecx
    // push ebx
    // push esi
    // push edi
    // mov dword ptr [ebp - 0x18], esp
    // and dword ptr [ebp - 4], 0
    // dec dword ptr [ebp + 0x10]
    // js 0x4a57dc
    // mov ecx, dword ptr [ebp + 8]
    // sub ecx, dword ptr [ebp + 0xc]
    // mov dword ptr [ebp + 8], ecx
    // CALL(dword)
    // if (...) GOTO(0x4a57bc)
    // push dword ptr [ebp - 0x14]
    // CALL(0x4a8975)
    // pop ecx
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // or dword ptr [ebp - 4], 0xffffffff
    // mov ecx, dword ptr [ebp - 0x10]
    // mov dword ptr fs:[0], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push 1
    // push dword ptr [esp + 8]
    // CALL(0x4a5061)
    // pop ecx
    // pop ecx
    // return;
    // // __debugbreak()
    // push ebp
    // mov ebp, esp
    // push esi
    // xor eax, eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push eax
    // push eax
    // mov edx, dword ptr [ebp + 0xc]
    // lea ecx, [ecx]
    // mov al, byte ptr [edx]
    // or al, al
    // if (...) GOTO(0x4a5821)
    // inc edx
    // bts dword ptr [esp], eax
    // if (...) GOTO(0x4a5814)
    // mov esi, dword ptr [ebp + 8]
    // mov al, byte ptr [esi]
    // or al, al
    // if (...) GOTO(0x4a5834)
    // inc esi
    // bt dword ptr [esp], eax
    // jae 0x4a5824
    // lea eax, [esi - 1]
    // add esp, 0x20
    // pop esi
    // leave 
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // cmp esi, dword ptr [0x842140]
    // jae 0x4a5887
    // mov ecx, esi
    // mov eax, esi
    // sar ecx, 5
    // and eax, 0x1f
    // mov ecx, dword ptr [ecx*4 + 0x842040]
    // lea eax, [eax + eax*8]
    // test byte ptr [ecx + eax*4 + 4], 1
    // if (...) GOTO(0x4a5887)
    // push edi
    // push esi
    // CALL(0x4a937e)
    // push dword ptr [esp + 0x18]
    // push dword ptr [esp + 0x18]
    // push esi
    // CALL(0x4a589f)
    // push esi
    // mov edi, eax
    // CALL(0x4a93dd)
    // add esp, 0x14
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // CALL(0x4a910c)
    // mov dword ptr [eax], 9
    // CALL(0x4a9115)
    // and dword ptr [eax], 0
    // or eax, 0xffffffff
    // pop esi
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // and dword ptr [ebp - 8], 0
    // cmp dword ptr [ebp + 0x10], 0
    // push ebx
    // mov ebx, dword ptr [ebp + 0xc]
    // push esi
    // push edi
    // mov edx, ebx
    // if (...) GOTO(0x4a5a71)
    // mov eax, dword ptr [ebp + 8]
    // mov ecx, eax
    // and eax, 0x1f
    // sar ecx, 5
    // lea esi, [eax + eax*8]
    // mov eax, dword ptr [ecx*4 + 0x842040]
    // lea edi, [ecx*4 + 0x842040]
    // shl esi, 2
    // add eax, esi
    // mov cl, byte ptr [eax + 4]
    // test cl, 2
    // if (...) GOTO(0x4a5a71)
    // test cl, 0x48
    // if (...) GOTO(0x4a590a)
    // mov al, byte ptr [eax + 5]
    // cmp al, 0xa
    // if (...) GOTO(0x4a590a)
    // dec dword ptr [ebp + 0x10]
    // mov byte ptr [ebx], al
    // mov eax, dword ptr [edi]
    // lea edx, [ebx + 1]
    // mov dword ptr [ebp - 8], 1
    // mov byte ptr [eax + esi + 5], 0xa
    // lea eax, [ebp - 0xc]
    // push 0
    // push eax
    // mov eax, dword ptr [edi]
    // push dword ptr [ebp + 0x10]
    // push edx
    // push dword ptr [eax + esi]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a595c)
    // CALL(dword)
    // push 5
    // pop esi
    // cmp eax, esi
    // if (...) GOTO(0x4a5944)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 9
    // CALL(0x4a9115)
    // mov dword ptr [eax], esi
    // if (...) GOTO(0x4a5954)
    // cmp eax, 0x6d
    // if (...) GOTO(0x4a5a71)
    // push eax
    // CALL(0x4a9099)
    // pop ecx
    // or eax, 0xffffffff
    // if (...) GOTO(0x4a5a73)
    // mov eax, dword ptr [edi]
    // mov edx, dword ptr [ebp - 0xc]
    // add dword ptr [ebp - 8], edx
    // lea ecx, [eax + esi + 4]
    // mov al, byte ptr [eax + esi + 4]
    // test al, 0x80
    // if (...) GOTO(0x4a5a6c)
    // test edx, edx
    // if (...) GOTO(0x4a5981)
    // cmp byte ptr [ebx], 0xa
    // if (...) GOTO(0x4a5981)
    // or al, 4
    // if (...) GOTO(0x4a5983)
    // and al, 0xfb
    // mov byte ptr [ecx], al
    // mov eax, dword ptr [ebp + 0xc]
    // mov ecx, dword ptr [ebp - 8]
    // mov dword ptr [ebp + 0x10], eax
    // add ecx, eax
    // cmp eax, ecx
    // mov dword ptr [ebp - 8], ecx
    // jae 0x4a5a66
    // mov eax, dword ptr [ebp + 0x10]
    // mov al, byte ptr [eax]
    // cmp al, 0x1a
    // if (...) GOTO(0x4a5a56)
    // cmp al, 0xd
    // if (...) GOTO(0x4a59b7)
    // mov byte ptr [ebx], al
    // inc ebx
    // inc dword ptr [ebp + 0x10]
    // if (...) GOTO(0x4a5a48)
    // dec ecx
    // cmp dword ptr [ebp + 0x10], ecx
    // jae 0x4a59d5
    // mov eax, dword ptr [ebp + 0x10]
    // inc eax
    // cmp byte ptr [eax], 0xa
    // if (...) GOTO(0x4a59cc)
    // add dword ptr [ebp + 0x10], 2
    // if (...) GOTO(0x4a5a2a)
    // mov byte ptr [ebx], 0xd
    // inc ebx
    // mov dword ptr [ebp + 0x10], eax
    // if (...) GOTO(0x4a5a48)
    // lea eax, [ebp - 0xc]
    // push 0
    // push eax
    // inc dword ptr [ebp + 0x10]
    // lea eax, [ebp - 1]
    // push 1
    // push eax
    // mov eax, dword ptr [edi]
    // push dword ptr [eax + esi]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a59fd)
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a5a44)
    // cmp dword ptr [ebp - 0xc], 0
    // if (...) GOTO(0x4a5a44)
    // mov eax, dword ptr [edi]
    // test byte ptr [eax + esi + 4], 0x48
    // if (...) GOTO(0x4a5a1f)
    // mov al, byte ptr [ebp - 1]
    // cmp al, 0xa
    // if (...) GOTO(0x4a5a2a)
    // mov byte ptr [ebx], 0xd
    // mov ecx, dword ptr [edi]
    // inc ebx
    // mov byte ptr [ecx + esi + 5], al
    // if (...) GOTO(0x4a5a48)
    // cmp ebx, dword ptr [ebp + 0xc]
    // if (...) GOTO(0x4a5a2f)
    // cmp byte ptr [ebp - 1], 0xa
    // if (...) GOTO(0x4a5a2f)
    // mov byte ptr [ebx], 0xa
    // if (...) GOTO(0x4a5a47)
    // push 1
    // push -1
    // push dword ptr [ebp + 8]
    // CALL(0x4a9620)
    // add esp, 0xc
    // cmp byte ptr [ebp - 1], 0xa
    // if (...) GOTO(0x4a5a48)
    // mov byte ptr [ebx], 0xd
    // inc ebx
    // mov ecx, dword ptr [ebp - 8]
    // cmp dword ptr [ebp + 0x10], ecx
    // if (...) GOTO(0x4a599b)
    // if (...) GOTO(0x4a5a66)
    // mov eax, dword ptr [edi]
    // lea esi, [eax + esi + 4]
    // mov al, byte ptr [esi]
    // test al, 0x40
    // if (...) GOTO(0x4a5a66)
    // or al, 2
    // mov byte ptr [esi], al
    // sub ebx, dword ptr [ebp + 0xc]
    // mov dword ptr [ebp - 8], ebx
    // mov eax, dword ptr [ebp - 8]
    // if (...) GOTO(0x4a5a73)
    // xor eax, eax
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // cmp esi, dword ptr [0x842140]
    // jae 0x4a5abd
    // mov ecx, esi
    // mov eax, esi
    // sar ecx, 5
    // and eax, 0x1f
    // mov ecx, dword ptr [ecx*4 + 0x842040]
    // lea eax, [eax + eax*8]
    // test byte ptr [ecx + eax*4 + 4], 1
    // if (...) GOTO(0x4a5abd)
    // push edi
    // push esi
    // CALL(0x4a937e)
    // push esi
    // CALL(0x4a5ad5)
    // push esi
    // mov edi, eax
    // CALL(0x4a93dd)
    // add esp, 0xc
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // CALL(0x4a910c)
    // mov dword ptr [eax], 9
    // CALL(0x4a9115)
    // and dword ptr [eax], 0
    // or eax, 0xffffffff
    // pop esi
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // push esi
    // CALL(0x4a933c)
    // cmp eax, -1
    // pop ecx
    // if (...) GOTO(0x4a5b23)
    // cmp esi, 1
    // if (...) GOTO(0x4a5af1)
    // cmp esi, 2
    // if (...) GOTO(0x4a5b07)
    // push 2
    // CALL(0x4a933c)
    // push 1
    // mov edi, eax
    // CALL(0x4a933c)
    // pop ecx
    // cmp eax, edi
    // pop ecx
    // if (...) GOTO(0x4a5b23)
    // push esi
    // CALL(0x4a933c)
    // pop ecx
    // push eax
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a5b23)
    // CALL(dword)
    // mov edi, eax
    // if (...) GOTO(0x4a5b25)
    // xor edi, edi
    // push esi
    // CALL(0x4a92bd)
    // mov eax, esi
    // and esi, 0x1f
    // sar eax, 5
    // pop ecx
    // mov eax, dword ptr [eax*4 + 0x842040]
    // lea ecx, [esi + esi*8]
    // and byte ptr [eax + ecx*4 + 4], 0
    // test edi, edi
    // if (...) GOTO(0x4a5b53)
    // push edi
    // CALL(0x4a9099)
    // pop ecx
    // or eax, 0xffffffff
    // if (...) GOTO(0x4a5b55)
    // xor eax, eax
    // pop edi
    // pop esi
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // cmp esi, dword ptr [0x842140]
    // jae 0x4a5ba5
    // mov ecx, esi
    // mov eax, esi
    // sar ecx, 5
    // and eax, 0x1f
    // mov ecx, dword ptr [ecx*4 + 0x842040]
    // lea eax, [eax + eax*8]
    // test byte ptr [ecx + eax*4 + 4], 1
    // if (...) GOTO(0x4a5ba5)
    // push edi
    // push esi
    // CALL(0x4a937e)
    // push dword ptr [esp + 0x18]
    // push dword ptr [esp + 0x18]
    // push esi
    // CALL(0x4a5bbd)
    // push esi
    // mov edi, eax
    // CALL(0x4a93dd)
    // add esp, 0x14
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // CALL(0x4a910c)
    // mov dword ptr [eax], 9
    // CALL(0x4a9115)
    // and dword ptr [eax], 0
    // or eax, 0xffffffff
    // pop esi
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x414
    // push ebx
    // push esi
    // push edi
    // xor edi, edi
    // cmp dword ptr [ebp + 0x10], edi
    // mov dword ptr [ebp - 8], edi
    // mov dword ptr [ebp - 0x10], edi
    // if (...) GOTO(0x4a5bdd)
    // xor eax, eax
    // if (...) GOTO(0x4a5d43)
    // mov eax, dword ptr [ebp + 8]
    // sar eax, 5
    // lea ebx, [eax*4 + 0x842040]
    // mov eax, dword ptr [ebp + 8]
    // and eax, 0x1f
    // lea esi, [eax + eax*8]
    // mov eax, dword ptr [ebx]
    // shl esi, 2
    // test byte ptr [eax + esi + 4], 0x20
    // if (...) GOTO(0x4a5c0d)
    // push 2
    // push edi
    // push dword ptr [ebp + 8]
    // CALL(0x4a9620)
    // add esp, 0xc
    // mov eax, dword ptr [ebx]
    // add eax, esi
    // test byte ptr [eax + 4], 0x80
    // if (...) GOTO(0x4a5cdc)
    // mov eax, dword ptr [ebp + 0xc]
    // cmp dword ptr [ebp + 0x10], edi
    // mov dword ptr [ebp - 4], eax
    // mov dword ptr [ebp + 8], edi
    // jbe 0x4a5d17
    // lea eax, [ebp - 0x414]
    // mov ecx, dword ptr [ebp - 4]
    // sub ecx, dword ptr [ebp + 0xc]
    // cmp ecx, dword ptr [ebp + 0x10]
    // jae 0x4a5c67
    // mov ecx, dword ptr [ebp - 4]
    // inc dword ptr [ebp - 4]
    // mov cl, byte ptr [ecx]
    // cmp cl, 0xa
    // if (...) GOTO(0x4a5c52)
    // inc dword ptr [ebp - 0x10]
    // mov byte ptr [eax], 0xd
    // inc eax
    // mov byte ptr [eax], cl
    // inc eax
    // mov ecx, eax
    // lea edx, [ebp - 0x414]
    // sub ecx, edx
    // cmp ecx, 0x400
    // if (...) GOTO(0x4a5c33)
    // mov edi, eax
    // lea eax, [ebp - 0x414]
    // sub edi, eax
    // lea eax, [ebp - 0xc]
    // push 0
    // push eax
    // lea eax, [ebp - 0x414]
    // push edi
    // push eax
    // mov eax, dword ptr [ebx]
    // push dword ptr [eax + esi]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a5cd1)
    // mov eax, dword ptr [ebp - 0xc]
    // add dword ptr [ebp - 8], eax
    // cmp eax, edi
    // if (...) GOTO(0x4a5ca3)
    // mov eax, dword ptr [ebp - 4]
    // sub eax, dword ptr [ebp + 0xc]
    // cmp eax, dword ptr [ebp + 0x10]
    // if (...) GOTO(0x4a5c2d)
    // xor edi, edi
    // mov eax, dword ptr [ebp - 8]
    // cmp eax, edi
    // if (...) GOTO(0x4a5d40)
    // cmp dword ptr [ebp + 8], edi
    // if (...) GOTO(0x4a5d17)
    // push 5
    // pop esi
    // cmp dword ptr [ebp + 8], esi
    // if (...) GOTO(0x4a5d09)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 9
    // CALL(0x4a9115)
    // mov dword ptr [eax], esi
    // if (...) GOTO(0x4a5d12)
    // CALL(dword)
    // mov dword ptr [ebp + 8], eax
    // if (...) GOTO(0x4a5ca3)
    // lea ecx, [ebp - 0xc]
    // push edi
    // push ecx
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [eax]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a5cfe)
    // mov eax, dword ptr [ebp - 0xc]
    // mov dword ptr [ebp + 8], edi
    // mov dword ptr [ebp - 8], eax
    // if (...) GOTO(0x4a5ca5)
    // CALL(dword)
    // mov dword ptr [ebp + 8], eax
    // if (...) GOTO(0x4a5ca5)
    // push dword ptr [ebp + 8]
    // CALL(0x4a9099)
    // pop ecx
    // or eax, 0xffffffff
    // if (...) GOTO(0x4a5d43)
    // mov eax, dword ptr [ebx]
    // test byte ptr [eax + esi + 4], 0x40
    // if (...) GOTO(0x4a5d2c)
    // mov eax, dword ptr [ebp + 0xc]
    // cmp byte ptr [eax], 0x1a
    // if (...) GOTO(0x4a5bd6)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 0x1c
    // CALL(0x4a9115)
    // mov dword ptr [eax], edi
    // if (...) GOTO(0x4a5d12)
    // sub eax, dword ptr [ebp - 0x10]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push dword ptr [esp + 0xc]
    // push(0x40)
    // push dword ptr [esp + 0x10]
    // push dword ptr [esp + 0x10]
    // CALL(0x4a5d5f)
    // add esp, 0x10
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x1c
    // mov ecx, dword ptr [ebp + 0xc]
    // push ebx
    // xor ebx, ebx
    // push esi
    // test cl, 0x80
    // push edi
    // mov dword ptr [ebp - 0x1c], 0xc
    // mov dword ptr [ebp - 0x18], ebx
    // if (...) GOTO(0x4a5d85)
    // mov dword ptr [ebp - 0x14], ebx
    // mov byte ptr [ebp - 1], 0x10
    // if (...) GOTO(0x4a5d90)
    // and byte ptr [ebp - 1], 0
    // mov dword ptr [ebp - 0x14], 1
    // mov eax, 0x8000
    // test eax, ecx
    // if (...) GOTO(0x4a5daa)
    // test ch, 0x40
    // if (...) GOTO(0x4a5da6)
    // cmp dword ptr [0x840b20], eax
    // if (...) GOTO(0x4a5daa)
    // or byte ptr [ebp - 1], 0x80
    // push 3
    // mov eax, ecx
    // pop esi
    // and eax, esi
    // sub eax, ebx
    // if (...) GOTO(0x4a5dd1)
    // dec eax
    // if (...) GOTO(0x4a5dc8)
    // dec eax
    // if (...) GOTO(0x4a5e63)
    // mov dword ptr [ebp - 0xc], 0xc0000000
    // if (...) GOTO(0x4a5dd8)
    // mov dword ptr [ebp - 0xc], 0x40000000
    // if (...) GOTO(0x4a5dd8)
    // mov dword ptr [ebp - 0xc], 0x80000000
    // mov eax, dword ptr [ebp + 0x10]
    // cmp eax, 0x10
    // if (...) GOTO(0x4a5e06)
    // cmp eax, 0x20
    // if (...) GOTO(0x4a5dfd)
    // cmp eax, 0x30
    // if (...) GOTO(0x4a5df4)
    // cmp eax, 0x40
    // if (...) GOTO(0x4a5e63)
    // mov dword ptr [ebp - 0x10], esi
    // if (...) GOTO(0x4a5e09)
    // mov dword ptr [ebp - 0x10], 2
    // if (...) GOTO(0x4a5e09)
    // mov dword ptr [ebp - 0x10], 1
    // if (...) GOTO(0x4a5e09)
    // mov dword ptr [ebp - 0x10], ebx
    // mov edx, 0x700
    // mov eax, 0x400
    // and ecx, edx
    // mov edi, 0x100
    // cmp ecx, eax
    // if (...) GOTO(0x4a5e4f)
    // if (...) GOTO(0x4a5e4a)
    // cmp ecx, ebx
    // if (...) GOTO(0x4a5e4a)
    // cmp ecx, edi
    // if (...) GOTO(0x4a5e41)
    // cmp ecx, 0x200
    // if (...) GOTO(0x4a5e7d)
    // cmp ecx, 0x300
    // if (...) GOTO(0x4a5e63)
    // mov dword ptr [ebp - 8], 2
    // if (...) GOTO(0x4a5e8d)
    // mov dword ptr [ebp - 8], 4
    // if (...) GOTO(0x4a5e8d)
    // mov dword ptr [ebp - 8], esi
    // if (...) GOTO(0x4a5e8d)
    // cmp ecx, 0x500
    // if (...) GOTO(0x4a5e86)
    // cmp ecx, 0x600
    // if (...) GOTO(0x4a5e7d)
    // cmp ecx, edx
    // if (...) GOTO(0x4a5e86)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 0x16
    // CALL(0x4a9115)
    // mov dword ptr [eax], ebx
    // or eax, 0xffffffff
    // if (...) GOTO(0x4a6029)
    // mov dword ptr [ebp - 8], 5
    // if (...) GOTO(0x4a5e8d)
    // mov dword ptr [ebp - 8], 1
    // mov eax, dword ptr [ebp + 0xc]
    // mov esi, 0x80
    // test edi, eax
    // if (...) GOTO(0x4a5eac)
    // mov ecx, dword ptr [0x840a68]
    // not ecx
    // and ecx, dword ptr [ebp + 0x14]
    // test cl, 0x80
    // if (...) GOTO(0x4a5eac)
    // push 1
    // pop esi
    // test al, 0x40
    // if (...) GOTO(0x4a5eba)
    // or esi, 0x4000000
    // or byte ptr [ebp - 0xa], 1
    // test ah, 0x10
    // if (...) GOTO(0x4a5ec1)
    // or esi, edi
    // test al, 0x20
    // if (...) GOTO(0x4a5ecd)
    // or esi, 0x8000000
    // if (...) GOTO(0x4a5ed7)
    // test al, 0x10
    // if (...) GOTO(0x4a5ed7)
    // or esi, 0x10000000
    // CALL(0x4a911e)
    // mov ebx, eax
    // or edi, 0xffffffff
    // cmp ebx, edi
    // if (...) GOTO(0x4a5eff)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 0x18
    // CALL(0x4a9115)
    // and dword ptr [eax], 0
    // mov eax, edi
    // if (...) GOTO(0x4a6029)
    // push 0
    // push esi
    // push dword ptr [ebp - 8]
    // lea eax, [ebp - 0x1c]
    // push eax
    // push dword ptr [ebp - 0x10]
    // push dword ptr [ebp - 0xc]
    // push dword ptr [ebp + 8]
    // CALL(dword)
    // mov esi, eax
    // cmp esi, edi
    // if (...) GOTO(0x4a5f32)
    // CALL(dword)
    // push eax
    // CALL(0x4a9099)
    // pop ecx
    // mov esi, edi
    // if (...) GOTO(0x4a6020)
    // push esi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a5f46)
    // push esi
    // CALL(dword)
    // if (...) GOTO(0x4a5f1e)
    // cmp eax, 2
    // if (...) GOTO(0x4a5f51)
    // or byte ptr [ebp - 1], 0x40
    // if (...) GOTO(0x4a5f5a)
    // cmp eax, 3
    // if (...) GOTO(0x4a5f5a)
    // or byte ptr [ebp - 1], 8
    // push esi
    // push ebx
    // CALL(0x4a9241)
    // mov eax, ebx
    // pop ecx
    // sar eax, 5
    // pop ecx
    // mov cl, byte ptr [ebp - 1]
    // lea edi, [eax*4 + 0x842040]
    // mov eax, ebx
    // or cl, 1
    // and eax, 0x1f
    // mov byte ptr [ebp + 0xb], cl
    // lea esi, [eax + eax*8]
    // mov eax, dword ptr [edi]
    // shl esi, 2
    // and byte ptr [ebp + 0xb], 0x48
    // mov byte ptr [eax + esi + 4], cl
    // if (...) GOTO(0x4a6007)
    // test cl, 0x80
    // if (...) GOTO(0x4a6007)
    // test byte ptr [ebp + 0xc], 2
    // if (...) GOTO(0x4a6007)
    // push 2
    // push -1
    // push ebx
    // CALL(0x4a9620)
    // add esp, 0xc
    // cmp eax, -1
    // mov dword ptr [ebp - 0x10], eax
    // if (...) GOTO(0x4a5fc8)
    // CALL(0x4a9115)
    // cmp dword ptr [eax], 0x83
    // if (...) GOTO(0x4a6007)
    // push ebx
    // CALL(0x4a5a78)
    // pop ecx
    // or esi, 0xffffffff
    // if (...) GOTO(0x4a6020)
    // and byte ptr [ebp + 0x13], 0
    // lea eax, [ebp + 0x13]
    // push 1
    // push eax
    // push ebx
    // CALL(0x4a589f)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4a5ff5)
    // cmp byte ptr [ebp + 0x13], 0x1a
    // if (...) GOTO(0x4a5ff5)
    // push dword ptr [ebp - 0x10]
    // push ebx
    // CALL(0x4a9693)
    // pop ecx
    // cmp eax, -1
    // pop ecx
    // if (...) GOTO(0x4a5fbc)
    // push 0
    // push 0
    // push ebx
    // CALL(0x4a9620)
    // add esp, 0xc
    // cmp eax, -1
    // if (...) GOTO(0x4a5fbc)
    // cmp byte ptr [ebp + 0xb], 0
    // if (...) GOTO(0x4a601e)
    // test byte ptr [ebp + 0xc], 8
    // if (...) GOTO(0x4a601e)
    // mov eax, dword ptr [edi]
    // or byte ptr [eax + esi + 4], 0x20
    // lea eax, [eax + esi + 4]
    // mov esi, ebx
    // push ebx
    // CALL(0x4a93dd)
    // pop ecx
    // mov eax, esi
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // push ebp
    // mov ebp, esp
    // add esp, -0xc
    // wait 
    // fnstcw word ptr [ebp - 2]
    // wait 
    // mov ax, word ptr [ebp - 2]
    // or ah, 0xc
    // mov word ptr [ebp - 4], ax
    // fldcw word ptr [ebp - 4]
    // fistp qword ptr [ebp - 0xc]
    // fldcw word ptr [ebp - 2]
    // mov eax, dword ptr [ebp - 0xc]
    // mov edx, dword ptr [ebp - 8]
    // leave 
    // return;
    // push 1
    // push 0
    // push dword ptr [esp + 0xc]
    // CALL(0x4a95bb)
    // add esp, 0xc
    // return;
    // CALL(0x405096)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push ecx
    // cmp eax, 0x1000
    // lea ecx, [esp + 8]
    // if (...) GOTO(0x4a6090)
    // sub ecx, 0x1000
    // sub eax, 0x1000
    // test dword ptr [ecx], eax
    // cmp eax, 0x1000
    // jae 0x4a607c
    // sub ecx, eax
    // mov eax, esp
    // test dword ptr [ecx], eax
    // mov esp, ecx
    // mov ecx, dword ptr [eax]
    // mov eax, dword ptr [eax + 4]
    // push eax
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // or edi, 0xffffffff
    // test byte ptr [esi + 0xc], 0x40
    // if (...) GOTO(0x4a60b4)
    // and dword ptr [esi + 0xc], 0
    // if (...) GOTO(0x4a60cb)
    // push esi
    // CALL(0x4a9874)
    // push esi
    // CALL(0x4a60d0)
    // push esi
    // mov edi, eax
    // CALL(0x4a98c6)
    // add esp, 0xc
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // or edi, 0xffffffff
    // test byte ptr [esi + 0xc], 0x83
    // if (...) GOTO(0x4a6113)
    // push esi
    // CALL(0x4a99a0)
    // push esi
    // mov edi, eax
    // CALL(0x4a9918)
    // push dword ptr [esi + 0x10]
    // CALL(0x4a5a78)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4a6101)
    // or edi, 0xffffffff
    // if (...) GOTO(0x4a6113)
    // mov eax, dword ptr [esi + 0x1c]
    // test eax, eax
    // if (...) GOTO(0x4a6113)
    // push eax
    // CALL(0x4a5007)
    // and dword ptr [esi + 0x1c], 0
    // pop ecx
    // and dword ptr [esi + 0xc], 0
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // push esi
    // CALL(0x4a9c19)
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x4a612a)
    // pop esi
    // return;
    // push edi
    // push esi
    // push dword ptr [esp + 0x18]
    // push dword ptr [esp + 0x18]
    // push dword ptr [esp + 0x18]
    // CALL(0x4a9aa9)
    // push esi
    // mov edi, eax
    // CALL(0x4a98c6)
    // add esp, 0x14
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // push(0x40)
    // push dword ptr [esp + 0xc]
    // push dword ptr [esp + 0xc]
    // CALL(0x4a611c)
    // add esp, 0xc
    // return;
    // lea eax, [edx - 1]
    // pop ebx
    // return;
    // lea esp, [esp]
    // lea esp, [esp]
    // xor eax, eax
    // mov al, byte ptr [esp + 8]
    // push ebx
    // mov ebx, eax
    // shl eax, 8
    // mov edx, dword ptr [esp + 8]
    // test edx, 3
    // if (...) GOTO(0x4a619b)
    // mov cl, byte ptr [edx]
    // inc edx
    // cmp cl, bl
    // if (...) GOTO(0x4a6160)
    // test cl, cl
    // if (...) GOTO(0x4a61e4)
    // test edx, 3
    // if (...) GOTO(0x4a6188)
    // or ebx, eax
    // push edi
    // mov eax, ebx
    // shl ebx, 0x10
    // push esi
    // or ebx, eax
    // mov ecx, dword ptr [edx]
    // mov edi, 0x7efefeff
    // mov eax, ecx
    // mov esi, edi
    // xor ecx, ebx
    // add esi, eax
    // add edi, ecx
    // xor ecx, 0xffffffff
    // xor eax, 0xffffffff
    // xor ecx, edi
    // xor eax, esi
    // add edx, 4
    // and ecx, 0x81010100
    // if (...) GOTO(0x4a61e8)
    // and eax, 0x81010100
    // if (...) GOTO(0x4a61a6)
    // and eax, 0x1010100
    // if (...) GOTO(0x4a61e2)
    // and esi, 0x80000000
    // if (...) GOTO(0x4a61a6)
    // pop esi
    // pop edi
    // pop ebx
    // xor eax, eax
    // return;
    // mov eax, dword ptr [edx - 4]
    // cmp al, bl
    // if (...) GOTO(0x4a6225)
    // test al, al
    // if (...) GOTO(0x4a61e2)
    // cmp ah, bl
    // if (...) GOTO(0x4a621e)
    // test ah, ah
    // if (...) GOTO(0x4a61e2)
    // shr eax, 0x10
    // cmp al, bl
    // if (...) GOTO(0x4a6217)
    // test al, al
    // if (...) GOTO(0x4a61e2)
    // cmp ah, bl
    // if (...) GOTO(0x4a6210)
    // test ah, ah
    // if (...) GOTO(0x4a61e2)
    // if (...) GOTO(0x4a61a6)
    // pop esi
    // pop edi
    // lea eax, [edx - 1]
    // pop ebx
    // return;
    // lea eax, [edx - 2]
    // pop esi
    // pop edi
    // pop ebx
    // return;
    // lea eax, [edx - 3]
    // pop esi
    // pop edi
    // pop ebx
    // return;
    // lea eax, [edx - 4]
    // pop esi
    // pop edi
    // pop ebx
    // return;
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // push edi
    // push esi
    // CALL(0x4a9874)
    // push esi
    // CALL(0x4a9ce1)
    // mov edi, eax
    // lea eax, [esp + 0x20]
    // push eax
    // push dword ptr [esp + 0x20]
    // push esi
    // CALL(0x4a9d98)
    // push esi
    // push edi
    // mov ebx, eax
    // CALL(0x4a9d6e)
    // push esi
    // CALL(0x4a98c6)
    // add esp, 0x20
    // mov eax, ebx
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push esi
    // push dword ptr [ebp + 0x14]
    // CALL(0x4a9874)
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a6297)
    // push dword ptr [ebp + 0x14]
    // mov esi, eax
    // CALL(0x4a98c6)
    // add esp, 0x18
    // mov eax, esi
    // pop esi
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // imul edi, dword ptr [ebp + 0x10]
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [ebp - 4], edi
    // test edi, edi
    // mov dword ptr [ebp + 8], eax
    // mov ebx, edi
    // if (...) GOTO(0x4a62bb)
    // xor eax, eax
    // if (...) GOTO(0x4a6388)
    // mov esi, dword ptr [ebp + 0x14]
    // test word ptr [esi + 0xc], 0x10c
    // if (...) GOTO(0x4a62ce)
    // mov eax, dword ptr [esi + 0x18]
    // mov dword ptr [ebp + 0x14], eax
    // if (...) GOTO(0x4a62d5)
    // mov dword ptr [ebp + 0x14], 0x1000
    // mov ecx, dword ptr [esi + 0xc]
    // and ecx, 0x108
    // if (...) GOTO(0x4a6309)
    // mov eax, dword ptr [esi + 4]
    // test eax, eax
    // if (...) GOTO(0x4a6309)
    // cmp ebx, eax
    // mov edi, ebx
    // if (...) GOTO(0x4a62ef)
    // mov edi, eax
    // push edi
    // push dword ptr [ebp + 8]
    // push dword ptr [esi]
    // CALL(0x4aa6c0)
    // sub dword ptr [esi + 4], edi
    // add dword ptr [esi], edi
    // add esp, 0xc
    // sub ebx, edi
    // add dword ptr [ebp + 8], edi
    // if (...) GOTO(0x4a634f)
    // cmp ebx, dword ptr [ebp + 0x14]
    // if (...) GOTO(0x4a6354)
    // test ecx, ecx
    // if (...) GOTO(0x4a631d)
    // push esi
    // CALL(0x4a99a0)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a6396)
    // cmp dword ptr [ebp + 0x14], 0
    // if (...) GOTO(0x4a6330)
    // mov eax, ebx
    // xor edx, edx
    // div dword ptr [ebp + 0x14]
    // mov edi, ebx
    // sub edi, edx
    // if (...) GOTO(0x4a6332)
    // mov edi, ebx
    // push edi
    // push dword ptr [ebp + 8]
    // push dword ptr [esi + 0x10]
    // CALL(0x4a5b58)
    // add esp, 0xc
    // cmp eax, -1
    // if (...) GOTO(0x4a638d)
    // add dword ptr [ebp + 8], eax
    // sub ebx, eax
    // cmp eax, edi
    // if (...) GOTO(0x4a638d)
    // mov edi, dword ptr [ebp - 4]
    // if (...) GOTO(0x4a637d)
    // mov eax, dword ptr [ebp + 8]
    // push esi
    // movsx eax, byte ptr [eax]
    // push eax
    // CALL(0x4aa5a2)
    // pop ecx
    // cmp eax, -1
    // pop ecx
    // if (...) GOTO(0x4a6396)
    // inc dword ptr [ebp + 8]
    // mov eax, dword ptr [esi + 0x18]
    // dec ebx
    // mov dword ptr [ebp + 0x14], eax
    // test eax, eax
    // if (...) GOTO(0x4a637d)
    // mov dword ptr [ebp + 0x14], 1
    // test ebx, ebx
    // if (...) GOTO(0x4a62d5)
    // mov eax, dword ptr [ebp + 0x10]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // or dword ptr [esi + 0xc], 0x20
    // mov eax, dword ptr [ebp - 4]
    // if (...) GOTO(0x4a6398)
    // mov eax, edi
    // sub eax, ebx
    // xor edx, edx
    // div dword ptr [ebp + 0xc]
    // if (...) GOTO(0x4a6388)
    // push ebp
    // mov ebp, esp
    // push esi
    // push dword ptr [ebp + 0x14]
    // CALL(0x4a9874)
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a63d0)
    // push dword ptr [ebp + 0x14]
    // mov esi, eax
    // CALL(0x4a98c6)
    // add esp, 0x18
    // mov eax, esi
    // pop esi
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // imul edi, dword ptr [ebp + 0x10]
    // mov ebx, dword ptr [ebp + 8]
    // mov ecx, edi
    // test edi, edi
    // mov dword ptr [ebp - 4], edi
    // mov dword ptr [ebp + 8], ecx
    // if (...) GOTO(0x4a63f4)
    // xor eax, eax
    // if (...) GOTO(0x4a649d)
    // mov esi, dword ptr [ebp + 0x14]
    // test word ptr [esi + 0xc], 0x10c
    // if (...) GOTO(0x4a6407)
    // mov eax, dword ptr [esi + 0x18]
    // mov dword ptr [ebp + 0x14], eax
    // if (...) GOTO(0x4a6413)
    // mov dword ptr [ebp + 0x14], 0x1000
    // if (...) GOTO(0x4a6413)
    // mov ecx, dword ptr [ebp + 8]
    // test word ptr [esi + 0xc], 0x10c
    // if (...) GOTO(0x4a6445)
    // mov eax, dword ptr [esi + 4]
    // test eax, eax
    // if (...) GOTO(0x4a6445)
    // cmp ecx, eax
    // mov edi, ecx
    // if (...) GOTO(0x4a642a)
    // mov edi, eax
    // push edi
    // push dword ptr [esi]
    // push ebx
    // CALL(0x4aa6c0)
    // sub dword ptr [ebp + 8], edi
    // sub dword ptr [esi + 4], edi
    // add dword ptr [esi], edi
    // add esp, 0xc
    // add ebx, edi
    // mov edi, dword ptr [ebp - 4]
    // if (...) GOTO(0x4a6490)
    // cmp ecx, dword ptr [ebp + 0x14]
    // if (...) GOTO(0x4a6478)
    // cmp dword ptr [ebp + 0x14], 0
    // mov eax, ecx
    // if (...) GOTO(0x4a645b)
    // xor edx, edx
    // div dword ptr [ebp + 0x14]
    // mov eax, ecx
    // sub eax, edx
    // push eax
    // push ebx
    // push dword ptr [esi + 0x10]
    // CALL(0x4a583a)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4a64a2)
    // cmp eax, -1
    // if (...) GOTO(0x4a64a8)
    // sub dword ptr [ebp + 8], eax
    // add ebx, eax
    // if (...) GOTO(0x4a6490)
    // push esi
    // CALL(0x4aa9f5)
    // cmp eax, -1
    // pop ecx
    // if (...) GOTO(0x4a64ac)
    // mov byte ptr [ebx], al
    // mov eax, dword ptr [esi + 0x18]
    // inc ebx
    // dec dword ptr [ebp + 8]
    // mov dword ptr [ebp + 0x14], eax
    // cmp dword ptr [ebp + 8], 0
    // if (...) GOTO(0x4a6410)
    // mov eax, dword ptr [ebp + 0x10]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // or dword ptr [esi + 0xc], 0x10
    // if (...) GOTO(0x4a64ac)
    // or dword ptr [esi + 0xc], 0x20
    // mov eax, edi
    // xor edx, edx
    // sub eax, dword ptr [ebp + 8]
    // div dword ptr [ebp + 0xc]
    // if (...) GOTO(0x4a649d)
    // push dword ptr [esp + 4]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a64ce)
    // CALL(dword)
    // if (...) GOTO(0x4a64d0)
    // xor eax, eax
    // test eax, eax
    // if (...) GOTO(0x4a64df)
    // push eax
    // CALL(0x4a9099)
    // pop ecx
    // or eax, 0xffffffff
    // return;
    // xor eax, eax
    // return;
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
}