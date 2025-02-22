#include <iostream>
#include <vector>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

//insertion at end
node* createlinkedlistend(int arr[],int index,int size)
{
    if(index==size)
    return NULL;

    node *temp;
    temp = new node(arr[index]);
    temp->next = createlinkedlistend(arr,index+1,size);
    return temp;
}

//reverse using recursion
node* reverse (node *curr, node *prev){
    if(curr == NULL)
    return prev;

    node *fut = curr->next;
    curr->next = prev;
    return reverse(fut,curr);
}

//find the middle of the list
node* middleNode(node* head) {
    int count = 0;
    node *temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }

    count /= 2;
    temp = head;
    while(count--)
    temp = temp->next;

    return temp;
        
}

//middle using slow and fast pointer
node* middlenode(node *head)
{
    node *slow = head,*fast = head;

    while(fast->next!=NULL&&fast!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main ()
{
    int arr[] = {2,3,4,5,6};
    node *head;
    head = createlinkedlistend(arr,0,5);

    // //revrse value
    // node *temp = head;
    // vector <int>ans;

    // while(temp)
    // {
    //     ans.push_back(temp->data);
    //     temp = temp->next;
    // }
    // temp = head;
    // int i = ans.size()-1;

    // while(temp)
    // {
    //     temp->data = ans[i];
    //     i--;
    //     temp = temp->next;
    // }


    // //reverse node
    // node *curr = head, *prev = NULL, *fut = NULL;
    // while(curr)
    // {
    //     fut = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = fut;
    // }
    // head = prev;

    //using recursion
    head = reverse(head,NULL);

    //print
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    node *middle = middleNode(head);
    cout<<endl<<middle->data<<endl;
    middle = middlenode(head);
    cout<<middle->data<<endl;
}