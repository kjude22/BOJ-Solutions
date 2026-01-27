/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10814                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: kkwan010315 <boj.kr/u/kkwan010315>          +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10814                          #+#        #+#      #+#    */
/*   Solved: 2026/01/27 20:16:00 by kkwan010315   ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person
{
    int age;
    string name;
    int idx;

    Person(int age_, string name_, int idx_)
    {
        age = age_;
        name = name_;
        idx = idx_;
    }

    bool operator<(const Person &p)
    {
        if (age != p.age)
        {
            return age < p.age;
        }
        else
        {
            return idx < p.idx;
        }
    }
};
int main()
{
    int N;
    cin >> N;

    vector<Person> v;
    for (int i = 0; i < N; i++)
    {
        int age;
        string name;
        cin >> age >> name;
        Person p(age, name, i);
        v.push_back(p);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].age << " " << v[i].name << "\n";
    }
    return 0;
}