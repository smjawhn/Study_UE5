// Homework0518_Sim.j.h.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringCount(char* _Arr)
{
    int count = 0;

    while (*_Arr != 0)
    {
        count+=
    }
    printf("%d\n", count);
    return 0;
}

void ChangeCh(char* _Arr, char _PrevCh, char _NextCh)
{
    // 1. 들어온 글자를 전부 '1'로 채워봐라.
    //  1-1. 함수 내부에서 하지 말고
    // for while도 생각하지 말고


    return;
}

int main()
{
        {
        char Arr[100] = "aa";
                // 글자수를 세는 함수입니다.
        int Result = StringCount(nullptr);

        int a = 0;
    }

    {
        char Arr[100] = "aaa bbb ccc";

        Arr[0] = '1';

        // Arr[100] = "1111111111111";

        // 3이 나와야 합니다.
        // "aaa bbb ccc"; => "aaa bbb ddd";
        ChangeCh(Arr, 'c', 'd');

        int a = 0;
    }