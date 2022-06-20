//implementation of queue using array
#include<iostream>
using namespace std;
class queue
{
    int f;
    int e;
    int *arr;
    int n;
    int cs;

  public:
         queue(int s=5)
         {
           f=0;
           e=n-1;
           arr=new int[s];
           cs=0;  
           n=s;
         }
         void push(int d)
         {
             if(cs<n)
             {
                 e=(e+1)%n;
                 arr[e]=d;
                 cs++;
             }
             else
             {
                 cout<<"QUEUE IS FULL"<<endl;
             }
         }
         void pop()
         {
            if(cs>0)
            {
                f=(f+1)%n;
                cs--;
            }
            else
             {
                 cout<<"queue is empty"<<endl;
             }
         }
         int front()
         {
             return arr[f];
         }
         int size()
         {
             return cs;
         }
         bool empty()
         {
             return cs==0;
         }

};       
int main(){
	queue q;
	q.push(1);
	q.push(4);
	q.push(6);
	q.push(7);
	q.push(9);
	q.pop();  
	q.pop(); 
	// cout<<q.front()<<endl;
	q.push(19);
	
	q.push(19);
		q.push(19);
			q.push(19);
	
	
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	cout<<endl;
	
	return 0;

}
