#include <stdio.h>
int a[100], addValue = 0;
void addArray() {
    int numberOfValue;
    printf("How many values do you want to add? ");
    scanf("%d", &numberOfValue);
    for(int i = 0; i < numberOfValue; i++) {
        printf("Enter value for a[%d] = ", addValue);
        scanf("%d", &a[addValue]);
        printf("added %d\n", a[addValue]);
        addValue++;
    }
}

void searchArray() {
    int n, count = 0;
    //Variable (= 0 to reset everytime call it)
    if(addValue == 0) {
        printf("\nThere is nothing in the Array!");
        main();
    }
    printf("Enter Search Value: ");
    scanf("%d", &n);
    for(int i = 0; i < addValue; i++) {
        if(a[i] == n) {
            printf("\nValue %d is at a[%d]", n, i);
            count++;
        }
    }
    if(count == 0) printf("\n%d is not exist!", n);
}

void printArray() {
    //Variable (= 0 to reset everytime call it)
    if(addValue == 0) {
        printf("\nThere is nothing in the Array!");
        main();
    }
    printf("\n");
    for(int i = 0; i < addValue; i++) {
        printf("%d  ", a[i]);
    }
}

void printArrayInRange() {
    int min, max;
    //Variable (= 0 to reset everytime call it)
    if(addValue == 0) {
        printf("\nThere is nothing in the Array!");
        main();
    }
    printf("Enter min: ");
    scanf("%d", &min);
    printf("Enter Max: ");
    scanf("%d", &max);
    for(int i = 0; i < addValue; i++) {
        if(a[i] <= max && a[i] >= min) printf("%d   ", a[i]);
    }
}

void printArrayInOrder() {
    //Variable (= 0 to reset everytime call it)
    int b[addValue], loop1 = 0, loop2 = 0, minIndex = 0, e = 0;
    //Check Array
    if(addValue == 0) {
        printf("\nThere is nothing in the Array!");
        main();
    }
    //Adding value to b[] to sort
    for(e = 0; e < addValue; e++) {
        b[e] = a[e];
    }
    //bubble sort
    int i, z, t;
    for(i = 0; i < addValue; i++) {
        for(z = addValue - 1; z > i; z--) {
            if(b[z] < b[z-1]) {
                t = b[z];
                b[z] = b[z-1];
                b[z-1] = t;
            }
        }
    }
    //print b[]
    printf("\n");
    for(int d = 0; d < addValue; d++) printf("%d    ", b[d]);
}

int main() {
    int a;
    printf("\n=======================MENU======================");
	printf("\n| 1- Add a value                       Press: 1 |");
	printf("\n| 2- Search a value                    Press: 2 |");
	printf("\n| 3- Print out the array               Press: 3 |");
	printf("\n| 4- Print out values in a range       Press: 4 |");
	printf("\n| 5- Print out the array in ascending  Press: 5 |");
	printf("\n| 6- Quit                              Press: 6 |");
	printf("\n=================================================\n");
	printf("\nEnter Your Choice: ");
    scanf("%d", &a);
    switch (a) {
    case 1:
        printf("Selected 1!\n");
        addArray();
        main();
        break;
    case 2:
        printf("Selected 2!\n");
        searchArray();
        main();
        break;
    case 3:
        printf("Selected 3!\n");
        printArray();
        main();
        break;
    case 4:
        printf("Selected 4!\n");
        printArrayInRange();
        main();
        break;
    case 5:
        printf("Selected 5!\n");
        printArrayInOrder();
        main();
        break;
    default:
        printf("Quitted!\n");
        break;
    }
    getchar();
    return 0;
}












