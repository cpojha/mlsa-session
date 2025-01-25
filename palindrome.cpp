//what is palindrome
//A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).

// 121 is a palindrome number
// 121 is a palindrome number

// 123 is not a palindrome number 
// string: madam is a palindrome string, madam is a palindrome string

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str)
{
    string temp = str;
    reverse(str.begin(), str.end());
    return temp == str;
}

bool isPalindrome(int num)
{
    string str = to_string(num);
    return isPalindrome(str);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    if (isPalindrome(str))
    {
        cout << str << " is a palindrome string" << endl;
    }
    else
    {
        cout << str << " is not a palindrome string" << endl;
    }

    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPalindrome(num))
    {
        cout << num << " is a palindrome number" << endl;
    }
    else
    {
        cout << num << " is not a palindrome number" << endl;
    }

    return 0;
}