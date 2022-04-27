#include<iostream>

using namespace std;

int main() {
    // char : 작은 문자형
    int a = 77;
    char b = a;
    cout << b << endl; // 출력: M

    char c = 'a';
    /*
    char c;
    c = 'a';
    */
    cout << c << endl; // 출력: a

    // char c = "a"; // 불가능! null 문자 때문
    // null 문자 '\0'
    // - 문자열의 경우, 어디까지가 문자인지 알려주는 null 문자가 있어야 한다.
    // - "" >> 명시적으로 null 문자가 포함된다. => string
    // - 하나의 문자를 가질 수 있는 char는 ""을 사용할 수 없다.
    // + 한글: UNICODE 문자 체계 사용

    // bool : 0(=false) 혹은 1(=true)
    bool ab = 0;
    bool bb = 1;
    bool cb = 10; // 0 이외의 모든 값은 1로 저장됨

    cout << ab << " " << bb << " " << cb << endl; // 출력: 0 1 1


    return 0;
}