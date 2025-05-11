#include <math.h>
#include <iostream>
int linear_search(int *array_nums, int array_size, int val)
{

    int i ;
    for(i =0; i <array_size; i++){
        if(array_nums[i] == val)
            return i;
    }
    return -1;
}
int main(){
int n;
int array_nums[] = {0,10,40,20,30, 50, 90, 75, 82, 92, 133, 145, 163, 200, 180};
size_t array_size = sizeof(array_nums)/sizeof(int);
printf("Original array: ");
for (int i = 0; i < array_size; i++)
    printf("%d",array_nums[i]);
printf("\n");
printf("input number of search: ");
scanf("%d",&n);
int index = linear_search(array_nums, array_size, n);
if(index != -1)
    printf("\n Element found at position : %d", index);
    else
        printf("\n Element not found...!");

return 0;
}


