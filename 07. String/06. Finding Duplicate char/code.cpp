#include<bits/stdc++.h>
using namespace std;

int Hash[26];
int main(){
    char A[]="finding";
     
     
     for(int i=0;A[i]!='\0';i++){
        Hash[A[i]-97]+=1;
     }
     for(int i=0;i<26;i++){
        if(Hash[i]>1){
            printf("%c = ", i+97);
             
            cout<<Hash[i]<<endl;
        }
     }
return 0;
}