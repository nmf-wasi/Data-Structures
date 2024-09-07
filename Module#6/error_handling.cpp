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
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at Head" << endl
             << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << endl
         << "Inserted at Tail" << endl
         << endl;
}
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: " << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}
void insert_at_random_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
        if(temp==NULL)
        {
            cout << endl << "Invalid Index" << endl << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted at Position : " << position << endl
         << endl;
}
void insert_at_head(Node *&head, int value)
{
    Node* newNode=new Node(value);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at Head"
         << endl
         << endl;
}
void delete_from_position(Node *head, int position)
{
    Node *temp = head;
    for(int i=1;i<position-1;i++)
    {
        temp = temp->next;
        if(temp==NULL)
        {
            cout << endl << "Invalid Index" << endl << endl;
            return;
        }
    }
    if(temp->next==NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted Position: "<<position<<endl<<endl;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head isn't available" << endl
             << endl;
        return;
    }
    Node *deleteNode = head;
    head=head->next;
    delete deleteNode;
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