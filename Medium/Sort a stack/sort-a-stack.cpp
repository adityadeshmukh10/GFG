//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
vector<int> Bubble(vector<int> &arr)
{
    int p = arr.size();
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}
void SortedStack :: sort()
{
   //Your code here
   vector<int> arr;
   while(!s.empty())
   {
       int ch = s.top();
       arr.push_back(ch);
       s.pop();
   }
   
   Bubble(arr);
   int p = arr.size();
   for(int i=0;i<p;i++)
   {
       s.push(arr[i]);
   }
   return;
   
   //cout<<SortedStack.sort()<<endl;
   
}