#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int choice;
    int pos, value;
    int key, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Traversal\n");
        printf("2. Insertion\n");
        printf("3. Deletion\n");
        printf("4. Search\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        else if(choice == 2)
        {
            printf("Enter position: ");
            scanf("%d", &pos);

            printf("Enter value: ");
            scanf("%d", &value);

            for(i = n; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[pos - 1] = value;
            n++;

            printf("Element Inserted.\n");
        }

        else if(choice == 3)
        {
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            for(i = pos - 1; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            n--;

            printf("Element Deleted.\n");
        }

        else if(choice == 4)
        {
            printf("Enter element to search: ");
            scanf("%d", &key);

            found = 0;

            for(i = 0; i < n; i++)
            {
                if(arr[i] == key)
                {
                    printf("Element found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("Element not found.\n");
            }
        }

        else if(choice == 5)
        {
            printf("Program Ended.\n");
        }

        else
        {
            printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}