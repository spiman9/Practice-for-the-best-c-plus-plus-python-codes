#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node*n;
};


struct node* addAlternateNodes(struct node*head){
    
    if(head == nullptr || head->n == nullptr || head->n->n == nullptr){
        return head;
    }

    node* t1 = head;
    node* t2 = head->n->n;
    vector<int >v;
    v.push_back(t1->data);
    v.push_back(t1->n->data);

    while(t2!=nullptr){
        v.push_back(t1->data + t2->data);
        t1 = t1->n;
        t2 = t2->n;
    }

    t2 = head->n->n;
    for(int i = 2;i<v.size() ; i++){
        t2->data = v[i];
        t2 = t2->n;
    }
    return head;
}


int main(){
    int n;
    cin >> n;
    node * head = nullptr;
    node* last = nullptr;
    for(int i = 0 ; i < n ;i++){
        int x;
        cin >> x;
        node* temp = new node;
        temp->data = x;
        temp->n = nullptr;
        if(i == 0){
            head = temp;
            last = head;
            continue;
        }
        last->n = temp;
        last = temp;
    }

    head = addAlternateNodes(head);

    //print
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->n;
    }

    

    return 0;
}