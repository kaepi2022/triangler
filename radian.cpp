#include <iostream>
#include <cmath>


#define M_PI 3.141592 //円周率無い時用
using namespace std; //めんどいstd 省略していくぅ


int main(){
    double THETA = 0; //θ用の変数
    double RADIAN = 0; //ラジアン値
    double SINA = 0; //sinの厳密値保存用
    double COSA = 0; //cosの厳密値保存用
    double TANA = 0; //tanの厳密値保存用

    //キモい画面を作成
    cout << "#####################################" << endl;
    cout << "#                                   #" << endl;
    cout << "# 三角関数の厳密値を求めるクソツール  #" << endl;
    cout << "#      2024/10/15 Ver 3.141592      #" << endl;
    cout << "#  created by MineKura(kaepi2022)   #" << endl;
    cout << "#                                   #" << endl;
    cout << "#####################################" << endl;


    //↓ここからメインやで^^

    while(true){
        cout << endl << "角度を入力してください>>:";
        cin >> THETA;

        if(THETA <= 360){
            break;
        }else if (THETA > 360){
            //エラー処理用
            cout << "エラーが発生しました。角度は360°までに収めてください。" << endl;
        }
    }

    //ラジアンから厳密値求めるやつ
    SINA = sin(THETA * M_PI / 180);
    COSA = cos(THETA * M_PI / 180);
    TANA = tan(THETA * M_PI / 180);


    //coutを一文でまとめたかったがめんどくさかったので許してクレメンス...
    //クソコ逃避不可避
    cout << endl << "厳密地の計算結果は、約" << endl;
    cout << "sin(" << THETA << "°) = " << SINA << endl;
    cout << "cos(" << THETA << "°) = " << COSA << endl;
    cout << "tan(" << THETA << "°) = " << TANA << endl;
    cout << "です。" << endl;

    return 0;

}