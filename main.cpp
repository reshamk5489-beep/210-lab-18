#include <iostream>
using namespace std;

struct Node
{
    double rating;
    string comment;
    Node *next;
};

int main()
{
    int userChoice = 0;
    Node *head = nullptr;
    char yesOrNo;

    cout << "Which linked list method should we use?" << endl;
    cout << "[1] New nodes are added at the head of the linked list" << endl;
    cout << "[2] New nodes are added at the tail of the linked list" << endl;
    cout << "Choice: ";

    cin >> userChoice;

    while (true)
    {
        Node *temp = new Node;

        cout << "Enter review rating 0-5: ";
        cin >> temp->rating;

        cin.ignore();

        cout << "Enter review comments: ";
        getline(cin, temp->comment);

        if (head == nullptr)
        {
            head = temp;
        }
        else 
        {
            if (userChoice == 1)
            {
                // Add to the front
                head = temp;
                temp->next = head;
            }
            else 
            {
                // Add to the tail
                Node *current = head;
                while (current != nullptr)
                {
                    current = current->next;
                }

                current->next = temp;
            }
        }

        cout << "Enter another review? Y/N: ";
        cin >> yesOrNo;
        cin.ignore();

        if (yesOrNo == 'N' || yesOrNo == 'n')
        {
            break;
        }
    }

    cout << "Outputting all reviews:" << endl;

    Node *current = head;
    int reviewNum = 0;
    double total = 0.0;

    while (current != nullptr)
    {
        total += current->rating;
        cout << "\t> Review #" << ++reviewNum << ": " << current->rating << ": " << current->comment << endl;
        current = current->next;
    }

    cout << "\t> Average: " << total/reviewNum << endl;

    return 0;
}