#include<iostream>  
using namespace std;  
int findSmallest (int[],int);  
int main ()  
{  
    int myarray[5] = {11,50,29,20,2};  
    int pos,temp,pass=0;  
    cout<<"\n Input list of elements to be Sorted\n";  
    for(int i=0;i<10;i++)  
    {  
        cout<<myarray[i]<<"\t";  
    } 
    for(int i=0;i<10;i++)  
    {  
        pos = findSmallest (myarray,i);  
        temp = myarray[i];  
        myarray[i]=myarray[pos];  
        myarray[pos] = temp; 
        pass++;
    }  
    cout<<"\n Sorted list of elements is\n";  
    for(int i=0;i<10;i++)  
    {  
        cout<<myarray[i]<<"\t";  
    } 
    cout<<"\nNumber of passes required to sort the array: "<<pass;
    return 0;  
}  
int findSmallest(int myarray[],int i)  
{  
    int ele_small,position,j;  
    ele_small = myarray[i];  
    position = i;  
    for(j=i+1;j<10;j++)  
    {  
        if(myarray[j]<ele_small)  
        {  
            ele_small = myarray[j];  
            position=j;  
        }  
    }  
    return position;  
}

