#include <iostream>
#include <cmath>

using namespace std;

float SCALE = 0;            //倍数指定時の値を保存
float PI = 3.14159263;      //円周率制度がほしければ上げてクレメンス
double THETA = 0;           //直角三角形のシータ(角度)
double RADIAN = 0;          //ラジアン値保存用
double t_a = 1;             //直角三角形の辺a  a=1の場合で換算する
double t_b = 0;             //直角三角形の辺b
double t_c = 0;             //直角三角形の辺c
double _SIN = 0;
double _COS = 0;
double _TAN = 0;

void RANGER(double RADIAN){
    RADIAN = THETA * PI / 180;  //ラジアンを計算

    //ラジアンから対応するそれぞれの比に換算
    _SIN = sin(RADIAN);
    _COS = cos(RADIAN);
    _TAN = tan(RADIAN);

    //a=1としたときの直角三角形の長さを計算
    t_a = 1;
    t_c = 1 / _SIN;
    t_b = t_c * _COS;

    cout << "希望の倍数を入力してください。";
    cin >> SCALE;

    //x倍に換算
    t_a = 1 * SCALE;
    t_b = t_b * SCALE;
    t_c = t_c * SCALE;

    cout << "角度" << THETA << "°に対応する" << endl << SCALE << "倍の直角三角形の比 a:b:c は " << t_a << ":" << t_b << ":" << t_c << " です。" << endl;
    
}
int main(){

    //360°を超えているかなどの例外処理と監視
    while (true){
        cout << "角度を入力してください。";
        cin >> THETA;

        if (THETA <= 360 && THETA > -1){
            break;
        }
        else{
            cout << "角度は360°以内に収めてください" << endl;
        }
    }

    RANGER(RADIAN);

    return 0;
    
}
