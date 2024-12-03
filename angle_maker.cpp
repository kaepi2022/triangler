#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

float t_th = 0;         //底辺
float t_tk = 0;         //高さ
float t_sy = 0;         //斜面     
double t_arc = 0;       //arc三角関数やで
double t_angle = 0;     //角度の保存

void m_sin(){
    //sinから角度を演算

    cout << "斜面の長さを入力してください。：";
    cin >> t_sy;
    cout << "高さの長さを入力してください。：";
    cin >> t_tk;

    t_arc = t_tk / t_sy;                             //sin = a/c を計算
    t_angle = asin(t_arc) / M_PI * 180;             //ラジアンから角度を演算出力

    cout << t_sy << "と" << t_tk << "の比に対応する直角三角形の角度は" << t_angle << "です" << endl;
}
void m_cos(){
    //cosから角度を演算

    cout << "斜面の長さを入力してください。：";
    cin >> t_sy;
    cout << "底辺の長さを入力してください。：";
    cin >> t_th;

    t_arc = t_th / t_sy;                             //cos = b/c を計算
    t_angle = acos(t_arc) / M_PI * 180;             //ラジアンから角度を演算出力

    cout << t_sy << "と" << t_th << "の比に対応する直角三角形の角度は" << t_angle << "です" << endl;
}
void m_tan(){
    //tanから角度を演算

    cout << "底辺の長さを入力してください。：";
    cin >> t_th;
    cout << "高さの長さを入力してください。：";
    cin >> t_tk;

    t_arc = t_tk / t_th;                            //tan = a/b を計算
    t_angle = atan(t_arc) / M_PI * 180;             ////ラジアンから角度を演算出力

    cout << t_th << "と" << t_tk << "の比に対応する直角三角形の角度は" << t_angle << "です" << endl;
}
int main() {
    int mode = 0;
    cout << "角度求めますん  ver.1.10\n使う関数を選び番号を入力してください\n1.arcsin\n2.arccos\n3.arctan" << endl;
    cin >> mode;

    while (true){
        //モードの選択
        if(mode - 1 == 0){
            m_sin();
            break;
        }
        else if (mode - 2 == 0){
            m_cos();
            break;
        }
        else if (mode - 3 == 0){
            m_tan();
            break;
        }
        else{
            cout << "エラーが発生しました。出直してこいボケナス";
            break;
        }
    }

    return 0;

}
