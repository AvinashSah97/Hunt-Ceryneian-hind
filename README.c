# Hunt-Ceryneian-hind

#include <stdio.h>


int main(void) {
	// your code goes here
int n,t=1;
printf("Enter the size of grid\n");
scanf("%d",&n);
if(n>3 && n<10)

{int a[n][n],i,j,count=1,x,y,r,guess,x1,y1,c[3],k=0;
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{a[i][j]=count;
count++;
}}
//r=rand() % count;
r=13;
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{if(a[i][j]==r)
{x=i;
y=j;
}}}
//printf("%d %d %d\n",r,x,y);
while(t!=4)
{printf("Enter guess %d ",t);
scanf("%d",&guess);

for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{if(a[i][j]==guess)
{x1=i;
y1=j;
}
}}
if(t!=3)
{if(x1==x && y1==y)
{printf("Congratulations! You've captured the Ceryneian Hind!\n");
break;
}else if(x1>x && y1>y)
{printf("The Ceryneian Hind is North West of your position.\n");
}else if(x1>x && y1<y)
{printf("The Ceryneian Hind is North East of your position.\n");
}else if(x1<x &&y1>y)
{printf("The Ceryneian Hind is South West of your position.\n");
}else if(x1<x && y1<y)
{printf("The Ceryneian Hind is South East of your position.\n");
}else if(x1==x && y1>y)
{printf("The Ceryneian Hind is West of your position.\n");
}else if(x1==x && y1<y)
{printf("The Ceryneian Hind is East of your position.\n");
}else if(y1==y && x1>x)
{printf("The Ceryneian Hind is North of your position.\n");
}else if(y1==y && x1<x)
{printf("The Ceryneian Hind is South  of your position.\n");
}
}else if(x1==x && y1==y)
{printf("Congratulations! You've captured the Ceryneian Hind!\n");
break;
}else
printf("Oh no! The Ceryneian Hind escaped!\n");
//printf("%d %d %d\n",guess,x1,y1);
++t;
++k;

}

}
else 
printf("Invalid size of grid\n");
/*for(i=0;i<3;i++)
printf("%d",c[i]);*/
	return 0;
}


