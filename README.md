# Cezars Chipher
Cyphering and deciphering Cezar's cipher - C++ Console App

Program that encrypts and decrypts the Caesar Cipher.

Caesar shift, is one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of 3, D would be replaced by A, E would become B, and so on. The method is named after Julius Caesar, who used it in his private correspondence.

![image](https://github.com/user-attachments/assets/21e58a54-b367-4088-ab8d-d5c0122cee0d)

Caesar code is achieved by shifting the alphabetical order by the key value. 
Entry is made in main, after the user chooses whether to encrypt or decrypt. The key is also entered. 
After that, the message is passed to a function that encrypts or decrypts it based on the key.

Code Explanation:

The user first chooses whether to encrypt or decrypt the message. If the entered number does not belong to any of the options, the entry is repeated, which we can see in the do while loop on line 40. After that, a message is entered via string, and the shift key is entered. If we have selected function 1, the message and the key are passed to the encryption function "en" on line 51. The function contains a for loop, with which we access the members of the string. Inside the loop with 2 if's, we check whether upper or lower case letters are entered. After determining, one of the ifs is executed. The e variable holds the current value of an individual member of the string, and the value of the key is added to it. In the ASCII code, all characters have their own value, the value 'a' is 97, when we add to that value, for example, the key 3, we get the value 100, which is 'd'. That's how we move the alphabet. The problem arises when, for example, we add 3 to the value 'z', which is 122, and we get the value 125, which means '}'. We don't want a parenthesis to be printed, so we insert another if (line 14) where we check if our new value is greater than 'z', i.e. 122. If it is greater, we subtract 'z' - 122, add 'a' - 97 and subtract 1 which brings us to the exact value. Let's say (z=122, key=3, z+3=125, 125-122+97-1=99 i.e. 'c'. The new value 'e' is assigned to the string. The same is done with capital letters. After the loop, a new encrypted message is printed. If the decryption option is selected, it is checked again whether the letters are uppercase or lowercase. One of the ifs is executed in this case, the key is subtracted from the value of 'e' because it is decryption. The procedure remains the same only with the opposite signs due to decryption. After that, we ask the user whether he wants to start the program again, if the answer is yes let's go back to the beginning.

Console:

![image](https://github.com/user-attachments/assets/6dd2701f-22f7-4942-ac23-8507e9f7b036)
