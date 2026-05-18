# include <stdio.h>
int main()
{
/* program that prompts user to enter a number and displays numbers starting form 0 till that number at 
console.
int a;
printf("Enter a number=");
scanf("%d",&a);
int counter=0;
while(counter<=a){
printf("%d\n",counter);
 counter = counter + 1;
}
return 0;
}
//print all numbers between two user inputted numbers
int a, b;
printf("Enter a number\n");
scanf("%d",&a);
printf("Ente 2 umber\n");
scanf("%d",&b);
int counter=a+1;
while(counter<b){
printf("%d\t",counter);
counter++;
}
return 0;
}
/*a program that prompts user to enter marks of 5 students in a subject, takes marks of 5 students and print 
their average at console.
int marks;
float avg;
float sum=0;
int counter=0;
while(counter<5){
printf("Enter marks of a student=\n");
scanf("%d",&marks);
sum=sum+marks;
counter++;
}
avg=sum/5;
printf("Average is %f",avg);
return 0;
}
/* a program that prompts 
user to enter marks of students in a subject till user enters a 0 or a negative 
number, then display average of students marks at console*/

    int a, sum = 0;
    float average;
    int counter = 0;
    int sentinel = -1;          // flag: -1 matlab "chalta raho"

    while (sentinel != 0) {
        printf("Enter marks: ");
        scanf("%d", &a);             

        if (a > 0) {          //1 matlab ON , 0 matlab OFF
            sum = sum + a;
            counter = counter + 1;
        }
        else {
            sentinel = 0;       // koi bhi 0 ya negative aaya ? band karo
        }
    }

    average = (float) sum / counter;
    printf("Average = %.2f", average);
}


/*if-else ka kaam sirf yeh tha:
"0 ko data mein mat ginao — sirf signal samjho"*/






