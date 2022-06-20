//implementation of stack using vector
#include<iostream>
#include<vector>
using namespace std;
class stack{
vector<int>v;
public:
       void push(int d)
       {
           v.push_back(d);
       }
       void pop()
       {
           v.pop_back();
       }
       int top()
       {
           return v[v.size()-1];
       }
       int size()
       {
           return v.size();
       }
       bool empty()
       {
           return v.size()==0;
       } 
};
int main()
{
   stack s;
	s.push(1);
	s.push(4);
	s.push(6);
	s.push(7);
	s.push(9);
	// cout<<s.v[1]<<" "<<endl;
	//s-->1 4 6 7 9


	// Stack s;
	// s.push('a');
	// s.push('b');
	// s.push('c');
	// s.push('d');
	// s.push('e');


	

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	cout<<endl;
	return 0;




}
