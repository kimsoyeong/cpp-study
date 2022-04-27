#include <iostream>
#include <climits>

using namespace std;

int main(){
    // 정수형 : 소수부가 없는 수
    // 음의 정수, 0, 양의 정수
    // cpp은 특정 상황에 알맞은 정수형을 제공한다.

    // short, int, long, long long

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int는 " << sizeof n_int << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;
    
    cout << "short은 " << sizeof n_short << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;
    // short: -32768 ~ 32727

    cout << "long은" << sizeof n_long << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

    cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
    cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

    // 사용할 변수의 크기를 잘 확인해, 알맞은 자료형을 사용하는 것이 메모리를 효율적으로 사용하는 방법이다!

    // unsinged : 음의 값을 저장할 필요가 없어 저장가능한 정수형의 최대값을 늘릴 수 있다.
    unsigned int au;
    unsigned short bu; // 0 ~ 65535
    unsigned long cu;
    unsigned long long du;

    // 실수형 : 소수부가 있는 수

    float a = 3.14; // 출력: 3.14
    int b = 3.14;   // 출력: 3

    cout << a << " " << b << endl;


    return 0;
}