// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int count=0;
//         for(int i = 0 ; i<size ; i++){
//             if(nums[i] != val){
//                 // nums[i] = nums[i+1];
//                 count++;
//             }
//         }      
//         return count;
//     }
// };

// int main(int argc, const char** argv) {
//     vector<int> nums = {3}
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>  
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5, 3, 6};

//     // Remove all occurrences of the value 3
//     vec.erase(remove(vec.begin(), vec.end(), 3), vec.end());

//     // Print the updated vector
//     for (int val : vec) {
//         cout << val << " ";
//     }
//     cout<<"\n"<<vec.size();
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        // int temp=0,count=0;
        // for(int i=s.length() ; i>=0 ; i--){
        //     int t =s.length()-1-temp;
        //     // cout<<t<<endl;
        //     if(s[t] == ' '){
        //         temp++;
        //         continue;
        //     }

        //     if(s[i-1]==' '){
        //         return (t-i)+1;
        //     }else if(i==0){
        //         return s.length();
        //     }
        // }
        // return -1;
        int i = s.length()-1, count=0;
        while(i>=0 && s[i]==' '){ //For excluding the spaces at the end of the string
            i--;
        }
        while(i>=0 && s[i] != ' '){ //Loop until a white space is encountered
            count++;
            i--;
        }
        return count;
    }
};

int main(){
    string str = "a";
    Solution obj;
    cout<<obj.lengthOfLastWord(str);
    return 0;
}
