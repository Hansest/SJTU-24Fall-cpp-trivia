#include <iostream>
using namespace std;

//========begin=======
class mystack {
    int *top, *head, len;
public:
    mystack(int l = 100): len(l) {
        top = head = new int [l];
    }
    bool isfull() { return (top - head) == len; }
    bool isempty() { return (top - head) == 0; }
    bool push(int &x) {
        if (top - head == len) return 0;
        *(++top) = x; 
        return 1;
    }
    bool pop(int &x) {
        if (top <= head) return 0;
        x = *(top--);
        return 1; 
    }
    ~mystack() {delete [] head; top = nullptr;}
};


//=========end========

int main()
{
    int n,size,i,data;
    cin>>n>>size;
    int* num = new int[n];
    for(i=0;i<n;i++)
    {
        num[i] = i+1;
    }  
    mystack s(size);
    cout<<"The stack is empty: "<<s.isempty()<<endl;
    cout<<"The stack is full: "<<s.isfull()<<endl;
    for(i=0;i<n/3;i++)
    {
        if(s.push(num[i]))
            cout<<"Push "<<num[i]<<" success!"<<endl;
        else
            cout<<"Push "<<num[i]<<" fail!"<<endl;
    }
    cout<<"The stack is empty: "<<s.isempty()<<endl;
    cout<<"The stack is full: "<<s.isfull()<<endl;
    for(i=0;i<2*n/3;i++)
    {
        if(s.pop(data))
            cout<<"Pop "<<data<<" success!"<<endl;
        else
            cout<<"Pop fail!"<<endl;
    }
    cout<<"The stack is empty: "<<s.isempty()<<endl;
    cout<<"The stack is full: "<<s.isfull()<<endl;
    for(i=n/3;i<n;i++)
    {
        if(s.push(num[i]))
            cout<<"Push "<<num[i]<<" success!"<<endl;
        else
            cout<<"Push "<<num[i]<<" fail!"<<endl;
    }
    cout<<"The stack is empty: "<<s.isempty()<<endl;
    cout<<"The stack is full: "<<s.isfull()<<endl;
    for(i=2*n/3;i<n;i++)
    {
        if(s.pop(data))
            cout<<"Pop "<<data<<" success!"<<endl;
        else
            cout<<"Pop fail!"<<endl;
    }
    cout<<"The stack is empty: "<<s.isempty()<<endl;
    cout<<"The stack is full: "<<s.isfull()<<endl;

    delete[] num;
    return 0;
}