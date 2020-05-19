#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include <math.h>

main()
{	int n,k=1,s=0,m;
	for (n=1;n<=220;n++)
	{	k=1;s=0;
		m=n;
		while(m!=0)
		{	k*=m%10;
			s+=m%10;
			m/=10;
		}			
		//printf("k=%d  s=%d \n",k,s);
		if(k>s) printf("  %d \n",n);
	}	
	system("pause");
}

//'---------------------------------'//
//struct slistpp
//{	
//	char name[20];	//char name;
//	int data;
//	struct slistpp *next;
//};
//typedef struct slistpp SLIST;
//SLIST *creat(int *a)
//{	
//	char n[20];	//char n;
//	int c ;
//	SLIST *h, *s, *r;
//	h=(SLIST *)malloc(sizeof(SLIST));		/* 生成头结点 */
//	r=h;
//	scanf("%s %d",&n,&c);					//scanf("%c %d",&n,&c);
//	while(c!=-1)
//	{	s=(SLIST *)malloc(sizeof(SLIST));	/*生成新结点*/
//		strcpy(s->name,n);					/*s->name=n;*/
//		s->data=c;	
//		r->next=s;							/*新结点连到表尾 */
//		r=s;								/* r指向当前表尾*/
//		//printf("%s	%d\n",n,c);			//printf("%c	%d\n",n,c);	
//		scanf("%s %d",n,&c);				//scanf("%c %d",&n,&c);
//		(*a)++;
//	}
//	r->next='\0';							/*设置链表结束标志*/	
//	return h;
//}
//void print (SLIST *head)
//{	SLIST *p;
//	p=head->next;
//	if(p=='\0') printf("Linklist is null");
//	else
//	{	printf ("head");
//		do 	{	printf("-->%s %d",p->name,p->data);p=p->next;	}  		while (p!='\0');		
//		//do 	{	printf("-->%c	%d",p->name,p->data);p=p->next;	}  		while (p!='\0');
//		printf("-->end\n");
//	}
//}
//void paixu(SLIST *head,int n)
//{
//    SLIST *p,*q,*h;
//    int i;
//    while(n--)		/* 也可写为 while (n--!=NULL) */
//	{	h = head;p = head->next;q = p->next;
//        for(i = 0; i < n && q != NULL; i++)
//		{	if(p->data < q->data)
//			{	h->next = q; p->next = q->next; q->next = p;
//                h = q; q = p->next;
//            }
//            else{  h = h->next;  p = p->next;  q = q->next; }
//        }
//    }
//}
//main()
//{	int n=0,*a, i, j;
//	a=&n;
//	SLIST *head;
//	head=creat(a);		
//	//printf ("输入元素个数=%d\n",n);
//	print(head);
//	paixu(head, n);  /*冒泡排序，第一个参数是链表的头节点，第二个参数是链表的长度*/
//	printf ("排序后:\n");
//	print(head);
//	system("pause");
//}


//'-------------------------------------'//

//struct dagou
//{	char color;
//	char smell;
//}aa;
//struct dagou bb;
//typedef struct dagou GG;
//GG cc;
//typedef int PP;
//PP i;
//int i;

//struct node			/* 14.2.6 静态链表 */
//{	int data;
//	struct node *next;
//};
//typedef struct node NODETYPE;
//main()
//{
//	NODETYPE a,b,c,*h,*p;
//	a.data=10;b.data=20;c.data=30;
//	h=&a;
//	a.next=&b;b.next=&c;c.next='\0';						/* 也可以写成 	a.next=&b;b.next=&c;c.next=NULL;	*/		
//	p=h;
//	while(p!=NULL) {printf("%d ",(*p).data); p=(*p).next;}	/* 也可以写成 while(p) {	printf("%d  ",p->data);		p=p->next;	}  */
//	
//	system("pause");
//}
//
//struct slistpp
//{	int data;
//	struct slistpp *next;
//};
//typedef struct slistpp SLIST;
//SLIST *creat_slist1()
//{	int c;
//	SLIST *h, *s, *r;
//	h=(SLIST *)malloc(sizeof(SLIST));		/* 生成头结点 */
//	r=h;
//	scanf("%d",&c);
//	while(c!=-1)
//	{	s=(SLIST *)malloc(sizeof(SLIST));	/*生成新结点*/
//		s->data=c;							
//		r->next=s;							/*新结点连到表尾 */
//		r=s;								/* r指向当前表尾*/
//		scanf("%d",&c);						
//	}
//	r->next='\0';							/*设置链表结束标志*/
//	return h;								/*返回链表头指针*/
//}
//void insert_slist1(SLIST *head,int x,int y)
//{	SLIST *p,*q,*s;
//	s=(SLIST *)malloc(sizeof(SLIST));		/* 生成y结点 */
//	s->data=y;
//	p=head;q=head->next;
//	while((q!='\0')&&(q->data!=x))
//	{	p=q;
//		q=q->next;
//	}
//	s->next=q;
//	p->next=s;
//}
//
//void print_slist (SLIST *head)
//{	SLIST *p;
//	p=head->next;
//	if(p=='\0') printf("Linklist is null");
//	else
//	{	printf ("head");
//		do 	{	printf("-->%d",p->data);p=p->next;	}  		while (p!='\0');
//		printf("-->end\n");
//	}
//}
//main()
//{	SLIST *head;
//	int x=99,y=999;
//	head=creat_slist1();
//	print_slist(head);
//	insert_slist1(head,x,y);
//
//	print_slist(head);
//	system("pause");
//}
//
//

//struct slistpp
//{	int data;
//	struct slistpp *next;
//};
//typedef struct slistpp SLIST;
//SLIST *creat_slist1()
//{	int c;
//	SLIST *h, *s, *r;
//	h=(SLIST *)malloc(sizeof(SLIST));		/* 生成头结点 */
//	r=h;
//	scanf("%d",&c);
//	while(c!=-1)
//	{	s=(SLIST *)malloc(sizeof(SLIST));	/*生成新结点*/
//		s->data=c;							
//		r->next=s;							/*新结点连到表尾 */
//		r=s;								/* r指向当前表尾*/
//		scanf("%d",&c);						
//	}
//	r->next='\0';							/*设置链表结束标志*/
//	return h;								/*返回链表头指针*/
//}
//void print_slist (SLIST *head)
//{	SLIST *p;
//	p=head->next;
//	if(p=='\0') printf("Linklist is null");
//	else
//	{	printf ("head");
//		do 	{	printf("-->%d",p->data);p=p->next;	}  		while (p!='\0');
//		printf("-->end\n");
//	}
//}
//main()
//{	SLIST *head;
//	head=creat_slist1();
//	print_slist(head);
//	system("pause");
//}

//typedef int INTEGER;
//typedef struct  
//{	char name[20];
//	char sex[10];
//	char jiguan[10];
//	INTEGER age;
//} ST;
//void getdata(ST *p)
//{scanf("%s%s%s%d",p->name,p->sex,p->jiguan,&p->age);		/* 14.1-2 结构 p200-201 箭头运算符*/	}

//main()
//{
//	//ST a;
//	//getdata(&a);
//	//printf("%s,  %s， %s,   %d\n",a.name,a.sex,a.jiguan,a.age);
//	/*system*/("pause");
//
//}

//main(int argc, char *argv[])		/* 11.1 main 函数含参*/
//{int i;
//	printf("argc= %d\n",argc);
//	for(i=1;1<argc;i++)
//	printf ("%s",argv[i]);
//	printf("/n");
//}
//#define PI 3.1415926
//double tran(double (*f1) (double),double (*f2)(double), double x)	/*11.2函数名（本例sin, cos)，或者指向函数的指针变量，作为实参*/
//{return (*f1)(x)/(*f2)(x);}
//main()
//{
//	double y,v,z;
//	v=60*PI/180.0;
//	y=tran(sin,cos,v);
//	printf("tan(60度)=%10.6f\n",y);
//	z=tran(cos,sin,v);
//	printf("cot(60度)=%10.6f\n",y*z);
//	system("pause");
//}
//
//#define S(x,y) (x)*(y)
//#define PI 3.1415926
//int k=3;
//main()
//{ 	//////////////////// 12. 静态，全局变量；宏定义；malloc, calloc
//	register int i;
//	static int j;
//	printf ("%d\n",k);
//	printf ("%d			%d\n",j, &j);
//	for (i=1;i<=10;i++)		k=S(i,j+1)*PI;
//	printf ("%d			%d\n",j, &j);
//	printf("%f\n",k);
//	//#undef PI
//	//printf("PI = %f\n",PI);
//	
//	double *p;
//	p=(double *)malloc(8);
//	printf ("double %d\n",sizeof(float));
//	*p=1.1;
//	printf("%f\n",*p);
//	free(p);
//
//	char *ps;
//	ps=(char*)calloc(10,sizeof(char));
//	ps="Hello!";
//	printf("%s\n",ps);
//	system("pause");
//}
////	///////////////////////////////////////////////////// 10.字符串strlen, strcpy,strcat, strcmp; 二维字符串数组/指针赋值, gets(),puts(0)
//main()
//{
	//char name1[]="Qiqiaa", name2[]="Dago";
	//strcpy(name1,name2);
	//printf ("%s\n",name1);
	//strcat(name1,name2);
	//printf ("%s\n",name1);

	//char s[55];
	//char name[2][80]={"liuming", "Dagou"};

	//int za[10]={11,12,13,14,15,16,17,18,19};							/* 1维数组*/
	//printf ("1维数组: %d;   %d\n",sizeof(za), sizeof(*za));						/* sizeof 数组名时返回整个数组长度*/
	//printf("%d\n",za[8]);
	//printf("%d;   %d;   %d;   %d\n",za,&za[0], &za, *za);				/* za相当于&za[0]是整形指针；&za是指向int[10]的数组指针，类型 int(*)[10] */
	//printf("%d;   %d;   %d;   %d\n\n",za+1,&za[1], &za+1,*za+1);		

	//char * aa;														/* 指针*/
	//aa="Qiqi Dagou Ahuang";
	//printf ("指针: %d;   %d\n",sizeof(aa), sizeof(*aa));
	//printf ("%s;   %s\n",aa,aa+1);
	//printf ("%c;   %c;   %c\n",*aa, *(aa+1), *(aa+9));	
	//printf ("%d;   %d\n",aa,&aa);								
	//printf ("%d;   %d\n\n",aa+1,&aa+1);							


	//char zb[3][10]={"QiQi", "Dagou","Ahuang"};							/* 2维数组*/
	//printf ("2维数组: %d;   %d\n",sizeof(zb), sizeof(*zb));						/* sizeof 数组名时返回整个数组长度*/
	//printf("%s;   %s\n",zb,zb[1]);
	//printf("%d;   %d;   %d;   %d;   %d;   %d\n",zb,zb[0],&zb[0],&zb[0][0],&zb,*zb);	/* zb及zb[0]相当于&zb[0][0]是整形指针; &zb是指向int[3][10]的数组指针，类型 int(*)[3][10]; *zb==zb[0] */		
	//printf("%d;   %d;   %d;   %d;   %d;   %d\n\n",zb+1,zb[1],&zb[0]+1,&zb[1][0],&zb+1,*zb+1);		
	//
	//char *ab[3],i,j;													/* 指针数组1*/
	//for (i=0;i<3;i++) ab[i]=zb[i];
	//printf ("指针数组1: %d;   %d\n",sizeof(ab), sizeof(*ab));						/* sizeof 数组名时返回整个数组长度*/
	//printf("%s;   %s\n",ab[0],ab[1]);
	//printf("%d;   %d;   %d;   %d;   %d\n",ab,ab[0],&ab[0][0],&ab,*ab);	/* zb及zb[0]相当于&zb[0][0]是整形指针; &zb是指向int[3][10]的数组指针，类型 int(*)[3][10]; *zb==zb[0] */		
	//printf("%d;   %d;   %d;   %d;   %d\n\n",ab+1,ab[1],&ab[1][0],&ab+1,*(ab+1));	
	//
	//int zc[4][3] ={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	//int (*ac)[3];												/* 数组指针，行指针*/
	//ac=zc;
	//printf ("数组指针，行指针: %d;   %d\n",sizeof(zc),sizeof(*zc));
	//printf("%d;   %d\n",**ac,**(ac+1));
	//printf("%d;   %d;   %d;   %d;   %d\n",ac,ac[0],&ac[0][0],&ac,*ac);	/* zb及zb[0]相当于&zb[0][0]是整形指针; &zb是指向int[3][10]的数组指针，类型 int(*)[3][10]; *zb==zb[0] */		
	//printf("%d;   %d;   %d;   %d;   %d\n\n",ac+1,ac[1],&ac[1][0],&ac+1,*(ac+1));	

	//printf("Rest..\n.");
	//printf ("%d;   %d;   %d;   %d\n",ac[1][2],*(ac[1]+2),*(*(ac+1)+2),(*(ac+1))[2]);
	//printf ("%d\n\n",&ac);	

	//printf ("%d\n",*ac);				/* nx 的内容是 nx, &nx  */
	//printf ("%d\n",ac);					/* nx = nx[0] 的地址; nx = nx[0][0] 的地址 */
	//printf ("%d\n",ac[0]);				/* nx[0] = nx[0][0]的地址;nx[0]=nx[0][0]的地址 */
	//printf ("%d\n",&ac[0]);			
	//printf ("%d;   %d\n",&ac[0][0], &ac[0][1]);			/* nx[0][1]的地址 = nx[0][0]的地址 + 4 因为 int 基类型 */

	//printf ("%d\n",ac+1);				/* nx+1 行指针偏移1，地址偏移4*3=12 */
	//printf ("%d\n",ac[1]);
	//printf ("%d\n",&ac[1]);				/* name[1]的地址 = name[0]的地址 + 4，因为 name是指针变量 */
	//printf ("%d\n",&ac[1][0]);			/* name[1] = name[1][0]的地址 */

	////char *name[]={"QiQi", "Dagou","Ahuang"};							/* 指针数组2*/

	////printf ("指针数组2: %d;   %d\n",sizeof(name),sizeof(*name));
	////printf ("%s;   %s;   %s\n",name[0],*name,*(name+1));
	////printf ("%c;   %c;   %c\n",**name,*name[1],*name[2]);
	////printf ("%c;   %c;   %c;   %c\n",*(name[1]+0),*(*name+1),(*(name+1))[2],name[1][3]);

	////printf ("%d;   %d;   %d\n",name,name+1,*name);				 
	////printf ("%d;   %d\n",&name[0],&name[1]);					/* name[1]的地址 = name[0]的地址 + 4，因为 name是指针变量 */
	////printf ("%d;   %d\n\n",&name,&name+1);	

	////printf ("%d\n",*name);										 
	////printf ("%d;   %d\n",name[0],name[1]);						 
	////printf ("%d;   %d\n",&name[0][0],&name[1][0]);
	////printf ("%d;   %d\n\n",&name[0][1],&name[1][1]);			/* name[0][1]的地址 = name[0][0]的地址 + 1 因为char 基类型 */

	////printf ("%d\n",strlen(name[0]));
	////printf ("%c\n",strcmp(name[0],name[1]));

	////printf ("%c\n",name[1][0]);

	////gets(s);
	////puts(s);

	////scanf("%",s);
	////printf("%s",s);

	//////sp="Hello!";
	////printf("%c\n %c",*(sp+1),s[0]);
	//system("pause");
//}

//		
//////	///////////////////////////////////////////////////// 16.文件处理, fgetc()=getc();fputc()=putc() */
////	//FILE *fpout,*fpin;
////	//char ch;
////
////	////fpin=fopen("release.txt","r");
////	////if (fpin == NULL) 	{	printf("Can't open it!\n");	exit(0);}
////	////ch=fgetc(fpin);  /* = getc(fpin*/
////	////while (ch!=EOF)		{putchar(ch);ch=fgetc(fpin);}
////	////fclose(fpin);
////
////	//fpout=fopen("testmk22","w");	/* "a" append*/
////	//if (fpout==NULL) {printf("Can't open it!\n");}
////	//ch=getchar();
////	//while(ch != '@')	{	fputc(ch,fpout);ch=getchar();}
////	//fclose(fpout);
////	
////	system("pause");
////
//}
