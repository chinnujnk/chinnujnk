/*### Hi there 👋

<!--
**chinnujnk/chinnujnk** is a ✨ _special_ ✨ repository because its `README.md` (this file) appears on your GitHub profile.

Here are some ideas to get you started:

- 🔭 I’m currently working on ...
- 🌱 I’m currently learning ...
- 👯 I’m looking to collaborate on ...
- 🤔 I’m looking for help with ...
- 💬 Ask me about ...
- 📫 How to reach me: ...
- 😄 Pronouns: ...
- ⚡ Fun fact: ...
-->*/
#include<stdio.h>
#include<jnkhead.h>
Int main()
{
   int a,b,c;
   scanf("%d",&a);
   b=factorial(a);
   c=factorial_rec(a);
   a=prime(a);
   Printf("%d  %d   %d",b,c,a);
   return 0;
}
