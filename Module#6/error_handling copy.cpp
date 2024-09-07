// https://www.youtube.com/watch?v=aB86Ub8dubQ&ab_channel=SabrinaCarpenter-Topic
//  https://www.online-ide.com/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int value)
// takes in address of head so that if the Linked list was empty when we add an element, it will add as head 
// to do so, it has to take the address of head to modify the head
{
    Node *newNode = new Node(value);
    // creates new node with node constructor and provides value in it and the address of .next is default NULL
    if (head == NULL)
    // if the Linked list was empty, then the head will be NULL
    {
        head = newNode;
        // if head was NULL, means we have to put in the first entry as head
        cout << endl
             << "Inserted at Head" << endl
             << endl;
        return;
    }

    Node *temp = head;
    // creating another pointer to store adress of head and modify that to do our works so that head itself doesn't get lost
    while (temp->next != NULL)
    // Loop will work till it reaches the last value which has NULL in it's ->next 
    {
        temp = temp->next;
    }
    // moved the temp to the last index
    temp->next = newNode;
    // adding address of the new node at the last ->next 
    cout << endl
         << "Inserted at Tail" << endl
         << endl;
        //  adding done
}
void print_linked_list(Node *head)
//just taking the pointer from head and creates another pointer to point at head 
{
    cout << endl;
    cout << "Your Linked List: " << endl;
    Node *temp = head;
    // creating another pointer to store adress of head and modify that to do our works so that head itself doesn't get lost
    while (temp != NULL)
    // Loop will work till it reaches the last value which has NULL in it's ->next 
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}
void insert_at_random_position(Node *head, int position, int value)
// takes the adress stored in head and position where to insert and vlaue what to insert
{
    Node *newNode = new Node(value);
    //creates a new dynamic node with constructor
    Node *temp = head;
    // creating another pointer to store adress of head and modify that to do our works so that head itself doesn't get lost
    for (int i = 1; i < position - 1; i++)
    // takes a loop to increment till temp reaches the previous entry of position
    // the groups of linked list stores the next group's address 
    // therefore, when we are going to access the position, we need to access it's previous entry to get position's adress
    {
        temp = temp->next;
        if(temp==NULL)
        //if temp= NULL, that means we have reached the end of the linked list and still couldn't find the postion, therefore we are trying to access an index which doesn't actually exists
        // therefore, we are shoing output: INVALID INDEX instead of showing an "Segmentation fault"
        {
            cout << endl << "Invalid Index" << endl << endl;
            return;
            // ofc, when we are gettting invalid index, our program should end
        }
    }
    newNode->next = temp->next;
    //when we reach the previouos index of the position, we need to store the address of the previous entry of that position in another ->next datatype 
    //otherwise, we will lose the previous entry
    //after keeping the previous address to another newNode, we will replace the previous index's stored address with out new node's address 
    temp->next = newNode;
    // keep the new node's address in the previous index of the previous node
    cout << endl
         << endl
         << "Inserted at Position : " << position << endl
         << endl;
}
void insert_at_head(Node *&head, int value)
// we are taking adress of hea with it's pointer, and taking value to insert in head
{
    Node* newNode=new Node(value);
    //creating new node with the new value
    newNode->next = head;
    //adding head in new node->next  so that the head's address in the new node
    head = newNode;
    // changing head to newNode and head will be replaced
    cout << endl
         << "Inserted at Head"
         << endl
         << endl;
}
void delete_from_position(Node *head, int position)
//  taking head's address only since we dont need to change the head here and taking the position from where we need to delete
{
    Node *temp = head;
    // taking new pointer as "Temp" to keep the head's address
    // we will be changing the temp to do other operations
    for(int i=1;i<position-1;i++)
    // takes a loop to increment till temp reaches the previous entry of position
    // the groups of linked list stores the next group's address 
    // therefore, when we are going to access the position, we need to access it's previous entry to get position's adress 
    {
        temp = temp->next;
        // keep the new node's address in the previous index of the previous node
        if(temp==NULL)
        // if temp==NULL, that means we have reached the end of the linked list and still couldn't find the postion, therefore we are trying to access an index which doesn't actually exists
        //  therefore, we are shoing output: INVALID INDEX instead of showing an "Segmentation fault"
        {
            cout << endl << "Invalid Index" << endl << endl;
            return;
            // ofc, when we are gettting invalid index, our program should end
        }
    }
    if(temp->next==NULL)
    // if temp->next is NULL, that means we don't have any following index to delete
    // that's why it will get a NULL
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
        // ofc, when we are gettting invalid index, our program should end
    }
    Node *deleteNode = temp->next;
    // if temp->next has an address of next node, then we will create a new dynamic node named "deleteNode" with that address which we will delete later
    temp->next=temp->next->next;
    // we will store the next value in the index 
    delete deleteNode;
    // then we will delete deleteNode
    cout<<endl<<"Deleted Position: "<<position<<endl<<endl;
}
void delete_head(Node *&head)
// since we are going to modify the head node, we have to take its adress
{
    if (head == NULL)
    // head is NULL means, the list is empty, we can't do anything
    {
        cout << endl
             << "Head isn't available" << endl
             << endl;
        return;
    }
    Node *deleteNode = head;
    // if head is avaible, we will take it to another pointer so that the list isn't lost
    head=head->next;
    // we will replace the head with its following index
    delete deleteNode;
    // since head is shifted, now we need to delete the deleteNode
    cout<<endl<<"Head"<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option#1: Insert at tail" << endl;//done
        cout << "Option#2: Print Linked List" << endl;//done
        cout << "Option#3: Insert at random position" << endl;//done
        cout << "Option#4: Insert at Head" << endl;//done
        cout << "Option#5: Delete From Any Position" << endl;//done
        cout << "Option#7: Delete Head" << endl;//done
        cout << "Option#6: Terminate" << endl;//done
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Please enter value";
            int value;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (option == 2)
        {
            print_linked_list(head);
        }
        else if (option == 3)
        {
            int position, value;
            cout << "Enter Position : " << endl;
            cin >> position;
            cout << "Enter Value : " << endl;
            cin >> value;
            if(position==0)
            {
                insert_at_head(head,value);
            }
            else 
            {
                insert_at_random_position(head, position, value);
            }
        }
        else if (option == 4)
        {
            int value;
            cout << "Enter Value : " << endl;
            cin >> value;
            insert_at_head(head, value);
        }
        else if (option==5)
        {
            int position;
            cout << "Enter Position" << endl;
            cin >> position;
            if(position==0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, position);
            }
        }
        else if (option==6)
        {
            delete_head(head);
        }
        else if(option==7)
        {
            break;
        }
    }
    return 0
}