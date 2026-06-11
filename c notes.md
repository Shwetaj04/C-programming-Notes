1.
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    return 0;
}

o/p
   /|
  / |
 /  |
/___|

2.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[]="pinchu";
    int age =33;
    double sal=2.3;
    printf("my  name is %s.\n",name);
    printf("age %d.\n", age);

    return 0;
}

o/p
my  name is pinchu.
age 33.

3.

int main() {
    char name[]="pinchu";
    char grade='A';
    int age =33;
    double sal=2.3;
    float f=2.99;
    printf("%s\n",name);
    printf("%fl\n", sal);
    printf("%d\n",age);
    printf("%f\n" , f);
    printf("%c\n",grade);
    return 0;
}
o/p
pinchu
2.300000l
33
2.990000
A

4.
int main() {
    const int num=5;
    printf("%d\n",num);
    num =6;
    printf("%d",num);
    return 0;
}

o/p gives an error as the const int or int const wont allow the value to change


5.GETTING INPUT FROM USER

#include <stdio.h>

int main() {
    int age;
    printf("enter ur age :");
    scanf("%d",&age);
    printf("Your are %d yrs old",age);
    return 0;
}

o/p
enter ur age :50
Your are 50 yrs old

FOR DOUBLE
#include <stdio.h>

int main() {
    double gpa;
    printf("enter ur gpa:");
    scanf("%lf",&gpa);
    printf("Your are %f yrs old",gpa);
    return 0;
}

o/p
enter ur gpa:9.95
Your are 9.950000 yrs old


FOR CHAR

#include <stdio.h>

int main() {
    char g;
    printf("enter ur g:");
    scanf("%c",&g);
    printf("You g is %c ",g);
    return 0;
}

o/p
enter ur g:A
You g is A 


FOR STRING 

int main() {
    char name[20];
    printf("enter ur name:");
    scanf("%s",name);
    printf("Your name is %s ",name);
    return 0;
}

o/p
enter ur name:sheta
Your name is sheta 


USING FGETS FOR STRING WITH SPACE

#include <stdio.h>

int main() {
    char name[20];
    printf("enter ur name:");
    fgets(name,20,stdin);
    printf("Your name is %s ",name);
    return 0;
}

o/p
enter ur name:mu mumana
Your name is mu mumana

CHECK THE DIFFERENCE AFTER %S

int main() {
    char name[20];
    printf("enter ur name:");
    fgets(name,20,stdin);
    printf("Your name is %s mu",name);
    return 0;
}

o/p
enter ur name:shweta jha
Your name is shweta jha
 mu

6.

> //programming a mad lip game

#include <stdio.h>

int main() {
    char color[20];
    char pluralnoun[20];
    char celebrity[20];
    
    printf("enter the color:");
    scanf("%s",color);
    
    printf("enter the plural noun:");
    scanf("%s",pluralnoun);
    
    printf("enter the celebrity:");
    scanf("%s",celebrity);
    
    
    printf("Roses are %s\n",color);
    printf("%s are blue\n",pluralnoun);
    printf("i love %s\n",celebrity);
    return 0;
}

o/p

enter the color:brown
enter the plural noun:maggie
enter the celebrity:whitesaucepasta
Roses are brown
maggie are blue
i love whitesaucepasta


7. ARRAY
int main() {
    
    int arr[]={2,3,5,4,6,0};
    printf("%d",arr[0]);
    
    
    return 0;
}

o/p

2


8.
FUNCTION

#include <stdio.h>
void sayhi(char name[],int age){
    printf("hello %s, you are %d",name,age);
}
int main() {
    
    sayhi("mikke",70);
    
    return 0;
}

o/p

hello mikke, you are 70

9.
IF/ELSE
// Online C compiler to run C program online
#include <stdio.h>
int max(int num1,int num2){
    int result;
    if(num1 > num2){
        result=num1;
    }else{
        result=num2;
    }
    return result;
}
int main(){
    printf("%d",max(4,10));
    return 0;
}

o/p
10

10.
ELSE IF

int main(){
    
    double num1;
    double num2;
    char op;
    
    printf("enter a num1:");
    scanf("%lf",&num1);
    printf("enter an operator:");
    scanf(" %c",&op);
    printf("enter a num2:");
    scanf("%lf",&num2);
    
    if(op=='+'){
        printf("%f",num1+num2);
    }else if(op=='-'){
        printf("%f",num1-num2);
    }else if(op=='/'){
        printf("%f",num1/num2);
    }else if(op=='*'){
        printf("%f",num1*num2);
    }else{
        printf("aayeee?!");
    }
    
    return 0;
    
}

o/p
enter a num1:2
enter an operator:1
enter a num2:1
aayeee?!


11.
SWITCH STATEMENTS

int main(){
    
    char grade='F';
    switch(grade){
        case 'A':
            printf("you did great");
            break;
        case 'B':
            printf("you did good");
            break;
        case 'C':
            printf("you did poor");
            break;
        case 'D':
            printf("you did very bad");
            break;
        case 'F':
            printf("failu failu ^0^");
            break;
    }
    
    return 0;
    
}

o/p
failu failu ^0^

12. STRUCT 
#include <stdio.h>
#include <string.h>
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};



int main(){
    struct Student stu1;
    stu1.age=22;
    stu1.gpa=4.9;
    strcpy(stu1.name,"Jim");
    strcpy(stu1.major,"Business");
    
    printf("%lf",stu1.gpa);
    
    return 0;
    
}

o/p

4.900000

13. WHILE LOOP
int main(){
    int index=1;
    while(index<5){
        printf("%d\n",index);
        index++;
    }
    return 0;
    
}
O/P
1
2
3
4

13.
DO WHILE LOOP

int main() {
    int i=6;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=5);
    return 0;
}
o/p

6

14.
FOR LOOP

#include <stdio.h>

int main() {
    int i;
    for (i=1;i<5;i++){
        printf("%d\n",i);
    }
    return 0;
}

o/p
1
2
3
4


14.
NESTED ARRAY

#include <stdio.h>

int main() {
    int nums[3][2]={{1,2},{1,4},{1,5} };
    printf("%d",nums[0][1]);
    return 0;
}

o/p
2

15.
NESTED FOR LOOP

#include <stdio.h>

int main() {
    int nums[3][2]={{1,2},{1,4},{1,5} };
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf("%d,",nums[i][j]);
            
        }
        printf("\n");
    }
    
    
    
    return 0;
}

o/p

1,2,
1,4,
1,5,

16.
MEMORY ADDRESS

#include <stdio.h>

int main() {
    int age=20;
    printf("%p",&age);            //%p is pointer
    return 0;
}

O/P
0x7fff81ea562c

17.
POINTERS
#include <stdio.h>

int main() {
    int age=30;
    int *pAGE=&age;
    double d=7.8;
    double *pD=&d;
    char c='A';
    char *pC=&c;
    
    printf("%p\n",pAGE);
    printf("%p\n",pD);
    printf("%p\n",pC);
    
    return 0;
}

O/P
0x7fffb469a634
0x7fffb469a628
0x7fffb469a627

18.
DEREFERENCING POINTERS

#include <stdio.h>

int main() {
    int age=30;
    int *pAGE=&age;
    double d=7.8;
    double *pD=&d;
    char c='A';
    char *pC=&c;
    
    printf("%d\n",*pAGE);
    printf("%d\n",*pD);
    printf("%d\n",*pC);
    
    return 0;
}

O/P

30
464786080
65