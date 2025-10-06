#include <iostream>
using namespace std;

struct Node
{
    double rating;
    string comment;
};

int main()
{
    int userChoice = 0;

    cout << "Which linked list method should we use?";
    cout << "[1] New nodes are added at the head of the linked list";
    cout << "[2] New nodes are added at the tail of the linked list";
    cout << "Choice: ";

    cin >> userChoice;

    while (true)
    {
        Node *temp = new Node;

        cout << "Enter review rating 0-5: ";
        cin >> temp.rating;

        cout << "Enter review comments: ";
        cin >> temp.comment;
    }

    cout << "Outputting all reviews:" << endl;

    return 0;
}