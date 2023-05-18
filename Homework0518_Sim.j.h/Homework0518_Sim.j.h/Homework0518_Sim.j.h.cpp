// Homework0518_Sim.j.h.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringCount(char* _Arr)
{
    int count = 0;


    if (0 != _Arr)
    {
        while (0 != _Arr[count])
        {
            ++count;
        }
    }

    else if (0 == _Arr);

    printf("%d\n", count);

    return count;
}

void ChangeCh(char* _Arr, char _PrevCh, char _NextCh)
{
    // 1. 들어온 글자를 전부 '1'로 채워봐라.
    //  1-1. 함수 내부에서 하지 말고
    // for while도 생각하지 말고

    int count2 = 0;



    if (0 != _Arr)
    {
        while (0 != _Arr[count2])
        {

            if (_PrevCh == _Arr[count2])
            {
                _Arr[count2] = _NextCh;
            }
            ++count2;
        }
    }

    else if (0 == _Arr);

    return;
}

int main()
{
    {
        char Arr[100] = "asdfgdfsga";
        // 글자수를 세는 함수입니다.
        int Result = StringCount(Arr);

        int a = 0;
    }


    {
        char Arr[100] = "aaa bbb ccc dddd eeee";

        //Arr[0] = '1';

        ChangeCh(Arr, 'd', 'z');

        printf("%s\n", Arr);
    }
}