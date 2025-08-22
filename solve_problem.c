// /  // 👉👉  🔹🔹  Question 1   create a string firstName & lastName  
// to sore details of user  & print all characters using  a loop 

#include <stdio.h>
void string(char arr[]);
int main(){
    char firstName [] = "coder";
    char lastName [] = "Boy";
    string(firstName); // function call
    string(lastName); // last name
    return 0;
}
// function Definition
void string(char arr[]){
    for (int  i = 0; arr[i] != '\0'; i++) // spacial  in  loop => arr[i]   | for string 
    {
        printf("%c" , arr[i]);
    }
            printf("\n");

}




// #include <stdio.h>
// int main(){
    // return 0;
// }
// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟