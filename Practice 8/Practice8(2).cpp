#include <iostream>

using namespace std;
int main()
{
    const int size = 9;
    int numbers[size] {4,-5,6,5,1,-10,6,2,-9};
    int max = 0;
    for (int i=0;i<size;i++){
        if (numbers[i]>max){
            max = numbers[i];
            }
        }
    int i=0;
    while (numbers[i] != max){
        if (numbers[i] < 0){
            numbers[i] = 0;
            }
        i++;
        }
       
    for (int i=0;i<size;i++){
        cout<<numbers[i]<<" ";
        }
}