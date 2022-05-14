#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{    
    char str1[] = "BlockDMask";     //문자열만 있는 경우
    char str2[] = "2019";           //숫자만 있는 경우
    char str3[] = "2019BlockDMask"; //숫자+문자
    char str4[] = "BlockDMask2019"; //숫자+문자
 
    cout << "atoi(\"문자만\"); -"   << atoi(str1) << endl;
    cout << "atoi(\"숫자만\"); -"   << atoi(str2) << endl;
    cout << "atoi(\"숫자+문자\"); -" << atoi(str3) << endl;
    cout << "atoi(\"문자+숫자\"); -" << atoi(str4) << endl;
    return 0;
}