#include<bits/stdc++.h>
using namespace std;
// Function to solve the activity selection problem

int activitySelection(vector<vector<int> > &v)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;

    for (int i = 0; i < v.size(); i++)
    {
        p.push(make_pair(v[i][1], v[i][0]));
    }

    long finishtime = LONG_MIN;
    int ans = 0;

    while (!p.empty())
    {
        pair<int, int> activity = p.top();
        p.pop(); 
        
        if(finishtime> activity.second)
            continue;

        if(activity.second > finishtime)
        {
            finishtime = activity.first;
            ans++;
        }
    }

    return ans;
}



int main(){
    vector<vector<int> > v;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int start, end;
        cin>>start>>end;
        v.push_back({start, end});
    }


}