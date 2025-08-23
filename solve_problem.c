// /  // 👉👉  🔹🔹  Question 1️⃣    create a string firstName & lastName
// to sore details of user  & print all characters using  a loop

// #include <stdio.h>
// void string(char arr[]);
// int main(){
//     char firstName [] = "coder";
//     char lastName [] = "Boy";
//     string(firstName); // function call
//     string(lastName); // last name
//     return 0;
// }
// function Definition
// void string(char arr[]){
//     for (int  i = 0; arr[i] != '\0'; i++) // spacial  in  loop => arr[i]   | for string
//     {
//         printf("%c" , arr[i]);
//     }
//             printf("\n");

// }

//   👉👉  🔹🔹  Question  2️⃣  Ask the user to enter  their firstName & print in back  to them
//                🌟also try this with their fullName

// #include <stdio.h>
// int main(){
// char name[20] ;
// printf("Enter Your Firstname : ");
// scanf("%s" , name);
// printf("Your name is %s " , name);
//     char str[100] ;
//     fgets(str , 100 , stdin);
//     puts(str);
//     return 0;
// }

//   👉👉  🔹🔹  Question  3️⃣  make a  program thats input s user's name & print its length;

// #include <stdio.h>
// int lengthStr(char arr[]);

// int main(){
//     char name[100];
//     fgets(name , 100 , stdin) ;
//     printf("Length is %d"  , lengthStr(name));
//     printf("\n");
//     return 0;
// }

// // Fucntion Definition
// int lengthStr(char arr[]){
// int count = 0 ;
// for (int  i = 0;arr[i] !='\0'; i++)
// {
//      count++;

// }
// return  count-1 ;

// }

// 👉👉  🔹🔹    add 2.0 version of  3️⃣rd problem

//  #include <stdio.h>
//  #include <string.h>
// int main(){
//     char name[] = " Code-Lover" ;
//     int length = strlen(name);
//     printf("length is %d\n" , length);
//    return 0;
// }
// 👉👉  🔹🔹  question 4️⃣  take a string  input from the user using %c

// #include <stdio.h>
// int main(){
// char  srt[15];
// char ch;
// int i = 0;
// while (ch != '\n')
// {
//    scanf("%c" , &ch);
//    srt[i] = ch;
//     i++;
// }
// srt[i] = '\0';
// puts(srt);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     char str[120];
//     char ch;
//     int i = 0;
//     while (ch != '\n')
//     {
//       scanf("%c" , &ch);
//        str[i] =  ch;
//        i++;
//     }
//     str[i] = '\0';
//    puts(str);

//     return 0;
// }

//  |🌟 ✨|  salting

// // 👉👉  🔹🔹  question  5️⃣  find the salted from a password  entered by the user
//  if the salt "123"  & added that the end

// #include <stdio.h>
// #include <string.h>
// void salting(char password []);
// int main(){
//     char password[100] ;
//     scanf("%s" , password);
//     salting(password) ;

//     return 0;
// }
// void salting(char password []){
//   char salt []  = "123 ";
//  char newPass[200];
//  strcpy(newPass , password); //  newPass =  something
//  strcat( newPass , salt); // new pass = something   + 123  || strcat =   +
// puts(newPass);
// }

// //  👉👉  🔹🔹  question 6️⃣  write a fuction named slice , which takes
//  a string & returns sclice from string  from index n to m

// #include <stdio.h>
// void sclice(char str[], int n, int m);
// int main()
// {
//     char str[] = "Coder Boy";
//     sclice(str, 3, 6); // Function call
//     return 0;
// }

// //  Function Definition
// void sclice(char str[], int n, int m)
// {
//     char newStr[45];
//     int j = 0;
//     for (int i = n; i <= m; i++, j++)
//     {
//         newStr[j] = str[i];
//     }
//     newStr[j] = '\0';

//     puts(newStr);
// }

// //  👉👉  🔹🔹  question  7️⃣  write a function  to count occurrence of vowels in a  string
#include <stdio.h>
int countVowels(char str[]);
int main()
{
    char str [] = "Education";
    printf("Vowel are : %d\n" , countVowels(str)); // Function call ;
    return 0;
}
//  Function Definition
int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
           count ++;
        }
    }
    return count ;
}

// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟