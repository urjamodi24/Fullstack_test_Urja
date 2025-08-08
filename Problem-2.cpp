#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout << "Enter number of odd numbers to generate: ";
    cin >> a;
    int count = 0, num =1;
    while(count < a){
        cout << num;
        if(count < a-1) cout << " , ";
        num += 2;
        count++;
    }

    cout << endl;
    return 0;
}
