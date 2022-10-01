////Binary search
//#include <stdio.h>
// 
//void main()
//{
//    int array[10];
//    int i, j, num, temp, keynum;
//    int low, mid, high; 
//    printf("Enter the value of num \n");
//    scanf("%d", &num);
//    printf("Enter the elements one by one \n");
//    for (i = 0; i < num; i++)
//    {
//        scanf("%d", &array[i]);
//    }
//    printf("Input array elements \n");
//    for (i = 0; i < num; i++)
//    {
//        printf("%d\n", array[i]);
//    }
// 
//    for (i = 0; i < num; i++)
//    {
//        for (j = 0; j < (num - i - 1); j++)
//        {
//            if (array[j] > array[j + 1])
//            {
//                temp = array[j];
//                array[j] = array[j + 1];
//                array[j + 1] = temp;
//            }
//        }
//    }
//    printf("Sorted array is...\n");
//    for (i = 0; i < num; i++)
//    {
//        printf("%d\n", array[i]);
//    }
//    printf("Enter the element to be searched \n");
//    scanf("%d", &keynum);
//  
//    low = 0;
//    high = num;
//    do
//    {
//        mid = (low + high) / 2;
//        if (keynum < array[mid])
//            high = mid - 1;
//        else if (keynum > array[mid])
//            low = mid + 1;
//    } while (keynum != array[mid] && low <= high);
//    if (keynum == array[mid])
//    {
//        printf("SEARCH SUCCESSFUL \n");
//        printf("found %d element at %d position ",keynum,mid);
//    }
//    else
//    {
//        printf("SEARCH FAILED \n");
//    }
//}

//linear Search
#include <stdio.h>
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
int main(void)
{
    int arr[] = { 3,1,2,0,4 };
    int x = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int result = search(arr, n, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("%d Element is present at index %d",x, result);
    return 0;
}
