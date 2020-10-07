#include "Pool.h"
#include <iostream>
#include "Customer.h"
using namespace std;


/*int Pool::NumChange(int num)
{
    
}*/



void Pool::PoolChoice(int num)
{
    cout << "희망하는 놀이기구를 선택해주세요." << endl;
    cout << "1.몬스터블라스터" << endl;
    cout << "2.부메랑고" << endl;
    cout << "3.더블토네이도" << endl;
    cin >> choice;
   
    switch (choice) {
    case 1:

        if (numRestRiding == 0)
            cout << "이용권이 소진되었습니다. 재구매 바랍니다." << endl;

        cout << "몬스터블라스터를 선택하셨습니다." << endl;
        if (cusHeight < 130 || cusWeight>100) {
            cout << "키가 130미만이시기나 몸무게가 100kg 이상이신 분은 탑승이 불가합니다. " << endl;
        }
        else
        {
            numRestRiding--;

            for (int i = 0; i < 4; i++) {
                cout << "몬스터블라스터를 타는중입니다." << endl;
            };
            cout << "몬스터블라스터를 즐겁게 탔습니다." << endl;
        }
        break;

    case 2:

        if (numRestRiding == 0)
            cout << "이용권이 소진되었습니다. 재구매 바랍니다." << endl;

        cout << "부매랑고를 선택하셨습니다." << endl;
        if (cusHeight < 130 || cusWeight>100) {
            cout << "키가 130미만이시기나 몸무게가 100kg 이상이신 분은 탑승이 불가합니다. " << endl;
        }
        else
        {
            numRestRiding--;

            for (int i = 0; i < 4; i++) {
                cout << "부메랑고를 타는중입니다." << endl;
            };
            cout << "부메랑고를 즐겁게 탔습니다." << endl;
        }
        break;

    case 3:

        if (numRestRiding == 0)
            cout << "이용권이 소진되었습니다. 재구매 바랍니다." << endl;

        cout << "더블 토네이도를 선택하셨습니다." << endl;
        if (cusHeight < 130 || cusWeight>100) {
            cout << "키가 130미만이시기나 몸무게가 100kg 이상이신 분은 탑승이 불가합니다. " << endl;
        }
        else
        {
            numRestRiding--;

            for (int i = 0; i < 4; i++) {
                cout << "더블 토네이도를 타는중입니다." << endl;
            };
            cout << "더블 토네이도를 즐겁게 탔습니다." << endl;
        }
        break;
    }





};
