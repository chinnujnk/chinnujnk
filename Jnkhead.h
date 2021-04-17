/*- 👋 Hi, I’m @chinnujnk
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me 
*****************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
int factorial(int a)
 {   int b,c;
    c=1;
    for(b=1;b<=a;b++)
    {
        c=c*b;
    }
    return c;
}


int factorial_rec(int a)
{
   int b;
   if(b==0)
   return 1;
   else
   b=a*factorial_rec(a-1);
   return b;
}


int prime(int a)
{
    int b,c,t;
    c=0;
    for(b=1;b<=a;b++)
    {
        if(a%b==0)
        c=c+1;
    }
    if(c==2)
    t=1;
    else
    t=0;
return t;
}





