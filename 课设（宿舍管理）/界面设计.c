#include  <stdio.h>
#include  <string.h>
struct student//ѧ���Ļ�����Ϣ�ṹ���� 
{
	char name[30];       //ѧ�������� 
	char roomnumber[20]; //ѧ���ķ���� 
	char cardnumber[20];//ѧ����ѧ�� 
	char gender[10];  //ѧ�����Ա� 
	int age;         //ѧ�������� 
 } ; 
 
 
int main (void)
{
moon:printf("**********************************\n");//��ʼ�Ĳ˵����棨���й��ܵ�ѡ�� 
	 printf("++++++��ӭʹ���������ϵͳ+++++++\n");
	 printf("\n"); 
	 printf("��ϵͳ������µĹ��ܣ���\n");
	 printf("\n");
	 printf("(1)ѧ����������Ϣ¼��\n");
	 printf("(2)ѧ����Ϣ��ɾ����������ţ��������������ס�����ȣ�\n");
	 printf("(3)ѧ��������Ϣ�Ķ����ѯ��������ţ��������������ס�����ȣ�\n");
	 printf("(4)���Ѿ��������Ա��Ϣ�����޸�\n");
	 printf("(5)��ԭ�е���Ϣ���в�����Ϣ¼��\n"); 
	 printf("(6)��������Ա�����������\n"); 
	 printf("(7)�����ó���\n"); 
	 printf("�мǱ�ϵͳ����¼1000λѧ���ɼ�\n");
	 printf("\n");
	 printf("*********************________��Ǯ���ܿ��������\n");
	 printf("����ѡ���ܣ������ţ�\n"); 
	
	
	int choice;
	scanf("%d",&choice);//�Թ��ܾ���ѡ��Ĳ��֣�����switch����ѡ�� 
	struct student message[1000];
	switch(choice)
	{
		/*ѧ��������Ϣ��¼��*/case 1:
			{
				printf("������ʼ������Ϣ���������������0��\n");
				int time,a;
				time=0,a=1;
			    while(a!=0)
				{
				printf("----������ѧ��������----\n");
			    scanf("%s",message[time].name);
				printf("----������ѧ���������----\n");
				scanf("%s",message[time].roomnumber);
				printf("----������ѧ���Ŀ���----\n");
				scanf("%s",message[time].cardnumber);
				printf("----������ѧ��������----\n");
				scanf("%d",&message[time].age);
				printf("----������ѧ�����Ա�----\n");
				scanf("%s",message[time].gender);
				printf("�����밴0�����������밴1\n");//�û��Խ����������ݽ���ѡ�� ��ͳһ�˻�switch�������������˵��� 
				time++;//�������ж� 
				scanf("%d",&a);
			    }
			    printf("һ����%d��ѧ��\n",time);
				break;
			}
	 /*ѧ����Ϣ��ɾ��*/    case 2:
		{
		like:	printf("��������Ҫɾ��������\n");//���ж����ݽ���ѡ�� 
				printf("ѡ����Ҫ����ɾ��������\n");
				printf("1.����\n");
				printf("2.������\n");
				printf("3.����\n");
				int b,c;
				scanf("%d",&b);
				switch(b)
				{
					case 1:
				   {
						
						printf("��������Ҫ���������\n"); 
						char d[30];//������Ҫ������ɾ�������� 
						scanf("%s",d);
						for(c=0;c<1000;c++)
						{
							if(strcmp(d,message[c].name)==0)//�����ַ����������Ƚ� 
							{
								printf("���ҵ�����λ�ڵ�%d��\n",c);
								for(;c<1000;c++)
								{
									message[c+1]=message[c];//���޸ĺ�Ĵ�������ƶ�λ�ã��ﵽɾ����Ŀ�ģ� 
								 } 
							}
						}
					break;
				    }
				    case 2:
				    	{
				    		printf("��������Ҫ�����������\n");
							int f;
							char e[20];
							scanf("%s",e);//������Ҫ������������������
							for(f=0;f<1000;f++)
							{
								if(strcmp(e,message[f].roomnumber)==0)
								{
									printf("���ҵ�����λ�ڵ�%d\n",f);
									for(;f<1000;f++)
								    {
									message[f+1]=message[f];//���޸ĺ�Ĵ�������ƶ�λ�ã��ﵽɾ����Ŀ�ģ�
							    	}
								}
								else
								{
									printf("�����ѯ����������������\n");
									break;
								} 
							 } 
							 break;
						}
						case 3:
							{
								printf("��������Ҫ����Ŀ���\n");
								int h;
								char g[20];
								scanf("%s",g);
								for(h=0;h<1000;h++)
								{
									if(strcmp(g,message[h].cardnumber)==0)
									{
										printf("���ҵ�����λ��%d",h);
										for(;h<1000;h++)
										{
											message[h+1]=message[h];//���޸ĺ�Ĵ�������ƶ�λ�ã��ﵽɾ����Ŀ�ģ�
										}
									}
									else
									{
										printf("��������ѯ������������������ȷ���\n");
										break;
									}
								}
								break;
							}
						
						
				 } 
				 printf("�����밴1,�����밴0\n");
				 int i;
				 scanf("%d",&i);
				 if(i==1)
				 {
				 	break;//����ѭ�������в˵�ѡ�� 
				  } 
				  if(i==0)
				  {
				  	goto like;//���з����ظ�ѭ�� 
				  }
				 
					
				
		}
	/*ѧ����Ϣ�Ķ����ѯ*/case 3:
			{
				printf("��������Ҫ���ҵĹؼ���������\n");
				printf("1.����\n");
				printf("2.����\n");
				printf("3.�����\n");
				int j,p;
				p=1;
				scanf("%d",&j);//����ѡ�����жϲ������� 
				while(p!=0)
			{
				switch(j)
				{
					case 1:
					{
						printf("��������Ҫ���ҵ�����\n");
						char k[30];
						int l;
						scanf("%s",k);//������Ҫ���ҵ�����
						 for(l=0;l<1000;l++)
						 {
						 	if(strcmp(k,message[l].name)==0)
						 	{
						 		printf("-------------------------------------------------------------------------\n"); 
						 		printf("-------------------------------------------------------------------------\n");
						 		printf("----����----����----�����----�Ա�-----����------\n");
						 		printf("   %s   /   %s   /   %s   /    %s   /   %d   \n",message[l].name,message[l].cardnumber,message[l].roomnumber,message[l].gender,message[l].age);
						 		printf("-------------------------------------------------------------------------\n");
						 		break; 
							 }
							 else
							 {
							 	printf("����������������������\n");
							 	break;
							 }
						 }
						 break;
					}
					case 2:
						{
							printf("��������Ҫ����Ŀ���\n");
							int n;
							char m[20];
							scanf("%s",m);
							for(n=0;n<1000;n++)
							{
								if(strcmp(m,message[n].cardnumber)==0)
								{
								printf("-------------------------------------------------------------------------\n"); 
						 		printf("-------------------------------------------------------------------------\n");
						 		printf("----����----����----�����----�Ա�-----����------");
						 		printf("%s%s%s%s%d",message[n].name,message[n].cardnumber,message[n].roomnumber,message[n].gender,message[n].age);
						 		printf("-------------------------------------------------------------------------\n");
						 		break; 
								}
								else
								{
									printf("����������������������\n");
									break;
								}
							}
							break;
						}
					case 3:
						{
							printf("��������Ҫ������������\n");
							int u;
							char O[20];
							scanf("%s",O);
							for(u=0;u<1000;u++)
							{
								if(strcmp(O,message[u].roomnumber)==0)
								{
								printf("-------------------------------------------------------------------------\n"); 
						 		printf("-------------------------------------------------------------------------\n");
						 		printf("----����----����----�����----�Ա�-----����------\n");
						 		printf("     %s       %s       %s       %s       %d",message[u].name,message[u].cardnumber,message[u].roomnumber,message[u].gender,message[u].age);
						 		printf("-------------------------------------------------------------------------\n");
						 		break; 
								}
								else
								{
									printf("����������������������\n");
									break;
								}
							}
							break;
						}
				}	
			            printf("�����밴1�������밴0\n");//�����ж��û��Ƿ����������while���жϣ� 
						scanf("%d",&p);
			}
			break;
		}
/*��������Ա����Ϣ�޸�*/case 4:
		{
			printf("��������Ҫ���������Ͳ��������޸�\n");
			printf("1.����\n");
			printf("2.����\n"); 
			int q,s,t;
			char r[20];
			scanf("%d",&q);
			switch(q)
			{
				case 1://��Կ�����������������޸�
					{
						printf("��������Ҫ�޸ĵĿ���\n");
						scanf("%s",r);
						for(s=0;s<1000;s++)
						{
							if(strcmp(r,message[s].cardnumber)==0)
							{
								printf("�޸ĵ�����λ�ڵ�%d��",s);
								printf("��������Ҫ�޸ĵ���������\n");
								printf("1.����\n");
								printf("2.����\n");
								printf("3.�����\n");
								printf("4.�Ա�\n"); 
								printf("5.����\n");
								scanf("%d",&t);
								switch(t)
								{
									case 1:
										{
										  printf("��������Ҫ�޸ĵĿ���\n");
										  scanf("%s",message[s].cardnumber);
										  printf("�޸ĳɹ�\n");
										  break;                                                                                      
										}
									case 2:
										{
											printf("��������Ҫ�޸ĵ�����\n");
											scanf("%s",message[s].name);
											printf("�޸ĳɹ�\n");
											break;
										}
									case 3:
										{
											printf("��������Ҫ�޸ĵķ����\n");
											scanf("%s",message[s].roomnumber);
											printf("�޸ĳɹ�\n");
											break;
										}
									case 4:
										{
											printf("��������Ҫ�޸ĵ��Ա�\n");
											scanf("%s",message[s].gender);
											printf("�޸ĳɹ�\n");
											break;
										}
									case 5:
										{
											printf("��������Ҫ�޸ĵ�����\n");
											scanf("%d",message[s].age);
											printf("�޸ĳɹ�\n");
											break;
										}
								}
								break;//����������ѭ�� 
							}
							 
						 } 
						 break; 
					}
				case 2:
				{
					char v[20];
					int w,x;
					printf("��������Ҫ�޸ĵ�����\n");
					scanf("%s",v);
					for(w=0;w<1000;w++)
					  {
					     if(strcmp(v,message[w].name)==0)
						 {
						 	printf("�޸ĵ�����λ��%d��",w);
						 	printf("��ѡ����Ҫ�޸ĵ���������\n");
						 	printf("1.����\n");
							printf("2.����\n");
							printf("3.�����\n");
							printf("4.�Ա�\n"); 
							printf("5.����\n");
							scanf("%d",&x);
							switch(x)
							{
									case 1:
										{
										  printf("��������Ҫ�޸ĵĿ���\n");
										  scanf("%s",message[w].cardnumber);
										  printf("�޸ĳɹ�\n");
										  break;                                                                                      
										}
									case 2:
										{
											printf("��������Ҫ�޸ĵ�����\n");
											scanf("%s",message[w].name);
											printf("�޸ĳɹ�\n");
											break;
										}
									case 3:
										{
											printf("��������Ҫ�޸ĵķ����\n");
											scanf("%s",message[w].roomnumber);
											printf("�޸ĳɹ�\n");
											break;
										}
									case 4:
										{
											printf("��������Ҫ�޸ĵ��Ա�\n");
											scanf("%s",message[w].gender);
											printf("�޸ĳɹ�\n");
											break;
										}
									case 5:
										{
											printf("��������Ҫ�޸ĵ�����\n");
											scanf("%d",message[w].age);
											printf("�޸ĳɹ�\n");
											break;
							            }
							 }	
					    break;//����forѭ�� 
					  }
				}
				break;//����switch 
			 } 
		      break;//����case 4 
		    }
		    break;
	    }
/*��ԭ����Ϣ���в���¼��*/	 case 5:
		{
			int ac=1,ad;
			FILE *fp;
			fp=fopen("ԭ��������Ա����.txt","a+");//��ԭ�����ı��ļ������޸ĺ�����
			if(fp!=NULL)
		    {
			printf("�ļ��򿪳ɹ�\n");
			for(ad=0;ad<1000;ad++)
			  {
			printf("����������\n");
			scanf("%s",message[ad].name);
			fprintf(fp,"\n%s/",message[ad].name); 
			printf("�����뿨��\n");
			scanf("%s",message[ad].cardnumber);
			fprintf(fp,"%s/",message[ad].cardnumber);
			printf("�����뷿���\n");
			scanf("%s",message[ad].roomnumber);
			fprintf(fp,"%s/",message[ad].roomnumber);
			printf("����������\n");
			scanf("%d",&message[ad].age);
			fprintf(fp,"%d/",&message[ad].age);
			printf("�������Ա�\n");
			scanf("%s",message[ad].gender);
			fprintf(fp,"%S/\n",message[ad].gender);
			printf("�Ƿ��������?\n");
			printf("�����밴1�������밴0\n");
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
		    	printf("�ļ���ʧ��\n");
		    	break;
			}
		}
/*����Ϣ�������*/		case 6:
	{
		printf("ѡ����Ҫ������ļ�����\n");
		printf("1.�½���������Ա����\n");
		printf("2.ԭ�е�������Ա����\n");//����Ա�������������ѡ������switch�� 
		int ae,af,ag,ah,ai,aj;
		scanf("%d",&ae);
		switch(ae)
		{
			case 1:
				{
					printf("���������½�����Ա�������ж�ȡ\n");
					printf("��������Ҫ�������Ա����\n");
					scanf("%d",&aj);
					for(af=0;af<aj;af++)//�ڼ������Ļ�ϴ�ӡ����Ϣ 
					{
						printf("----����----����----�����----�Ա�-----����------\n");
						printf("%d.     %s       %s       %s       %s       %d\n",(af+1),message[af].name,message[af].cardnumber,message[af].roomnumber,message[af].gender,message[af].age);
					 } 
					 break;
				}
			case 2:
			{
				printf("��������ԭ�������ж�ȡ\n");
				FILE *fp;
				fp=fopen("ԭ��������Ա����.txt","r");
				printf("�������������Ա��������\n");
				scanf("%d",&ag);
				for(ah=0;ah<ag;ah++)
				{
					fscanf(fp,"%s",message[ah].name);//��ȡ���ļ������� 
					fscanf(fp,"%s",message[ah].cardnumber);
					fscanf(fp,"%S",message[ah].roomnumber);
					fscanf(fp,"%s",message[ah].gender);
					fscanf(fp,"%d",&message[ah].age);
				}
				for(ai=0;ai<ag;ai++)
				{
					printf("----����----����----�����----�Ա�-----����------\n");
					printf("%d     %s       %s       %s       %s       %d\n",(ai+1),message[ai].name,message[ai].cardnumber,message[ai].roomnumber,message[ai].gender,message[ai].age);
				}
				break;
			 } 
		 } 
	     break;
	} 
	 
/*��������*/              case 7: 
	    {
	    	printf("��������Ҫִ�еĳ���\n");
			printf("ͨ���������˵�������ѡ��\n");
			printf("1.ֱ���˳�(����������(�����½�������)��������ԭ�����޸���ӵ���ֱ������1�˳�������)\n");
			printf("2.�������ݲ��Ƴ����ڳ���������\"�½�������Ա����.txt\"�����鿴��Ա����)\n");
			int y,z,ab;
			scanf("%d",&y);
			switch(y)
			{
				case 1:
					{
						printf("�������Ƴ�����ɹ�\n");//��һ�����ܵĽ��� 
						printf("��л���ʹ����֧��\n");
						goto over;
					}
				case 2:
					{
						printf("��˵�������ӡ�������˵�����\n");
						printf("����������\n");
						scanf("%d",&ab); 
						printf("��ϵͳ���ڱ���������\n");//�����еľ�������Ҫ�Ĳ��־�������ĳɰܣ����� 
						printf("PLEASE WAIT---------------------------\n");
						FILE *fp;//�ļ���ָ��
						fp=fopen("�½�������Ա����.txt","w");//���ļ����������ļ����� 
						for(z=0;z<ab;z++)
						{
							
							fprintf(fp,"%s/%s/%s/%s/%d\n",message[z].name,message[z].cardnumber,message[z].roomnumber,message[z].gender,message[z].age);
						    
						}
						printf("����ɹ���ɳ���\n");
						goto over;//�����Ժ����Ƴ����򣡣��� 
					}
			 } 
			 
  	     }
	}
	  goto moon; 
over: return 0;
 } 
 

