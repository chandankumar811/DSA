#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of Array: \n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the Elements of Array: \n");
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The Elements of given array are: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
