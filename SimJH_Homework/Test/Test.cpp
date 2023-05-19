// Test.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int ChCount(const char* const _string, char Ch)
{
    int ChCount = 0;
   // while (_string[ChCount])
   // {
   //     char Ch = _string[ChCount];
   //
   //     ++ChCount;
   // }
    int Count = 0;

    while (_string[ChCount])
    {

        if (Ch == _string[ChCount])
        {
            ++Count;
        }

        ++ChCount;
    }


    // for문을 돌리는건 당연한거야.

    // Ch와 같은 문자가 몇개들어있는지 세어서 리턴해주는 함수
    return Count;
}


int main()
{
    {
        int Result = ChCount("ab aaa ccc ddd eee", 'a');

        int a = 0;
    }
}