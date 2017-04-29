#include <stdio.h>
#include <stdlib.h>
long recursion1(int);
int recursion2(int, int);
long loop(long);
int if_else1(int);
int if_else2(int);
void array1();
void array2();
int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("insufficient arguments\n");
    } else {
    int a = atoi(argv[1]);
    int rec;
    int loops;
    int if_else;
    int ary;
    int num;
    int num1;
    int num2;
    char name[30];
    char choice;
    switch(a) {
        case 1: printf("How may I address you?\n");
                scanf("%[^\n]s",name);
                do {
                    printf("................................................................................\n");
                    printf("%s, get answers for simple math problems....answered using RECURSION \n",name);
                    printf("If you want 'Factorial' enter '1'\nIf you want 'G.C.D(greatest common divisor)' enter '2'\n");
                    scanf("%d",&rec);
                    if(rec == 1) {
                        printf("_______________________________________________________________________________\n");
                        printf("Enter the number for which you want to find factorial\nNote: Make sure that the number is not greater than 20\n");
                        scanf("%d",&num);
                        printf("Factorial of %d is %ld\n", num, recursion1(num));
                    } else {
                        printf("_______________________________________________________________________________\n");
                        printf("Enter two numbers for which you want to find G.C.D\n");
                        scanf("%d%d", &num1, &num2);
                        printf("G.C.D of %d and %d is %d\n", num1, num2, recursion2(num1, num2));
                    }
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("%s if you want to continue with 'recursion' enter 'y', else enter 'n'\n",name);
                    scanf("%s",&choice);
                }
                while (choice == 'y');
                printf("Thank you %s\n!",name);
                break;
        case 2: printf("How may I address you?\n");
                scanf("%[^\n]s",name);
                int num;
                do {
                    printf("...............................................................................\n");
                    printf("%s, Try the following.......answered using LOOPS\n",name);
                    printf("If you want 'Fizzbuzz' enter '1'\nIf you want 'Sum of digits' of a given number enter '2'\n");
                    scanf("%d",&loops);
                    if(loops == 1) {
                        printf("_______________________________________________________________________________\n");
                        printf("Here if the number is divisible by 3 'Fizz' is printed\nIf the number is divisible by 5 'Buzz' is printed\nIf the number is divisible by both 3 and 5 'FizzBuzz' is printed\n");
                        printf("Enter the Start and End of the Range\n");
                        scanf("%d%d",&num1, &num2);
                        for(num = num1; num <= num2; num++) {
                            if(num % 3 == 0 && num % 5 == 0) {
                                printf("FizzBuzz\n");
                            } else if (num % 3 == 0) {
                                printf("Fizz\n");
                            } else if (num % 5 == 0) {
                                printf("Buzz\n");
                            } else {
                                printf(" %d\n",num);
                            }
                        }
                    } else {
                        printf("_______________________________________________________________________________\n");
                        printf("Enter the number for which you want to find the 'sum of the digits'\n");
                        scanf("%d",&num);
                        printf("Sum of the digits of the given number is %ld\n",loop(num));
                    }
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("%s if you want to continue with 'loops' enter 'y' else enter 'n'\n",name);
                    scanf("%s",&choice);
                }
                while (choice == 'y');
                printf("Thank you %s\n!",name);
                break;
        case 3: printf("How may I address you?\n");
                scanf("%[^\n]s",name);
                do {
                    printf("................................................................................\n");
                    printf("%s,You are in IF ELSE\n",name);
                    printf("If you want to check if a number is 'Prime' enter '1'\nIf you want to check if a year is 'Leap Year' enter '2'\n");
                    scanf("%d",&if_else);
                    if(if_else == 1) {

                        printf("____________________________________________________________________________\n");
                        printf("Enter the number\n");
                        scanf("%d",&num);
                        if(if_else1(num) == 1) {
                            printf("%d is a Prime Number\n",num);
                        } else {
                            printf("%d is not a Prime Number\n",num);
                        }
                    } else {
                        printf("____________________________________________________________________________\n"); 
                        printf("Enter the Year\n");
                        scanf("%d",&num);
                        if(if_else2(num) == 1) {
                            printf("%d is a leap year\n",num);
                        } else {
                            printf("%d is not a leap year\n",num);
                        }
                    }
                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                    printf("%s if you want to continue with 'if_else' enter 'y' else enter 'n'\n",name);
                    scanf("%s",&choice);
                }
                while(choice == 'y');
                printf("Thank you %s\n!",name);
                break;
        case 4: printf("How may I address you?\n");
                scanf("%[^\n]s",name);
                do {
                   printf(".................................................................................\n");
                   printf("%s, you are now in ARRAYS\n",name);
                   printf("If you want to 'Search an element in the array' enter '1'\nIf you want to 'Add two matrices' enter '2'\n");
                   scanf("%d",&ary);
                   if(ary == 1) {
                       printf("_____________________________________________________________________________\n");
                       array1();
                   } else {
                       printf("_____________________________________________________________________________\n");
                       array2();
                   }
                       printf("%s if you want to continue with 'arrays' enter 'y' else 'n'\n",name);
                       scanf("%s",&choice);
                }
                while(choice == 'y');
                printf("Thank you %s\n!",name);
                break;

        default:printf("No such argument!!!\n");
                break;
    }
    } 
    return 0;
}
long recursion1(int num1) {
    if(num1 == 1) {
        return 1;
    } else {
        return (num1 * recursion1(num1 - 1));
    }
}
int recursion2(int num1, int num2) {
    if(num2 != 0) {
        return recursion2(num2, (num1 % num2));
    } else {
        return num1;
    }
}
long loop(long num) {
    int sum = 0;

    while(num > 0) {
        sum = (sum + (num % 10));
        num = num / 10;
    }
    return sum;
}
int if_else1(int num) {
    int factors = 0;
    for(int i = 2; i <= num; i++) {
        if(num % i == 0) {
            factors++;
        }
    }
    if(factors == 1) {
        return 1;
    } else {
        return 0;
    }
}
int if_else2(int num) {
    if(num % 4 == 0) {
        if(num % 100) {
            if(num % 400) { 
                return 1;
            }
        }
        return 1;
    } else {
       return 0;
    } 
}
void array1() {
    int lower;
    int upper;
    int mid;
    int n;
    int a[n];
    int count = 0;
    int search;  

    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    printf("Enter the elements of the array in ascending order :\n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched :\n");
    scanf("%d",&search);

    lower = 0;
    upper = n - 1;
    while(lower <= upper){
         mid = (lower + upper) / 2;
         if (search == a[mid]) {
             count++;
             break;
         }
         if(search < a[mid]) {
             upper = mid - 1;
         }
         else {
             lower = mid + 1;
    }
    }
    if(count <= 0)
         printf("Sorry! Number not found.\n");
    else
         printf("%d is found \n",count);
}
void array2() {
    int i;
	int j;
	int p;
	int q;
	int s;
	int t;
	int sum = 0;

	printf("Enter the size of the first matrix\n");
	scanf("%d%d",&p,&q);
	int ary1[p][q];

	printf("Enter the size of the second matrix\n");
	scanf("%d%d",&s,&t);
	int ary2[s][t];
    if(p == s && q == t) {
        int sum[p][q];
        printf("Sum of the matrices is possible\n");
        printf("Enter the elements of the first matrix\n");

	    for(i = 0; i < p; i++) {
		    for(j = 0; j < q; j++) {
        	    scanf("%d",&ary1[i][j]);
            }
        }
	    printf("Enter the elements of second matrix\n");
	    for(i = 0; i < s; i++) {
		    for(j = 0; j < t; j++) {
			     scanf("%d",&ary2[i][j]);
            }
        }
    printf("-------------------------------------------------------------------------\n");
	printf("First matrix is :\n");
	for(i = 0; i < p; i++) {
		for(j = 0; j < q; j++) {
			printf("%d\t",ary1[i][j]);
		}
		printf("\n");
	}
    printf("-------------------------------------------------------------------------\n");
	printf("Second matrix is:\n");
	for(i = 0; i < s; i++) {
		for(j = 0; j < t; j++) {
			printf("%d\t",ary2[i][j]);
		}
		printf("\n");
	}

    printf("--------------------------------------------------------------------------\n");
    printf("Sum of the matrices is:\n");
    for(i = 0; i < p; i++) {
	    for(j = 0; j < q; j++) {
	        sum[i][j] = ary1[i][j] + ary2[i][j];
        }
    }

    for(i = 0; i < p; i++) {
		for(j = 0; j < q; j++) {
		    printf("%d\t",sum[i][j]);
        }
     	printf("\n");
    }
	} else {
        printf("Sum of the matrices is not possible\n");
    }
}
    


