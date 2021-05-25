#include  <stdio.h>
#include  <string.h>
struct student//学生的基本信息结构声明 
{
	char name[30];       //学生的名字 
	char roomnumber[20]; //学生的房间号 
	char cardnumber[20];//学生的学号 
	char gender[10];  //学生的性别 
	int age;         //学生的年龄 
 } ; 
 
 
int main (void)
{
moon:printf("**********************************\n");//初始的菜单界面（经行功能的选择） 
	 printf("++++++欢迎使用宿舍管理系统+++++++\n");
	 printf("\n"); 
	 printf("该系统完成以下的功能（）\n");
	 printf("\n");
	 printf("(1)学生的宿舍信息录入\n");
	 printf("(2)学生信息的删除（从宿舍号，姓名，面积，入住人数等）\n");
	 printf("(3)学生宿舍信息的定点查询（从宿舍号，姓名，面积，入住人数等）\n");
	 printf("(4)对已经输入的人员信息经行修改\n");
	 printf("(5)对原有的信息进行补充信息录入\n"); 
	 printf("(6)对宿舍人员名单进行浏览\n"); 
	 printf("(7)结束该程序\n"); 
	 printf("切记本系统最多纪录1000位学生成绩\n");
	 printf("\n");
	 printf("*********************________由钱俊杰课设组完成\n");
	 printf("请您选择功能（输入编号）\n"); 
	
	
	int choice;
	scanf("%d",&choice);//对功能经行选择的部分（利用switch）来选择 
	struct student message[1000];
	switch(choice)
	{
		/*学生基本信息的录入*/case 1:
			{
				printf("请您开始输入信息（如需结束请输入0）\n");
				int time,a;
				time=0,a=1;
			    while(a!=0)
				{
				printf("----请输入学生的姓名----\n");
			    scanf("%s",message[time].name);
				printf("----请输入学生的宿舍号----\n");
				scanf("%s",message[time].roomnumber);
				printf("----请输入学生的卡号----\n");
				scanf("%s",message[time].cardnumber);
				printf("----请输入学生的年龄----\n");
				scanf("%d",&message[time].age);
				printf("----请输入学生的性别----\n");
				scanf("%s",message[time].gender);
				printf("结束请按0，继续输入请按1\n");//用户对接下来的内容进行选择 （统一退回switch后再来返回主菜单） 
				time++;//人数的判断 
				scanf("%d",&a);
			    }
			    printf("一共有%d的学生\n",time);
				break;
			}
	 /*学生信息的删除*/    case 2:
		{
		like:	printf("请输入你要删除的内容\n");//对判断内容进行选择 
				printf("选择你要搜索删除的内容\n");
				printf("1.名字\n");
				printf("2.宿舍名\n");
				printf("3.卡号\n");
				int b,c;
				scanf("%d",&b);
				switch(b)
				{
					case 1:
				   {
						
						printf("请输入你要输入的名字\n"); 
						char d[30];//输入你要搜索并删除的名字 
						scanf("%s",d);
						for(c=0;c<1000;c++)
						{
							if(strcmp(d,message[c].name)==0)//利用字符串函数来比较 
							{
								printf("查找的数据位于第%d行\n",c);
								for(;c<1000;c++)
								{
									message[c+1]=message[c];//对修改后的代码进行移动位置（达到删除的目的） 
								 } 
							}
						}
					break;
				    }
				    case 2:
				    	{
				    		printf("请输入你要输入的宿舍名\n");
							int f;
							char e[20];
							scanf("%s",e);//输入你要输入搜索的宿舍名字
							for(f=0;f<1000;f++)
							{
								if(strcmp(e,message[f].roomnumber)==0)
								{
									printf("查找的数据位于第%d\n",f);
									for(;f<1000;f++)
								    {
									message[f+1]=message[f];//对修改后的代码进行移动位置（达到删除的目的）
							    	}
								}
								else
								{
									printf("结果查询不存在请重新输入\n");
									break;
								} 
							 } 
							 break;
						}
						case 3:
							{
								printf("请输入你要输入的卡号\n");
								int h;
								char g[20];
								scanf("%s",g);
								for(h=0;h<1000;h++)
								{
									if(strcmp(g,message[h].cardnumber)==0)
									{
										printf("查找的数据位于%d",h);
										for(;h<1000;h++)
										{
											message[h+1]=message[h];//对修改后的代码进行移动位置（达到删除的目的）
										}
									}
									else
									{
										printf("输入结果查询不存在请重新输入正确结果\n");
										break;
									}
								}
								break;
							}
						
						
				 } 
				 printf("结束请按1,继续请按0\n");
				 int i;
				 scanf("%d",&i);
				 if(i==1)
				 {
				 	break;//跳出循环来经行菜单选择 
				  } 
				  if(i==0)
				  {
				  	goto like;//经行返回重复循环 
				  }
				 
					
				
		}
	/*学生信息的定点查询*/case 3:
			{
				printf("请输入你要查找的关键词来查找\n");
				printf("1.名字\n");
				printf("2.卡号\n");
				printf("3.房间号\n");
				int j,p;
				p=1;
				scanf("%d",&j);//进行选择来判断查找类型 
				while(p!=0)
			{
				switch(j)
				{
					case 1:
					{
						printf("请输入你要查找的名字\n");
						char k[30];
						int l;
						scanf("%s",k);//输入你要查找的名字
						 for(l=0;l<1000;l++)
						 {
						 	if(strcmp(k,message[l].name)==0)
						 	{
						 		printf("-------------------------------------------------------------------------\n"); 
						 		printf("-------------------------------------------------------------------------\n");
						 		printf("----姓名----卡号----房间号----性别-----年龄------\n");
						 		printf("   %s   /   %s   /   %s   /    %s   /   %d   \n",message[l].name,message[l].cardnumber,message[l].roomnumber,message[l].gender,message[l].age);
						 		printf("-------------------------------------------------------------------------\n");
						 		break; 
							 }
							 else
							 {
							 	printf("输入结果不存在请重新输入\n");
							 	break;
							 }
						 }
						 break;
					}
					case 2:
						{
							printf("请输入你要输入的卡号\n");
							int n;
							char m[20];
							scanf("%s",m);
							for(n=0;n<1000;n++)
							{
								if(strcmp(m,message[n].cardnumber)==0)
								{
								printf("-------------------------------------------------------------------------\n"); 
						 		printf("-------------------------------------------------------------------------\n");
						 		printf("----姓名----卡号----房间号----性别-----年龄------");
						 		printf("%s%s%s%s%d",message[n].name,message[n].cardnumber,message[n].roomnumber,message[n].gender,message[n].age);
						 		printf("-------------------------------------------------------------------------\n");
						 		break; 
								}
								else
								{
									printf("输入结果不存在请重新输入\n");
									break;
								}
							}
							break;
						}
					case 3:
						{
							printf("请输入你要搜索的宿舍名\n");
							int u;
							char O[20];
							scanf("%s",O);
							for(u=0;u<1000;u++)
							{
								if(strcmp(O,message[u].roomnumber)==0)
								{
								printf("-------------------------------------------------------------------------\n"); 
						 		printf("-------------------------------------------------------------------------\n");
						 		printf("----姓名----卡号----房间号----性别-----年龄------\n");
						 		printf("     %s       %s       %s       %s       %d",message[u].name,message[u].cardnumber,message[u].roomnumber,message[u].gender,message[u].age);
						 		printf("-------------------------------------------------------------------------\n");
						 		break; 
								}
								else
								{
									printf("输入结果不存在请重新输入\n");
									break;
								}
							}
							break;
						}
				}	
			            printf("继续请按1，结束请按0\n");//用于判断用户是否继续（利用while来判断） 
						scanf("%d",&p);
			}
			break;
		}
/*已输入人员的信息修改*/case 4:
		{
			printf("请输入你要搜索的类型并来进行修改\n");
			printf("1.卡号\n");
			printf("2.姓名\n"); 
			int q,s,t;
			char r[20];
			scanf("%d",&q);
			switch(q)
			{
				case 1://针对卡号搜索过后的数据修改
					{
						printf("请输入你要修改的卡号\n");
						scanf("%s",r);
						for(s=0;s<1000;s++)
						{
							if(strcmp(r,message[s].cardnumber)==0)
							{
								printf("修改的输入位于第%d行",s);
								printf("请输入你要修改的数据类型\n");
								printf("1.卡号\n");
								printf("2.姓名\n");
								printf("3.房间号\n");
								printf("4.性别\n"); 
								printf("5.年龄\n");
								scanf("%d",&t);
								switch(t)
								{
									case 1:
										{
										  printf("请输入你要修改的卡号\n");
										  scanf("%s",message[s].cardnumber);
										  printf("修改成功\n");
										  break;                                                                                      
										}
									case 2:
										{
											printf("请输入你要修改的姓名\n");
											scanf("%s",message[s].name);
											printf("修改成功\n");
											break;
										}
									case 3:
										{
											printf("请输入你要修改的房间号\n");
											scanf("%s",message[s].roomnumber);
											printf("修改成功\n");
											break;
										}
									case 4:
										{
											printf("请输入你要修改的性别\n");
											scanf("%s",message[s].gender);
											printf("修改成功\n");
											break;
										}
									case 5:
										{
											printf("请输入你要修改的年龄\n");
											scanf("%d",message[s].age);
											printf("修改成功\n");
											break;
										}
								}
								break;//结束并跳出循环 
							}
							 
						 } 
						 break; 
					}
				case 2:
				{
					char v[20];
					int w,x;
					printf("请输入你要修改的姓名\n");
					scanf("%s",v);
					for(w=0;w<1000;w++)
					  {
					     if(strcmp(v,message[w].name)==0)
						 {
						 	printf("修改的数据位于%d行",w);
						 	printf("请选择你要修改的数据类型\n");
						 	printf("1.卡号\n");
							printf("2.姓名\n");
							printf("3.房间号\n");
							printf("4.性别\n"); 
							printf("5.年龄\n");
							scanf("%d",&x);
							switch(x)
							{
									case 1:
										{
										  printf("请输入你要修改的卡号\n");
										  scanf("%s",message[w].cardnumber);
										  printf("修改成功\n");
										  break;                                                                                      
										}
									case 2:
										{
											printf("请输入你要修改的姓名\n");
											scanf("%s",message[w].name);
											printf("修改成功\n");
											break;
										}
									case 3:
										{
											printf("请输入你要修改的房间号\n");
											scanf("%s",message[w].roomnumber);
											printf("修改成功\n");
											break;
										}
									case 4:
										{
											printf("请输入你要修改的性别\n");
											scanf("%s",message[w].gender);
											printf("修改成功\n");
											break;
										}
									case 5:
										{
											printf("请输入你要修改的年龄\n");
											scanf("%d",message[w].age);
											printf("修改成功\n");
											break;
							            }
							 }	
					    break;//跳出for循环 
					  }
				}
				break;//跳出switch 
			 } 
		      break;//跳出case 4 
		    }
		    break;
	    }
/*对原有信息进行补充录入*/	 case 5:
		{
			int ac=1,ad;
			FILE *fp;
			fp=fopen("原有宿舍人员名单.txt","a+");//对原来的文本文件进行修改和扩充
			if(fp!=NULL)
		    {
			printf("文件打开成功\n");
			for(ad=0;ad<1000;ad++)
			  {
			printf("请输入名字\n");
			scanf("%s",message[ad].name);
			fprintf(fp,"\n%s/",message[ad].name); 
			printf("请输入卡号\n");
			scanf("%s",message[ad].cardnumber);
			fprintf(fp,"%s/",message[ad].cardnumber);
			printf("请输入房间号\n");
			scanf("%s",message[ad].roomnumber);
			fprintf(fp,"%s/",message[ad].roomnumber);
			printf("请输入年龄\n");
			scanf("%d",&message[ad].age);
			fprintf(fp,"%d/",&message[ad].age);
			printf("请输入性别\n");
			scanf("%s",message[ad].gender);
			fprintf(fp,"%S/\n",message[ad].gender);
			printf("是否继续程序?\n");
			printf("继续请按1，结束请按0\n");
			scanf("%d",&ac);
			if(ac==0)
			       {
	      	   break;
	               }
			  }
			  break;
	        }
		    else
		    {
		    	printf("文件打开失败\n");
		    	break;
			}
		}
/*对信息进行浏览*/		case 6:
	{
		printf("选择你要浏览的文件类型\n");
		printf("1.新建的宿舍人员名单\n");
		printf("2.原有的宿舍人员名单\n");//对人员名单的浏览进行选择（利用switch） 
		int ae,af,ag,ah,ai,aj;
		scanf("%d",&ae);
		switch(ae)
		{
			case 1:
				{
					printf("接下来对新建的人员名单进行读取\n");
					printf("请输入你要浏览的人员数量\n");
					scanf("%d",&aj);
					for(af=0;af<aj;af++)//在计算机屏幕上打印出信息 
					{
						printf("----姓名----卡号----房间号----性别-----名字------\n");
						printf("%d.     %s       %s       %s       %s       %d\n",(af+1),message[af].name,message[af].cardnumber,message[af].roomnumber,message[af].gender,message[af].age);
					 } 
					 break;
				}
			case 2:
			{
				printf("下面来对原名单进行读取\n");
				FILE *fp;
				fp=fopen("原有宿舍人员名单.txt","r");
				printf("请输入浏览的人员名单数量\n");
				scanf("%d",&ag);
				for(ah=0;ah<ag;ah++)
				{
					fscanf(fp,"%s",message[ah].name);//读取出文件的内容 
					fscanf(fp,"%s",message[ah].cardnumber);
					fscanf(fp,"%S",message[ah].roomnumber);
					fscanf(fp,"%s",message[ah].gender);
					fscanf(fp,"%d",&message[ah].age);
				}
				for(ai=0;ai<ag;ai++)
				{
					printf("----姓名----卡号----房间号----性别-----名字------\n");
					printf("%d     %s       %s       %s       %s       %d\n",(ai+1),message[ai].name,message[ai].cardnumber,message[ai].roomnumber,message[ai].gender,message[ai].age);
				}
				break;
			 } 
		 } 
	     break;
	} 
	 
/*结束程序*/              case 7: 
	    {
	    	printf("请输入你要执行的程序\n");
			printf("通过以下来菜单来进行选择\n");
			printf("1.直接退出(不保存数据(对于新建的名单)，（对于原名单修改添加的则直接输入1退出！！！)\n");
			printf("2.保存数据并推出（在程序结束后的\"新建宿舍人员名单.txt\"里来查看人员名单)\n");
			int y,z,ab;
			scanf("%d",&y);
			switch(y)
			{
				case 1:
					{
						printf("结束并推出程序成功\n");//第一个功能的结束 
						printf("感谢你的使用与支持\n");
						goto over;
					}
				case 2:
					{
						printf("请说明你想打印出多少人的名单\n");
						printf("请输入人数\n");
						scanf("%d",&ab); 
						printf("本系统正在保存数据中\n");//功能中的精华最重要的部分决定程序的成败！！！ 
						printf("PLEASE WAIT---------------------------\n");
						FILE *fp;//文件的指针
						fp=fopen("新建宿舍人员名单.txt","w");//打开文件并来经行文件输入 
						for(z=0;z<ab;z++)
						{
							
							fprintf(fp,"%s/%s/%s/%s/%d\n",message[z].name,message[z].cardnumber,message[z].roomnumber,message[z].gender,message[z].age);
						    
						}
						printf("保存成功完成程序\n");
						goto over;//保存以后来推出程序！！！ 
					}
			 } 
			 
  	     }
	}
	  goto moon; 
over: return 0;
 } 
 

