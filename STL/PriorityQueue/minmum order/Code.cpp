 #include<bits/stdc++.h>
 using namespace std;
 int main()
  {
    int a,x;
    cin>>a;
    int arr[a+4];
    priority_queue<int,vector<int>,greater<int> >q;
    for(int i=1;i<=a;i++)
     {
      cin>>arr[i];
      q.push(arr[i]);
     }
   while(!q.empty())
    {
       x= q.top();
      cout<<x<<endl;
      q.pop();
    }

  
     

    
   return 0;
  }
  /* 
  input : 7
1 2 3 0 4 5 0
output :
5
4
3
2
1
0
0

  */