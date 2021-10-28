// // #include<iostream>
// // #include<string>
// // using namespace std;
// // int main(){
// //     string s;
// //     cout<<"enter your string"<<endl;
// //     cin>>s;
//     bool flag=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]==s[s.length()-i]){
//             flag=1;
//         }
//     }
//     if(flag==1){
//         cout<<"string is pallindrome"<<endl;
//     }
//     return 0;
// // }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter any word :";
    cin>>str;
    int flag=1,i;
        for(i=0;i<str.length()/2;i++){
            if(str[i]==str[str.length()-i-1]){
                flag=0;
            }
        }
    if(flag==1){
        cout<<"string is not pallindrome"<<endl;
    }
    else{
        cout<<"string is palindrome"<<endl;
    }
    return 0;  
  
}