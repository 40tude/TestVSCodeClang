#include <iostream>
#include <string_view>
#include <windows.h>

int main(){
    std::string_view s = "Greetings professor FALKEN, how about a nice game of chess?\n";
    std::cout << s;
    MessageBoxW(NULL, L"My message", L"My title", MB_OK);
    getchar();
    return 0;
}

