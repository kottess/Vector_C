 #include<stdio.h>
      main()
      {
		union U
		{
			int i;
			char ch[2];
		};

		union U v;
		v.ch[0] = 3;
		v.ch[1] = 2;
		printf("%d ,  %d,  %d\n",v.ch[0], v.ch[1], v.i);
    }
