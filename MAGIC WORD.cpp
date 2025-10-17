    #include<iostream>
    #include<string>
    using namespace std;

    int main(){

        string name;
        string reverse;
        
        cin >> name;
        

        bool accept = true;
        
        for (char n : name) {
            if (n < 'a' || n > 'z') {
                accept = false;
                break;
            } 
        }

        
        if(accept == true) {
            for(int i=name.length()-1; i>=0; i--){
            reverse += name[i];
        }
            if(name == reverse){
                cout << name << " is a magic word\n";
            } else {
                cout << name << " is NOT a magic word\n";
            }

        } else {
            cout << "not possible\n";
            return 1;
        }
     return 0;
}
