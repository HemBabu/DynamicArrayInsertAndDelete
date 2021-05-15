#include<iostream>
#include"second.cpp"
#include<conio.h>
using namespace std;
int main(){
	Student intDynArray;
    while (1)
    {
        char input;
        cout << "Enter A for add or R for remove: and q for quite the program: ";
        
        
        cin >> input;
        if(input=='Q'||input=='q'){
        	break;
		}
		else{
		
        if (input == 'A'||input=='a')
        {
            cout << "Enter number to add: ";
            int x;
            cin >> x;
            cout << intDynArray.add(x) << endl;
           
        }
        else if (input == 'R'||input=='r')
        {
            cout << "Enter number to remove: ";
            int x;
            cin >> x;
            cout << intDynArray.remove(x) << endl;
           
        }
        
      
    }
}
cout<<"YOur elements in array are ::"<<endl;
	  intDynArray.printAll();

}








