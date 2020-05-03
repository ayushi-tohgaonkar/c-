

#include <iostream>

using namespace std;
const int maxsize = 5;
void run ();
int front = -1, rear = -1;
int queue[maxsize];
int choice =0;
class FUNC1
{
public:

  void insert ()
  {
    int item;
      cout << "enter the element" << "\n";
      cin >> item;
    if (rear == maxsize - 1)
      {
	cout << "overflow" << endl;
	return;
      }
    if (front == -1 && rear == -1)
      {
	front = 0;
	rear = 0;
      }
    else
      {
	rear = rear + 1;
      }
    queue[rear] = item;
    cout << "value inserted" << endl;
  }

  void delete1 ()
  {
    int item;
    if (front == -1 || front > rear)
      {
	cout << "underflow" << endl;
	return;
      }
    else
      {
	item = queue[front];
	if (front == rear)
	  {
	    front = -1;
	    rear = -1;
	  }
	else
	  {
	    front = front + 1;
	  }
	cout << "value deleted" << endl;
      }
  }

  void display ()
  {
    int i;
    if (rear == -1)
      {
	cout << "empty queue" << endl;
      }
    else
      {
	cout << "printing values......" << endl;
	for (i = front; i <= rear; i++)
	  {
	    cout << queue[i] << endl;
	  }
      }
  }
  void run ()
  {
    while (choice != 4)
      {
	cout << "1.insert an element" << "\n" << "2.delete the element" <<
	  "\n" << "3.didplay the queue" << "\n" << "4.exit" << endl;
	cout << "enter your choice ?" << endl;
	cin >> choice;
	switch (choice)
	  {
	  case 1:
	    {
	      insert ();
	      break;
	    }
	  case 2:
	    {
	      delete1 ();
	      break;
	    }
	  case 3:
	    {
	      display ();
	      break;
	    }
	  case 4:
	    {
	      exit (0);
	      break;
	    }
	  default:
	    {
	      cout << "sorry enter valid choice" << endl;
	    }
	  };
      }

  }
};


  int main ()
  {
    cout << "\t" << "MAIN MENU" << endl;
    FUNC1 done;
    done.run ();
    return 0;
  }


