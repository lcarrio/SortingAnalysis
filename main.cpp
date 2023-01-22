#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;
void exchange(int* a, int* b);
int part (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
int getMax(int arr[], int n);
void radixSort(int arr[], int n);

int main() {
    int tenK1[10000];
    for(int i = 0; i <10000; i++){
        tenK1[i] = i;
    }
    auto start = chrono::steady_clock::now();
    quickSort(tenK1,0,9999);
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 10k quick sort" << endl;
    int twoK1[20000];
    for(int i = 0; i <20000; i++){
        twoK1[i] = i;
    }

    start = chrono::steady_clock::now();
    quickSort(twoK1,0,19999);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 20k  quick sort" << endl;
    int fiftyK1 [50000];
    for(int i = 0; i <50000; i++){
        fiftyK1[i] = i;
    }
    start = chrono::steady_clock::now();
    quickSort(fiftyK1,0,49999);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 50k  quick sort" << endl;
    int hundoK1 [100000];
    for(int i = 0; i <100000; i++){
        hundoK1[i] = i;
    }
    start = chrono::steady_clock::now();
    quickSort(hundoK1,0,99999);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <float, micro> (diff).count() << " micro seconds, 100kg quick sort" << endl;

    int tenK2[10000];
    for(int i = 10000; i >0; i--){
        tenK2[i]= i;
    }
    start = chrono::steady_clock::now();
    quickSort(tenK2,0,10000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 10k quick sort" << endl;
    int twoK2[20000];
    for(int i = 20000; i >0; i--){
        twoK2[i]= i;
    }
    start = chrono::steady_clock::now();
    quickSort(twoK2,0,19999);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 20k  quicksort" << endl;
    int fiftyK2[50000];
    for(int i = 50000; i >0; i--){
        fiftyK2[i]= i;
    }
    start = chrono::steady_clock::now();
    quickSort(fiftyK2,0,49999);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 50k quicksort" << endl;
    int hundoK2[100000];
    for(int i = 100000; i >0; i--){
        hundoK2[i]= i;
    }
    start = chrono::steady_clock::now();
    quickSort(hundoK2,1,100000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <float, micro> (diff).count() << " micro seconds, 100k quicksort" << endl;

    int tenk3[10000];
    for(int i = 0; i < 10000; i++){
        tenk3[i] = rand() % 10000;
    }
    start = chrono::steady_clock::now();
    quickSort(tenk3,0,9999);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 10k quicksort" << endl;
    int twoK3[20000];
    for(int i = 0; i < 20000; i++){
        twoK3[i] = rand() % 20000;
    }
    start = chrono::steady_clock::now();
    quickSort(twoK3,0,19999);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 20k  quicksort" << endl;
    int fiftyK3[50000];
    for(int i = 0; i < 50000; i++){
        fiftyK3[i] = rand() % 50000;
    }
    start = chrono::steady_clock::now();
    quickSort(fiftyK3,0,49999);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 50k quicksort" << endl;
    int hundoK3[100000];
    for(int i = 0; i < 100000; i++){
        hundoK3[i] = rand() % 100000;
    }
    start = chrono::steady_clock::now();
    quickSort(hundoK3,0,99999);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <float, micro> (diff).count() << " micro seconds, 100k  quicksort" << endl;

    int tenG1[10000];
    for(int i = 0; i <10000; i++){
        tenG1[i] = i;
    }
    start = chrono::steady_clock::now();
    radixSort(tenG1,10000);
     end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 10k  radixsort" << endl;
    int twoG1[20000];
    for(int i = 0; i <20000; i++){
        twoG1[i] = i;
    }
    start = chrono::steady_clock::now();
    radixSort(twoG1,20000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 20k radixsort" << endl;
    int fiftyG1 [50000];
    for(int i = 0; i <50000; i++){
        fiftyG1[i] = i;
    }
    start = chrono::steady_clock::now();
    radixSort(fiftyG1,50000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 50k  radixksort" << endl;
    int hundoG1 [100000];
    for(int i = 0; i <100000; i++){
        hundoG1[i] = i;
    }
    start = chrono::steady_clock::now();
    radixSort(hundoG1,100000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <float, micro> (diff).count() << " micro seconds, 100k  radixsort" << endl;

    int tenG2[10000];
    for(int i = 10000; i >0; i--){
        tenG2[i]= i;
    }
    start = chrono::steady_clock::now();
    radixSort(tenG2,10000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 10k  radixsort" << endl;
    int twoG2[20000];
    for(int i = 20000; i >0; i--){
        twoG2[i]= i;
    }
    start = chrono::steady_clock::now();
    radixSort(twoG2,20000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 20k  radixsort" << endl;

    int fiftyG2[50000];
    for(int i = 50000; i >0; i--){
        fiftyG2[i]= i;
    }
    start = chrono::steady_clock::now();
    radixSort(fiftyG2,50000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 50k radixsort" << endl;


    for(int i = 100000; i >0; i--){
        hundoK1[i]= i;
    }
    start = chrono::steady_clock::now();
    radixSort(hundoK1,100000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 100k  radixsort" << endl;

    int tenG3[10000];
    for(int i = 0; i < 10000; i++){
        tenG3[i] = rand() % 10000;
    }
    start = chrono::steady_clock::now();
    radixSort(tenG3,10000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 10k  radixsort" << endl;// im here

    int twoG3[20000];
    for(int i = 0; i < 20000; i++){
        twoG3[i] = rand() % 20000;
    }
    start = chrono::steady_clock::now();
    radixSort(twoG3,20000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 20k  radixksort" << endl;
    int fiftyG3[50000];
    for(int i = 0; i < 50000; i++){
        fiftyG3[i] = rand() % 50000;
    }
    start = chrono::steady_clock::now();
    radixSort(fiftyG3,50000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 50k  radixsort" << endl;

    for(int i = 0; i < 100000; i++){
        hundoK3[i] = rand() % 100000;
    }

    start = chrono::steady_clock::now();
    radixSort(hundoK3,100000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <float, micro> (diff).count() << " micro seconds, 100k radixsort" << endl;
    // heap sort
    for(int i = 0; i <10000; i++){
        tenK1[i] = i;
    }
    start = chrono::steady_clock::now();
    heapSort(tenK1,10000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 10k  heapsort" << endl;

    start = chrono::steady_clock::now();
    heapSort(twoK1,20000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <float, micro> (diff).count() << " micro seconds, 20k  heapsort" << endl;

    for(int i = 0; i <50000; i++){
        fiftyK1[i] = i;
    }
    start = chrono::steady_clock::now();
    radixSort(fiftyK1,50000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 50k  heapsort" << endl;

    for(int i = 0; i <100000; i++){
        hundoK1[i] = i;
    }
    start = chrono::steady_clock::now();
    radixSort(hundoK1,100000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <float, micro> (diff).count() << " micro seconds, 100k  heapsort" << endl;


    for(int i = 10000; i >0; i--){
        tenK2[i]= i;
    }
    start = chrono::steady_clock::now();
    heapSort(tenK2,10000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 10k heapsort" << endl;

    for(int i = 20000; i >0; i--){
        twoK2[i]= i;
    }
    start = chrono::steady_clock::now();
    heapSort(twoK2,20000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 20k heapsort" << endl;

    for(int i = 50000; i >0; i--){
        fiftyK2[i]= i;
    }
    start = chrono::steady_clock::now();
    heapSort(fiftyK2,50000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 50k  heapsort" << endl;

    for(int i = 100000; i >0; i--){
        hundoK2[i]= i;
    }
    start = chrono::steady_clock::now();
    heapSort(hundoK2,100000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <float, micro> (diff).count() << " micro seconds, 100k  heapsort" << endl;

    for(int i = 0; i < 10000; i++){
        tenK1[i] = rand() % 10000;
    }
    start = chrono::steady_clock::now();
    heapSort(tenK1,10000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 10k  heapsort" << endl;// im here

    for(int i = 0; i < 20000; i++){
        twoK3[i] = rand() % 20000;
    }
    start = chrono::steady_clock::now();
    heapSort(twoK3,20000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 20k heapksort" << endl;

    for(int i = 0; i < 50000; i++){
        fiftyK3[i] = rand() % 50000;
    }
    start = chrono::steady_clock::now();
    heapSort(fiftyK3,50000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, micro> (diff).count() << " micro seconds, 50k  heapsort" << endl;
    for(int i = 0; i < 100000; i++){
        hundoK3[i] = rand() % 100000;
    }
    start = chrono::steady_clock::now();
    heapSort(hundoK3,100000);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <float, micro> (diff).count() << " micro seconds, 100k  heapsort" << endl;
    return 0;

}
void exchange(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int part (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            exchange(&arr[i], &arr[j]);
        }
    }
    exchange(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high){
    if (low < high)
    {
        int partInt = part(arr, low, high);

        quickSort(arr, low, partInt - 1);
        quickSort(arr, partInt + 1, high);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void heapify(int arr[], int size, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;


    if (l < size && arr[l] > arr[largest])
        largest = l;


    if (r < size && arr[r] > arr[largest])
        largest = r;


    if (largest != i)
    {
        exchange(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}
void heapSort(int arr[], int size)
{

    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);


    for (int i=size-1; i>=0; i--)
    {
        exchange(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}
void countSort(int arr[], int n, int k)
{
    int output[n];
    int i, count[10] = {0};

    for (i = 0; i < n; i++)
        count[ (arr[i]/k)%10 ]++;


    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/k)%10 ] - 1] = arr[i];
        count[ (arr[i]/k)%10 ]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixSort(int arr[], int n)
{
    int m = getMax(arr, n);
    for (int i = 1; m/i > 0; i *= 10)
        countSort(arr, n, i);
}
int getMax(int arr[], int arraySize)
{
    int maxInt = arr[0];
    for (int i = 1; i < arraySize; i++)
        if (arr[i] > maxInt)
            maxInt = arr[i];
    return maxInt;
}
