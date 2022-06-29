// stock span problem
#include <iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n; 
    vector<int>prices(n);
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    stack<int>s;
    s.push(0);
    vector<int>span(n);
    span[0]=1;
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && prices[s.top()]<=prices[i])
        {
            s.pop();
        }
        if(!s.empty())
        {
            span[i]=i-s.top();
        }
        else
        {
            span[i]=i+1;
        }
        s.push(i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<span[i]<<" ";
    }
    cout<<"END"<<endl;

    
}
