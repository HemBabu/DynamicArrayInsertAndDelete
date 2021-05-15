#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class Student{
	private:
		int* dynamicArray;
        int currentSize;
        int maxSize;
        

	public:
		Student(){
			 maxSize=10;
	 currentSize=0;
	dynamicArray = new int[maxSize];	
		}
		
		int add(int x);
        bool remove(int x);
        void printAll();
};

	int Student::add(int x){
		
		if (currentSize == maxSize)
    {
        maxSize = maxSize * 2;
        int* tempArray = new int[maxSize];
        for (int i = 0; i < currentSize; i++)
        {
            tempArray[i] = dynamicArray[i];
        }
        tempArray[currentSize] = x;
        currentSize++;
        dynamicArray = tempArray;
    }
    else{
    	 {
        dynamicArray[currentSize] = x;
        currentSize++;
    }
    return currentSize;
	}
	}
        bool Student::remove(int x){
        	 for (int i = 0; i < currentSize; i++)
    {
        if (dynamicArray[i] == x)
        {
            int *newArray = new int[currentSize-1];
            std::copy(dynamicArray, dynamicArray+i, newArray);
            std::copy(dynamicArray+i+1, dynamicArray+currentSize, newArray+i);
            delete[] dynamicArray;
            dynamicArray = newArray;
            --currentSize;
            return true; 
        }
    }       
    return false;
}

        void Student::printAll(){
        	for (int i = 0; i < currentSize; i++){
        		cout<<dynamicArray[i];
        		cout<<"\t";
			}
		}
























