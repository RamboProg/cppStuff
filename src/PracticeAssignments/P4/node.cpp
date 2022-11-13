#include <iostream>
using namespace std;

struct node{
    string str;
    struct node * next;
};

bool contains(string s, struct node* lst){
    node* ptr = lst;
    while(ptr != NULL){
        if((*ptr).str == s){
            return true;
        }
        ptr = (*ptr).next;
    }
    return false;
}

void insert(string s, node * lst){
    node* curr = lst;
    while(curr->next != NULL){
        curr = curr->next;
    }
    node n = {s, NULL};
    node* nn = (node*) malloc(sizeof(node));
    *nn = {s, NULL};
    curr->next = nn;
}


int main(){
    node N1;
    node N2;
    node N3;
    node N4;
    N1.str = "Node one";
    N2.str = "Node two";
    N3.str = "Node three";
    N4.str = "Node four";
    N1.next = &N2;
    N2.next = &N3;
    N3.next = &N4;
    cout<<boolalpha<<contains("Node four", &N1)<<endl;
    insert("Other String", &N1);
    cout<<N1.str;
    return 0;
}