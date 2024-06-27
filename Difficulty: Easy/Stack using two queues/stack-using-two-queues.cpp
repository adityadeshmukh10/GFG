//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack::pop() {
    // Check if q1 is empty
    if (q1.empty()) {
        return -1;  // Or handle the error as appropriate
    }

    int m = q1.size();
    // Transfer all elements except the last one from q1 to q2
    for (int i = 0; i < m - 1; ++i) {
        int element = q1.front();
        q2.push(element);
        q1.pop();
    }

    // The last element in q1 is the one we want to pop
    int e = q1.front();
    q1.pop();

    // Transfer all elements back from q2 to q1
    while (!q2.empty()) {
        int element2 = q2.front();
        q1.push(element2);
        q2.pop();
    }

    return e;
}
