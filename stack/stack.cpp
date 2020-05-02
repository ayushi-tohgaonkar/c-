

#include <iostream>

using namespace std;

int stack[50], i, j, choice = 0, n, top = -1;



class STACK1
{

public:

  void push ()
  {
    int val;
    if (top == n)
      cout << "overflow" << endl;
    else
      {
	cout << "enter the value:";
	cin >> val;
	top = top + 1;
	stack[top] = val;
      }
  }
  void pop ()
  {
    if (top == -1)
      cout << "underflow:";
    else
      {
	top = top - 1;
      }
  }
  void show ()
  {
    for (i = top; i >= 0; i--)
      {
	cout << stack[i] << endl;
      }
    if (top == -1)
      {
	cout << "stack is empty";
      }
  }

  void run ()
  {
    while (choice != 4)
      {
	cout << "choose one from below:" << endl;
	cout << "1.push" << "\n" << "2.pop" << "\n" << "3.show" << "\n" <<
	  "4.exit" << endl;
	cout << "enter your choice:";
	cin >> choice;

	switch (choice)
	  {
	  case 1:
	    {
	      push ();
	      break;
	    }
	  case 2:
	    {
	      pop ();
	      break;
	    }
	  case 3:
	    {
	      show ();
	      break;
	    }
	  case 4:
	    {
	      cout << "exiting...";
	      break;
	    }
	  default:
	    {
	      cout << "sorry wrong choice:";
	    }
	  };


      }
  }
};

int
main ()
{
  cout << "enter the elements in the stack:";
  cin >> n;
  cout << "**********stack operation with array************";


  STACK1 done;
  done.run ();


  return 0;
}


