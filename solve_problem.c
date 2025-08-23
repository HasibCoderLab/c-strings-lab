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

#include <stdio.h>
int main(){
char  srt[15];
char ch;
int i = 0;
while (ch != '\n')
{
   scanf("%c" , &ch);
   srt[i] = ch;
    i++;
}
srt[i] = '\0';
puts(srt);

    return 0;
}

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

// #include <stdio.h>
// int main(){
    // return 0;
// }
// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟