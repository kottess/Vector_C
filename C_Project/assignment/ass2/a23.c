 #include<stdio.h>
       main()
        {
		int x;
		char *p = (char *)&x;
		x = 512;
		p[0] = 1;
		p[1] = 2;
		printf("x = %d\n",x);
       }
