#include <iostream>
#include<queue>
#include<map>
using namespace std;
void nonrepeatingchar(int n)
{
    queue<char>q;
    vector<char>v(n);
    map<char,int>freq;
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
       q.push(v[i]);
       freq[v[i]]++;
       while(!q.empty() &&  freq[q.front()]>1)
       {
           q.pop();
       }
       if(!q.empty())
       {
           cout<<q.front()<<" ";
       }
       else
       {
           cout<<"-1"<<" ";
       }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        nonrepeatingchar(n);
        cout<<endl;
    }
    return 0;
}
