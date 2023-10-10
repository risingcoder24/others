// FACTORIAL

// #include <stdio.h>
// int factorial(int);

// int main()
// {
//     int n, result;
//     scanf("%d", &n);
//     result = factorial(n);
//     printf("Factorial of %d is: %d", n, result);
//     return 0;
// }

// int factorial(int num)
// {
//     int factorial = 1;
//     int i;
//     for (i = 1; i <= num; i++)
//     {
//         factorial = factorial * i;
//     }

//     return (factorial);
// }

// ------------------------------------------------------------------------------------------------------------------

// POWER

// #include <stdio.h>
// float power(float,int);

// int main(){

//     float x,pow;
//     int y;
//     scanf("%f %d",&x,&y);
//     pow = power(x,y);
//     printf("%f to the power %d = %f\n", x,y,pow);
//     return 0;
// }

// float power(float x, int y){
//     int i;
//     float p = 1;
//     for(i=1;i<=y;i++){
//         p = p*x;
//     }
//     return (p);
// }

// ------------------------------------------------------------------------------------------------------------------

// LEAP YEAR

// #include <stdio.h>
// int Leap_Year(int);

// int main(){
//     int year;
//     int result;
//     printf("Enter a year: ");
//     scanf("%d",&year);
//     Leap_Year(year);
//     return 0;

// }

// int Leap_Year(int yr){
//     if(((yr%4==0) && (yr%100!=0) || (yr%400==0))){
//         printf("%d is a Leap Year", yr);
//     }

//     else{
//           printf("%d is not a Leap Year", yr);
//     }

//     return 0;

// }


// ------------------------------------------------------------------------------------------------------------------

// PRIME FACTORS

// #include <stdio.h>
// int Prime_Factors(int);
// int main()
// {
//     int num;
//     printf("\nEnter the number : ");
//     scanf("%d", &num);
//     Prime_Factors(num);
//     return 0;
    
// }

// int Prime_Factors(int num){
//     int i;
//     printf("\nThe factors of %d are : ", num);
//     for (i = 2; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             if (i == 2 || i % 2 != 0)
//                 printf(" %d ", i);
//         }
//     }

//     return 0;
// }
