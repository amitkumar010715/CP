
#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node
{
  int data;
  struct Node *next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

int main(int argc, char const *argv[])
{
  int n = 5;// make linked list of 5 element;
struct Node *temp = NULL;
  struct Node *t;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (i == 0)
    {

      temp = new Node(x);
      t = temp;
    }
    else
    {
      t->next = new Node(x);// t->next me new node bana ke dalo
      t = t->next;
    }
  }

  while (temp != NULL)
  {
    cout << temp->data;
    temp = temp->next;
  }
  return 0;
}