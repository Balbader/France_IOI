#include <bits/stdc++.h>
#include <iostream>

int main()
{
    std::string s,s1,s2;
    int sum=0;
    int n;

    std::ios_base::sync_with_stdio(0);

    std::cin.tie(0);

    while(std::cin>>n)
      sum+=n;

    std::cout << sum << std::endl;

    return 0;
}
