#include <iostream>
using namespace std;

int countPaths(int n, int m) {
    if (n == 1 || m == 1) {
        return 1;
    }
    return countPaths(n - 1, m) + countPaths(n, m - 1);
}

int main() {
    cout << countPaths(3, 3) << endl;
    return 0;
}


/*

#include <iostream>
using namespace std;

int nested(int n) {
    if (n > 100) {
        return n - 10;
    }
    return nested(nested(n + 11));
}

int main() {
    cout << nested(95) << endl;
    return 0;
}

*/
/*

    1st case: 
    n = 95
    95 !> 100
    95 + 11 = 106
    
    2nd case:
    n = 106
    106 > 100
    106 - 10 = 96
    
    3rd case
    n = 96
    96 !> 100
    96 + 11 = 107
    
    4th case
    n = 107
    107 > 100
    107 - 10 = 97
    
    5th case:
    n = 97
    97 !> 100
    97 + 11 = 108
    6th case:
    
    6th case:
    n = 108
    108 > 100
    108 - 10 = 98
    
    7th case:
    n = 98
    98 !> 100
    98 + 11 = 109
    
    8th case:
    n = 109
    109 > 100
    109 - 10 = 99
    
    9th case:
    n = 99
    99 !> 100
    99 + 11 = 110
    
    10th case:
    n = 110
    110 > 100
    110 - 10 = 100
    
    11th case:
    n = 100
    100 !> 100
    100 + 11 = 111
    
    12th case:
    n = 111
    111 > 100
    111 - 10 = 101
    
    13th case:
    n = 101
    101 > 100
    101 - 10 = 91
    
    
    

*/
/*

#include <iostream>
using namespace std;

int nested(int n) {
    if (n > 100) {
        return n - 10;
    }
    return nested(nested(n + 11));
}

int main() {
    cout << nested(95) << endl;
    return 0;
}
    1st case: 
    n = 95
    95 !> 100
    95 + 11 = 106
    
    2nd case:
    n = 106
    106 > 100
    106 - 10 = 96
    
    3rd case
    n = 96
    96 !> 100
    96 + 11 = 107
    
    4th case
    n = 107
    107 > 100
    107 - 10 = 97
    
    5th case:
    n = 97
    97 !> 100
    97 + 11 = 108
    6th case:
    
    6th case:
    n = 108
    108 > 100
    108 - 10 = 98
    
    7th case:
    n = 98
    98 !> 100
    98 + 11 = 109
    
    8th case:
    n = 109
    109 > 100
    109 - 10 = 99
    
    9th case:
    n = 99
    99 !> 100
    99 + 11 = 110
    
    10th case:
    n = 110
    110 > 100
    110 - 10 = 100
    
    11th case:
    n = 100
    100 !> 100
    100 + 11 = 111
    
    12th case:
    n = 111
    111 > 100
    111 - 10 = 101
    
    13th case:
    n = 101
    101 > 100
    101 - 10 = 91
    
    
    

*/

