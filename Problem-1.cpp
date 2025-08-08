#include<bits/stdc++.h>
using namespace std;
class Calculator{
    public: 
    double a, b;
    string operation;
    Calculator(double x, double y , string op){
        a = x;
        b = y;
        operation =op;
    } 
    void calculate(){
        if(operation == "add"){
            cout << " Result: "<< ( a+b ) << endl;
        }
        else if (operation == "sub"){
            cout << "Result: " << (a-b) << endl;

        }
        else if (operation == "mul"){
            cout << "Result: " << (a*b) << endl;
        }
        else if (operation == "div"){
            if(b != 0){
                cout << "Result: " << (a /b) << endl;
            }
            else{
                cout << "Erro: Division by zero" << endl;
            }
        }
        else {
            cout << "Invalid operations!" << endl;
        }

    }
};

int main(){
    double num1, num2;
    string op;
    cout << "Enter first number: ";
    cin >> num1;
    cout<< "Enter second number";
    cin >> num2;
    cout << "Enter opertaion (add/ sub / mul/ div): " ;
    cin >> op;
    Calculator c1(num1, num2, op);
    c1.calculate();
    return 0;
}
