//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int numberone;
int numbertwo;
int biggest;
  cout<<"Please enter a whole number:\n";
cin>>numberone;  
  cout<<"Please enter another whole number:\n";
cin>>numbertwo;
if (numberone>numbertwo)
{biggest=numberone;
}
else
{biggest=numbertwo;
}
  cout<<"Of those two numbers, the biggest is:" << biggest;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
