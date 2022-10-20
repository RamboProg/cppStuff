#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    string str;
    struct node * next;
};

void printL(node * lst){
    node* current = lst;
    while (current->next != NULL){
        cout<<current->str<<" ";
        current = current->next;
    }
        
}
    

void insert(string s, node * lst){
    node* current = lst;
    while (current->next != NULL){
        current = current->next;
    }

    node* nn = (node*) malloc(sizeof(node));
    *nn = {s, NULL};
    current->next = nn; 

}

bool contains(node * lst, string s){
    node* current =lst;
    while (current->next !=NULL){
        if(current->str == s)
            return true;
    }
    return false;
}



int main(){
    node n3 = {"n3", NULL};
    node n2 = {"n2", &n3};
    node n1 = {"n1", &n2};

    printL(&n1);
    insert("n4", NULL);
    printL(&n1);

    contains(&n1, "n3");

    return 0;
}
