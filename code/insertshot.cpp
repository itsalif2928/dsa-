#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, j, n, arrayKey;
    cout<<"Input the values in the array";
    cin>>n;

    cout<<"input array values: \n"<<n<<endl;
    for (i = 0; i< n; i++)
        cin>> arr[i];

    for (i = 0; i < n; i++){
        arrayKey = arr[i];
        j  = i - 1;

        while (j >= 0 && arr[j] > arrayKey){
            arr[j + 1] = arr[j];
            j = j -1;
        }
        arr[j + 1] = arrayKey;
    }
    cout<<"Shorted array: ";
    for(i =0; i < n; i++)
        cout<<"\n "<<arr[i];
    return 0;

}
