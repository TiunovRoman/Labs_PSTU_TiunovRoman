#include <iostream>
using namespace std;

int main(){
    int a,b;
    bool f = true;
    cin >> a;
    if (a !=0){
        cin >> b;
        while ((a!=b)&&f==true&&b!=0){
            if (a<b){
                a = b;
            }
            else{
                f = false;
            }
        if (f == true){
            cout<<"posledovatelnost vozrastaet";
        }
        else {
            cout<<"posledovatelnost ne vozrastaet";
        }
        }
    }
    else{
        cout<<"konec posl";
    }
return 0;
}