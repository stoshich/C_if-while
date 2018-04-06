#include <stdio.h>

int main()
{
int array[10] = {2, 4, 7, 14, 26, 47, 69, 102, 150, 164};
int search = 69;
int mid;
int size = sizeof(array)/4;
int low = 0;
int high = size;

while(low <= high) {
    mid = (low + high)/2;
    if(search == array[mid]) {
        printf("Номер искомого элемента: %i\n", mid + 1);
        break;

    }
    else if(search > array[mid]) {
        low = mid + 1;

    }
    else {
        high = mid - 1;

    }

}
return 0;

}
