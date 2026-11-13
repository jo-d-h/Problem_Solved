#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct data
{
    char arr[20];
    int price;
};

int main()
{

    struct data list[20];
    int plus, minus, counts; // +, -, 문장개수
    int c;
    int count3 = 0;
    int num, result = 0, check = 0;
    int count = 0;
    char oword[20]; //각 케이스의 영어 문장

    scanf("%d %d %d", &plus, &minus, &counts); // +, -, 채점할 문제 개수

    for (int i = 0; i < (plus + minus); i++) //가, 감점용 단어, 점수 반복하여 입력 
    {
        scanf("%s", &list[i].arr); //단어 입력
        scanf("%d", &list[i].price); //가격 입력
    }

    for (int i = 0; i < counts; i++) //입력된 문장 개수까지 반복
    {
        while (1)
        {
            scanf("%s", oword); //영어문장 입력
            if (oword[0] == '.') //각 문장 간 분리
            {
                if (count3 % 2 == 1) //전체 문장의 단어수가 홀수일 경우
                {
                    result += 10; //10점 추가
                }
                if (result < 0) //최종 점수가 0 미만일 경우
                {

                    printf("FAIL\n"); //실패 출력
                }
                else //최종 점수가 0 이상일 경우
                {
                    printf("%d\n", result); //결과 출력
                }
                result = 0, count3 = 0; //값 초기화
                break;
            }
            else //문장이 끝나지 않은 경우
            {
                num = strlen(oword);
                count3++;
                result += num; //결과값에 정해진 점수를 추가

                for (int i = 0; i < (plus + minus); i++) //정해진 문장 개수까지 반복
                {
                    //+ 문장 판별
                    if (i < plus)
                    {
                        if (num == strlen(list[i].arr)) //입력된 단어가 존재할 경우
                        {
                            for (c = 0; c < num; c++) //단어 길이 합산
                            {
                                if (tolower(oword[c]) == tolower(list[i].arr[c]))
                                {
                                    count++;
                                }
                            }
                            if (count == num) //개수를 결과값에 합산
                            {
                                result += list[i].price;
                                result -= num;
                            }
                            count = 0; //초기화
                        }
                    }
                    //- 문장 판별
                    else
                    {
                        if (num == strlen(list[i].arr)) //입력된 단어가 존재할 경우
                        {
                            for (c = 0; c < num; c++) //단어 길이 합산
                            {
                                if (tolower(oword[c]) == tolower(list[i].arr[c]))
                                {
                                    count++;
                                }
                            }
                            if (count == num) //개수를 결과값에 합산
                            {
                                result -= list[i].price;
                                result -= num;
                                check++;
                            }
                            count = 0; //초기화
                        }
                    }
                }
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1223
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

