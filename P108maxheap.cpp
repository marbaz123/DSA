#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class maxHeap{
    int *arr;
    int size; // total elements in heap
    int total_size;

    public:
    maxHeap(int x)
    {
        arr = new int[x];
        size = 0;
        total_size = x;
    }

    void insert(int key)
    {
        // condition for overflow
        if(size == total_size)
        {
            cout<<"Heap Overflow"<<endl;
            return;
        }

        int index = size;
        arr[size++] = key;

        //compare with parents
        while(index>0 && arr[(index-1)/2] < arr[index] )
        {
            swap(arr[(index-1)/2],arr[index]);
            index = (index-1)/2;
        }

        cout<<arr[index]<<" is inserted\n";
    }

    void heapify(int index)
    {
        int largest = index; // store the largest value which is larger between child and parent
        int left = 2*index + 1;
        int right = 2*index + 2;

        if(left < size && arr[left] > arr[largest])
        largest = left;

        if(right < size && arr[right] > arr[largest])
        largest = right;

        if(largest != index)
        {
            swap(arr[index],arr[largest]);
            heapify(largest);
        }
    }

    void Delete()
    {
        if(size == 0)
        {
            cout<<"Heap Underflow\n";
            return;
        }

        cout<<endl<<arr[0]<<" is deleted from the heap\n";
        arr[0] = arr[size-1];
        size--;

        if(size == 0)
        return;

        heapify(0);
    }

    void print()
    {
        for(int i = 0;i<size;i++)
        cout<<arr[i]<<" ";
    }
};

int main ()
{
    maxHeap h(10);

    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);

    h.print();

    h.Delete();

    h.print();
}