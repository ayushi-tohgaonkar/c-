#include <iostream>

using namespace std;
struct node
{
  int data;
  struct node *next;
};
struct node *head;

class list
{
    public:
     void beginsert ()
  {
    int item;
    struct node *ptr;
    ptr = new node;
    if (ptr == NULL)
      {
	cout << "linklist is empty" << endl;
      }
    else
      cout << "enter the the item" << endl;
    cin >> item;
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    cout << "node is inserted" << endl;

  }

  void lastinsert ()
  {
    int item;
    struct node *ptr, *temp;
    ptr = new node;
    if (ptr == NULL)
      {
	cout << "linklist is empty" << endl;
      }
    else
      cout << "enter the the item" << endl;
    cin >> item;
    ptr->data = item;
    if (head == NULL)
      {
	ptr->next = NULL;
	head = ptr;
	cout << "Node inserted" << endl;
      }
    else
      {
	temp = head;
	while (temp->next != NULL)
	  {
	    temp = temp->next;
	  }
	temp->next = ptr;
	ptr->next = NULL;
	cout << "Node inserted";
      }
}

    void random_insert ()
    {
      int i, loc, item;
      struct node *ptr, *temp;
      ptr = new node;
      if (ptr == NULL)
	{
	  cout << "OVERFLOW";
	}
      else
	{
	  cout << "Enter element value";
	  cin >> item;
	  ptr->data = item;
	  cout <<"Enter the location in the linked list  after which you want to insert "<< endl;
	  cin >> loc;
	  loc = loc - 1;
	  temp = head;
	  for (i = 0; i < loc; i++)
	    {
	      temp = temp->next;
	      if (temp == NULL)
		{
		  cout << "can't insert";
		  return;
		}
	    }
	  ptr->next = temp->next;
	  temp->next = ptr;
	  cout << "Node inserted";
	}
    }
    
    void beg_delete ()
    {
      struct node *ptr;
      if (head == NULL)
	{
	  cout << "List is empty";
	}
      else
	{
	  ptr = head;
	  head = ptr->next;
	  delete ptr;
	  cout << "Node deleted from the begining ...";
	}
    }
    
    void last_delete ()
    {
      struct node *ptr, *ptr1;
      if (head == NULL)
	{
	  cout << "list is empty";
	}
      else if (head->next == NULL)
	{
	  head = NULL;
	  delete head;
	  cout << "Only node of the list deleted ...";
	}

      else
	{
	  ptr = head;
	  while (ptr->next != NULL)
	    {
	      ptr1 = ptr;
	      ptr = ptr->next;
	    }
	  ptr1->next = NULL;
	  delete ptr;
	  cout << "Deleted Node from the last ...";
	}
    }
    
    void random_delete ()
    {
      struct node *ptr, *ptr1;
      int loc, i;
      cout <<"Enter the location of the node after which you want to perform deletion "<<endl;
      cin >> loc;
      ptr = head;
      for (i = 0; i < loc; i++)
	{
	  ptr1 = ptr;
	  ptr = ptr->next;

	  if (ptr == NULL)
	    {
	      cout << "Can't delete";
	      return;
	    }
	}
      ptr1->next = ptr->next;
      delete ptr;
      cout << "Deleted node"<< loc + 1<<endl;
    }


    void display ()
    {
      struct node *ptr;
      ptr = head;
      if (ptr == NULL)
	{
	  cout << "Nothing to print";
	}
      else
	{
	  cout << "printing values . . . . .";
	  while (ptr != NULL)
	    {
	      cout << ptr->data << " ";
	      ptr = ptr->next;
	    }
	}
    }


    void search ()
    {
      struct node *ptr;
      int item, i = 0, flag;
      ptr = head;
      if (ptr == NULL)
	{
	  cout << "Empty List" << endl;
	}
      else
	{
	  cout << "Enter item which you want to search?" << endl;
	  cin >> item;
	  while (ptr != NULL)
	    {
	      if (ptr->data == item)
		{
		  cout << "item found at location " << i + 1 << endl;
		  flag = 0;
		}
	      else
		{
		  flag = 1;
		}
	      i++;
	      ptr = ptr->next;
	    }
	  if (flag == 1)
	    {
	      cout << "Item not found" << endl;
	    }
	}
}
 void run()
 {
  int choice = 0;
  while (choice != 8)
    {
      cout << "choose one option from below" << endl;
      cout << "**************************************************" << endl;
      cout << "1.insert at begining"<<endl << "2.insert at last"<<endl <<"3.insert at random"<<endl << "4.delete from begining"<<endl <<"5.delete from last"<<endl << "6.delete at random"<<endl << "7.display"<<endl <<"8.search"<<endl << endl;
      cout << "enter the choice";
      cin >> choice;
      switch (choice)
	{
	case 1:
	  beginsert ();
	  break;

	case 2:
	  lastinsert ();
	  break;

	case 3:
	  random_insert();
	  break;

	case 4:
	  beg_delete ();
	  break;

	case 5:
	  last_delete ();
	  break;

	case 6:
	  random_delete ();
	  break;

	case 7:
	  display ();
	  break;

	case 8:
	  search ();
	  break;

	  default:
	  {
	    cout << "please enter valid choice";

	  }


	}
}
}
};

int main()
{
    list done;
    done.run();

    return 0;
}
 

