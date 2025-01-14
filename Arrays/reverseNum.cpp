// #include<iostream>
// using namespace std;
// class Solution {
// public:

//     int reverse(int n) {
//         int rev=0,temp =n, t=n;
//         if(n<0){
//             temp = n*(-1);
//         }
//         while(temp>0){
//             int rem = temp%10;
//             if (rev > INT32_MAX/10 || (rev == INT32_MAX / 10 && rem > 7)) return 0;
//             if (rev < INT32_MIN/10 || (rev == INT32_MIN / 10 && rem < -8)) return 0;
//             rev = (rev+rem)*10;
//             temp/=10;
//         }
//         if(n<0){
//             return (rev/10)*(-1);
//         }
//         return rev/10;
//     }
// };

// int main(){
//     Solution s;
//     cout<<s.reverse(-2147483412);

// }

#include<iostream>
#include<limits>
using namespace std;

class Solution {
public:
    int reverse(int n) {
        int rev = 0;

        while(n != 0){
            int rem = n % 10;

            // Check if rev will overflow after multiplying by 10 and adding rem
            if (rev > INT32_MAX/10 || (rev == INT32_MAX / 10 && rem > 7)) return 0;
            if (rev < INT32_MIN/10 || (rev == INT32_MIN / 10 && rem < -8)) return 0;

            rev = rev * 10 + rem;
            n /= 10;
        }

        return rev;
    }
};

int main() {
    Solution s;
    cout << s.reverse(-2147483412) << endl;
    cout << s.reverse(1534236469) << endl; // Should return 0 due to overflow
    cout << s.reverse(-123) << endl; // Should return 0 due to overflow
    return 0;
}

