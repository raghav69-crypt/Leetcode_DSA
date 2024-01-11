#include<iostream.h>
using namespace std;
struct Creatingnode
{
    /* data */
    int data;
    Creatingnode * next; //Self structing datatype -- CreatingNode type pointer

    int intialisingnode(data1 , data2){
        data = data1;
        next = data2;
    }

    int lastnode(data1){
        data = data1;
    }
};

int main()
{
    vector <int> v = [1,2,3,4,5];
    Node *y = new Node(v[0]);
    cout<<y->data; //return 1 , if y->link : return Address
}


