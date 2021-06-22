//==========================================================================
// �t�H���_�T���̃T���v��
// author: MasyoLab
//==========================================================================
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#define _GLIBCXX_DEBUG
#include <iostream>

#include "folder_path.hpp"

int main(void)
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    auto file_path = folder_path::get_all();

    for (auto itr = file_path.begin(); itr != file_path.end(); ++itr)
    {
        std::wcout << (*itr) << std::endl;
    }

    return std::system("PAUSE");
}

