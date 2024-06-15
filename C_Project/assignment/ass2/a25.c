 #include<stdio.h>
void fun(int );
   
   main()
     {
	fun(3);
    }
    void fun(int n)
    {
	fun(--n);
	printf(" %d  ", n);
	fun(--n);
  }
