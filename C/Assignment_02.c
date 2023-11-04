#include <stdio.h>

/*
Q1 Write a program to print unit digit of a given number

int main()
{
    printf("Enter the number whose unit digit you want to know\n");
    int num,rem;
    scanf("%d",&num);
    rem = num % 10;
    printf("Unit digit is %d\n", rem);

    return 0;

}



Q2 Write a program to print a given number without its last digit.

int main()
{
    printf("Enter the number you want to print without unit digit\n");
    int num,rem;
    scanf("%d",&num);
    rem = num % 10;
    num = (num-rem)/10;
    printf("The number without unit digit is %d\n",num);

    return 0;

}

Q3 Write a program to swap values of two int variables



int main()
{
    printf("Enter two varibles\n");
    int a,b,temp;
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d & b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap\n a=%d & b=%d\n",a,b);
    return 0;
}



Q4 Write a program to swap values of two int variables without using a third variable.

int main()
{
    printf("Enter two varibles\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d & b=%d\n",a,b);
    a=a-b;
    b=b+a;
    a=b-a;
    printf("After swap\n a=%d & b=%d\n",a,b);
    return 0;
}



Q5 Write a program to input a three-digit number and display the sum of the digits.

int main()
{
    printf("Enter a three digit number\n");
    int num,ones,tens;
    scanf("%d",&num);
    ones=num%10;
    num=num/10;
    tens=num%10;
    num=num/10;
    printf("Sum of %d, %d & %d is %d\n",num,tens,ones,num+tens+ones);
    
    return 0;
}



Q6 Write a program which takes a character as an input and displays its ASCII code.

int main(){
    printf("Enter a character\n");
    char c;
    scanf("%c",&c);
    printf("The ASCII value of %c is %d\n",c,c);

    return 0;
}



Q7 Write a program to find the position of first 1 in LSB.

int find_position_of_first_1_in_lsb(unsigned int number) {
  int position = 1;

  while (number > 0) {
    if ((number & 1) == 1) {
      return position;
    }

    position++;
    number >>= 1;
  }

  return -1;
}

int main() {
  unsigned int number;

  printf("Enter a number: ");
  scanf("%u", &number);

  int position = find_position_of_first_1_in_lsb(number);

  if (position != -1) {
    printf("The position of the first 1 in the LSB is: %d\n", position);
  } else {
    printf("The number does not contain any 1 bits.\n");
  }

  return 0;
}



Q8 Write a program to check whether the given number is even or odd using a bitwise
operator.

int main(){
    printf("Enter a number to check for even or odd\n");
    int num;
    scanf("%d",&num);

    if(num & 1)
        printf("ODD");
    else
        printf("EVEN");

    return 0;
}



Q9 Write a program to print size of an int, a float, a char and a double type variable

int main(){
    int a;
    float b;
    char c;
    double d;

    printf("int ;%d\nfloat ;%d\nchar ;%d\ndouble ;%d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));

    return 0;
}



Q10 Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340).

int main(){
    printf("Enter a number\n");
    int x,rem;
    scanf("%d",&x);
    rem = x%10;
    x = x-rem;
    printf("with last digit zero x ; %d\n",x);

    return 0;
}



Q11 Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349).

int main(){
    printf("Enter a number\n");
    int num,dig,rem;
    scanf("%d",&num);
    printf("Enter a number\n");
    scanf("%d",&dig);
    num=(num*10)+dig;

    printf("num with digit ; %d\n",num);

    return 0;
}



Q12 Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.

int main(){
    printf("Enter the amount in INR you want to convert in $\n");
    float INR;
    float BUCKS;
    scanf("%f",&INR);
    BUCKS = INR/76.23;
    printf("%f INR is = %f $\n",INR,BUCKS);

    return 0;
}



13 Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.

int main(){
    printf("Enter a num\n");
    int num,ones,tens,hundreds;
    scanf("%d",&num);
    ones=num%10;
    tens=num%100;
    tens=(tens-(tens%10))/10;
    hundreds=(num-tens)/100;

    num=(ones*100)+(tens*10)+hundreds;
    printf("Number rotated one place right %d \n",num);

    return 0;
}

*/





















