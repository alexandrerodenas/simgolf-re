/**
 * func_004a7a13 — Auto-décompilé
 * Adresse: 0x004a7a13 [golf.exe]
 * Taille: 21360 bytes, Type: std_prologue
 * Appel: __cdecl, Locals: 0B, SEH: True
 * Appelle: dword, edi, 0x4a6d80, 0x4a80c5, 0x4a8176, eax, 0x4a8f1b, 0x4a88d7
 * Constantes: 0x4aa584, 0x4a99ed, 0x4aa2b6, 0x4a83cb, 0x4a97cc, 0x4a7e33, 0x4a5d5f, 0x4a9dc4
 */
void func_004a7a13(void) {
    /* 4272 instructions */

    // push ebp
    // mov ebp, esp
    // mov eax, dword ptr [ebp + 8]
    // push dword ptr [eax*4 + 0x4e4b1c]
    // CALL(dword)
    // pop ebp
    // return;
    // push(0x140)
    // push 0
    // push dword ptr [0x84215c]
    // CALL(dword)
    // test eax, eax
    // mov dword ptr [0x842158], eax
    // if (...) GOTO(0x4a7a45)
    // return;
    // and dword ptr [0x842150], 0
    // and dword ptr [0x842154], 0
    // push 1
    // mov dword ptr [0x84214c], eax
    // mov dword ptr [0x842144], 0x10
    // pop eax
    // return;
    // mov eax, dword ptr [0x842154]
    // lea ecx, [eax + eax*4]
    // mov eax, dword ptr [0x842158]
    // lea ecx, [eax + ecx*4]
    // cmp eax, ecx
    // jae 0x4a7a8e
    // mov edx, dword ptr [esp + 4]
    // sub edx, dword ptr [eax + 0xc]
    // cmp edx, 0x100000
    // if (...) GOTO(0x4a7a90)
    // add eax, 0x14
    // if (...) GOTO(0x4a7a76)
    // xor eax, eax
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x14
    // mov edx, dword ptr [ebp + 0xc]
    // mov ecx, dword ptr [ebp + 8]
    // push ebx
    // push esi
    // mov eax, dword ptr [ecx + 0x10]
    // mov esi, edx
    // sub esi, dword ptr [ecx + 0xc]
    // mov ebx, dword ptr [edx - 4]
    // add edx, -4
    // push edi
    // shr esi, 0xf
    // mov ecx, esi
    // mov edi, dword ptr [edx - 4]
    // imul ecx, ecx, 0x204
    // dec ebx
    // mov dword ptr [ebp - 4], edi
    // lea ecx, [ecx + eax + 0x144]
    // mov dword ptr [ebp - 0xc], ebx
    // mov dword ptr [ebp - 0x10], ecx
    // mov ecx, dword ptr [ebx + edx]
    // test cl, 1
    // mov dword ptr [ebp - 8], ecx
    // if (...) GOTO(0x4a7b57)
    // sar ecx, 4
    // push(0x3f)
    // dec ecx
    // pop edi
    // mov dword ptr [ebp + 0xc], ecx
    // cmp ecx, edi
    // jbe 0x4a7ae9
    // mov dword ptr [ebp + 0xc], edi
    // mov ecx, dword ptr [ebx + edx + 4]
    // cmp ecx, dword ptr [ebx + edx + 8]
    // if (...) GOTO(0x4a7b3b)
    // mov ecx, dword ptr [ebp + 0xc]
    // cmp ecx, 0x20
    // jae 0x4a7b17
    // mov edi, 0x80000000
    // shr edi, cl
    // lea ecx, [ecx + eax + 4]
    // not edi
    // and dword ptr [eax + esi*4 + 0x44], edi
    // dec byte ptr [ecx]
    // if (...) GOTO(0x4a7b3b)
    // mov ecx, dword ptr [ebp + 8]
    // and dword ptr [ecx], edi
    // if (...) GOTO(0x4a7b3b)
    // add ecx, -0x20
    // mov edi, 0x80000000
    // shr edi, cl
    // mov ecx, dword ptr [ebp + 0xc]
    // lea ecx, [ecx + eax + 4]
    // not edi
    // and dword ptr [eax + esi*4 + 0xc4], edi
    // dec byte ptr [ecx]
    // if (...) GOTO(0x4a7b3b)
    // mov ecx, dword ptr [ebp + 8]
    // and dword ptr [ecx + 4], edi
    // mov ecx, dword ptr [ebx + edx + 8]
    // mov edi, dword ptr [ebx + edx + 4]
    // mov dword ptr [ecx + 4], edi
    // mov ecx, dword ptr [ebx + edx + 4]
    // mov edi, dword ptr [ebx + edx + 8]
    // add ebx, dword ptr [ebp - 8]
    // mov dword ptr [ecx + 8], edi
    // mov dword ptr [ebp - 0xc], ebx
    // mov edi, ebx
    // sar edi, 4
    // dec edi
    // cmp edi, 0x3f
    // jbe 0x4a7b65
    // push(0x3f)
    // pop edi
    // mov ecx, dword ptr [ebp - 4]
    // and ecx, 1
    // mov dword ptr [ebp - 0x14], ecx
    // if (...) GOTO(0x4a7c14)
    // sub edx, dword ptr [ebp - 4]
    // mov ecx, dword ptr [ebp - 4]
    // sar ecx, 4
    // push(0x3f)
    // mov dword ptr [ebp - 8], edx
    // dec ecx
    // pop edx
    // cmp ecx, edx
    // mov dword ptr [ebp + 0xc], ecx
    // jbe 0x4a7b90
    // mov dword ptr [ebp + 0xc], edx
    // mov ecx, edx
    // add ebx, dword ptr [ebp - 4]
    // mov edi, ebx
    // mov dword ptr [ebp - 0xc], ebx
    // sar edi, 4
    // dec edi
    // cmp edi, edx
    // jbe 0x4a7ba2
    // mov edi, edx
    // cmp ecx, edi
    // if (...) GOTO(0x4a7c11)
    // mov ecx, dword ptr [ebp - 8]
    // mov edx, dword ptr [ecx + 4]
    // cmp edx, dword ptr [ecx + 8]
    // if (...) GOTO(0x4a7bf9)
    // mov ecx, dword ptr [ebp + 0xc]
    // cmp ecx, 0x20
    // jae 0x4a7bd5
    // mov edx, 0x80000000
    // shr edx, cl
    // lea ecx, [ecx + eax + 4]
    // not edx
    // and dword ptr [eax + esi*4 + 0x44], edx
    // dec byte ptr [ecx]
    // if (...) GOTO(0x4a7bf9)
    // mov ecx, dword ptr [ebp + 8]
    // and dword ptr [ecx], edx
    // if (...) GOTO(0x4a7bf9)
    // add ecx, -0x20
    // mov edx, 0x80000000
    // shr edx, cl
    // mov ecx, dword ptr [ebp + 0xc]
    // lea ecx, [ecx + eax + 4]
    // not edx
    // and dword ptr [eax + esi*4 + 0xc4], edx
    // dec byte ptr [ecx]
    // if (...) GOTO(0x4a7bf9)
    // mov ecx, dword ptr [ebp + 8]
    // and dword ptr [ecx + 4], edx
    // mov ecx, dword ptr [ebp - 8]
    // mov edx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [ecx + 4]
    // mov dword ptr [edx + 4], ecx
    // mov ecx, dword ptr [ebp - 8]
    // mov edx, dword ptr [ecx + 4]
    // mov ecx, dword ptr [ecx + 8]
    // mov dword ptr [edx + 8], ecx
    // mov edx, dword ptr [ebp - 8]
    // cmp dword ptr [ebp - 0x14], 0
    // if (...) GOTO(0x4a7c23)
    // cmp dword ptr [ebp + 0xc], edi
    // if (...) GOTO(0x4a7cac)
    // mov ecx, dword ptr [ebp - 0x10]
    // lea ecx, [ecx + edi*8]
    // mov ecx, dword ptr [ecx + 4]
    // mov dword ptr [edx + 4], ecx
    // mov ecx, dword ptr [ebp - 0x10]
    // lea ecx, [ecx + edi*8]
    // mov dword ptr [edx + 8], ecx
    // mov dword ptr [ecx + 4], edx
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [ecx + 8], edx
    // mov ecx, dword ptr [edx + 4]
    // cmp ecx, dword ptr [edx + 8]
    // if (...) GOTO(0x4a7cac)
    // mov cl, byte ptr [edi + eax + 4]
    // cmp edi, 0x20
    // mov byte ptr [ebp + 0xf], cl
    // inc cl
    // mov byte ptr [edi + eax + 4], cl
    // jae 0x4a7c80
    // cmp byte ptr [ebp + 0xf], 0
    // if (...) GOTO(0x4a7c6f)
    // mov ebx, 0x80000000
    // mov ecx, edi
    // shr ebx, cl
    // mov ecx, dword ptr [ebp + 8]
    // or dword ptr [ecx], ebx
    // mov ebx, 0x80000000
    // mov ecx, edi
    // shr ebx, cl
    // lea eax, [eax + esi*4 + 0x44]
    // or dword ptr [eax], ebx
    // if (...) GOTO(0x4a7ca9)
    // cmp byte ptr [ebp + 0xf], 0
    // if (...) GOTO(0x4a7c96)
    // lea ecx, [edi - 0x20]
    // mov ebx, 0x80000000
    // shr ebx, cl
    // mov ecx, dword ptr [ebp + 8]
    // or dword ptr [ecx + 4], ebx
    // lea ecx, [edi - 0x20]
    // mov edi, 0x80000000
    // shr edi, cl
    // lea eax, [eax + esi*4 + 0xc4]
    // or dword ptr [eax], edi
    // mov ebx, dword ptr [ebp - 0xc]
    // mov eax, dword ptr [ebp - 0x10]
    // mov dword ptr [edx], ebx
    // mov dword ptr [ebx + edx - 4], ebx
    // dec dword ptr [eax]
    // if (...) GOTO(0x4a7db7)
    // mov eax, dword ptr [0x842150]
    // test eax, eax
    // if (...) GOTO(0x4a7da9)
    // mov ecx, dword ptr [0x842148]
    // mov edi, dword ptr [0x4ba118]
    // shl ecx, 0xf
    // add ecx, dword ptr [eax + 0xc]
    // mov ebx, 0x8000
    // push(0x4000)
    // push ebx
    // push ecx
    // CALL(edi)
    // mov ecx, dword ptr [0x842148]
    // mov eax, dword ptr [0x842150]
    // mov edx, 0x80000000
    // shr edx, cl
    // or dword ptr [eax + 8], edx
    // mov eax, dword ptr [0x842150]
    // mov ecx, dword ptr [0x842148]
    // mov eax, dword ptr [eax + 0x10]
    // and dword ptr [eax + ecx*4 + 0xc4], 0
    // mov eax, dword ptr [0x842150]
    // mov eax, dword ptr [eax + 0x10]
    // dec byte ptr [eax + 0x43]
    // mov eax, dword ptr [0x842150]
    // mov ecx, dword ptr [eax + 0x10]
    // cmp byte ptr [ecx + 0x43], 0
    // if (...) GOTO(0x4a7d37)
    // and dword ptr [eax + 4], 0xfffffffe
    // mov eax, dword ptr [0x842150]
    // cmp dword ptr [eax + 8], -1
    // if (...) GOTO(0x4a7da9)
    // push ebx
    // push 0
    // push dword ptr [eax + 0xc]
    // CALL(edi)
    // mov eax, dword ptr [0x842150]
    // push dword ptr [eax + 0x10]
    // push 0
    // push dword ptr [0x84215c]
    // CALL(dword)
    // mov eax, dword ptr [0x842154]
    // mov edx, dword ptr [0x842158]
    // lea eax, [eax + eax*4]
    // shl eax, 2
    // mov ecx, eax
    // mov eax, dword ptr [0x842150]
    // sub ecx, eax
    // lea ecx, [ecx + edx - 0x14]
    // push ecx
    // lea ecx, [eax + 0x14]
    // push ecx
    // push eax
    // CALL(0x4a6d80)
    // mov eax, dword ptr [ebp + 8]
    // add esp, 0xc
    // dec dword ptr [0x842154]
    // cmp eax, dword ptr [0x842150]
    // jbe 0x4a7d9b
    // sub eax, 0x14
    // mov ecx, dword ptr [0x842158]
    // mov dword ptr [0x84214c], ecx
    // if (...) GOTO(0x4a7dac)
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [0x842150], eax
    // mov dword ptr [0x842148], esi
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x14
    // mov eax, dword ptr [0x842154]
    // mov edx, dword ptr [0x842158]
    // push ebx
    // push esi
    // lea eax, [eax + eax*4]
    // push edi
    // lea edi, [edx + eax*4]
    // mov eax, dword ptr [ebp + 8]
    // mov dword ptr [ebp - 4], edi
    // lea ecx, [eax + 0x17]
    // and ecx, 0xfffffff0
    // mov dword ptr [ebp - 0x10], ecx
    // sar ecx, 4
    // dec ecx
    // cmp ecx, 0x20
    // if (...) GOTO(0x4a7dfc)
    // or esi, 0xffffffff
    // shr esi, cl
    // or dword ptr [ebp - 8], 0xffffffff
    // mov dword ptr [ebp - 0xc], esi
    // if (...) GOTO(0x4a7e0c)
    // add ecx, -0x20
    // or eax, 0xffffffff
    // xor esi, esi
    // shr eax, cl
    // mov dword ptr [ebp - 0xc], esi
    // mov dword ptr [ebp - 8], eax
    // mov eax, dword ptr [0x84214c]
    // mov ebx, eax
    // cmp ebx, edi
    // mov dword ptr [ebp + 8], ebx
    // jae 0x4a7e33
    // mov ecx, dword ptr [ebx + 4]
    // mov edi, dword ptr [ebx]
    // and ecx, dword ptr [ebp - 8]
    // and edi, esi
    // or ecx, edi
    // if (...) GOTO(0x4a7e33)
    // add ebx, 0x14
    // cmp ebx, dword ptr [ebp - 4]
    // mov dword ptr [ebp + 8], ebx
    // if (...) GOTO(0x4a7e1a)
    // cmp ebx, dword ptr [ebp - 4]
    // if (...) GOTO(0x4a7eb1)
    // mov ebx, edx
    // cmp ebx, eax
    // mov dword ptr [ebp + 8], ebx
    // jae 0x4a7e56
    // mov ecx, dword ptr [ebx + 4]
    // mov edi, dword ptr [ebx]
    // and ecx, dword ptr [ebp - 8]
    // and edi, esi
    // or ecx, edi
    // if (...) GOTO(0x4a7e54)
    // add ebx, 0x14
    // if (...) GOTO(0x4a7e3a)
    // cmp ebx, eax
    // if (...) GOTO(0x4a7eb1)
    // cmp ebx, dword ptr [ebp - 4]
    // jae 0x4a7e6e
    // cmp dword ptr [ebx + 8], 0
    // if (...) GOTO(0x4a7e6b)
    // add ebx, 0x14
    // mov dword ptr [ebp + 8], ebx
    // if (...) GOTO(0x4a7e58)
    // cmp ebx, dword ptr [ebp - 4]
    // if (...) GOTO(0x4a7e96)
    // mov ebx, edx
    // cmp ebx, eax
    // mov dword ptr [ebp + 8], ebx
    // jae 0x4a7e86
    // cmp dword ptr [ebx + 8], 0
    // if (...) GOTO(0x4a7e84)
    // add ebx, 0x14
    // if (...) GOTO(0x4a7e72)
    // cmp ebx, eax
    // if (...) GOTO(0x4a7e96)
    // CALL(0x4a80c5)
    // mov ebx, eax
    // test ebx, ebx
    // mov dword ptr [ebp + 8], ebx
    // if (...) GOTO(0x4a7eaa)
    // push ebx
    // CALL(0x4a8176)
    // pop ecx
    // mov ecx, dword ptr [ebx + 0x10]
    // mov dword ptr [ecx], eax
    // mov eax, dword ptr [ebx + 0x10]
    // cmp dword ptr [eax], -1
    // if (...) GOTO(0x4a7eb1)
    // xor eax, eax
    // if (...) GOTO(0x4a80c0)
    // mov dword ptr [0x84214c], ebx
    // mov eax, dword ptr [ebx + 0x10]
    // mov edx, dword ptr [eax]
    // cmp edx, -1
    // mov dword ptr [ebp - 4], edx
    // if (...) GOTO(0x4a7ed8)
    // mov ecx, dword ptr [eax + edx*4 + 0xc4]
    // mov edi, dword ptr [eax + edx*4 + 0x44]
    // and ecx, dword ptr [ebp - 8]
    // and edi, esi
    // or ecx, edi
    // if (...) GOTO(0x4a7f0f)
    // mov edx, dword ptr [eax + 0xc4]
    // mov esi, dword ptr [eax + 0x44]
    // and edx, dword ptr [ebp - 8]
    // and esi, dword ptr [ebp - 0xc]
    // and dword ptr [ebp - 4], 0
    // lea ecx, [eax + 0x44]
    // or edx, esi
    // mov esi, dword ptr [ebp - 0xc]
    // if (...) GOTO(0x4a7f0c)
    // mov edx, dword ptr [ecx + 0x84]
    // inc dword ptr [ebp - 4]
    // and edx, dword ptr [ebp - 8]
    // add ecx, 4
    // mov edi, esi
    // and edi, dword ptr [ecx]
    // or edx, edi
    // if (...) GOTO(0x4a7ef5)
    // mov edx, dword ptr [ebp - 4]
    // mov ecx, edx
    // xor edi, edi
    // imul ecx, ecx, 0x204
    // lea ecx, [ecx + eax + 0x144]
    // mov dword ptr [ebp - 0xc], ecx
    // mov ecx, dword ptr [eax + edx*4 + 0x44]
    // and ecx, esi
    // if (...) GOTO(0x4a7f38)
    // mov ecx, dword ptr [eax + edx*4 + 0xc4]
    // push(0x20)
    // and ecx, dword ptr [ebp - 8]
    // pop edi
    // test ecx, ecx
    // if (...) GOTO(0x4a7f41)
    // shl ecx, 1
    // inc edi
    // if (...) GOTO(0x4a7f38)
    // mov ecx, dword ptr [ebp - 0xc]
    // mov edx, dword ptr [ecx + edi*8 + 4]
    // mov ecx, dword ptr [edx]
    // sub ecx, dword ptr [ebp - 0x10]
    // mov esi, ecx
    // mov dword ptr [ebp - 8], ecx
    // sar esi, 4
    // dec esi
    // cmp esi, 0x3f
    // if (...) GOTO(0x4a7f5e)
    // push(0x3f)
    // pop esi
    // cmp esi, edi
    // if (...) GOTO(0x4a8073)
    // mov ecx, dword ptr [edx + 4]
    // cmp ecx, dword ptr [edx + 8]
    // if (...) GOTO(0x4a7fcf)
    // cmp edi, 0x20
    // if (...) GOTO(0x4a7f9e)
    // mov ebx, 0x80000000
    // mov ecx, edi
    // shr ebx, cl
    // mov ecx, dword ptr [ebp - 4]
    // lea edi, [eax + edi + 4]
    // not ebx
    // mov dword ptr [ebp - 0x14], ebx
    // and ebx, dword ptr [eax + ecx*4 + 0x44]
    // mov dword ptr [eax + ecx*4 + 0x44], ebx
    // dec byte ptr [edi]
    // if (...) GOTO(0x4a7fcc)
    // mov ebx, dword ptr [ebp + 8]
    // mov ecx, dword ptr [ebp - 0x14]
    // and dword ptr [ebx], ecx
    // if (...) GOTO(0x4a7fcf)
    // lea ecx, [edi - 0x20]
    // mov ebx, 0x80000000
    // shr ebx, cl
    // mov ecx, dword ptr [ebp - 4]
    // lea edi, [eax + edi + 4]
    // lea ecx, [eax + ecx*4 + 0xc4]
    // not ebx
    // and dword ptr [ecx], ebx
    // dec byte ptr [edi]
    // mov dword ptr [ebp - 0x14], ebx
    // if (...) GOTO(0x4a7fcc)
    // mov ebx, dword ptr [ebp + 8]
    // mov ecx, dword ptr [ebp - 0x14]
    // and dword ptr [ebx + 4], ecx
    // if (...) GOTO(0x4a7fcf)
    // mov ebx, dword ptr [ebp + 8]
    // mov ecx, dword ptr [edx + 8]
    // mov edi, dword ptr [edx + 4]
    // cmp dword ptr [ebp - 8], 0
    // mov dword ptr [ecx + 4], edi
    // mov ecx, dword ptr [edx + 4]
    // mov edi, dword ptr [edx + 8]
    // mov dword ptr [ecx + 8], edi
    // if (...) GOTO(0x4a807f)
    // mov ecx, dword ptr [ebp - 0xc]
    // mov edi, dword ptr [ecx + esi*8 + 4]
    // lea ecx, [ecx + esi*8]
    // mov dword ptr [edx + 4], edi
    // mov dword ptr [edx + 8], ecx
    // mov dword ptr [ecx + 4], edx
    // mov ecx, dword ptr [edx + 4]
    // mov dword ptr [ecx + 8], edx
    // mov ecx, dword ptr [edx + 4]
    // cmp ecx, dword ptr [edx + 8]
    // if (...) GOTO(0x4a8070)
    // mov cl, byte ptr [esi + eax + 4]
    // cmp esi, 0x20
    // mov byte ptr [ebp + 0xb], cl
    // if (...) GOTO(0x4a8041)
    // inc cl
    // cmp byte ptr [ebp + 0xb], 0
    // mov byte ptr [esi + eax + 4], cl
    // if (...) GOTO(0x4a802f)
    // mov edi, 0x80000000
    // mov ecx, esi
    // shr edi, cl
    // or dword ptr [ebx], edi
    // mov edi, 0x80000000
    // mov ecx, esi
    // shr edi, cl
    // mov ecx, dword ptr [ebp - 4]
    // or dword ptr [eax + ecx*4 + 0x44], edi
    // if (...) GOTO(0x4a8070)
    // inc cl
    // cmp byte ptr [ebp + 0xb], 0
    // mov byte ptr [esi + eax + 4], cl
    // if (...) GOTO(0x4a805a)
    // lea ecx, [esi - 0x20]
    // mov edi, 0x80000000
    // shr edi, cl
    // or dword ptr [ebx + 4], edi
    // mov ecx, dword ptr [ebp - 4]
    // lea edi, [eax + ecx*4 + 0xc4]
    // lea ecx, [esi - 0x20]
    // mov esi, 0x80000000
    // shr esi, cl
    // or dword ptr [edi], esi
    // mov ecx, dword ptr [ebp - 8]
    // test ecx, ecx
    // if (...) GOTO(0x4a8082)
    // mov dword ptr [edx], ecx
    // mov dword ptr [ecx + edx - 4], ecx
    // if (...) GOTO(0x4a8082)
    // mov ecx, dword ptr [ebp - 8]
    // mov esi, dword ptr [ebp - 0x10]
    // add edx, ecx
    // lea ecx, [esi + 1]
    // mov dword ptr [edx], ecx
    // mov dword ptr [edx + esi - 4], ecx
    // mov esi, dword ptr [ebp - 0xc]
    // mov ecx, dword ptr [esi]
    // test ecx, ecx
    // lea edi, [ecx + 1]
    // mov dword ptr [esi], edi
    // if (...) GOTO(0x4a80b8)
    // cmp ebx, dword ptr [0x842150]
    // if (...) GOTO(0x4a80b8)
    // mov ecx, dword ptr [ebp - 4]
    // cmp ecx, dword ptr [0x842148]
    // if (...) GOTO(0x4a80b8)
    // and dword ptr [0x842150], 0
    // mov ecx, dword ptr [ebp - 4]
    // mov dword ptr [eax], ecx
    // lea eax, [edx + 4]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [0x842154]
    // mov ecx, dword ptr [0x842144]
    // push esi
    // push edi
    // xor edi, edi
    // cmp eax, ecx
    // if (...) GOTO(0x4a8108)
    // lea eax, [ecx + ecx*4 + 0x50]
    // shl eax, 2
    // push eax
    // push dword ptr [0x842158]
    // push edi
    // push dword ptr [0x84215c]
    // CALL(dword)
    // cmp eax, edi
    // if (...) GOTO(0x4a8158)
    // add dword ptr [0x842144], 0x10
    // mov dword ptr [0x842158], eax
    // mov eax, dword ptr [0x842154]
    // mov ecx, dword ptr [0x842158]
    // push(0x41c4)
    // push 8
    // lea eax, [eax + eax*4]
    // push dword ptr [0x84215c]
    // lea esi, [ecx + eax*4]
    // CALL(dword)
    // cmp eax, edi
    // mov dword ptr [esi + 0x10], eax
    // if (...) GOTO(0x4a8158)
    // push 4
    // push(0x2000)
    // push(0x100000)  // ptr?
    // push edi
    // CALL(dword)
    // cmp eax, edi
    // mov dword ptr [esi + 0xc], eax
    // if (...) GOTO(0x4a815c)
    // push dword ptr [esi + 0x10]
    // push edi
    // push dword ptr [0x84215c]
    // CALL(dword)
    // xor eax, eax
    // if (...) GOTO(0x4a8173)
    // or dword ptr [esi + 8], 0xffffffff
    // mov dword ptr [esi], edi
    // mov dword ptr [esi + 4], edi
    // inc dword ptr [0x842154]
    // mov eax, dword ptr [esi + 0x10]
    // or dword ptr [eax], 0xffffffff
    // mov eax, esi
    // pop edi
    // pop esi
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // mov ecx, dword ptr [ebp + 8]
    // push ebx
    // push esi
    // push edi
    // mov esi, dword ptr [ecx + 0x10]
    // mov eax, dword ptr [ecx + 8]
    // xor ebx, ebx
    // test eax, eax
    // if (...) GOTO(0x4a8191)
    // shl eax, 1
    // inc ebx
    // if (...) GOTO(0x4a8188)
    // mov eax, ebx
    // push(0x3f)
    // imul eax, eax, 0x204
    // pop edx
    // lea eax, [eax + esi + 0x144]
    // mov dword ptr [ebp - 4], eax
    // mov dword ptr [eax + 8], eax
    // mov dword ptr [eax + 4], eax
    // add eax, 8
    // dec edx
    // if (...) GOTO(0x4a81a6)
    // mov edi, ebx
    // push 4
    // shl edi, 0xf
    // add edi, dword ptr [ecx + 0xc]
    // push(0x1000)
    // push(0x8000)
    // push edi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a81d9)
    // or eax, 0xffffffff
    // if (...) GOTO(0x4a826c)
    // lea edx, [edi + 0x7000]
    // cmp edi, edx
    // if (...) GOTO(0x4a821f)
    // lea eax, [edi + 0x10]
    // or dword ptr [eax - 8], 0xffffffff
    // or dword ptr [eax + 0xfec], 0xffffffff
    // lea ecx, [eax + 0xffc]
    // mov dword ptr [eax - 4], 0xff0
    // mov dword ptr [eax], ecx
    // lea ecx, [eax - 0x1004]
    // mov dword ptr [eax + 4], ecx
    // mov dword ptr [eax + 0xfe8], 0xff0
    // add eax, 0x1000
    // lea ecx, [eax - 0x10]
    // cmp ecx, edx
    // jbe 0x4a81e6
    // mov eax, dword ptr [ebp - 4]
    // lea ecx, [edi + 0xc]
    // add eax, 0x1f8
    // push 1
    // pop edi
    // mov dword ptr [eax + 4], ecx
    // mov dword ptr [ecx + 8], eax
    // lea ecx, [edx + 0xc]
    // mov dword ptr [eax + 8], ecx
    // mov dword ptr [ecx + 4], eax
    // and dword ptr [esi + ebx*4 + 0x44], 0
    // mov dword ptr [esi + ebx*4 + 0xc4], edi
    // mov al, byte ptr [esi + 0x43]
    // mov cl, al
    // inc cl
    // test al, al
    // mov eax, dword ptr [ebp + 8]
    // mov byte ptr [esi + 0x43], cl
    // if (...) GOTO(0x4a825c)
    // or dword ptr [eax + 4], edi
    // mov edx, 0x80000000
    // mov ecx, ebx
    // shr edx, cl
    // not edx
    // and dword ptr [eax + 8], edx
    // mov eax, ebx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0xc
    // mov ecx, dword ptr [ebp + 8]
    // mov eax, dword ptr [ebp + 0x10]
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // mov edx, edi
    // lea esi, [eax + 0x17]
    // sub edx, dword ptr [ecx + 0xc]
    // mov eax, dword ptr [ecx + 0x10]
    // and esi, 0xfffffff0
    // shr edx, 0xf
    // mov ecx, edx
    // imul ecx, ecx, 0x204
    // lea ecx, [ecx + eax + 0x144]
    // mov dword ptr [ebp - 0xc], ecx
    // mov ecx, dword ptr [edi - 4]
    // dec ecx
    // cmp esi, ecx
    // mov dword ptr [ebp + 0x10], ecx
    // mov ebx, dword ptr [ecx + edi - 4]
    // lea edi, [ecx + edi - 4]
    // mov dword ptr [ebp - 4], ebx
    // if (...) GOTO(0x4a841f)
    // test bl, 1
    // if (...) GOTO(0x4a8418)
    // add ebx, ecx
    // cmp esi, ebx
    // if (...) GOTO(0x4a8418)
    // mov ecx, dword ptr [ebp - 4]
    // sar ecx, 4
    // dec ecx
    // cmp ecx, 0x3f
    // mov dword ptr [ebp - 8], ecx
    // jbe 0x4a82e8
    // push(0x3f)
    // pop ecx
    // mov dword ptr [ebp - 8], ecx
    // mov ebx, dword ptr [edi + 4]
    // cmp ebx, dword ptr [edi + 8]
    // if (...) GOTO(0x4a8338)
    // cmp ecx, 0x20
    // jae 0x4a8314
    // mov ebx, 0x80000000
    // shr ebx, cl
    // mov ecx, dword ptr [ebp - 8]
    // lea ecx, [ecx + eax + 4]
    // not ebx
    // and dword ptr [eax + edx*4 + 0x44], ebx
    // dec byte ptr [ecx]
    // if (...) GOTO(0x4a8338)
    // mov ecx, dword ptr [ebp + 8]
    // and dword ptr [ecx], ebx
    // if (...) GOTO(0x4a8338)
    // add ecx, -0x20
    // mov ebx, 0x80000000
    // shr ebx, cl
    // mov ecx, dword ptr [ebp - 8]
    // lea ecx, [ecx + eax + 4]
    // not ebx
    // and dword ptr [eax + edx*4 + 0xc4], ebx
    // dec byte ptr [ecx]
    // if (...) GOTO(0x4a8338)
    // mov ecx, dword ptr [ebp + 8]
    // and dword ptr [ecx + 4], ebx
    // mov ecx, dword ptr [edi + 8]
    // mov ebx, dword ptr [edi + 4]
    // mov dword ptr [ecx + 4], ebx
    // mov ecx, dword ptr [edi + 4]
    // mov edi, dword ptr [edi + 8]
    // mov dword ptr [ecx + 8], edi
    // mov ecx, dword ptr [ebp + 0x10]
    // sub ecx, esi
    // add dword ptr [ebp - 4], ecx
    // cmp dword ptr [ebp - 4], 0
    // if (...) GOTO(0x4a8406)
    // mov edi, dword ptr [ebp - 4]
    // mov ecx, dword ptr [ebp + 0xc]
    // sar edi, 4
    // dec edi
    // lea ecx, [ecx + esi - 4]
    // cmp edi, 0x3f
    // jbe 0x4a8372
    // push(0x3f)
    // pop edi
    // mov ebx, dword ptr [ebp - 0xc]
    // lea ebx, [ebx + edi*8]
    // mov dword ptr [ebp + 0x10], ebx
    // mov ebx, dword ptr [ebx + 4]
    // mov dword ptr [ecx + 4], ebx
    // mov ebx, dword ptr [ebp + 0x10]
    // mov dword ptr [ecx + 8], ebx
    // mov dword ptr [ebx + 4], ecx
    // mov ebx, dword ptr [ecx + 4]
    // mov dword ptr [ebx + 8], ecx
    // mov ebx, dword ptr [ecx + 4]
    // cmp ebx, dword ptr [ecx + 8]
    // if (...) GOTO(0x4a83f4)
    // mov cl, byte ptr [edi + eax + 4]
    // cmp edi, 0x20
    // mov byte ptr [ebp + 0x13], cl
    // inc cl
    // mov byte ptr [edi + eax + 4], cl
    // jae 0x4a83cb
    // cmp byte ptr [ebp + 0x13], 0
    // if (...) GOTO(0x4a83be)
    // mov ebx, 0x80000000
    // mov ecx, edi
    // shr ebx, cl
    // mov ecx, dword ptr [ebp + 8]
    // or dword ptr [ecx], ebx
    // lea eax, [eax + edx*4 + 0x44]
    // mov edx, 0x80000000
    // mov ecx, edi
    // if (...) GOTO(0x4a83f0)
    // cmp byte ptr [ebp + 0x13], 0
    // if (...) GOTO(0x4a83e1)
    // lea ecx, [edi - 0x20]
    // mov ebx, 0x80000000
    // shr ebx, cl
    // mov ecx, dword ptr [ebp + 8]
    // or dword ptr [ecx + 4], ebx
    // lea eax, [eax + edx*4 + 0xc4]
    // lea ecx, [edi - 0x20]
    // mov edx, 0x80000000
    // shr edx, cl
    // or dword ptr [eax], edx
    // mov edx, dword ptr [ebp + 0xc]
    // mov ecx, dword ptr [ebp - 4]
    // lea eax, [edx + esi - 4]
    // mov dword ptr [eax], ecx
    // mov dword ptr [ecx + eax - 4], ecx
    // if (...) GOTO(0x4a8409)
    // mov edx, dword ptr [ebp + 0xc]
    // lea eax, [esi + 1]
    // mov dword ptr [edx - 4], eax
    // mov dword ptr [edx + esi - 8], eax
    // if (...) GOTO(0x4a855f)
    // xor eax, eax
    // if (...) GOTO(0x4a8562)
    // if (...) GOTO(0x4a855f)
    // mov ebx, dword ptr [ebp + 0xc]
    // sub dword ptr [ebp + 0x10], esi
    // lea ecx, [esi + 1]
    // mov dword ptr [ebx - 4], ecx
    // lea ebx, [ebx + esi - 4]
    // mov esi, dword ptr [ebp + 0x10]
    // mov dword ptr [ebp + 0xc], ebx
    // sar esi, 4
    // dec esi
    // mov dword ptr [ebx - 4], ecx
    // cmp esi, 0x3f
    // jbe 0x4a844a
    // push(0x3f)
    // pop esi
    // test byte ptr [ebp - 4], 1
    // if (...) GOTO(0x4a84d9)
    // mov esi, dword ptr [ebp - 4]
    // sar esi, 4
    // dec esi
    // cmp esi, 0x3f
    // jbe 0x4a8463
    // push(0x3f)
    // pop esi
    // mov ecx, dword ptr [edi + 4]
    // cmp ecx, dword ptr [edi + 8]
    // if (...) GOTO(0x4a84b2)
    // cmp esi, 0x20
    // jae 0x4a848e
    // mov ebx, 0x80000000
    // mov ecx, esi
    // shr ebx, cl
    // lea esi, [esi + eax + 4]
    // not ebx
    // and dword ptr [eax + edx*4 + 0x44], ebx
    // dec byte ptr [esi]
    // if (...) GOTO(0x4a84af)
    // mov ecx, dword ptr [ebp + 8]
    // and dword ptr [ecx], ebx
    // if (...) GOTO(0x4a84af)
    // lea ecx, [esi - 0x20]
    // mov ebx, 0x80000000
    // shr ebx, cl
    // lea ecx, [esi + eax + 4]
    // not ebx
    // and dword ptr [eax + edx*4 + 0xc4], ebx
    // dec byte ptr [ecx]
    // if (...) GOTO(0x4a84af)
    // mov ecx, dword ptr [ebp + 8]
    // and dword ptr [ecx + 4], ebx
    // mov ebx, dword ptr [ebp + 0xc]
    // mov ecx, dword ptr [edi + 8]
    // mov esi, dword ptr [edi + 4]
    // mov dword ptr [ecx + 4], esi
    // mov ecx, dword ptr [edi + 4]
    // mov esi, dword ptr [edi + 8]
    // mov dword ptr [ecx + 8], esi
    // mov esi, dword ptr [ebp + 0x10]
    // add esi, dword ptr [ebp - 4]
    // mov dword ptr [ebp + 0x10], esi
    // sar esi, 4
    // dec esi
    // cmp esi, 0x3f
    // jbe 0x4a84d9
    // push(0x3f)
    // pop esi
    // mov ecx, dword ptr [ebp - 0xc]
    // mov edi, dword ptr [ecx + esi*8 + 4]
    // lea ecx, [ecx + esi*8]
    // mov dword ptr [ebx + 4], edi
    // mov dword ptr [ebx + 8], ecx
    // mov dword ptr [ecx + 4], ebx
    // mov ecx, dword ptr [ebx + 4]
    // mov dword ptr [ecx + 8], ebx
    // mov ecx, dword ptr [ebx + 4]
    // cmp ecx, dword ptr [ebx + 8]
    // if (...) GOTO(0x4a8556)
    // mov cl, byte ptr [esi + eax + 4]
    // cmp esi, 0x20
    // mov byte ptr [ebp + 0xf], cl
    // inc cl
    // mov byte ptr [esi + eax + 4], cl
    // jae 0x4a852d
    // cmp byte ptr [ebp + 0xf], 0
    // if (...) GOTO(0x4a8520)
    // mov edi, 0x80000000
    // mov ecx, esi
    // shr edi, cl
    // mov ecx, dword ptr [ebp + 8]
    // or dword ptr [ecx], edi
    // lea eax, [eax + edx*4 + 0x44]
    // mov edx, 0x80000000
    // mov ecx, esi
    // if (...) GOTO(0x4a8552)
    // cmp byte ptr [ebp + 0xf], 0
    // if (...) GOTO(0x4a8543)
    // lea ecx, [esi - 0x20]
    // mov edi, 0x80000000
    // shr edi, cl
    // mov ecx, dword ptr [ebp + 8]
    // or dword ptr [ecx + 4], edi
    // lea eax, [eax + edx*4 + 0xc4]
    // lea ecx, [esi - 0x20]
    // mov edx, 0x80000000
    // shr edx, cl
    // or dword ptr [eax], edx
    // mov eax, dword ptr [ebp + 0x10]
    // mov dword ptr [ebx], eax
    // mov dword ptr [eax + ebx - 4], eax
    // push 1
    // pop eax
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [0x840b1c]
    // test eax, eax
    // if (...) GOTO(0x4a857f)
    // push dword ptr [esp + 4]
    // CALL(eax)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a857f)
    // push 1
    // pop eax
    // return;
    // xor eax, eax
    // return;
    // push ebp
    // mov ebp, esp
    // push esi
    // mov esi, dword ptr [ebp + 0x18]
    // push edi
    // mov edi, 0x19930520
    // cmp dword ptr [esi], edi
    // if (...) GOTO(0x4a8598)
    // CALL(0x4a8f1b)
    // mov eax, dword ptr [ebp + 8]
    // test byte ptr [eax + 4], 0x66
    // if (...) GOTO(0x4a85c0)
    // cmp dword ptr [esi + 4], 0
    // if (...) GOTO(0x4a8616)
    // cmp dword ptr [ebp + 0x1c], 0
    // if (...) GOTO(0x4a8616)
    // push -1
    // push esi
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0xc]
    // CALL(0x4a88d7)
    // add esp, 0x10
    // if (...) GOTO(0x4a8616)
    // cmp dword ptr [esi + 0xc], 0
    // if (...) GOTO(0x4a8616)
    // cmp dword ptr [eax], 0xe06d7363
    // if (...) GOTO(0x4a85fa)
    // cmp dword ptr [eax + 0x14], edi
    // jbe 0x4a85fa
    // mov ecx, dword ptr [eax + 0x1c]
    // mov ecx, dword ptr [ecx + 8]
    // test ecx, ecx
    // if (...) GOTO(0x4a85fa)
    // movzx edx, byte ptr [ebp + 0x24]
    // push edx
    // push dword ptr [ebp + 0x20]
    // push dword ptr [ebp + 0x1c]
    // push esi
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push eax
    // CALL(ecx)
    // add esp, 0x20
    // if (...) GOTO(0x4a8619)
    // push dword ptr [ebp + 0x20]
    // push dword ptr [ebp + 0x1c]
    // push dword ptr [ebp + 0x24]
    // push esi
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push eax
    // CALL(0x4a861d)
    // add esp, 0x20
    // push 1
    // pop eax
    // pop edi
    // pop esi
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x18
    // mov eax, dword ptr [ebp + 0xc]
    // and byte ptr [ebp - 0x14], 0
    // mov eax, dword ptr [eax + 8]
    // cmp eax, -1
    // mov dword ptr [ebp - 0x10], eax
    // if (...) GOTO(0x4a863d)
    // mov ecx, dword ptr [ebp + 0x18]
    // cmp eax, dword ptr [ecx + 4]
    // if (...) GOTO(0x4a8642)
    // CALL(0x4a8f1b)
    // push ebx
    // push esi
    // mov esi, dword ptr [ebp + 8]
    // mov ebx, 0xe06d7363
    // push edi
    // mov edi, 0x19930520
    // cmp dword ptr [esi], ebx
    // if (...) GOTO(0x4a87a5)
    // cmp dword ptr [esi + 0x10], 3
    // if (...) GOTO(0x4a86c2)
    // cmp dword ptr [esi + 0x14], edi
    // if (...) GOTO(0x4a86c2)
    // cmp dword ptr [esi + 0x1c], 0
    // if (...) GOTO(0x4a86c2)
    // CALL(0x4a8e53)
    // cmp dword ptr [eax + 0x6c], 0
    // if (...) GOTO(0x4a87a0)
    // CALL(0x4a8e53)
    // mov esi, dword ptr [eax + 0x6c]
    // CALL(0x4a8e53)
    // mov eax, dword ptr [eax + 0x70]
    // push 1
    // push esi
    // mov dword ptr [ebp + 0x10], eax
    // mov byte ptr [ebp - 0x14], 1
    // CALL(0x4abed8)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a86a4)
    // CALL(0x4a8f1b)
    // cmp dword ptr [esi], ebx
    // if (...) GOTO(0x4a87a5)
    // cmp dword ptr [esi + 0x10], 3
    // if (...) GOTO(0x4a86c2)
    // cmp dword ptr [esi + 0x14], edi
    // if (...) GOTO(0x4a86c2)
    // cmp dword ptr [esi + 0x1c], 0
    // if (...) GOTO(0x4a86c2)
    // CALL(0x4a8f1b)
    // cmp dword ptr [esi], ebx
    // if (...) GOTO(0x4a87a5)
    // cmp dword ptr [esi + 0x10], 3
    // if (...) GOTO(0x4a87a5)
    // cmp dword ptr [esi + 0x14], edi
    // if (...) GOTO(0x4a87a5)
    // mov edi, dword ptr [ebp - 0x10]
    // lea eax, [ebp - 0x18]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // push edi
    // push dword ptr [ebp + 0x20]
    // push dword ptr [ebp + 0x18]
    // CALL(0x4a5466)
    // add esp, 0x14
    // mov ebx, eax
    // mov eax, dword ptr [ebp - 4]
    // cmp eax, dword ptr [ebp - 0x18]
    // jae 0x4a8790
    // cmp dword ptr [ebx], edi
    // if (...) GOTO(0x4a8785)
    // cmp edi, dword ptr [ebx + 4]
    // if (...) GOTO(0x4a8785)
    // mov eax, dword ptr [ebx + 0x10]
    // mov dword ptr [ebp + 8], eax
    // mov eax, dword ptr [ebx + 0xc]
    // test eax, eax
    // mov dword ptr [ebp - 0xc], eax
    // if (...) GOTO(0x4a8782)
    // mov eax, dword ptr [esi + 0x1c]
    // mov eax, dword ptr [eax + 0xc]
    // lea edi, [eax + 4]
    // mov eax, dword ptr [eax]
    // test eax, eax
    // mov dword ptr [ebp - 8], eax
    // if (...) GOTO(0x4a874f)
    // push dword ptr [esi + 0x1c]
    // push dword ptr [edi]
    // push dword ptr [ebp + 8]
    // CALL(0x4a887a)
    // add esp, 0xc
    // test eax, eax
    // if (...) GOTO(0x4a875e)
    // dec dword ptr [ebp - 8]
    // add edi, 4
    // cmp dword ptr [ebp - 8], eax
    // if (...) GOTO(0x4a8730)
    // dec dword ptr [ebp - 0xc]
    // add dword ptr [ebp + 8], 0x10
    // cmp dword ptr [ebp - 0xc], 0
    // if (...) GOTO(0x4a871e)
    // if (...) GOTO(0x4a8782)
    // push dword ptr [ebp - 0x14]
    // push dword ptr [ebp + 0x24]
    // push dword ptr [ebp + 0x20]
    // push ebx
    // push dword ptr [edi]
    // push dword ptr [ebp + 8]
    // push dword ptr [ebp + 0x18]
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push esi
    // CALL(0x4a898b)
    // add esp, 0x2c
    // mov edi, dword ptr [ebp - 0x10]
    // inc dword ptr [ebp - 4]
    // add ebx, 0x14
    // if (...) GOTO(0x4a86f9)
    // cmp byte ptr [ebp + 0x1c], 0
    // if (...) GOTO(0x4a87a0)
    // push 1
    // push esi
    // CALL(0x4a8d0f)
    // pop ecx
    // pop ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // cmp byte ptr [ebp + 0x1c], 0
    // if (...) GOTO(0x4a87cb)
    // push dword ptr [ebp + 0x24]
    // push dword ptr [ebp + 0x20]
    // push dword ptr [ebp - 0x10]
    // push dword ptr [ebp + 0x18]
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push esi
    // CALL(0x4a87d0)
    // add esp, 0x20
    // if (...) GOTO(0x4a87a0)
    // if (...) GOTO(0x4a8eba)
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // push esi
    // push edi
    // CALL(0x4a8e53)
    // cmp dword ptr [eax + 0x68], 0
    // if (...) GOTO(0x4a8803)
    // push dword ptr [ebp + 0x24]
    // push dword ptr [ebp + 0x20]
    // push dword ptr [ebp + 0x18]
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a533b)
    // add esp, 0x1c
    // test eax, eax
    // if (...) GOTO(0x4a8876)
    // mov edi, dword ptr [ebp + 0x1c]
    // lea eax, [ebp - 8]
    // push eax
    // lea eax, [ebp - 4]
    // push eax
    // push edi
    // push dword ptr [ebp + 0x20]
    // push dword ptr [ebp + 0x18]
    // CALL(0x4a5466)
    // add esp, 0x14
    // mov esi, eax
    // mov eax, dword ptr [ebp - 4]
    // cmp eax, dword ptr [ebp - 8]
    // jae 0x4a8876
    // cmp edi, dword ptr [esi]
    // if (...) GOTO(0x4a886e)
    // cmp edi, dword ptr [esi + 4]
    // if (...) GOTO(0x4a886e)
    // mov eax, dword ptr [esi + 0xc]
    // mov ecx, dword ptr [esi + 0x10]
    // shl eax, 4
    // add eax, ecx
    // mov ecx, dword ptr [eax - 0xc]
    // test ecx, ecx
    // if (...) GOTO(0x4a8848)
    // cmp byte ptr [ecx + 8], 0
    // if (...) GOTO(0x4a886e)
    // push 1
    // add eax, -0x10
    // push dword ptr [ebp + 0x24]
    // push dword ptr [ebp + 0x20]
    // push esi
    // push 0
    // push eax
    // push dword ptr [ebp + 0x18]
    // push dword ptr [ebp + 0x14]
    // push dword ptr [ebp + 0x10]
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a898b)
    // add esp, 0x2c
    // inc dword ptr [ebp - 4]
    // add esi, 0x14
    // if (...) GOTO(0x4a881f)
    // pop edi
    // pop esi
    // leave 
    // return;
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0xc]
    // mov eax, dword ptr [edi + 4]
    // test eax, eax
    // if (...) GOTO(0x4a88d1)
    // cmp byte ptr [eax + 8], 0
    // lea edx, [eax + 8]
    // if (...) GOTO(0x4a88d1)
    // mov esi, dword ptr [esp + 0x10]
    // mov ecx, dword ptr [esi + 4]
    // cmp eax, ecx
    // if (...) GOTO(0x4a88ab)
    // add ecx, 8
    // push ecx
    // push edx
    // CALL(0x4abf30)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a88cd)
    // test byte ptr [esi], 2
    // if (...) GOTO(0x4a88b5)
    // test byte ptr [edi], 8
    // if (...) GOTO(0x4a88cd)
    // mov eax, dword ptr [esp + 0x14]
    // mov eax, dword ptr [eax]
    // test al, 1
    // if (...) GOTO(0x4a88c4)
    // test byte ptr [edi], 1
    // if (...) GOTO(0x4a88cd)
    // test al, 2
    // if (...) GOTO(0x4a88d1)
    // test byte ptr [edi], 2
    // if (...) GOTO(0x4a88d1)
    // xor eax, eax
    // if (...) GOTO(0x4a88d4)
    // push 1
    // pop eax
    // pop edi
    // pop esi
    // return;
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc4b8)  // ptr?
    // push(0x4a8f7c)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0xc
    // push ebx
    // push esi
    // push edi
    // mov dword ptr [ebp - 0x18], esp
    // mov ebx, dword ptr [ebp + 8]
    // mov esi, dword ptr [ebx + 8]
    // mov dword ptr [ebp - 0x1c], esi
    // mov edi, dword ptr [ebp + 0x10]
    // cmp esi, dword ptr [ebp + 0x14]
    // if (...) GOTO(0x4a8963)
    // cmp esi, -1
    // if (...) GOTO(0x4a8918)
    // cmp esi, dword ptr [edi + 4]
    // if (...) GOTO(0x4a891d)
    // CALL(0x4a8f1b)
    // and dword ptr [ebp - 4], 0
    // mov eax, dword ptr [edi + 8]
    // mov eax, dword ptr [eax + esi*8 + 4]
    // test eax, eax
    // if (...) GOTO(0x4a8938)
    // push(0x103)
    // push ebx
    // push eax
    // CALL(0x4a8da0)
    // or dword ptr [ebp - 4], 0xffffffff
    // if (...) GOTO(0x4a8958)
    // push dword ptr [ebp - 0x14]
    // CALL(0x4a8975)
    // pop ecx
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // or dword ptr [ebp - 4], 0xffffffff
    // mov edi, dword ptr [ebp + 0x10]
    // mov ebx, dword ptr [ebp + 8]
    // mov esi, dword ptr [ebp - 0x1c]
    // mov eax, dword ptr [edi + 8]
    // mov esi, dword ptr [eax + esi*8]
    // mov dword ptr [ebp - 0x1c], esi
    // if (...) GOTO(0x4a8909)
    // mov dword ptr [ebx + 8], esi
    // mov ecx, dword ptr [ebp - 0x10]
    // mov dword ptr fs:[0], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [esp + 4]
    // mov eax, dword ptr [eax]
    // cmp dword ptr [eax], 0xe06d7363
    // if (...) GOTO(0x4a8986)
    // xor eax, eax
    // return;
    // if (...) GOTO(0x4a8eba)
    // push ebp
    // mov ebp, esp
    // cmp dword ptr [ebp + 0x20], 0
    // push ebx
    // mov ebx, dword ptr [ebp + 0x1c]
    // push esi
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // if (...) GOTO(0x4a89ad)
    // push dword ptr [ebp + 0x20]
    // push ebx
    // push edi
    // push dword ptr [ebp + 8]
    // CALL(0x4a8b4b)
    // add esp, 0x10
    // cmp dword ptr [ebp + 0x2c], 0
    // push dword ptr [ebp + 8]
    // if (...) GOTO(0x4a89b9)
    // push edi
    // if (...) GOTO(0x4a89bc)
    // push dword ptr [ebp + 0x2c]
    // CALL(0x4a523d)
    // mov esi, dword ptr [ebp + 0x24]
    // push dword ptr [esi]
    // push dword ptr [ebp + 0x18]
    // push dword ptr [ebp + 0x14]
    // push edi
    // CALL(0x4a88d7)
    // mov eax, dword ptr [esi + 4]
    // push(0x100)
    // push dword ptr [ebp + 0x28]
    // inc eax
    // mov dword ptr [edi + 8], eax
    // push dword ptr [ebx + 0xc]
    // push dword ptr [ebp + 0x18]
    // push dword ptr [ebp + 0x10]
    // push edi
    // push dword ptr [ebp + 8]
    // CALL(0x4a8a06)
    // add esp, 0x2c
    // test eax, eax
    // if (...) GOTO(0x4a8a01)
    // push edi
    // push eax
    // CALL(0x4a51fb)
    // pop edi
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc4c8)  // ptr?
    // push(0x4a8f7c)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0x1c
    // push ebx
    // push esi
    // push edi
    // mov dword ptr [ebp - 0x18], esp
    // mov ebx, dword ptr [ebp + 0x18]
    // mov dword ptr [ebp - 0x2c], ebx
    // and dword ptr [ebp - 0x24], 0
    // mov esi, dword ptr [ebp + 0xc]
    // mov eax, dword ptr [esi - 4]
    // mov dword ptr [ebp - 0x28], eax
    // CALL(0x4a8e53)
    // mov eax, dword ptr [eax + 0x6c]
    // mov dword ptr [ebp - 0x1c], eax
    // CALL(0x4a8e53)
    // mov eax, dword ptr [eax + 0x70]
    // mov dword ptr [ebp - 0x20], eax
    // CALL(0x4a8e53)
    // mov edi, dword ptr [ebp + 8]
    // mov dword ptr [eax + 0x6c], edi
    // CALL(0x4a8e53)
    // mov ecx, dword ptr [ebp + 0x10]
    // mov dword ptr [eax + 0x70], ecx
    // and dword ptr [ebp - 4], 0
    // mov dword ptr [ebp - 4], 1
    // push dword ptr [ebp + 0x20]
    // push dword ptr [ebp + 0x1c]
    // push ebx
    // push dword ptr [ebp + 0x14]
    // push esi
    // CALL(0x4a52c2)
    // add esp, 0x14
    // mov dword ptr [ebp - 0x2c], eax
    // and dword ptr [ebp - 4], 0
    // or dword ptr [ebp - 4], 0xffffffff
    // CALL(0x4a8ad3)
    // mov eax, dword ptr [ebp - 0x2c]
    // mov ecx, dword ptr [ebp - 0x10]
    // mov dword ptr fs:[0], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push dword ptr [ebp - 0x14]
    // CALL(0x4a8b21)
    // pop ecx
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // and dword ptr [ebp - 0x2c], 0
    // push -1
    // lea eax, [ebp - 0x10]
    // push eax
    // CALL(0x4a5526)
    // pop ecx
    // pop ecx
    // xor eax, eax
    // if (...) GOTO(0x4a8a9c)
    // mov esi, dword ptr [ebp + 0xc]
    // mov edi, dword ptr [ebp + 8]
    // mov eax, dword ptr [ebp - 0x28]
    // mov dword ptr [esi - 4], eax
    // CALL(0x4a8e53)
    // mov ecx, dword ptr [ebp - 0x1c]
    // mov dword ptr [eax + 0x6c], ecx
    // CALL(0x4a8e53)
    // mov ecx, dword ptr [ebp - 0x20]
    // mov dword ptr [eax + 0x70], ecx
    // cmp dword ptr [edi], 0xe06d7363
    // if (...) GOTO(0x4a8b20)
    // cmp dword ptr [edi + 0x10], 3
    // if (...) GOTO(0x4a8b20)
    // cmp dword ptr [edi + 0x14], 0x19930520
    // if (...) GOTO(0x4a8b20)
    // cmp dword ptr [ebp - 0x24], 0
    // if (...) GOTO(0x4a8b20)
    // cmp dword ptr [ebp - 0x2c], 0
    // if (...) GOTO(0x4a8b20)
    // CALL(0x4a558e)
    // push eax
    // push edi
    // CALL(0x4a8d0f)
    // pop ecx
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 4]
    // mov eax, dword ptr [eax]
    // cmp dword ptr [eax], 0xe06d7363
    // if (...) GOTO(0x4a8b48)
    // cmp dword ptr [eax + 0x10], 3
    // if (...) GOTO(0x4a8b48)
    // cmp dword ptr [eax + 0x14], 0x19930520
    // if (...) GOTO(0x4a8b48)
    // cmp dword ptr [eax + 0x1c], 0
    // if (...) GOTO(0x4a8b48)
    // push 1
    // pop eax
    // return;
    // xor eax, eax
    // return;
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc4e0)  // ptr?
    // push(0x4a8f7c)  // ptr?
    // mov eax, dword ptr fs:[0]
    // push eax
    // mov dword ptr fs:[0], esp
    // sub esp, 0xc
    // push ebx
    // push esi
    // push edi
    // mov dword ptr [ebp - 0x18], esp
    // mov ecx, dword ptr [ebp + 0x10]
    // mov eax, dword ptr [ecx + 4]
    // test eax, eax
    // if (...) GOTO(0x4a8cf4)
    // cmp byte ptr [eax + 8], 0
    // if (...) GOTO(0x4a8cf4)
    // mov eax, dword ptr [ecx + 8]
    // test eax, eax
    // if (...) GOTO(0x4a8cf4)
    // mov edx, dword ptr [ebp + 0xc]
    // lea edi, [eax + edx + 0xc]
    // and dword ptr [ebp - 4], 0
    // test byte ptr [ecx], 8
    // if (...) GOTO(0x4a8be8)
    // mov esi, dword ptr [ebp + 8]
    // push 1
    // push dword ptr [esi + 0x18]
    // CALL(0x4abed8)
    // pop ecx
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a8ceb)
    // push 1
    // push edi
    // CALL(0x4abef4)
    // pop ecx
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a8ceb)
    // mov eax, dword ptr [esi + 0x18]
    // mov dword ptr [edi], eax
    // mov ecx, dword ptr [ebp + 0x14]
    // add ecx, 8
    // push ecx
    // push eax
    // CALL(0x4a8d76)
    // pop ecx
    // pop ecx
    // mov dword ptr [edi], eax
    // if (...) GOTO(0x4a8cf0)
    // mov esi, dword ptr [ebp + 0x14]
    // test byte ptr [esi], 1
    // if (...) GOTO(0x4a8c42)
    // mov ebx, dword ptr [ebp + 8]
    // push 1
    // push dword ptr [ebx + 0x18]
    // CALL(0x4abed8)
    // pop ecx
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a8ceb)
    // push 1
    // push edi
    // CALL(0x4abef4)
    // pop ecx
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a8ceb)
    // push dword ptr [esi + 0x14]
    // push dword ptr [ebx + 0x18]
    // push edi
    // CALL(0x4a6d80)
    // add esp, 0xc
    // cmp dword ptr [esi + 0x14], 4
    // if (...) GOTO(0x4a8cf0)
    // mov eax, dword ptr [edi]
    // test eax, eax
    // if (...) GOTO(0x4a8cf0)
    // add esi, 8
    // push esi
    // if (...) GOTO(0x4a8bd9)
    // cmp dword ptr [esi + 0x18], 0
    // mov ebx, dword ptr [ebp + 8]
    // push 1
    // push dword ptr [ebx + 0x18]
    // if (...) GOTO(0x4a8c8a)
    // CALL(0x4abed8)
    // pop ecx
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a8ceb)
    // push 1
    // push edi
    // CALL(0x4abef4)
    // pop ecx
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a8ceb)
    // push dword ptr [esi + 0x14]
    // add esi, 8
    // push esi
    // push dword ptr [ebx + 0x18]
    // CALL(0x4a8d76)
    // pop ecx
    // pop ecx
    // push eax
    // push edi
    // CALL(0x4a6d80)
    // add esp, 0xc
    // if (...) GOTO(0x4a8cf0)
    // CALL(0x4abed8)
    // pop ecx
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a8ceb)
    // push 1
    // push edi
    // CALL(0x4abef4)
    // pop ecx
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a8ceb)
    // push dword ptr [esi + 0x18]
    // CALL(0x4abf10)
    // pop ecx
    // test eax, eax
    // if (...) GOTO(0x4a8ceb)
    // test byte ptr [esi], 4
    // if (...) GOTO(0x4a8cd1)
    // push 1
    // lea eax, [esi + 8]
    // push eax
    // push dword ptr [ebx + 0x18]
    // CALL(0x4a8d76)
    // pop ecx
    // pop ecx
    // push eax
    // push dword ptr [esi + 0x18]
    // push edi
    // CALL(0x4a5236)
    // if (...) GOTO(0x4a8cf0)
    // lea eax, [esi + 8]
    // push eax
    // push dword ptr [ebx + 0x18]
    // CALL(0x4a8d76)
    // pop ecx
    // pop ecx
    // push eax
    // push dword ptr [esi + 0x18]
    // push edi
    // CALL(0x4a522f)
    // if (...) GOTO(0x4a8cf0)
    // CALL(0x4a8f1b)
    // or dword ptr [ebp - 4], 0xffffffff
    // mov ecx, dword ptr [ebp - 0x10]
    // mov dword ptr fs:[0], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push 1
    // pop eax
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // if (...) GOTO(0x4a8eba)
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc4f0)  // ptr?
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
    // mov eax, dword ptr [ebp + 8]
    // test eax, eax
    // if (...) GOTO(0x4a8d56)
    // mov ecx, dword ptr [eax + 0x1c]
    // mov ecx, dword ptr [ecx + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4a8d56)
    // and dword ptr [ebp - 4], 0
    // push ecx
    // push dword ptr [eax + 0x18]
    // CALL(0x4a522f)
    // or dword ptr [ebp - 4], 0xffffffff
    // mov ecx, dword ptr [ebp - 0x10]
    // mov dword ptr fs:[0], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // xor eax, eax
    // cmp byte ptr [ebp + 0xc], al
    // setne al
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // if (...) GOTO(0x4a8eba)
    // mov ecx, dword ptr [esp + 8]
    // push esi
    // mov esi, dword ptr [esp + 8]
    // mov eax, dword ptr [ecx]
    // mov edx, dword ptr [ecx + 4]
    // add eax, esi
    // test edx, edx
    // if (...) GOTO(0x4a8d97)
    // mov esi, dword ptr [edx + esi]
    // mov ecx, dword ptr [ecx + 8]
    // mov ecx, dword ptr [esi + ecx]
    // add ecx, edx
    // add eax, ecx
    // pop esi
    // return;
    // CALL(0x405097)
    // // __debugbreak()
    // // __debugbreak()
    // push ebp
    // mov ebp, esp
    // sub esp, 4
    // push ebx
    // push ecx
    // mov eax, dword ptr [ebp + 0xc]
    // add eax, 0xc
    // mov dword ptr [ebp - 4], eax
    // mov eax, dword ptr [ebp + 8]
    // push ebp
    // push dword ptr [ebp + 0x10]
    // mov ecx, dword ptr [ebp + 0x10]
    // mov ebp, dword ptr [ebp - 4]
    // CALL(0x4a55b1)
    // push esi
    // push edi
    // CALL(eax)
    // pop edi
    // pop esi
    // mov ebx, ebp
    // pop ebp
    // mov ecx, dword ptr [ebp + 0x10]
    // push ebp
    // mov ebp, ebx
    // cmp ecx, 0x100
    // if (...) GOTO(0x4a8ddf)
    // mov ecx, 2
    // push ecx
    // CALL(0x4a55b1)
    // pop ebp
    // pop ecx
    // pop ebx
    // leave 
    // return;
    // push esi
    // CALL(0x4a7989)
    // CALL(dword)
    // cmp eax, -1
    // mov dword ptr [0x4e4bf0], eax
    // if (...) GOTO(0x4a8e3c)
    // push(0x74)
    // push 1
    // CALL(0x4ab534)
    // mov esi, eax
    // pop ecx
    // test esi, esi
    // pop ecx
    // if (...) GOTO(0x4a8e3c)
    // push esi
    // push dword ptr [0x4e4bf0]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a8e3c)
    // push esi
    // CALL(0x4a8e40)
    // pop ecx
    // CALL(dword)
    // or dword ptr [esi + 4], 0xffffffff
    // push 1
    // mov dword ptr [esi], eax
    // pop eax
    // pop esi
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 4]
    // mov dword ptr [eax + 0x50], 0x4e5338
    // mov dword ptr [eax + 0x14], 1
    // return;
    // push esi
    // push edi
    // CALL(dword)
    // push dword ptr [0x4e4bf0]
    // mov edi, eax
    // CALL(dword)
    // mov esi, eax
    // test esi, esi
    // if (...) GOTO(0x4a8eae)
    // push(0x74)
    // push 1
    // CALL(0x4ab534)
    // mov esi, eax
    // pop ecx
    // test esi, esi
    // pop ecx
    // if (...) GOTO(0x4a8ea6)
    // push esi
    // push dword ptr [0x4e4bf0]
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a8ea6)
    // push esi
    // CALL(0x4a8e40)
    // pop ecx
    // CALL(dword)
    // or dword ptr [esi + 4], 0xffffffff
    // mov dword ptr [esi], eax
    // if (...) GOTO(0x4a8eae)
    // push(0x10)
    // CALL(0x4a6937)
    // pop ecx
    // push edi
    // CALL(dword)
    // mov eax, esi
    // pop edi
    // pop esi
    // return;
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc500)  // ptr?
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
    // xor esi, esi
    // mov dword ptr [ebp - 4], esi
    // CALL(0x4a8e53)
    // cmp dword ptr [eax + 0x60], esi
    // if (...) GOTO(0x4a8f0d)
    // mov dword ptr [ebp - 4], 1
    // CALL(0x4a8e53)
    // CALL(dword)
    // mov dword ptr [ebp - 4], esi
    // if (...) GOTO(0x4a8f0d)
    // push 1
    // pop eax
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // and dword ptr [ebp - 4], 0
    // or dword ptr [ebp - 4], 0xffffffff
    // CALL(0x4a8f16)
    // if (...) GOTO(0x4abfb4)
    // push ebp
    // mov ebp, esp
    // push -1
    // push(0x4bc518)  // ptr?
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
    // mov eax, dword ptr [0x4e4bf4]
    // test eax, eax
    // if (...) GOTO(0x4a8f63)
    // mov dword ptr [ebp - 4], 1
    // CALL(eax)
    // if (...) GOTO(0x4a8f5f)
    // push 1
    // pop eax
    // return;
    // mov esp, dword ptr [ebp - 0x18]
    // and dword ptr [ebp - 4], 0
    // or dword ptr [ebp - 4], 0xffffffff
    // CALL(0x4a8f6c)
    // if (...) GOTO(0x4a8eba)
    // // __debugbreak()
    // // __debugbreak()
    // // __debugbreak()
    // push esi
    // inc ebx
    // xor dh, byte ptr [eax]
    // pop eax
    // inc ebx
    // xor byte ptr [eax], dh
    // push ebp
    // mov ebp, esp
    // sub esp, 8
    // push ebx
    // push esi
    // push edi
    // push ebp
    // cld 
    // mov ebx, dword ptr [ebp + 0xc]
    // mov eax, dword ptr [ebp + 8]
    // test dword ptr [eax + 4], 6
    // if (...) GOTO(0x4a901c)
    // mov dword ptr [ebp - 8], eax
    // mov eax, dword ptr [ebp + 0x10]
    // mov dword ptr [ebp - 4], eax
    // lea eax, [ebp - 8]
    // mov dword ptr [ebx - 4], eax
    // mov esi, dword ptr [ebx + 0xc]
    // mov edi, dword ptr [ebx + 8]
    // cmp esi, -1
    // if (...) GOTO(0x4a9015)
    // lea ecx, [esi + esi*2]
    // cmp dword ptr [edi + ecx*4 + 4], 0
    // if (...) GOTO(0x4a9003)
    // push esi
    // push ebp
    // lea ebp, [ebx + 0x10]
    // CALL(dword)
    // pop ebp
    // pop esi
    // mov ebx, dword ptr [ebp + 0xc]
    // or eax, eax
    // if (...) GOTO(0x4a9003)
    // js 0x4a900e
    // mov edi, dword ptr [ebx + 8]
    // push ebx
    // CALL(0x4a54e4)
    // add esp, 4
    // lea ebp, [ebx + 0x10]
    // push esi
    // push ebx
    // CALL(0x4a5526)
    // add esp, 8
    // lea ecx, [esi + esi*2]
    // push 1
    // mov eax, dword ptr [edi + ecx*4 + 8]
    // CALL(0x4a55ba)
    // mov eax, dword ptr [edi + ecx*4]
    // mov dword ptr [ebx + 0xc], eax
    // CALL(dword)
    // mov edi, dword ptr [ebx + 8]
    // lea ecx, [esi + esi*2]
    // mov esi, dword ptr [edi + ecx*4]
    // if (...) GOTO(0x4a8faf)
    // mov eax, 0
    // if (...) GOTO(0x4a9031)
    // mov eax, 1
    // if (...) GOTO(0x4a9031)
    // push ebp
    // lea ebp, [ebx + 0x10]
    // push -1
    // push ebx
    // CALL(0x4a5526)
    // add esp, 8
    // pop ebp
    // mov eax, 1
    // pop ebp
    // pop edi
    // pop esi
    // pop ebx
    // mov esp, ebp
    // pop ebp
    // return;
    // push ebp
    // mov ecx, dword ptr [esp + 8]
    // mov ebp, dword ptr [ecx]
    // mov eax, dword ptr [ecx + 0x1c]
    // push eax
    // mov eax, dword ptr [ecx + 0x18]
    // push eax
    // CALL(0x4a5526)
    // add esp, 8
    // pop ebp
    // return;
    // push esi
    // push 9
    // CALL(0x4a79b2)
    // mov esi, dword ptr [esp + 0xc]
    // push esi
    // CALL(0x4a7a66)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a907c)
    // mov esi, dword ptr [esi - 4]
    // push 9
    // sub esi, 9
    // CALL(0x4a7a13)
    // pop ecx
    // if (...) GOTO(0x4a9095)
    // push 9
    // CALL(0x4a7a13)
    // pop ecx
    // push esi
    // push 0
    // push dword ptr [0x84215c]
    // CALL(dword)
    // mov esi, eax
    // mov eax, esi
    // pop esi
    // return;
    // push esi
    // CALL(0x4a9115)
    // mov ecx, dword ptr [esp + 8]
    // xor esi, esi
    // mov dword ptr [eax], ecx
    // mov eax, 0x4e4bf8
    // cmp ecx, dword ptr [eax]
    // if (...) GOTO(0x4a90d2)
    // add eax, 8
    // inc esi
    // cmp eax, 0x4e4d60
    // if (...) GOTO(0x4a90ac)
    // cmp ecx, 0x13
    // if (...) GOTO(0x4a90e2)
    // cmp ecx, 0x24
    // if (...) GOTO(0x4a90e2)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 0xd
    // pop esi
    // return;
    // CALL(0x4a910c)
    // mov ecx, dword ptr [esi*8 + 0x4e4bfc]
    // pop esi
    // mov dword ptr [eax], ecx
    // return;
    // cmp ecx, 0xbc
    // if (...) GOTO(0x4a90ff)
    // cmp ecx, 0xca
    // if (...) GOTO(0x4a90ff)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 8
    // pop esi
    // return;
    // CALL(0x4a910c)
    // mov dword ptr [eax], 0x16
    // pop esi
    // return;
    // CALL(0x4a8e53)
    // add eax, 8
    // return;
    // CALL(0x4a8e53)
    // add eax, 0xc
    // return;
    // push ecx
    // push ecx
    // push ebx
    // push ebp
    // push esi
    // push edi
    // push(0x12)
    // or edi, 0xffffffff
    // CALL(0x4a79b2)
    // xor ebx, ebx
    // pop ecx
    // mov dword ptr [esp + 0x10], ebx
    // mov dword ptr [esp + 0x14], ebx
    // mov ebp, 0x842040
    // mov esi, dword ptr [ebp]
    // test esi, esi
    // if (...) GOTO(0x4a91e2)
    // lea eax, [esi + 0x480]
    // cmp esi, eax
    // jae 0x4a91c7
    // test byte ptr [esi + 4], 1
    // if (...) GOTO(0x4a919d)
    // cmp dword ptr [esi + 8], 0
    // if (...) GOTO(0x4a9182)
    // push(0x11)
    // CALL(0x4a79b2)
    // cmp dword ptr [esi + 8], 0
    // pop ecx
    // if (...) GOTO(0x4a917a)
    // lea eax, [esi + 0xc]
    // push eax
    // CALL(dword)
    // inc dword ptr [esi + 8]
    // push(0x11)
    // CALL(0x4a7a13)
    // pop ecx
    // lea ebx, [esi + 0xc]
    // push ebx
    // CALL(dword)
    // test byte ptr [esi + 4], 1
    // if (...) GOTO(0x4a91aa)
    // push ebx
    // CALL(dword)
    // mov ebx, dword ptr [esp + 0x10]
    // mov eax, dword ptr [ebp]
    // add esi, 0x24
    // add eax, 0x480
    // if (...) GOTO(0x4a914f)
    // or dword ptr [esi], 0xffffffff
    // mov eax, esi
    // sub eax, dword ptr [ebp]
    // push(0x24)
    // pop ecx
    // cdq 
    // idiv ecx
    // mov edi, eax
    // add edi, dword ptr [esp + 0x14]
    // cmp edi, -1
    // if (...) GOTO(0x4a9230)
    // mov ebx, dword ptr [esp + 0x10]
    // add dword ptr [esp + 0x14], 0x20
    // add ebp, 4
    // inc ebx
    // cmp ebp, 0x842140
    // mov dword ptr [esp + 0x10], ebx
    // if (...) GOTO(0x4a913e)
    // if (...) GOTO(0x4a9230)
    // mov esi, 0x480
    // push esi
    // CALL(0x4a504f)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a9230)
    // add dword ptr [0x842140], 0x20
    // lea ecx, [ebx*4 + 0x842040]
    // lea edx, [eax + 0x480]
    // mov dword ptr [ecx], eax
    // cmp eax, edx
    // jae 0x4a9224
    // and byte ptr [eax + 4], 0
    // or dword ptr [eax], 0xffffffff
    // and dword ptr [eax + 8], 0
    // mov byte ptr [eax + 5], 0xa
    // mov edx, dword ptr [ecx]
    // add eax, 0x24
    // add edx, esi
    // if (...) GOTO(0x4a9208)
    // shl ebx, 5
    // mov edi, ebx
    // push edi
    // CALL(0x4a937e)
    // pop ecx
    // push(0x12)
    // CALL(0x4a7a13)
    // pop ecx
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebp
    // pop ebx
    // pop ecx
    // pop ecx
    // return;
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // cmp ecx, dword ptr [0x842140]
    // push edi
    // jae 0x4a92a4
    // mov eax, ecx
    // sar eax, 5
    // lea edi, [eax*4 + 0x842040]
    // mov eax, ecx
    // and eax, 0x1f
    // lea esi, [eax + eax*8]
    // mov eax, dword ptr [edi]
    // shl esi, 2
    // cmp dword ptr [eax + esi], -1
    // if (...) GOTO(0x4a92a4)
    // cmp dword ptr [0x4e4ae4], 1
    // push ebx
    // mov ebx, dword ptr [esp + 0x14]
    // if (...) GOTO(0x4a929a)
    // sub ecx, 0
    // if (...) GOTO(0x4a9291)
    // dec ecx
    // if (...) GOTO(0x4a928c)
    // dec ecx
    // if (...) GOTO(0x4a929a)
    // push ebx
    // push -0xc
    // if (...) GOTO(0x4a9294)
    // push ebx
    // push -0xb
    // if (...) GOTO(0x4a9294)
    // push ebx
    // push -0xa
    // CALL(dword)
    // mov eax, dword ptr [edi]
    // mov dword ptr [eax + esi], ebx
    // xor eax, eax
    // pop ebx
    // if (...) GOTO(0x4a92ba)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 9
    // CALL(0x4a9115)
    // and dword ptr [eax], 0
    // or eax, 0xffffffff
    // pop edi
    // pop esi
    // return;
    // mov ecx, dword ptr [esp + 4]
    // push esi
    // cmp ecx, dword ptr [0x842140]
    // push edi
    // jae 0x4a9323
    // mov eax, ecx
    // sar eax, 5
    // lea edi, [eax*4 + 0x842040]
    // mov eax, ecx
    // and eax, 0x1f
    // lea esi, [eax + eax*8]
    // mov eax, dword ptr [edi]
    // shl esi, 2
    // add eax, esi
    // test byte ptr [eax + 4], 1
    // if (...) GOTO(0x4a9323)
    // cmp dword ptr [eax], -1
    // if (...) GOTO(0x4a9323)
    // cmp dword ptr [0x4e4ae4], 1
    // if (...) GOTO(0x4a9319)
    // xor eax, eax
    // sub ecx, eax
    // if (...) GOTO(0x4a9310)
    // dec ecx
    // if (...) GOTO(0x4a930b)
    // dec ecx
    // if (...) GOTO(0x4a9319)
    // push eax
    // push -0xc
    // if (...) GOTO(0x4a9313)
    // push eax
    // push -0xb
    // if (...) GOTO(0x4a9313)
    // push eax
    // push -0xa
    // CALL(dword)
    // mov eax, dword ptr [edi]
    // or dword ptr [eax + esi], 0xffffffff
    // xor eax, eax
    // if (...) GOTO(0x4a9339)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 9
    // CALL(0x4a9115)
    // and dword ptr [eax], 0
    // or eax, 0xffffffff
    // pop edi
    // pop esi
    // return;
    // mov eax, dword ptr [esp + 4]
    // cmp eax, dword ptr [0x842140]
    // jae 0x4a9367
    // mov ecx, eax
    // and eax, 0x1f
    // sar ecx, 5
    // lea eax, [eax + eax*8]
    // mov ecx, dword ptr [ecx*4 + 0x842040]
    // test byte ptr [ecx + eax*4 + 4], 1
    // lea eax, [ecx + eax*4]
    // if (...) GOTO(0x4a9367)
    // mov eax, dword ptr [eax]
    // return;
    // CALL(0x4a910c)
    // mov dword ptr [eax], 9
    // CALL(0x4a9115)
    // and dword ptr [eax], 0
    // or eax, 0xffffffff
    // return;
    // mov eax, dword ptr [esp + 4]
    // push ebx
    // mov ecx, eax
    // and eax, 0x1f
    // sar ecx, 5
    // push esi
    // push edi
    // mov esi, dword ptr [ecx*4 + 0x842040]
    // lea ebx, [ecx*4 + 0x842040]
    // lea edi, [eax + eax*8]
    // shl edi, 2
    // add esi, edi
    // cmp dword ptr [esi + 8], 0
    // if (...) GOTO(0x4a93cc)
    // push(0x11)
    // CALL(0x4a79b2)
    // cmp dword ptr [esi + 8], 0
    // pop ecx
    // if (...) GOTO(0x4a93c4)
    // lea eax, [esi + 0xc]
    // push eax
    // CALL(dword)
    // inc dword ptr [esi + 8]
    // push(0x11)
    // CALL(0x4a7a13)
    // pop ecx
    // mov eax, dword ptr [ebx]
    // lea eax, [eax + edi + 0xc]
    // push eax
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esp + 4]
    // mov ecx, eax
    // and eax, 0x1f
    // sar ecx, 5
    // lea eax, [eax + eax*8]
    // mov ecx, dword ptr [ecx*4 + 0x842040]
    // lea eax, [ecx + eax*4 + 0xc]
    // push eax
    // CALL(dword)
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x48
    // push ebx
    // push esi
    // push edi
    // push(0x480)
    // CALL(0x4a504f)
    // mov esi, eax
    // pop ecx
    // test esi, esi
    // if (...) GOTO(0x4a9421)
    // push(0x1b)
    // CALL(0x4a6937)
    // pop ecx
    // mov dword ptr [0x842040], esi
    // mov dword ptr [0x842140], 0x20
    // lea eax, [esi + 0x480]
    // cmp esi, eax
    // jae 0x4a9459
    // and byte ptr [esi + 4], 0
    // or dword ptr [esi], 0xffffffff
    // and dword ptr [esi + 8], 0
    // mov byte ptr [esi + 5], 0xa
    // mov eax, dword ptr [0x842040]
    // add esi, 0x24
    // add eax, 0x480
    // if (...) GOTO(0x4a9437)
    // lea eax, [ebp - 0x48]
    // push eax
    // CALL(dword)
    // cmp word ptr [ebp - 0x16], 0
    // if (...) GOTO(0x4a953f)
    // mov eax, dword ptr [ebp - 0x14]
    // test eax, eax
    // if (...) GOTO(0x4a953f)
    // mov edi, dword ptr [eax]
    // lea ebx, [eax + 4]
    // lea eax, [ebx + edi]
    // mov dword ptr [ebp - 4], eax
    // mov eax, 0x800
    // cmp edi, eax
    // if (...) GOTO(0x4a948f)
    // mov edi, eax
    // cmp dword ptr [0x842140], edi
    // if (...) GOTO(0x4a94ed)
    // mov esi, 0x842044
    // push(0x480)
    // CALL(0x4a504f)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a94e7)
    // add dword ptr [0x842140], 0x20
    // mov dword ptr [esi], eax
    // lea ecx, [eax + 0x480]
    // cmp eax, ecx
    // jae 0x4a94da
    // and byte ptr [eax + 4], 0
    // or dword ptr [eax], 0xffffffff
    // and dword ptr [eax + 8], 0
    // mov byte ptr [eax + 5], 0xa
    // mov ecx, dword ptr [esi]
    // add eax, 0x24
    // add ecx, 0x480
    // if (...) GOTO(0x4a94ba)
    // add esi, 4
    // cmp dword ptr [0x842140], edi
    // if (...) GOTO(0x4a949c)
    // if (...) GOTO(0x4a94ed)
    // mov edi, dword ptr [0x842140]
    // xor esi, esi
    // test edi, edi
    // if (...) GOTO(0x4a953f)
    // mov eax, dword ptr [ebp - 4]
    // mov ecx, dword ptr [eax]
    // cmp ecx, -1
    // if (...) GOTO(0x4a9535)
    // mov al, byte ptr [ebx]
    // test al, 1
    // if (...) GOTO(0x4a9535)
    // test al, 8
    // if (...) GOTO(0x4a9512)
    // push ecx
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a9535)
    // mov ecx, esi
    // mov eax, esi
    // sar ecx, 5
    // and eax, 0x1f
    // mov ecx, dword ptr [ecx*4 + 0x842040]
    // lea eax, [eax + eax*8]
    // lea eax, [ecx + eax*4]
    // mov ecx, dword ptr [ebp - 4]
    // mov ecx, dword ptr [ecx]
    // mov dword ptr [eax], ecx
    // mov cl, byte ptr [ebx]
    // mov byte ptr [eax + 4], cl
    // add dword ptr [ebp - 4], 4
    // inc esi
    // inc ebx
    // cmp esi, edi
    // if (...) GOTO(0x4a94f3)
    // xor ebx, ebx
    // mov ecx, dword ptr [0x842040]
    // lea eax, [ebx + ebx*8]
    // cmp dword ptr [ecx + eax*4], -1
    // lea esi, [ecx + eax*4]
    // if (...) GOTO(0x4a95a0)
    // test ebx, ebx
    // mov byte ptr [esi + 4], 0x81
    // if (...) GOTO(0x4a9560)
    // push -0xa
    // pop eax
    // if (...) GOTO(0x4a956a)
    // mov eax, ebx
    // dec eax
    // neg eax
    // sbb eax, eax
    // add eax, -0xb
    // push eax
    // CALL(dword)
    // mov edi, eax
    // cmp edi, -1
    // if (...) GOTO(0x4a958f)
    // push edi
    // CALL(dword)
    // test eax, eax
    // if (...) GOTO(0x4a958f)
    // and eax, 0xff
    // mov dword ptr [esi], edi
    // cmp eax, 2
    // if (...) GOTO(0x4a9595)
    // or byte ptr [esi + 4], 0x40
    // if (...) GOTO(0x4a95a4)
    // cmp eax, 3
    // if (...) GOTO(0x4a95a4)
    // or byte ptr [esi + 4], 8
    // if (...) GOTO(0x4a95a4)
    // or byte ptr [esi + 4], 0x80
    // inc ebx
    // cmp ebx, 3
    // if (...) GOTO(0x4a9541)
    // push dword ptr [0x842140]
    // CALL(dword)
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // cmp esi, dword ptr [0x842140]
    // jae 0x4a9608
    // mov ecx, esi
    // mov eax, esi
    // sar ecx, 5
    // and eax, 0x1f
    // mov ecx, dword ptr [ecx*4 + 0x842040]
    // lea eax, [eax + eax*8]
    // test byte ptr [ecx + eax*4 + 4], 1
    // if (...) GOTO(0x4a9608)
    // push edi
    // push esi
    // CALL(0x4a937e)
    // push dword ptr [esp + 0x18]
    // push dword ptr [esp + 0x18]
    // push esi
    // CALL(0x4a9620)
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
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push edi
    // push esi
    // CALL(0x4a933c)
    // cmp eax, -1
    // pop ecx
    // if (...) GOTO(0x4a963f)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 9
    // if (...) GOTO(0x4a966c)
    // push dword ptr [esp + 0x14]
    // push 0
    // push dword ptr [esp + 0x18]
    // push eax
    // CALL(dword)
    // mov edi, eax
    // cmp edi, -1
    // if (...) GOTO(0x4a965f)
    // CALL(dword)
    // if (...) GOTO(0x4a9661)
    // xor eax, eax
    // test eax, eax
    // if (...) GOTO(0x4a9671)
    // push eax
    // CALL(0x4a9099)
    // pop ecx
    // or eax, 0xffffffff
    // if (...) GOTO(0x4a9690)
    // mov ecx, esi
    // and esi, 0x1f
    // sar ecx, 5
    // mov eax, esi
    // mov ecx, dword ptr [ecx*4 + 0x842040]
    // lea eax, [eax + eax*8]
    // and byte ptr [ecx + eax*4 + 4], 0xfd
    // lea eax, [ecx + eax*4 + 4]
    // mov eax, edi
    // pop edi
    // pop esi
    // return;
    // push ebp
    // mov ebp, esp
    // mov eax, 0x1004
    // CALL(0x4a6070)
    // push ebx
    // push esi
    // xor esi, esi
    // push 1
    // push esi
    // push dword ptr [ebp + 8]
    // CALL(0x4a9620)
    // or ebx, 0xffffffff
    // add esp, 0xc
    // cmp eax, ebx
    // mov dword ptr [ebp - 4], eax
    // if (...) GOTO(0x4a97b2)
    // push 2
    // push esi
    // push dword ptr [ebp + 8]
    // CALL(0x4a9620)
    // add esp, 0xc
    // cmp eax, ebx
    // if (...) GOTO(0x4a97b2)
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // sub edi, eax
    // test edi, edi
    // if (...) GOTO(0x4a9755)
    // mov ebx, 0x1000
    // lea eax, [ebp - 0x1004]
    // push ebx
    // push esi
    // push eax
    // CALL(0x4abd90)
    // push(0x8000)
    // push dword ptr [ebp + 8]
    // CALL(0x4abfcb)
    // add esp, 0x14
    // mov dword ptr [ebp + 0xc], eax
    // cmp edi, ebx
    // mov eax, ebx
    // if (...) GOTO(0x4a970e)
    // mov eax, edi
    // push eax
    // lea eax, [ebp - 0x1004]
    // push eax
    // push dword ptr [ebp + 8]
    // CALL(0x4a5bbd)
    // add esp, 0xc
    // cmp eax, -1
    // if (...) GOTO(0x4a972e)
    // sub edi, eax
    // test edi, edi
    // if (...) GOTO(0x4a9746)
    // if (...) GOTO(0x4a9706)
    // CALL(0x4a9115)
    // cmp dword ptr [eax], 5
    // if (...) GOTO(0x4a9743)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 0xd
    // or esi, 0xffffffff
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4abfcb)
    // pop ecx
    // pop ecx
    // if (...) GOTO(0x4a979d)
    // if (...) GOTO(0x4a979d)
    // push 0
    // push dword ptr [ebp + 0xc]
    // push dword ptr [ebp + 8]
    // CALL(0x4a9620)
    // push dword ptr [ebp + 8]
    // CALL(0x4a933c)
    // add esp, 0x10
    // push eax
    // CALL(dword)
    // mov esi, eax
    // neg esi
    // sbb esi, esi
    // neg esi
    // dec esi
    // cmp esi, ebx
    // if (...) GOTO(0x4a979d)
    // CALL(0x4a910c)
    // mov dword ptr [eax], 0xd
    // CALL(dword)
    // mov edi, eax
    // CALL(0x4a9115)
    // mov dword ptr [eax], edi
    // push 0
    // push dword ptr [ebp - 4]
    // push dword ptr [ebp + 8]
    // CALL(0x4a9620)
    // add esp, 0xc
    // mov eax, esi
    // pop edi
    // if (...) GOTO(0x4a97b4)
    // mov eax, ebx
    // pop esi
    // pop ebx
    // leave 
    // return;
    // mov eax, dword ptr [0x842020]
    // push esi
    // push(0x14)
    // test eax, eax
    // pop esi
    // if (...) GOTO(0x4a97cc)
    // mov eax, 0x200
    // if (...) GOTO(0x4a97d2)
    // cmp eax, esi
    // if (...) GOTO(0x4a97d7)
    // mov eax, esi
    // mov dword ptr [0x842020], eax
    // push 4
    // push eax
    // CALL(0x4ab534)
    // pop ecx
    // mov dword ptr [0x841010], eax
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a980b)
    // push 4
    // push esi
    // mov dword ptr [0x842020], esi
    // CALL(0x4ab534)
    // pop ecx
    // mov dword ptr [0x841010], eax
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a980b)
    // push(0x1a)
    // CALL(0x4a6937)
    // pop ecx
    // xor ecx, ecx
    // mov eax, 0x4e4d88
    // mov edx, dword ptr [0x841010]
    // mov dword ptr [ecx + edx], eax
    // add eax, 0x20
    // add ecx, 4
    // cmp eax, 0x4e5008
    // if (...) GOTO(0x4a9812)
    // xor ecx, ecx
    // mov edx, 0x4e4d98
    // mov esi, ecx
    // mov eax, ecx
    // sar esi, 5
    // and eax, 0x1f
    // mov esi, dword ptr [esi*4 + 0x842040]
    // lea eax, [eax + eax*8]
    // mov eax, dword ptr [esi + eax*4]
    // cmp eax, -1
    // if (...) GOTO(0x4a984f)
    // test eax, eax
    // if (...) GOTO(0x4a9852)
    // or dword ptr [edx], 0xffffffff
    // add edx, 0x20
    // inc ecx
    // cmp edx, 0x4e4df8
    // if (...) GOTO(0x4a982f)
    // pop esi
    // return;
    // CALL(0x4a99fc)
    // cmp byte ptr [0x840aa0], 0
    // if (...) GOTO(0x4a9873)
    // if (...) GOTO(0x4ac02c)
    // return;
    // mov eax, dword ptr [esp + 4]
    // mov ecx, 0x4e4d88
    // cmp eax, ecx
    // if (...) GOTO(0x4a9898)
    // cmp eax, 0x4e4fe8
    // if (...) GOTO(0x4a9898)
    // sub eax, ecx
    // sar eax, 5
    // add eax, 0x1c
    // push eax
    // CALL(0x4a79b2)
    // pop ecx
    // return;
    // add eax, 0x20
    // push eax
    // CALL(dword)
    // return;
    // mov eax, dword ptr [esp + 4]
    // cmp eax, 0x14
    // if (...) GOTO(0x4a98b7)
    // add eax, 0x1c
    // push eax
    // CALL(0x4a79b2)
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 8]
    // add eax, 0x20
    // push eax
    // CALL(dword)
    // return;
    // mov eax, dword ptr [esp + 4]
    // mov ecx, 0x4e4d88
    // cmp eax, ecx
    // if (...) GOTO(0x4a98ea)
    // cmp eax, 0x4e4fe8
    // if (...) GOTO(0x4a98ea)
    // sub eax, ecx
    // sar eax, 5
    // add eax, 0x1c
    // push eax
    // CALL(0x4a7a13)
    // pop ecx
    // return;
    // add eax, 0x20
    // push eax
    // CALL(dword)
    // return;
    // mov eax, dword ptr [esp + 4]
    // cmp eax, 0x14
    // if (...) GOTO(0x4a9909)
    // add eax, 0x1c
    // push eax
    // CALL(0x4a7a13)
    // pop ecx
    // return;
    // mov eax, dword ptr [esp + 8]
    // add eax, 0x20
    // push eax
    // CALL(dword)
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // mov eax, dword ptr [esi + 0xc]
    // test al, 0x83
    // if (...) GOTO(0x4a9941)
    // test al, 8
    // if (...) GOTO(0x4a9941)
    // push dword ptr [esi + 8]
    // CALL(0x4a5007)
    // and word ptr [esi + 0xc], 0xfbf7
    // xor eax, eax
    // pop ecx
    // mov dword ptr [esi], eax
    // mov dword ptr [esi + 8], eax
    // mov dword ptr [esi + 4], eax
    // pop esi
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // test esi, esi
    // if (...) GOTO(0x4a9955)
    // push esi
    // CALL(0x4a9a05)
    // pop ecx
    // pop esi
    // return;
    // push edi
    // push esi
    // CALL(0x4a9874)
    // push esi
    // CALL(0x4a9972)
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
    // push esi
    // CALL(0x4a99a0)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a9987)
    // or eax, 0xffffffff
    // pop esi
    // return;
    // test byte ptr [esi + 0xd], 0x40
    // if (...) GOTO(0x4a999c)
    // push dword ptr [esi + 0x10]
    // CALL(0x4ac0ad)
    // neg eax
    // pop ecx
    // pop esi
    // sbb eax, eax
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // push ebx
    // push esi
    // mov esi, dword ptr [esp + 0xc]
    // xor ebx, ebx
    // push edi
    // mov eax, dword ptr [esi + 0xc]
    // mov ecx, eax
    // and ecx, 3
    // cmp cl, 2
    // if (...) GOTO(0x4a99ed)
    // test ax, 0x108
    // if (...) GOTO(0x4a99ed)
    // mov eax, dword ptr [esi + 8]
    // mov edi, dword ptr [esi]
    // sub edi, eax
    // test edi, edi
    // if (...) GOTO(0x4a99ed)
    // push edi
    // push eax
    // push dword ptr [esi + 0x10]
    // CALL(0x4a5b58)
    // add esp, 0xc
    // cmp eax, edi
    // if (...) GOTO(0x4a99e6)
    // mov eax, dword ptr [esi + 0xc]
    // test al, 0x80
    // if (...) GOTO(0x4a99ed)
    // and al, 0xfd
    // mov dword ptr [esi + 0xc], eax
    // if (...) GOTO(0x4a99ed)
    // or dword ptr [esi + 0xc], 0x20
    // or ebx, 0xffffffff
    // mov eax, dword ptr [esi + 8]
    // and dword ptr [esi + 4], 0
    // mov dword ptr [esi], eax
    // pop edi
    // mov eax, ebx
    // pop esi
    // pop ebx
    // return;
    // push 1
    // CALL(0x4a9a05)
    // pop ecx
    // return;
    // push ebx
    // push esi
    // push edi
    // push 2
    // xor ebx, ebx
    // xor edi, edi
    // CALL(0x4a79b2)
    // xor esi, esi
    // pop ecx
    // cmp dword ptr [0x842020], esi
    // if (...) GOTO(0x4a9a92)
    // mov eax, dword ptr [0x841010]
    // mov eax, dword ptr [eax + esi*4]
    // test eax, eax
    // if (...) GOTO(0x4a9a89)
    // test byte ptr [eax + 0xc], 0x83
    // if (...) GOTO(0x4a9a89)
    // push eax
    // push esi
    // CALL(0x4a98a3)
    // mov eax, dword ptr [0x841010]
    // pop ecx
    // pop ecx
    // mov eax, dword ptr [eax + esi*4]
    // mov ecx, dword ptr [eax + 0xc]
    // test cl, 0x83
    // if (...) GOTO(0x4a9a79)
    // cmp dword ptr [esp + 0x10], 1
    // if (...) GOTO(0x4a9a5f)
    // push eax
    // CALL(0x4a9972)
    // cmp eax, -1
    // pop ecx
    // if (...) GOTO(0x4a9a79)
    // inc ebx
    // if (...) GOTO(0x4a9a79)
    // cmp dword ptr [esp + 0x10], 0
    // if (...) GOTO(0x4a9a79)
    // test cl, 2
    // if (...) GOTO(0x4a9a79)
    // push eax
    // CALL(0x4a9972)
    // cmp eax, -1
    // pop ecx
    // if (...) GOTO(0x4a9a79)
    // or edi, eax
    // mov eax, dword ptr [0x841010]
    // push dword ptr [eax + esi*4]
    // push esi
    // CALL(0x4a98f5)
    // pop ecx
    // pop ecx
    // inc esi
    // cmp esi, dword ptr [0x842020]
    // if (...) GOTO(0x4a9a1e)
    // push 2
    // CALL(0x4a7a13)
    // cmp dword ptr [esp + 0x14], 1
    // pop ecx
    // mov eax, ebx
    // if (...) GOTO(0x4a9aa5)
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push ebp
    // mov ebp, esp
    // push ecx
    // push ecx
    // push ebx
    // push esi
    // mov esi, dword ptr [0x840c70]
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // xor ebx, ebx
    // mov dword ptr [ebp - 8], ebx
    // mov dword ptr [ebp - 4], ebx
    // mov al, byte ptr [edi]
    // cmp al, 0x61
    // if (...) GOTO(0x4a9ae2)
    // cmp al, 0x72
    // if (...) GOTO(0x4a9adb)
    // cmp al, 0x77
    // if (...) GOTO(0x4a9bf6)
    // mov ecx, 0x301
    // if (...) GOTO(0x4a9ae7)
    // xor ecx, ecx
    // or esi, 1
    // if (...) GOTO(0x4a9aea)
    // mov ecx, 0x109
    // or esi, 2
    // push 1
    // pop edx
    // mov al, byte ptr [edi + 1]
    // inc edi
    // cmp al, bl
    // if (...) GOTO(0x4a9bdc)
    // cmp edx, ebx
    // if (...) GOTO(0x4a9bdc)
    // movsx eax, al
    // cmp eax, 0x54
    // if (...) GOTO(0x4a9b7b)
    // if (...) GOTO(0x4a9b6b)
    // sub eax, 0x2b
    // if (...) GOTO(0x4a9b55)
    // sub eax, 0x19
    // if (...) GOTO(0x4a9b4b)
    // sub eax, 0xe
    // if (...) GOTO(0x4a9b36)
    // dec eax
    // if (...) GOTO(0x4a9bcd)
    // cmp dword ptr [ebp - 4], ebx
    // if (...) GOTO(0x4a9bcd)
    // mov dword ptr [ebp - 4], 1
    // or ecx, 0x20
    // if (...) GOTO(0x4a9aed)
    // cmp dword ptr [ebp - 4], ebx
    // if (...) GOTO(0x4a9bcd)
    // mov dword ptr [ebp - 4], 1
    // or ecx, 0x10
    // if (...) GOTO(0x4a9aed)
    // test cl, 0x40
    // if (...) GOTO(0x4a9bcd)
    // or ecx, 0x40
    // if (...) GOTO(0x4a9aed)
    // test cl, 2
    // if (...) GOTO(0x4a9bcd)
    // and ecx, 0xfffffffe
    // and esi, 0xfffffffc
    // or ecx, 2
    // or esi, 0x80
    // if (...) GOTO(0x4a9aed)
    // mov eax, 0x1000
    // test eax, ecx
    // if (...) GOTO(0x4a9bcd)
    // or ecx, eax
    // if (...) GOTO(0x4a9aed)
    // sub eax, 0x62
    // if (...) GOTO(0x4a9bc8)
    // dec eax
    // if (...) GOTO(0x4a9bb1)
    // sub eax, 0xb
    // if (...) GOTO(0x4a9b9a)
    // sub eax, 6
    // if (...) GOTO(0x4a9bcd)
    // test ch, 0xc0
    // if (...) GOTO(0x4a9bcd)
    // or ch, 0x40
    // if (...) GOTO(0x4a9aed)
    // cmp dword ptr [ebp - 8], ebx
    // if (...) GOTO(0x4a9bcd)
    // mov dword ptr [ebp - 8], 1
    // and esi, 0xffffbfff
    // if (...) GOTO(0x4a9aed)
    // cmp dword ptr [ebp - 8], ebx
    // if (...) GOTO(0x4a9bcd)
    // mov dword ptr [ebp - 8], 1
    // or esi, 0x4000
    // if (...) GOTO(0x4a9aed)
    // test ch, 0xc0
    // if (...) GOTO(0x4a9bd4)
    // xor edx, edx
    // if (...) GOTO(0x4a9aed)
    // or ch, 0x80
    // if (...) GOTO(0x4a9aed)
    // push(0x1a4)
    // push dword ptr [ebp + 0x10]
    // push ecx
    // push dword ptr [ebp + 8]
    // CALL(0x4a5d5f)
    // mov ecx, eax
    // add esp, 0x10
    // cmp ecx, ebx
    // if (...) GOTO(0x4a9bfa)
    // xor eax, eax
    // if (...) GOTO(0x4a9c14)
    // mov eax, dword ptr [ebp + 0x14]
    // inc dword ptr [0x840b24]
    // mov dword ptr [eax + 0xc], esi
    // mov dword ptr [eax + 4], ebx
    // mov dword ptr [eax], ebx
    // mov dword ptr [eax + 8], ebx
    // mov dword ptr [eax + 0x1c], ebx
    // mov dword ptr [eax + 0x10], ecx
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // push ebx
    // push esi
    // push edi
    // push 2
    // xor ebx, ebx
    // xor edi, edi
    // CALL(0x4a79b2)
    // xor esi, esi
    // cmp dword ptr [0x842020], ebx
    // pop ecx
    // if (...) GOTO(0x4a9cd3)
    // mov eax, dword ptr [0x841010]
    // mov eax, dword ptr [eax + esi*4]
    // cmp eax, ebx
    // if (...) GOTO(0x4a9c79)
    // test byte ptr [eax + 0xc], 0x83
    // if (...) GOTO(0x4a9c69)
    // push eax
    // push esi
    // CALL(0x4a98a3)
    // pop ecx
    // pop ecx
    // mov ecx, dword ptr [0x841010]
    // mov eax, dword ptr [ecx + esi*4]
    // test byte ptr [eax + 0xc], 0x83
    // if (...) GOTO(0x4a9c74)
    // push eax
    // push esi
    // CALL(0x4a98f5)
    // pop ecx
    // pop ecx
    // inc esi
    // cmp esi, dword ptr [0x842020]
    // if (...) GOTO(0x4a9c36)
    // if (...) GOTO(0x4a9cd3)
    // mov edi, dword ptr [ecx + esi*4]
    // if (...) GOTO(0x4a9cbd)
    // push(0x38)
    // shl esi, 2
    // CALL(0x4a504f)
    // pop ecx
    // mov ecx, dword ptr [0x841010]
    // mov dword ptr [esi + ecx], eax
    // mov eax, dword ptr [0x841010]
    // mov eax, dword ptr [esi + eax]
    // cmp eax, ebx
    // if (...) GOTO(0x4a9cd3)
    // add eax, 0x20
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [0x841010]
    // mov eax, dword ptr [esi + eax]
    // add eax, 0x20
    // push eax
    // CALL(dword)
    // mov eax, dword ptr [0x841010]
    // mov edi, dword ptr [esi + eax]
    // cmp edi, ebx
    // if (...) GOTO(0x4a9cd3)
    // or dword ptr [edi + 0x10], 0xffffffff
    // mov dword ptr [edi + 4], ebx
    // mov dword ptr [edi + 0xc], ebx
    // mov dword ptr [edi + 8], ebx
    // mov dword ptr [edi], ebx
    // mov dword ptr [edi + 0x1c], ebx
    // push 2
    // CALL(0x4a7a13)
    // pop ecx
    // mov eax, edi
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // push esi
    // mov esi, dword ptr [esp + 8]
    // push dword ptr [esi + 0x10]
    // CALL(0x4ac140)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4a9d6a)
    // cmp esi, 0x4e4da8
    // if (...) GOTO(0x4a9cff)
    // xor eax, eax
    // if (...) GOTO(0x4a9d0a)
    // cmp esi, 0x4e4dc8
    // if (...) GOTO(0x4a9d6a)
    // push 1
    // pop eax
    // inc dword ptr [0x840b24]
    // test word ptr [esi + 0xc], 0x10c
    // if (...) GOTO(0x4a9d6a)
    // cmp dword ptr [eax*4 + 0x840b28], 0
    // push ebx
    // push edi
    // lea edi, [eax*4 + 0x840b28]
    // mov ebx, 0x1000
    // if (...) GOTO(0x4a9d50)
    // push ebx
    // CALL(0x4a504f)
    // test eax, eax
    // pop ecx
    // mov dword ptr [edi], eax
    // if (...) GOTO(0x4a9d50)
    // lea eax, [esi + 0x14]
    // push 2
    // mov dword ptr [esi + 8], eax
    // mov dword ptr [esi], eax
    // pop eax
    // mov dword ptr [esi + 0x18], eax
    // mov dword ptr [esi + 4], eax
    // if (...) GOTO(0x4a9d5d)
    // mov edi, dword ptr [edi]
    // mov dword ptr [esi + 0x18], ebx
    // mov dword ptr [esi + 8], edi
    // mov dword ptr [esi], edi
    // mov dword ptr [esi + 4], ebx
    // or word ptr [esi + 0xc], 0x1102
    // push 1
    // pop eax
    // pop edi
    // pop ebx
    // pop esi
    // return;
    // xor eax, eax
    // pop esi
    // return;
    // cmp dword ptr [esp + 4], 0
    // push esi
    // if (...) GOTO(0x4a9d96)
    // mov esi, dword ptr [esp + 0xc]
    // test byte ptr [esi + 0xd], 0x10
    // if (...) GOTO(0x4a9d96)
    // push esi
    // CALL(0x4a99a0)
    // and byte ptr [esi + 0xd], 0xee
    // and dword ptr [esi + 0x18], 0
    // and dword ptr [esi], 0
    // and dword ptr [esi + 8], 0
    // pop ecx
    // pop esi
    // return;
    // push ebp
    // mov ebp, esp
    // sub esp, 0x248
    // push ebx
    // push esi
    // push edi
    // mov edi, dword ptr [ebp + 0xc]
    // xor esi, esi
    // mov bl, byte ptr [edi]
    // inc edi
    // test bl, bl
    // mov dword ptr [ebp - 0xc], esi
    // mov dword ptr [ebp - 0x14], esi
    // mov dword ptr [ebp + 0xc], edi
    // if (...) GOTO(0x4aa4b1)
    // mov ecx, dword ptr [ebp - 0x10]
    // xor edx, edx
    // if (...) GOTO(0x4a9dcc)
    // mov ecx, dword ptr [ebp - 0x10]
    // mov esi, dword ptr [ebp - 0x30]
    // xor edx, edx
    // cmp dword ptr [ebp - 0x14], edx
    // if (...) GOTO(0x4aa4b1)
    // cmp bl, 0x20
    // if (...) GOTO(0x4a9ded)
    // cmp bl, 0x78
    // if (...) GOTO(0x4a9ded)
    // movsx eax, bl
    // mov al, byte ptr [eax + 0x4bc510]
    // and eax, 0xf
    // if (...) GOTO(0x4a9def)
    // xor eax, eax
    // movsx eax, byte ptr [esi + eax*8 + 0x4bc530]
    // sar eax, 4
    // cmp eax, 7
    // mov dword ptr [ebp - 0x30], eax
    // if (...) GOTO(0x4aa4a0)
    // if (...) GOTO(dword)
    // or dword ptr [ebp - 0x10], 0xffffffff
    // mov dword ptr [ebp - 0x34], edx
    // mov dword ptr [ebp - 0x28], edx
    // mov dword ptr [ebp - 0x20], edx
    // mov dword ptr [ebp - 0x1c], edx
    // mov dword ptr [ebp - 4], edx
    // mov dword ptr [ebp - 0x24], edx
    // if (...) GOTO(0x4aa4a0)
    // movsx eax, bl
    // sub eax, 0x20
    // if (...) GOTO(0x4a9e6b)
    // sub eax, 3
    // if (...) GOTO(0x4a9e62)
    // sub eax, 8
    // if (...) GOTO(0x4a9e59)
    // dec eax
    // dec eax
    // if (...) GOTO(0x4a9e50)
    // sub eax, 3
    // if (...) GOTO(0x4aa4a0)
    // or dword ptr [ebp - 4], 8
    // if (...) GOTO(0x4aa4a0)
    // or dword ptr [ebp - 4], 4
    // if (...) GOTO(0x4aa4a0)
    // or dword ptr [ebp - 4], 1
    // if (...) GOTO(0x4aa4a0)
    // or byte ptr [ebp - 4], 0x80
    // if (...) GOTO(0x4aa4a0)
    // or dword ptr [ebp - 4], 2
    // if (...) GOTO(0x4aa4a0)
    // cmp bl, 0x2a
    // if (...) GOTO(0x4a9e9c)
    // lea eax, [ebp + 0x10]
    // push eax
    // CALL(0x4aa577)
    // test eax, eax
    // pop ecx
    // mov dword ptr [ebp - 0x20], eax
    // if (...) GOTO(0x4aa4a0)
    // or dword ptr [ebp - 4], 4
    // neg eax
    // mov dword ptr [ebp - 0x20], eax
    // if (...) GOTO(0x4aa4a0)
    // mov eax, dword ptr [ebp - 0x20]
    // movsx ecx, bl
    // lea eax, [eax + eax*4]
    // lea eax, [ecx + eax*2 - 0x30]
    // if (...) GOTO(0x4a9e94)
    // mov dword ptr [ebp - 0x10], edx
    // if (...) GOTO(0x4aa4a0)
    // cmp bl, 0x2a
    // if (...) GOTO(0x4a9ed6)
    // lea eax, [ebp + 0x10]
    // push eax
    // CALL(0x4aa577)
    // test eax, eax
    // pop ecx
    // mov dword ptr [ebp - 0x10], eax
    // if (...) GOTO(0x4aa4a0)
    // or dword ptr [ebp - 0x10], 0xffffffff
    // if (...) GOTO(0x4aa4a0)
    // lea eax, [ecx + ecx*4]
    // movsx ecx, bl
    // lea eax, [ecx + eax*2 - 0x30]
    // mov dword ptr [ebp - 0x10], eax
    // if (...) GOTO(0x4aa4a0)
    // cmp bl, 0x49
    // if (...) GOTO(0x4a9f1b)
    // cmp bl, 0x68
    // if (...) GOTO(0x4a9f12)
    // cmp bl, 0x6c
    // if (...) GOTO(0x4a9f09)
    // cmp bl, 0x77
    // if (...) GOTO(0x4aa4a0)
    // or byte ptr [ebp - 3], 8
    // if (...) GOTO(0x4aa4a0)
    // or dword ptr [ebp - 4], 0x10
    // if (...) GOTO(0x4aa4a0)
    // or dword ptr [ebp - 4], 0x20
    // if (...) GOTO(0x4aa4a0)
    // cmp byte ptr [edi], 0x36
    // if (...) GOTO(0x4a9f34)
    // cmp byte ptr [edi + 1], 0x34
    // if (...) GOTO(0x4a9f34)
    // inc edi
    // inc edi
    // or byte ptr [ebp - 3], 0x80
    // mov dword ptr [ebp + 0xc], edi
    // if (...) GOTO(0x4aa4a0)
    // mov dword ptr [ebp - 0x30], edx
    // mov ecx, dword ptr [0x4e5010]
    // mov dword ptr [ebp - 0x24], edx
    // movzx eax, bl
    // test byte ptr [ecx + eax*2 + 1], 0x80
    // if (...) GOTO(0x4a9f63)
    // lea eax, [ebp - 0x14]
    // push eax
    // push dword ptr [ebp + 8]
    // movsx eax, bl
    // push eax
    // CALL(0x4aa4d9)
    // mov bl, byte ptr [edi]
    // add esp, 0xc
    // inc edi
    // mov dword ptr [ebp + 0xc], edi
    // lea eax, [ebp - 0x14]
    // push eax
    // push dword ptr [ebp + 8]
    // movsx eax, bl
    // push eax
    // CALL(0x4aa4d9)
    // add esp, 0xc
    // if (...) GOTO(0x4aa4a0)
    // movsx eax, bl
    // cmp eax, 0x67
    // if (...) GOTO(0x4aa1a3)
    // cmp eax, 0x65
    // if (...) GOTO(0x4aa026)
    // cmp eax, 0x58
    // if (...) GOTO(0x4aa084)
    // if (...) GOTO(0x4aa217)
    // sub eax, 0x43
    // if (...) GOTO(0x4aa047)
    // dec eax
    // dec eax
    // if (...) GOTO(0x4aa01c)
    // dec eax
    // dec eax
    // if (...) GOTO(0x4aa01c)
    // sub eax, 0xc
    // if (...) GOTO(0x4aa3a2)
    // test word ptr [ebp - 4], 0x830
    // if (...) GOTO(0x4a9fc5)
    // or byte ptr [ebp - 3], 8
    // mov esi, dword ptr [ebp - 0x10]
    // cmp esi, -1
    // if (...) GOTO(0x4a9fd2)
    // mov esi, 0x7fffffff
    // lea eax, [ebp + 0x10]
    // push eax
    // CALL(0x4aa577)
    // test word ptr [ebp - 4], 0x810
    // pop ecx
    // mov ecx, eax
    // mov dword ptr [ebp - 8], ecx
    // if (...) GOTO(0x4aa1eb)
    // test ecx, ecx
    // if (...) GOTO(0x4a9ffa)
    // mov ecx, dword ptr [0x4e500c]
    // mov dword ptr [ebp - 8], ecx
    // mov dword ptr [ebp - 0x24], 1
    // mov eax, ecx
    // mov edx, esi
    // dec esi
    // test edx, edx
    // if (...) GOTO(0x4aa1e2)
    // cmp word ptr [eax], 0
    // if (...) GOTO(0x4aa1e2)
    // inc eax
    // inc eax
    // if (...) GOTO(0x4aa003)
    // mov dword ptr [ebp - 0x34], 1
    // add bl, 0x20
    // or dword ptr [ebp - 4], 0x40
    // lea edi, [ebp - 0x248]
    // cmp ecx, edx
    // mov dword ptr [ebp - 8], edi
    // if (...) GOTO(0x4aa10a)
    // mov dword ptr [ebp - 0x10], 6
    // if (...) GOTO(0x4aa118)
    // test word ptr [ebp - 4], 0x830
    // if (...) GOTO(0x4aa053)
    // or byte ptr [ebp - 3], 8
    // test word ptr [ebp - 4], 0x810
    // lea eax, [ebp + 0x10]
    // push eax
    // if (...) GOTO(0x4aa09a)
    // CALL(0x4aa594)
    // push eax
    // lea eax, [ebp - 0x248]
    // push eax
    // CALL(0x4ac169)
    // add esp, 0xc
    // mov dword ptr [ebp - 0xc], eax
    // test eax, eax
    // if (...) GOTO(0x4aa0ad)
    // mov dword ptr [ebp - 0x28], 1
    // if (...) GOTO(0x4aa0ad)
    // sub eax, 0x5a
    // if (...) GOTO(0x4aa0bb)
    // sub eax, 9
    // if (...) GOTO(0x4aa053)
    // dec eax
    // if (...) GOTO(0x4aa27d)
    // if (...) GOTO(0x4aa3a2)
    // CALL(0x4aa577)
    // pop ecx
    // mov byte ptr [ebp - 0x248], al
    // mov dword ptr [ebp - 0xc], 1
    // lea eax, [ebp - 0x248]
    // mov dword ptr [ebp - 8], eax
    // if (...) GOTO(0x4aa3a2)
    // lea eax, [ebp + 0x10]
    // push eax
    // CALL(0x4aa577)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aa0fc)
    // mov ecx, dword ptr [eax + 4]
    // test ecx, ecx
    // if (...) GOTO(0x4aa0fc)
    // test byte ptr [ebp - 3], 8
    // if (...) GOTO(0x4aa0ed)
    // movsx eax, word ptr [eax]
    // shr eax, 1
    // mov dword ptr [ebp - 8], ecx
    // mov dword ptr [ebp - 0xc], eax
    // mov dword ptr [ebp - 0x24], 1
    // if (...) GOTO(0x4aa3a2)
    // and dword ptr [ebp - 0x24], 0
    // mov dword ptr [ebp - 8], ecx
    // movsx eax, word ptr [eax]
    // if (...) GOTO(0x4aa39f)
    // mov eax, dword ptr [0x4e5008]
    // mov dword ptr [ebp - 8], eax
    // push eax
    // if (...) GOTO(0x4aa198)
    // if (...) GOTO(0x4aa118)
    // cmp bl, 0x67
    // if (...) GOTO(0x4aa118)
    // mov dword ptr [ebp - 0x10], 1
    // mov eax, dword ptr [ebp + 0x10]
    // push dword ptr [ebp - 0x34]
    // add eax, 8
    // mov dword ptr [ebp + 0x10], eax
    // push dword ptr [ebp - 0x10]
    // mov ecx, dword ptr [eax - 8]
    // mov dword ptr [ebp - 0x48], ecx
    // mov eax, dword ptr [eax - 4]
    // mov dword ptr [ebp - 0x44], eax
    // movsx eax, bl
    // push eax
    // lea eax, [ebp - 0x248]
    // push eax
    // lea eax, [ebp - 0x48]
    // push eax
    // CALL(dword)
    // mov esi, dword ptr [ebp - 4]
    // add esp, 0x14
    // and esi, 0x80
    // if (...) GOTO(0x4aa16a)
    // cmp dword ptr [ebp - 0x10], 0
    // if (...) GOTO(0x4aa16a)
    // lea eax, [ebp - 0x248]
    // push eax
    // CALL(dword)
    // pop ecx
    // cmp bl, 0x67
    // if (...) GOTO(0x4aa181)
    // test esi, esi
    // if (...) GOTO(0x4aa181)
    // lea eax, [ebp - 0x248]
    // push eax
    // CALL(dword)
    // pop ecx
    // cmp byte ptr [ebp - 0x248], 0x2d
    // if (...) GOTO(0x4aa197)
    // or byte ptr [ebp - 3], 1
    // lea edi, [ebp - 0x247]
    // mov dword ptr [ebp - 8], edi
    // push edi
    // CALL(0x4abdf0)
    // pop ecx
    // if (...) GOTO(0x4aa39f)
    // sub eax, 0x69
    // if (...) GOTO(0x4aa27d)
    // sub eax, 5
    // if (...) GOTO(0x4aa253)
    // dec eax
    // if (...) GOTO(0x4aa240)
    // dec eax
    // if (...) GOTO(0x4aa210)
    // sub eax, 3
    // if (...) GOTO(0x4a9fc5)
    // dec eax
    // dec eax
    // if (...) GOTO(0x4aa281)
    // sub eax, 3
    // if (...) GOTO(0x4aa3a2)
    // mov dword ptr [ebp - 0x2c], 0x27
    // if (...) GOTO(0x4aa21e)
    // sub eax, ecx
    // sar eax, 1
    // if (...) GOTO(0x4aa39f)
    // test ecx, ecx
    // if (...) GOTO(0x4aa1f8)
    // mov ecx, dword ptr [0x4e5008]
    // mov dword ptr [ebp - 8], ecx
    // mov eax, ecx
    // mov edx, esi
    // dec esi
    // test edx, edx
    // if (...) GOTO(0x4aa209)
    // cmp byte ptr [eax], 0
    // if (...) GOTO(0x4aa209)
    // inc eax
    // if (...) GOTO(0x4aa1fa)
    // sub eax, ecx
    // if (...) GOTO(0x4aa39f)
    // mov dword ptr [ebp - 0x10], 8
    // mov dword ptr [ebp - 0x2c], 7
    // test byte ptr [ebp - 4], 0x80
    // mov dword ptr [ebp - 0xc], 0x10
    // if (...) GOTO(0x4aa288)
    // mov al, byte ptr [ebp - 0x2c]
    // mov byte ptr [ebp - 0x16], 0x30
    // add al, 0x51
    // mov dword ptr [ebp - 0x1c], 2
    // mov byte ptr [ebp - 0x15], al
    // if (...) GOTO(0x4aa288)
    // test byte ptr [ebp - 4], 0x80
    // mov dword ptr [ebp - 0xc], 8
    // if (...) GOTO(0x4aa288)
    // or byte ptr [ebp - 3], 2
    // if (...) GOTO(0x4aa288)
    // lea eax, [ebp + 0x10]
    // push eax
    // CALL(0x4aa577)
    // test byte ptr [ebp - 4], 0x20
    // pop ecx
    // if (...) GOTO(0x4aa26c)
    // mov cx, word ptr [ebp - 0x14]
    // mov word ptr [eax], cx
    // if (...) GOTO(0x4aa271)
    // mov ecx, dword ptr [ebp - 0x14]
    // mov dword ptr [eax], ecx
    // mov dword ptr [ebp - 0x28], 1
    // if (...) GOTO(0x4aa4a0)
    // or dword ptr [ebp - 4], 0x40
    // mov dword ptr [ebp - 0xc], 0xa
    // test byte ptr [ebp - 3], 0x80
    // if (...) GOTO(0x4aa29a)
    // lea eax, [ebp + 0x10]
    // push eax
    // CALL(0x4aa584)
    // pop ecx
    // if (...) GOTO(0x4aa2db)
    // test byte ptr [ebp - 4], 0x20
    // if (...) GOTO(0x4aa2c1)
    // test byte ptr [ebp - 4], 0x40
    // lea eax, [ebp + 0x10]
    // push eax
    // if (...) GOTO(0x4aa2b6)
    // CALL(0x4aa577)
    // pop ecx
    // movsx eax, ax
    // cdq 
    // if (...) GOTO(0x4aa2db)
    // CALL(0x4aa577)
    // pop ecx
    // movzx eax, ax
    // if (...) GOTO(0x4aa2b3)
    // test byte ptr [ebp - 4], 0x40
    // lea eax, [ebp + 0x10]
    // push eax
    // if (...) GOTO(0x4aa2d3)
    // CALL(0x4aa577)
    // pop ecx
    // if (...) GOTO(0x4aa2b3)
    // CALL(0x4aa577)
    // pop ecx
    // xor edx, edx
    // test byte ptr [ebp - 4], 0x40
    // if (...) GOTO(0x4aa2fc)
    // test edx, edx
    // if (...) GOTO(0x4aa2fc)
    // if (...) GOTO(0x4aa2eb)
    // test eax, eax
    // jae 0x4aa2fc
    // neg eax
    // adc edx, 0
    // mov esi, eax
    // neg edx
    // or byte ptr [ebp - 3], 1
    // mov edi, edx
    // if (...) GOTO(0x4aa300)
    // mov esi, eax
    // mov edi, edx
    // test byte ptr [ebp - 3], 0x80
    // if (...) GOTO(0x4aa309)
    // and edi, 0
    // cmp dword ptr [ebp - 0x10], 0
    // if (...) GOTO(0x4aa318)
    // mov dword ptr [ebp - 0x10], 1
    // if (...) GOTO(0x4aa31c)
    // and dword ptr [ebp - 4], 0xfffffff7
    // mov eax, esi
    // or eax, edi
    // if (...) GOTO(0x4aa326)
    // and dword ptr [ebp - 0x1c], 0
    // lea eax, [ebp - 0x49]
    // mov dword ptr [ebp - 8], eax
    // mov eax, dword ptr [ebp - 0x10]
    // dec dword ptr [ebp - 0x10]
    // test eax, eax
    // if (...) GOTO(0x4aa33c)
    // mov eax, esi
    // or eax, edi
    // if (...) GOTO(0x4aa377)
    // mov eax, dword ptr [ebp - 0xc]
    // cdq 
    // push edx
    // push eax
    // push edi
    // push esi
    // mov dword ptr [ebp - 0x40], eax
    // mov dword ptr [ebp - 0x3c], edx
    // CALL(0x4ac2a0)
    // push dword ptr [ebp - 0x3c]
    // mov ebx, eax
    // add ebx, 0x30
    // push dword ptr [ebp - 0x40]
    // push edi
    // push esi
    // CALL(0x4ac230)
    // cmp ebx, 0x39
    // mov esi, eax
    // mov edi, edx
    // if (...) GOTO(0x4aa36d)
    // add ebx, dword ptr [ebp - 0x2c]
    // mov eax, dword ptr [ebp - 8]
    // dec dword ptr [ebp - 8]
    // mov byte ptr [eax], bl
    // if (...) GOTO(0x4aa32c)
    // lea eax, [ebp - 0x49]
    // sub eax, dword ptr [ebp - 8]
    // inc dword ptr [ebp - 8]
    // test byte ptr [ebp - 3], 2
    // mov dword ptr [ebp - 0xc], eax
    // if (...) GOTO(0x4aa3a2)
    // mov ecx, dword ptr [ebp - 8]
    // cmp byte ptr [ecx], 0x30
    // if (...) GOTO(0x4aa395)
    // test eax, eax
    // if (...) GOTO(0x4aa3a2)
    // dec dword ptr [ebp - 8]
    // inc eax
    // mov ecx, dword ptr [ebp - 8]
    // mov byte ptr [ecx], 0x30
    // mov dword ptr [ebp - 0xc], eax
    // cmp dword ptr [ebp - 0x28], 0
    // if (...) GOTO(0x4aa4a0)
    // mov ebx, dword ptr [ebp - 4]
    // test bl, 0x40
    // if (...) GOTO(0x4aa3da)
    // test bh, 1
    // if (...) GOTO(0x4aa3bf)
    // mov byte ptr [ebp - 0x16], 0x2d
    // if (...) GOTO(0x4aa3d3)
    // test bl, 1
    // if (...) GOTO(0x4aa3ca)
    // mov byte ptr [ebp - 0x16], 0x2b
    // if (...) GOTO(0x4aa3d3)
    // test bl, 2
    // if (...) GOTO(0x4aa3da)
    // mov byte ptr [ebp - 0x16], 0x20
    // mov dword ptr [ebp - 0x1c], 1
    // mov esi, dword ptr [ebp - 0x20]
    // sub esi, dword ptr [ebp - 0x1c]
    // sub esi, dword ptr [ebp - 0xc]
    // test bl, 0xc
    // if (...) GOTO(0x4aa3fa)
    // lea eax, [ebp - 0x14]
    // push eax
    // push dword ptr [ebp + 8]
    // push esi
    // push(0x20)
    // CALL(0x4aa50e)
    // add esp, 0x10
    // lea eax, [ebp - 0x14]
    // push eax
    // lea eax, [ebp - 0x16]
    // push dword ptr [ebp + 8]
    // push dword ptr [ebp - 0x1c]
    // push eax
    // CALL(0x4aa53f)
    // add esp, 0x10
    // test bl, 8
    // if (...) GOTO(0x4aa42c)
    // test bl, 4
    // if (...) GOTO(0x4aa42c)
    // lea eax, [ebp - 0x14]
    // push eax
    // push dword ptr [ebp + 8]
    // push esi
    // push(0x30)
    // CALL(0x4aa50e)
    // add esp, 0x10
    // cmp dword ptr [ebp - 0x24], 0
    // if (...) GOTO(0x4aa473)
    // cmp dword ptr [ebp - 0xc], 0
    // if (...) GOTO(0x4aa473)
    // mov eax, dword ptr [ebp - 0xc]
    // mov ebx, dword ptr [ebp - 8]
    // lea edi, [eax - 1]
    // mov ax, word ptr [ebx]
    // inc ebx
    // push eax
    // lea eax, [ebp - 0x38]
    // push eax
    // inc ebx
    // CALL(0x4ac169)
    // pop ecx
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aa488)
    // lea ecx, [ebp - 0x14]
    // push ecx
    // push dword ptr [ebp + 8]
    // push eax
    // lea eax, [ebp - 0x38]
    // push eax
    // CALL(0x4aa53f)
    // add esp, 0x10
    // mov eax, edi
    // dec edi
    // test eax, eax
    // if (...) GOTO(0x4aa441)
    // if (...) GOTO(0x4aa488)
    // lea eax, [ebp - 0x14]
    // push eax
    // push dword ptr [ebp + 8]
    // push dword ptr [ebp - 0xc]
    // push dword ptr [ebp - 8]
    // CALL(0x4aa53f)
    // add esp, 0x10
    // test byte ptr [ebp - 4], 4
    // if (...) GOTO(0x4aa4a0)
    // lea eax, [ebp - 0x14]
    // push eax
    // push dword ptr [ebp + 8]
    // push esi
    // push(0x20)
    // CALL(0x4aa50e)
    // add esp, 0x10
    // mov edi, dword ptr [ebp + 0xc]
    // mov bl, byte ptr [edi]
    // inc edi
    // test bl, bl
    // mov dword ptr [ebp + 0xc], edi
    // if (...) GOTO(0x4a9dc4)
    // mov eax, dword ptr [ebp - 0x14]
    // pop edi
    // pop esi
    // pop ebx
    // leave 
    // return;
    // aaa 
    // lahf 
    // dec edx
    // add byte ptr [0x28004a9e], cl
    // sahf 
    // dec edx
    // add byte ptr [esi + ebx*4 + 0x4a], dh
    // add byte ptr [ebx - 0x4cffb562], ch
    // sahf 
    // dec edx
    // add al, ch
    // sahf 
    // dec edx
    // add byte ptr [ebx - 0x61], bh
    // dec edx
    // add byte ptr [ebp - 0x75], dl
    // in al, dx
    // mov ecx, dword ptr [ebp + 0xc]
    // dec dword ptr [ecx + 4]
    // js 0x4aa4f2
    // mov edx, dword ptr [ecx]
    // mov al, byte ptr [ebp + 8]
    // mov byte ptr [edx], al
    // inc dword ptr [ecx]
    // movzx eax, al
    // if (...) GOTO(0x4aa4fd)
    // push ecx
    // push dword ptr [ebp + 8]
    // CALL(0x4aa5a2)
    // pop ecx
    // pop ecx
    // cmp eax, -1
    // mov eax, dword ptr [ebp + 0x10]
    // if (...) GOTO(0x4aa50a)
    // or dword ptr [eax], 0xffffffff
    // pop ebp
    // return;
    // inc dword ptr [eax]
    // pop ebp
    // return;
    // push esi
    // push edi
    // mov edi, dword ptr [esp + 0x10]
    // mov eax, edi
    // dec edi
    // test eax, eax
    // if (...) GOTO(0x4aa53c)
    // mov esi, dword ptr [esp + 0x18]
    // push esi
    // push dword ptr [esp + 0x18]
    // push dword ptr [esp + 0x14]
    // CALL(0x4aa4d9)
    // add esp, 0xc
    // cmp dword ptr [esi], -1
    // if (...) GOTO(0x4aa53c)
    // mov eax, edi
    // dec edi
    // test eax, eax
    // if (...) GOTO(0x4aa51f)
    // pop edi
    // pop esi
    // return;
    // push ebx
    // mov ebx, dword ptr [esp + 0xc]
    // mov eax, ebx
    // dec ebx
    // push esi
    // push edi
    // test eax, eax
    // if (...) GOTO(0x4aa573)
    // mov edi, dword ptr [esp + 0x1c]
    // mov esi, dword ptr [esp + 0x10]
    // movsx eax, byte ptr [esi]
    // push edi
    // inc esi
    // push dword ptr [esp + 0x1c]
    // push eax
    // CALL(0x4aa4d9)
    // add esp, 0xc
    // cmp dword ptr [edi], -1
    // if (...) GOTO(0x4aa573)
    // mov eax, ebx
    // dec ebx
    // test eax, eax
    // if (...) GOTO(0x4aa555)
    // pop edi
    // pop esi
    // pop ebx
    // return;
    // mov eax, dword ptr [esp + 4]
    // add dword ptr [eax], 4
    // mov eax, dword ptr [eax]
    // mov eax, dword ptr [eax - 4]
    // return;
    // mov eax, dword ptr [esp + 4]
    // add dword ptr [eax], 8
    // mov ecx, dword ptr [eax]
    // mov eax, dword ptr [ecx - 8]
    // mov edx, dword ptr [ecx - 4]
    // return;
    // mov eax, dword ptr [esp + 4]
    // add dword ptr [eax], 4
    // mov eax, dword ptr [eax]
    // mov ax, word ptr [eax - 4]
    // return;
    // push ebp
    // mov ebp, esp
    // push ebx
    // push esi
    // mov esi, dword ptr [ebp + 0xc]
    // mov eax, dword ptr [esi + 0xc]
    // mov ebx, dword ptr [esi + 0x10]
    // test al, 0x82
    // if (...) GOTO(0x4aa6ae)
    // test al, 0x40
    // if (...) GOTO(0x4aa6ae)
    // test al, 1
    // if (...) GOTO(0x4aa5da)
    // and dword ptr [esi + 4], 0
    // test al, 0x10
    // if (...) GOTO(0x4aa6ae)
    // mov ecx, dword ptr [esi + 8]
    // and al, 0xfe
    // mov dword ptr [esi], ecx
    // mov dword ptr [esi + 0xc], eax
    // mov eax, dword ptr [esi + 0xc]
    // and dword ptr [esi + 4], 0
    // and dword ptr [ebp + 0xc], 0
    // and al, 0xef
    // or al, 2
    // test ax, 0x10c
    // mov dword ptr [esi + 0xc], eax
    // if (...) GOTO(0x4aa614)
    // cmp esi, 0x4e4da8
    // if (...) GOTO(0x4aa602)
    // cmp esi, 0x4e4dc8
    // if (...) GOTO(0x4aa60d)
    // push ebx
    // CALL(0x4ac140)
    // test eax, eax
    // pop ecx
    // if (...) GOTO(0x4aa614)
    // push esi
    // CALL(0x4ac315)
    // pop ecx
    // test word ptr [esi + 0xc], 0x108
    // push edi
    // if (...) GOTO(0x4aa684)
    // mov eax, dword ptr [esi + 8]
    // mov edi, dword ptr [esi]
    // sub edi, eax
    // lea ecx, [eax + 1]
    // mov dword ptr [esi], ecx
    // mov ecx, dword ptr [esi + 0x18]
    // dec ecx
    // test edi, edi
    // mov dword ptr [esi + 4], ecx
    // if (...) GOTO(0x4aa644)
    // push edi
    // push eax
    // push ebx
    // CALL(0x4a5b58)
    // add esp, 0xc
    // mov dword ptr [ebp + 0xc], eax
    // if (...) GOTO(0x4aa67a)
    // cmp ebx, -1
    // if (...) GOTO(0x4aa662)
    // mov ecx, ebx
    // mov eax, ebx
    // sar ecx, 5
    // and eax, 0x1f
    // mov ecx, dword ptr [ecx*4 + 0x842040]
    // lea eax, [eax + eax*8]
    // lea eax, [ecx + eax*4]
    // if (...) GOTO(0x4aa667)
    // mov eax, 0x4e4d60
    // test byte ptr [eax + 4], 0x20
    // if (...) GOTO(0x4aa67a)
    // push 2
    // push 0
    // push ebx
    // CALL(0x4a95bb)
    // add esp, 0xc
    // mov eax, dword ptr [esi + 8]
    // mov cl, byte ptr [ebp + 8]
    // mov byte ptr [eax], cl
    // if (...) GOTO(0x4aa698)
    // push 1
    // lea eax, [ebp + 8]
    // pop edi
    // push edi
    // push eax
    // push ebx
    // CALL(0x4a5b58)
    // add esp, 0xc
    // mov dword ptr [ebp + 0xc], eax
    // cmp dword ptr [ebp + 0xc], edi
    // pop edi
    // if (...) GOTO(0x4aa6a4)
    // or dword ptr [esi + 0xc], 0x20
    // if (...) GOTO(0x4aa6b3)
    // mov eax, dword ptr [ebp + 8]
    // and eax, 0xff
    // if (...) GOTO(0x4aa6b6)
    // or al, 0x20
    // mov dword ptr [esi + 0xc], eax
    // or eax, 0xffffffff
    // pop esi
    // pop ebx
    // pop ebp
    // return;
    // CALL(0x405098)
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
    // jbe 0x4aa6e0
    // cmp edi, eax
    // if (...) GOTO(0x4aa858)
    // test edi, 3
    // if (...) GOTO(0x4aa6fc)
    // shr ecx, 2
    // and edx, 3
    // cmp ecx, 8
    // if (...) GOTO(0x4aa71c)
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // if (...) GOTO(dword)
    // mov eax, edi
    // mov edx, 3
    // sub ecx, 4
    // if (...) GOTO(0x4aa714)
    // and eax, 3
    // add ecx, eax
    // if (...) GOTO(dword)
    // if (...) GOTO(dword)
    // // nop
    // if (...) GOTO(dword)
    // // nop
    // xor byte ptr [edi - 0x58a3ffb6], ah
    // dec edx
    // add byte ptr [eax + 0x23004aa7], al
    // ror dword ptr [edx - 0x75f877fa], 1
    // inc esi
    // add dword ptr [eax + 0x468a0147], ecx
    // add al, cl
    // if (...) GOTO(0x2922f47)
    // add esi, 3
    // add edi, 3
    // cmp ecx, 8
    // if (...) GOTO(0x4aa71c)
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // and edx, ecx
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // mov al, byte ptr [esi + 1]
    // shr ecx, 2
    // mov byte ptr [edi + 1], al
    // add esi, 2
    // add edi, 2
    // cmp ecx, 8
    // if (...) GOTO(0x4aa71c)
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // if (...) GOTO(dword)
    // // nop
    // and edx, ecx
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // inc esi
    // shr ecx, 2
    // inc edi
    // cmp ecx, 8
    // if (...) GOTO(0x4aa71c)
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // if (...) GOTO(dword)
    // dec edx
    // add ah, ah
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add ah, bl
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add ah, dl
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add ah, cl
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add ah, al
    // cmpsd dword ptr [esi], dword ptr es:[edi]
    // dec edx
    // add byte ptr [edi + 0x448b004a], bh
    // mov fs, esp
    // mov dword ptr [edi + ecx*4 - 0x1c], eax
    // mov eax, dword ptr [esi + ecx*4 - 0x18]
    // mov dword ptr [edi + ecx*4 - 0x18], eax
    // mov eax, dword ptr [esi + ecx*4 - 0x14]
    // mov dword ptr [edi + ecx*4 - 0x14], eax
    // mov eax, dword ptr [esi + ecx*4 - 0x10]
    // mov dword ptr [edi + ecx*4 - 0x10], eax
    // mov eax, dword ptr [esi + ecx*4 - 0xc]
    // mov dword ptr [edi + ecx*4 - 0xc], eax
    // mov eax, dword ptr [esi + ecx*4 - 8]
    // mov dword ptr [edi + ecx*4 - 8], eax
    // mov eax, dword ptr [esi + ecx*4 - 4]
    // mov dword ptr [edi + ecx*4 - 4], eax
    // lea eax, [ecx*4]
    // add esi, eax
    // add edi, eax
    // if (...) GOTO(dword)
    // mov edi, edi
    // sbb byte ptr [eax - 0x57dfffb6], ch
    // dec edx
    // add byte ptr [eax + ebp*4], ch
    // dec edx
    // add byte ptr [eax - 0x58], al
    // dec edx
    // add byte ptr [ebx + 0x5f5e0845], cl
    // leave 
    // return;
    // // nop
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // pop edi
    // leave 
    // return;
    // // nop
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // mov al, byte ptr [esi + 1]
    // mov byte ptr [edi + 1], al
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // pop edi
    // leave 
    // return;
    // lea ecx, [ecx]
    // mov al, byte ptr [esi]
    // mov byte ptr [edi], al
    // mov al, byte ptr [esi + 1]
    // mov byte ptr [edi + 1], al
    // mov al, byte ptr [esi + 2]
    // mov byte ptr [edi + 2], al
    // mov eax, dword ptr [ebp + 8]
    // pop esi
    // pop edi
    // leave 
    // return;
    // // nop
    // lea esi, [ecx + esi - 4]
    // lea edi, [ecx + edi - 4]
    // test edi, 3
    // if (...) GOTO(0x4aa88c)
    // shr ecx, 2
    // and edx, 3
    // cmp ecx, 8
    // if (...) GOTO(0x4aa880)
    // std 
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // cld 
    // if (...) GOTO(dword)
    // mov edi, edi
    // neg ecx
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // mov eax, edi
    // mov edx, 3
    // cmp ecx, 4
    // if (...) GOTO(0x4aa8a4)
    // and eax, 3
    // sub ecx, eax
    // if (...) GOTO(dword)
    // if (...) GOTO(dword)
    // // nop
    // mov eax, 0xd8004aa8
    // test al, 0x4a
    // add byte ptr [eax], al
    // test eax, 0x468a004a
    // add esp, dword ptr [ebx]
    // ror dword ptr [eax - 0x3eb1fcb9], 1
    // if (...) GOTO(0xf9cdf7c9)
    // or byte ptr [edx - 0x4a], dh
    // std 
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // cld 
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // mov al, byte ptr [esi + 3]
    // and edx, ecx
    // mov byte ptr [edi + 3], al
    // mov al, byte ptr [esi + 2]
    // shr ecx, 2
    // mov byte ptr [edi + 2], al
    // sub esi, 2
    // sub edi, 2
    // cmp ecx, 8
    // if (...) GOTO(0x4aa880)
    // std 
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // cld 
    // if (...) GOTO(dword)
    // // nop
    // mov al, byte ptr [esi + 3]
    // and edx, ecx
    // mov byte ptr [edi + 3], al
    // mov al, byte ptr [esi + 2]
    // mov byte ptr [edi + 2], al
    // mov al, byte ptr [esi + 1]
    // shr ecx, 2
    // mov byte ptr [edi + 1], al
    // sub esi, 3
    // sub edi, 3
    // cmp ecx, 8
    // if (...) GOTO(0x4aa880)
    // std 
    // rep movsd dword ptr es:[edi], dword ptr [esi]
    // cld 
    // if (...) GOTO(dword)
    // lea ecx, [ecx]
    // push esp
    // test eax, 0xa95c004a
    // dec edx
    // add byte ptr [ecx + ebp*4 + 0x4a], ah
    // add byte ptr [ecx + ebp*4 + 0x4a], ch
    // add byte ptr [ecx + ebp*4 + 0x4a], dh
    // add byte ptr [ecx + ebp*4 + 0x4a], bh
    // add byte ptr [ecx + ebp*4 - 0x5668ffb6], al
    // dec edx
    // add byte ptr [ebx - 0x76e371bc], cl
    // inc esp
}