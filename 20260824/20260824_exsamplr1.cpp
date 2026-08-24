#include <iostream>
using namespace std;

int main(void)
{
    //変数
    int a = 0;
    //ポインター
    int* p = &a;
    //0と表示
    cout << "aの初期値: " << a << endl;
    //0から10に変更
    *p = 10;
    //変更後の10を表示
    cout << "aの変更後の値: " << a << endl;

    return 0;
}