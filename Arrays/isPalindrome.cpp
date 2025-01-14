#include<iostream>
using namespace std;
bool isPalindrome(int x) {
        if(x<0){ return false;}
        int rev=0, temp=x;
        while(temp!=0){
            int rem = temp%10;
            rev=(rev*10+rem);
            temp/=10;
        }
        if(rev==x){
            return true;
        }
        return false;
}

int main(int argc, const char** argv) {
    cout<<isPalindrome(121);
    
    return 0;
}