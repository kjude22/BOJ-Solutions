/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 4949                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/4949                           #+#        #+#      #+#    */
/*   Solved: 2026/02/25 15:38:41 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    while (1)
    {
        string s;
        getline(cin, s);

        if (s == ".")
        {
            break;
        }

        stack<char> stack;
        bool isBalanced = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[')
            {
                stack.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (stack.empty() || stack.top() != '(')
                {
                    isBalanced = false;
                    break;
                }
                stack.pop();
            }
            else if (s[i] == ']')
            {
                if (stack.empty() || stack.top() != '[')
                {
                    isBalanced = false;
                    break;
                }
                stack.pop();
            }
        }
        if (isBalanced && stack.empty())
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}