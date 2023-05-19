// 230519_SimJH_Homework0519.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//int ChCount = 0;
//while (_string[ChCount])
//{
//    ++ChCount;
//}

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

void TrimDelete(char* _string)
{
    char Ch = 'a';
    ' ';

    //while ()
    //{
    if (Ch == ' ')
    {
        int a = 0;
    }
    //}


    return;
}


int DigitsCount(int _Number)
{
    return 0;
}

void StrCopy(const char* const _Left, char* _Right)
{
    return;
}

// 가장 어려운 숙제
void NumberToString(int _Number, char* _Right)
{
    return;
}


int main()
{
    // 4가 리턴되어야 합니다.
    // 문자열의 마지막에 들어가는 0은 글자로 치지 않습니다.
    {
        int Result = ChCount("ab aaa ccc ddd eee", 'a');

        int a = 0;
    }

    {
        char Arr[256] = "aa  b  c dd ee";

        TrimDelete(Arr);

        // Arr "aabcddee"
        int a = 0;
    }

    {
        // 8이 리턴되게 만들어라.
        int Result = DigitsCount(100);

        int a = 0;
    }

    {
        char ArrCopyText[256] = {};

        StrCopy("aaaa bbb ccc", ArrCopyText);

        int a = 0;
    }

    {
        char Result[256] = {};

        // Result = "312312";

        NumberToString(312312, Result);

        char Ch = '0';

        int Value = 7;

        char ChConvert = Value + 48;

        int a = 0;
    }

   
}