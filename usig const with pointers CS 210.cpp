#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

void bubble(int [], const int,bool(*)(int,int));
void swap(int * const, int *const);
bool ascending(int,int);
bool descending(int,int);

 int main()
 {
 
const int arraySize = 10;
 	int order;
 	int counter;
 	int a[arraySize] = {2,6,4,8,10,12,89,68,45,37};
 	cout<<"Enter 1 to sort in ascending order,\n"<<"Enter 2 to sort in descending order: ";
 	cin>>order;
 	cout<<"\nData items in orignal order\n";
 	
 	for (counter = 0; counter < arraySize; counter++)
 	cout<<setw(4)<<a[counter];
 	
 	if (order == 1 )
 	{
 		bubble (a,arraySize,ascending);
 		cout<<"\nData items in ascending order\n";
 	}
	 else
	 {
	 	bubble (a,arraySize, descending);
	 	cout<<"\nData items in descending order\n";
	 }
	 for (counter = 0 ;counter < arraySize; counter++)
	 cout<<setw(4)<<a[counter];
	 cout<<endl;
	 return 0;
	 }
	 void bubble(int work[], const int size, bool(*compare)(int,int))
	 {
	 	for (int pass = 1;pass<size;pass++)
	 	
	 	for (int counter = 0; counter <size -1 ;counter++)
	 	
	 	if((*compare)(work[counter],work[counter + 1]))
	 	swap(&work [counter], &work[counter + 1]);
	 }
	 void swap(int *const element1ptr, int*constelement2ptr)
	 {
	 	int hold = *element1ptr
	 	*element1ptr = *element2ptr 
	 	element2ptr = hold;
	 }
