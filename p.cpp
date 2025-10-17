#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;

    for(int i=0; n != 1001; i++)
    {
        cin >> n;

        if(n == 0)
        {
            cout << "zero";
        }
        else
        {
            if(n > 0)
                {
                    cout << "positive";
                }
            else if(n < 0 && n != -1001)
                {
                    cout << "negative";
                }
            else if(n == -1001)
                {
                    cout << "out of  bounds";
                }
        }
        cout << endl;
    }
    return 0;
}
