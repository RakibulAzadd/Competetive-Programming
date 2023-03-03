 #include<bits/stdc++.h>
 using namespace std;
 int main()
  {
    int a,x;
    cin>>a;
    int arr[a+4];
    set<int>s;
    for(int i=1;i<=a;i++)
     {
      cin>>arr[i];
      s.insert(arr[i]);
     }
    for(auto &i : s)
     {
      cout<<i << ' ';
     }

  
     

    
   return 0;
  }
  /* 
  input : 7
1 2 3 0 4 5 0
output :
 0 1 3 5

  */